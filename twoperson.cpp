#include<bits/stdc++.h>
using namespace std;
int ismeet(int d1,int d2,int v1,int v2){
	if(d1 > d2 && v1 > v2) {
            cout<<"They will never meet"<<"\n";
            
		}
    if (d2 > d1 && v2 > v1) {
            cout<<"They will never meet"<<"\n";
            return false;
        }
    else{
		int d=abs(d1-d2);
		//cout<<d<<" ";
		int v=abs(v1-v2);
	
		if(d%v==0){
			cout<<"They will meet"<<"\n";
			}
			else{
				cout<<"Will not meet";	
				}
			}
	}
	// in this we neeed to check whether they meet ata apoint or not if meet at a point then true otherwise in all othercase false even in the case of crossing eaxhing other

 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int d1,d2;
 		cin>>d1>>d2;
 		int v1,v2;
 		cin>>v1>>v2;
 		ismeet(d1,d2,v1,v2);
 		
	 }
 }
