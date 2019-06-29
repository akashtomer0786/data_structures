class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mep;
        int zero = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zero++;
            else zero--;
            if(zero==0)ans=i+1;
            if(mep.count(zero)!=0)
                ans = max(ans,i-mep[zero]);
            else mep[zero]=i;
        }
        return ans;
    }
};
