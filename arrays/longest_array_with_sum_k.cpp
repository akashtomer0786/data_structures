int solve(int k,vector<int> nums){
    unordered_map <int,int> mep;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==k)ans = i+1;
        else if(mep.count(sum)!=0)
            ans = max(ans,i-mep[sum]);
        else mep[sum]=i;
    }
    return ans;
}
