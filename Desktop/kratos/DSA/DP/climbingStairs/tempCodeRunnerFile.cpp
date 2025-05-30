 int n = cost.size();
    int curr , prev = 0, prev2 = 0;

    for(int i=2;i<n;i++){
        curr = min(cost[i-1]+prev,cost[i-1]+prev2);
        prev2 = prev;
        prev = curr;
    }
    return curr;