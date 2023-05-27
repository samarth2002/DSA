#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int> &arr, int l, int r)
{
    if(l>=r) return;
    
    swap(arr[l],arr[r]);
    reverse(arr,++l,--r);
}


int main()
{
    vector<int> arr = {5,4,3,2,1};
    reverse(arr,0,arr.size()-1);
   for(auto i:arr)
    {
        cout << i;
    }
    return 0;
}


