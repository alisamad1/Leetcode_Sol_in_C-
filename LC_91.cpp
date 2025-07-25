int numDecodings(string s) {
    if(s.length()<1){
        return 0;
    }
    if(s[0] == '0'){
        return 0;
    }
    if(s.length() == 1){
        return 1;
    }
    int val_1 = 1;
    int val_2 = 1;
    for(int i = 1; i<s.length(); ++i){
        int d1 = s[i] - '0';
        int d2 = (s[i-1] - '0')*10 + d1;
        int val = 0;
        if(d1 >= 1){
            val += val_2;
        }
        if(d2 >= 10 && d2 <= 26){
            val += val_1;
        }
        val_1 = val_2;
        val_2 = val;
    }
    return val_2;
}