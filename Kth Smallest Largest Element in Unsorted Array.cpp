#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
 
  
    return arr[k - 1];
    return arr[n-1-k];
}

 

int main()
{
    int m,k;
	cin>>m>>k;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
    cout << "K'th smallest element is " << kthSmallest(arr,m, k);
    cout<<"\n";
	cout << "K'th largest element is " << kthlargest(arr,m, k);
    
	return 0;
}
