#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;

	for(int i=0;i<t;i++){
         

		string s = '\0';
		getline(cin,s);
           
           if(s[0] == isupper()){
           	s.toupper();
           }

           cout<<s;
	}
}