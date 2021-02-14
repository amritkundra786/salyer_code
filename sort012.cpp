#include<bits/stdc++.h>
using namespace std;
int sort0123(int arr[],int m){
		int l(0),r(m-1),mid(0);
        while(mid <= r) {
            if(arr[mid] == 0) {
                int temp = arr[l];
                arr[l] = arr[mid];
                arr[mid] = temp;
                l++;
                mid++;
            } else if(arr[mid] == 1) {
                mid++;
            } else {
                int temp = arr[mid];
                arr[mid] = arr[r];
                arr[r] = temp;
                r--;
            }
        }
    for(int i=0;i<m;i++){
		cout<<arr[i]<<" ";
	}
	
}
 int main(){
 	int m;
 	cin>>m;
 	int arr[m];
 	int count=0;
 	for(int i=0;i<m;i++){
 		cin>>arr[i];
	 }
	//int n=m-count;
	sort0123(arr,m);
 }
