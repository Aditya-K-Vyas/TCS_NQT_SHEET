

#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
     for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<'  ';
    }
}
void solve(int arr[],int n)
{
    unordered_map<int,int>mapp;

    for(int i =0; i < n ; i++)
    {
        mapp[arr[i]]++;
    }

    for(auto x:mapp)
    {
        cout<<x.first<<"  "<<x.second<<" \t";
    }
        
}
int main(void)
{
     int n = 5; 
     int arr1[] = {8,9,5,4,6};
     int arr2 []= {18,90,51,04,16};
     solve(arr1,n);
    return 0;
}