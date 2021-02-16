#include<bits/stdc++.h>
using namespace std;
int ksmall(int arr[],int m, int k){
	int temp;
	for(int i=0;i<m;i++){
		for(int j=i;j<m;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int m,k;
	cin>>m>>k;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	
	ksmall(arr,m,k);
}
