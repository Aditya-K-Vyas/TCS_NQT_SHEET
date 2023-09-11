/*
Find the Largest element in an array
Problem Statement: Given an array, we have to find the largest element in the array.

Examples
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array.
*/


#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
    int max_ele = arr[0];
    int i = 0;
    for(i = 0; i < n ; i++)
    {
        if(arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
    }
    cout<<"Max ele is "<<max_ele<<"\n";
}
int main(void)
{
    int arr1[] = {8,10,5,7,9};
    int arr2[] = {2,5,1,3,0};
    int n = 5;

    solve(arr1,n); 
     
    return 0;
}