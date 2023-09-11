/*
    Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples
Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/


#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
    int max_ele = arr[0];
    int min_ele = arr[0];
    int i = 0;
    for(i = 0; i < n ; i++)
    {
        if(arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
        if(arr[i] < min_ele)
        {
            min_ele = arr[i];
        }
    }
    int s_max_ele = arr[0];
    int s_min_ele = arr[0];
    for(i =0 ; i < n ; i++)
    {
        if(arr[i] > s_max_ele && arr[i]<max_ele )
        {
            s_max_ele = arr[i];
        }
        if(arr[i] < s_min_ele && arr[i]>min_ele)
        {
            s_min_ele = arr[i];
        }
    }
    cout<<" Second Max ele is  "<<s_max_ele<<endl;
    cout<<" Second Min ele is  "<<s_min_ele<<endl;

    
}
int main(void)
{
    int arr1[] = {8,10,5,7,9};
    int arr2[] = {2,5,1,3,0};
    int n = 5;

    solve(arr1,n); 
     
    return 0;
}
