#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int maxSum=0;
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0) sum=0;
        else maxSum=max(maxSum,sum);
    }
    return maxSum;
}