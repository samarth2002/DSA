class Solution {
public:


    void findCombos(vector<int> &A,vector<vector<int>> &ans, vector<int> temp,  int target, int ind)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }

        for(int i = ind ; i < A.size(); i++)
        {
            if(ind<i && A[i]==A[i-1]) continue;
            if(A[i]> target) break;
            temp.push_back(A[i]);
            findCombos(A,ans,temp,target-A[i], i+1);
            temp.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        if(target==0){return ans;}
        findCombos(candidates,ans, temp, target, 0);
        return ans;
    }
};
