#include<bits/stdc++.h>

using namespace std;

int getPivot(vector<int> &A, int low, int high)
{
    int pvt = A[low];
    int i = low , j = high;
    while(i<j)
    {
        while(A[i]<=pvt && i<high)
        {
            i++;
        }
        while(A[j]>pvt && j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i++],A[j--]);        
        }
    }
    swap(A[low],A[j]);
    return j;
}


void quickSort(vector<int> &A, int low, int high)
{
    if(low>=high){return;}
    int pivot = getPivot(A, low, high);
    quickSort(A, low, pivot-1);
    quickSort(A, pivot+1, high);
}



int main() {

    vector<int> A = {5,4,3,2,1};
    quickSort(A,0,A.size()-1);
    for(auto i:A)
    {
        cout << i;
    }
    
}
