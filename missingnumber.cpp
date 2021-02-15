#include<bits/stdc++.h>
using namespace std;
int missing(int arr[], int m) 
{ 	int l(0),r(m-1);
    sort(arr, arr+m);
	for(int i=0;i<=m;i++){
		cout<<arr[i]<<" ";
	} 
	cout<<" \n";
    for(int i=0;i<m-1;i++){
    	if(arr[i+1]!=i+1){
    		cout<<i<<" ";
    		break;
		}
	}
}
int main(){
	int m;
	cin>>m;
	int arr[m];
	int sum(0),count(0);
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sum=m*(m+1)/2;
	
	
	sort(arr,arr+m);
//	for(int i=0;i<m;i++){
//		cout<<arr[i];
//	}
	for(int i=0;i<m-1;i++){
		sum-=arr[i];
	}
	cout<<sum<<" ";
	
}
