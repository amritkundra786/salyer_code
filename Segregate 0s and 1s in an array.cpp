#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int m;
 	cin>>m;
 	int arr[m];
 	int count=0;
 	for(int i=0;i<m;i++){
 		cin>>arr[i];
 		if(arr[i]==0){
 			count++;
		 }
	 }
	int n=m-count;
	for(int i=0;i<count;i++){
		cout<<0<<" ";
	}
	for(int i=0;i<n;i++){
		cout<<1<<" ";
	}
 }
