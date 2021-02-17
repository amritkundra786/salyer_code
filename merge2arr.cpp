#include<bits/stdc++.h>
using namespace std;

int m2a(int arr[],int m, int brr[],int n) 
{
	map<int,bool> mm;
	for(int i = 0; i < m; i++)
	mm[arr[i]] = true;
	for(int j = 0;j < n;j++)
	mm[brr[j]] = true;
	for(auto k: mm)
	cout<< k.first <<" ";
}
 
int main()
{ 
	int m,n;
	cin>>m>>n;
	int arr[m],brr[n];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cin>>brr[j];
	}
	m2a(arr,m,brr,n);
}
