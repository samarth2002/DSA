#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int> &arr, int i = 0)
{
    if (i <= arr.size() / 2)
        return;

    swap(arr[i], arr[arr.size() - i - 1]);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    reverse(arr);
    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}
