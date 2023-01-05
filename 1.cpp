#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of array elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        arr[n-1-i]=arr[n-1-i]+arr[i]-(arr[i]=arr[n-1-i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}