#include<bits/stdc++.h>

using namespace std;

int main(){
	
	 long int n;
	 scanf("%d",&n);
   
   vector<int> v;

	for(int i=0;i<n;i++) {

	 long int temp=0;
	  scanf("%d",&temp);
	  v.push_back(temp);

	 }

	 vector<int>::const_iterator it;

	  it = max_element(std:: begin(v), end(v));

	 printf("%d",(it-n));

   return 0;
}