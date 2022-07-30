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
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < (n - counter); i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}