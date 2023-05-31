class Solution {
public:

    void findPermutations(vector<int> &nums,vector<vector<int>> &ans,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for(int i = ind; i < nums.size(); i++)
        {
            swap(nums[i],nums[ind]);
            findPermutations(nums,ans,ind+1);
            swap(nums[i],nums[ind]);
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        findPermutations(nums,ans,0);
        return ans;
    }
};

class Solution {
public:

    void recurPermute(vector < int > & ds, vector < int > & nums, vector < vector < int >> & ans, int freq[]) {
      if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recurPermute(ds, nums, ans, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }

    vector<vector<int>> permute(vector<int>& nums) {
         vector < vector < int >> ans;
      vector < int > ds;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
      recurPermute(ds, nums, ans, freq);
      return ans;
    }
};
