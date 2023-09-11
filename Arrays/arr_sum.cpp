/*
Calculate Sum of the Elements of the Array
Problem Statement: Given an array, we have to find the sum of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11
*/
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
     int sum = 0;
     for(int i = 0; i < n ; i++)
     {
        sum+=arr[i];
     }
     cout<<"Sum of elements in the array is "<<sum<<"\n";
}
int main(void)
{
     int n = 5; 
     int arr1[] = {8,9,5,4,6};
     int arr2[] = {18,90,51,04,16};
     solve(arr1,n);
    return 0;
}