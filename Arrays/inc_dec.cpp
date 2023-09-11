#include <bits/stdc++.h>
using namespace std;
bool comp( int &a, int &b)
{
    return a>b;
}
void printArray(int arr[],int n)
{
     for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void solve(int arr[],int n)
{
      printArray(arr,n);
      cout<<"\n";
    //  sort(arr+0,arr+((n/2)));
     sort(arr+0,arr+n);
     int temp = 0;
     for(int i = 0; i < n/2 ;i++)
     {
        swap(arr[(n/2)+i],arr[n-1-i]);
     }
     printArray(arr,n);


}
int main(void)
{
     int n = 5; 
     int arr1[] = {8,9,5,4,6};
     int arr2[] = {18,90,51,04,16};
     solve(arr1,n);
    return 0;
}