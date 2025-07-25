int climbStairs(int n) {
    vector<int> step(n+1, 0);
    step[0] = 1;
    step[1] = 1;
    for(int i = 2; i<n+1; i++){
        step[i] = step[i-1] + step[i-2];
    }
    return step[n];
}