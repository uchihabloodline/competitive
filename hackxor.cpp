#include <bits/stdc++.h>
 using namespace std;

 int main(){

 	 long long int n;
 	 int count=0;
 	cin>>n;

 	vector<long int> v;

 			for(int i=0;i<n;i++){

 				int temp;
 				cin>>temp;
 				v.push_back(temp);
 			}

 					sort(v.begin(),v.end());

 					for(int i=0;i<n;i++){

 						if(i==i+1){
 							count+=1;
 						}
 					}
 			cout<<count;
 			return 0;
 }