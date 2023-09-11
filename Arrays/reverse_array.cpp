
/*
Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.
*/

#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
   
    // 0  1  2  3  4  5   
    // 10 20 30 40 50 60 

    //original aarray is 
    cout<<"before reversla \n";
    for(int i = 0; i< n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    for(int i = 0 ; i < floor((n-1)/2) ; i ++)
    {
        swap(arr[i],arr[n-1-i]);
    }
    cout<<"After reversal\n";

    for(int i = 0; i< n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}
int main(void)
{
    int arr1[] = {8,10,5,7,9};
    int arr2[] = {2,5,1,3,0};
    int n = 5;

    solve(arr1,n); 
     
    return 0;
}