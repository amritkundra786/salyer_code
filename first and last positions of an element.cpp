#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int arr[m];
	int mn(INT_MAX),mx(0);
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		if(arr[i]==n){
			int x=i;
			mn=min(x,mn);
			mx=max(mx,i);
		}
		
	}
	cout<<"min index: "<<mn+1<<"\n"<<"max index: "<<mx+1<<"\n";
}
