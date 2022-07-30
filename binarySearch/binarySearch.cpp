
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int key)
{
    int start = 0;
    int end = 9;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a[10] = {3, 12, 21, 32, 45, 52, 59, 67, 87, 99};
    int k;
    cout << "Enter value to be search: ";
    cin >> k;
    cout << binarySearch(a, k) << endl;
    return 0;
}
