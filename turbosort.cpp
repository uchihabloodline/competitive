#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	
   int t,i;
   scanf("%d",&t);
   
   vector<int> v;

     for(i=0;i<t;++i){
 
      	 int temp=0;
    	 scanf("%d",&temp);
    	 v.push_back(temp);

   }	

	stable_sort(v.begin(),v.end());
	vector<int> correct;
   for(i=0; i < v.size(); i++) {

	if(!(i!=0 && v[i-1]==v[i]))
	correct.push_back(v[i]);

   }

   cout<<"\n";

   for(i=0; i < correct.size(); i++) {
		printf("%d", correct[i]);
		if(correct.size()-i != 1)printf("\n");
	}
	printf("\n");

	 return 0;
}