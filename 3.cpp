#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
cout << "enter the number of array elements" << endl;
cin >> n;
int arr[n];
cout << "enter the array" << endl;

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
cout << "enter the value of k" << endl;
cin>>k;
// sorting
for (int j = 0; j <k; j++){
  for (int i = j+1; i <n; i++)
 { if(arr[j]>arr[i]) swap(arr[i],arr[j]);
   
 }    }

cout<<"k'th smallest element is:" << arr[k-1]<<endl;
    return 0;
}