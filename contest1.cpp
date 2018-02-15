#include<bits/stdc++.h>

using namespace std;

int main(){
	
	set<int> s;
	int i,n,x;
	scanf("%d %d",&n, &x);
   
    for(i=0;i<n;i++){
   
   int t=0;   
      scanf("%d",&t);
      s.insert(t);

    }
   
   int count=0;
      set<int>::iterator it,it1;

      it=s.min(x);                        
      
      if(*it>x){
      printf("%d",count);                 //last
      }
   
  
      if(it<x){

        while(x!=0){
             
            x-=1;                  //1 case
        	//q=x;
        	count+=1;
        	
        }
        printf("%d",count);
        break;
        
      }

       for(it1=s.begin();it1!=s.end();it1++){

       	if(*it1==x){                                                  //2nd case
       		s.erase(*it1);
       	}

       }
   
   return 0;
}