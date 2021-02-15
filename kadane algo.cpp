#include<bits/stdc++.h>
using namespace std; 
  
int kadane(int arr[], int m) 
{ 
    int temp(INT_MIN),count(0); 
    for (int i=0;i<m;i++) 
    { 
        count +=arr[i]; 
        if (temp < count){
            temp = count; 
        }
        if (count < 0){
            count = 0; 
        }
    } 
    return temp; 
} 
  
int main() 
{ 
   int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	cout<<kadane(arr,m)<<" ";
} 

