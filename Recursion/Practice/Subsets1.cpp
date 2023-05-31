class Solution {
public:

    void findSubsets(vector<vector<int>> &ans,vector<int> nums,vector<int> temp, int ind)
    {
     
        ans.push_back(temp);
       
        for(int i = ind; i < nums.size(); i++)
        {
            temp.push_back(nums[i]);
            findSubsets(ans,nums,temp,i+1);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        findSubsets(ans,nums,temp,0);
        return ans;

    }
};
