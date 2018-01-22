	#include <stdio.h>
	// #include <iostream>

	#define REP(i,k,n) for (int i = k; i < n; ++i)
	// using namespace std;

	long long int f(long long int n,long long int k){

		long long int a = n/k;
		long long int r = n%k;
		long long int s1= (k-r)*a*(a-1)/2;
		long long int s2=r*a*(a+1)/2;
		return s1+s2;
	}


	int main(){
			
		// 	long long int n,k;
		//     long long int i=0,j;
		// 	cin>>n>>k;
		//     long long int ar[n];

		// 	while(i<n-1){

		// 		ar[i] = i%k;
		// 		i++;
		// 	}
	 // long long int ct=0;

		// 	for(j=0;j<n-1;j++){
		// 		for(k=j+1;k<n;k+=1){

		// 		if(ar[j]==ar[k]){
		// 		ct++;
		// 		}
		// 	}
		// }

		// 	cout<<ct;


		long long int n,k;
		scanf("%lld%lld",&n,&k);
		int arr[k];
		REP(i,0,k)
			arr[i]=0;
		REP(i,1,n+1)
			arr[i%k]+=1;		
		long long int sum=0;
		REP(i,1,k)
			sum+=arr[i]*(arr[i]-1)/2;
		printf("%lld",sum);
		return 0;

	}	