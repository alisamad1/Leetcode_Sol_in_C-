int sum_of_squares(int num){
    int sum = 0;
    while(num){
        int d = num % 10;
        sum += d*d;
        num /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    if(n<=0){
        return false;
    }
    int slow_sum = n;
    int fast_sum = sum_of_squares(n);
    if(slow_sum == 1 || fast_sum == 1){
        return true;
    }
    while(slow_sum != fast_sum){
        slow_sum = sum_of_squares(slow_sum);
        fast_sum = sum_of_squares(sum_of_squares(fast_sum));
        if(slow_sum == 1 || fast_sum == 1){
            return true;
        }
    }
    return false;
}