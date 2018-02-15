#include<bits/stdc++.h>

using namespace std;

int main()
{
	int  n;
	vector<int> v;
	//printf("%d",sizeof(long long));
   	scanf("%d",&n);
	   
	     for(int i=1;i<=n;i++){
	    	
	    	int temp=0;
         // cin>>temp;
	    	scanf("%d",&temp);
           v.push_back(temp);
	  }
	  
       vector<int> q;
	  for(int i=0;i<v.size();i++){

	   	   long long unsigned fact = 1;
	    	  int j=1;

	  	  while(j <= v.at(i)){

	  	  	fact *= j;

	  	  	j++;
	  	  }

	  	  printf("%llu\n",fact);
	  }

	  return 0;
}