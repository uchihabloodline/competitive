#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;

    int t;
    scanf("%d",&t);

     for(int i=0;i<t;i++){

        	int temp=0;
        	scanf("%d",&temp);
     	    v.push_back(temp);
     }

     set<int> s;

        for(int i=0;i<v.size();i++){

        	s.insert(v[i]);
        }

     set<int>::iterator iter;

      for(iter=s.begin(); iter!=s.end();++iter){

        	printf("%d\n",*iter);
     }

    return 0;
}