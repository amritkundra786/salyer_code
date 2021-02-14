#include<bits/stdc++.h>
using namespace std;
int trap(int arr[], int m)
{
    int sum(0),r(INT_MIN);;
    int brr[m-1];
    brr[0] = INT_MIN;
    for (int i = 1; i < m - 1; i++)  {
        brr[i] = max(brr[i-1], arr[i-1]);
    }
    for (int i = m - 2; i >= 1; i--)
    {
        r = max(r,arr[i+1]);
 
        
        if (min(brr[i], r) >arr[i]) {
            sum += min(brr[i], r) -arr[i];
        }
    }
 
    return sum;
}
int main(){
 	int m;
 	cin>>m;
 	int arr[m];
 	for(int i=0;i<m;i++){
 		cin>>arr[i];
	 }
	 cout<<trap(arr,m)<<" ";
	 
 	
 }
