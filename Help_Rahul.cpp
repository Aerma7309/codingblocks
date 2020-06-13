#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] > arr[i] and key < arr[mid] and key >= arr[i])
            j = mid - 1;
        else //if(arr[mid] < arr[j] and key > arr[mid] and key <= arr[j])
            i = mid + 1;
    }

    return 0;
}
