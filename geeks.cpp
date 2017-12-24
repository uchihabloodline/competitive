#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
	    int a=0;
	    scanf("%d",&a);
	    
	    vector<int> v(a);
	    for(int i=0;i<a; i++){
	        
	        int temp=0;
	        scanf("%d",&temp);
	        v.push_back(temp);
	        
	    }
	    
	  // vector<int> v1;
	    int count=0;
	    for(vector<int>::iterator it = v.begin();it != v.end(); it++){
	        if(*it==1 || *it==2 || *it==3){
	            count+=1;
	        }
	    }

	    if(count == 3){
	    	cout<<"1 2 3";
	    }
	    else{
	    	cout<<"-1";
	    }
	}
	return 0;
}