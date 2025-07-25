int firstBadVersion(int n) {
    int s = 1, e = n;
    while(s<e){
        int mid = s+(e-s)/2;
        if(isBadVersion(mid)){
            e=mid;
        }
        else{
            s = mid+1;
        }
    }
    return s;
}