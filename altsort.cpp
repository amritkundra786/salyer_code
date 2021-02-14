#include<bits/stdc++.h>
using namespace std;
int sortalt(int arr[], int m) 
{ 	int l(0),r(m-1);
    sort(arr, arr+m); 
    while (l < r) { 
        cout<<arr[r--]<<" "; 
        cout<<arr[l++]<<" "; 
    } 
  
    if (m%2!= 0) {
        cout<<arr[l]; 
	}
}
int main(){
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	sortalt(arr,m);
	
}
