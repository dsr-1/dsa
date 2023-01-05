#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
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
int max=arr[0],min=arr[0];
  for (int i = 0; i <n; i++)
 {
    if(arr[i]>max) (max=arr[i]);
    else if(arr[i]<min) min=arr[i]; //.........tc=O(n);
 }    
cout <<"max="<<max<<endl;
cout <<"min="<<min<<endl;
    return 0;
}