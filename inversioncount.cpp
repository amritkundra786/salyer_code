#include <bits/stdc++.h>
using namespace std;

int cc(int arr[], int m)
{
	int count(0);
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (arr[i] > arr[j])
				count++;

	cout<<count;
}


int main()
{
	int m;
	cin>>m;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	
	cc(arr,m);
}


