#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements in the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}