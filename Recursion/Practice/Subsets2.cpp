class Solution {
public:
    void findSubsets(vector<vector<int>> &ans,vector<int> &nums,vector<int> &temp, int ind)
    {
       
            ans.push_back(temp);
            
        
        for(int i = ind; i < nums.size(); i++)
        {
            if(i!=ind && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            findSubsets(ans,nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
    
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        findSubsets(ans,nums,temp,0);
     
     
        return ans;
    }
};
