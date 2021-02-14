#include<bits/stdc++.h>
using namespace std;
int platform(float arr[],float brr[],int m){
	sort(arr,arr+m);
	sort(brr,brr+m);
	int count(1),temp(1),i(1),j(0);
	while (i < m && j < m) {
        if (arr[i] <=brr[j]) {
            count++;
            i++;
        }
        else if (arr[i] > brr[j]) {
            count--;
            j++;
        }
        if (count > temp){
            temp = count;
        }
    }
	cout<<temp;
}
int main(){
	int m;
	cin>>m;
	float arr[m],brr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	for(int i=0;i<m;i++){
		cin>>brr[i];
	}
	platform(arr,brr,m);
	
}
