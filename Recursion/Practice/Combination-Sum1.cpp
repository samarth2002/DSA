class Solution {
public:

    void findCombos(vector<int> &A,vector<int> &temp,vector<vector<int>>& ans,int ind , int target)
    {
        if(ind==A.size())
        {
            if(target==0)ans.push_back(temp);
            
            return;
        }
        if(A[ind] <= target)
        {
            temp.push_back(A[ind]);
            findCombos(A, temp, ans, ind, target-A[ind]);
            temp.pop_back();
        }
        findCombos(A,temp,ans,ind+1,target);
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(target==0){return ans;}
        findCombos(candidates,temp,ans,0,target);
        return ans;
    }
};
