#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n,i,j,k;
	while(t>0){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>k;
	        a[i]=k;
	    }
	    int cs=0,ms=INT_MIN;
	    for(i=0;i<n;i++){
	        cs +=a[i];
	        /*if(cs<0){
	            cs=0;
	        }*/
	        if(cs>ms){
	            ms=cs;
	        }
	        if(cs<0){
	            cs=0;
	        }
	        
	    }
	    cout<<ms<<endl;
	    t--;
	}
	return 0;
}