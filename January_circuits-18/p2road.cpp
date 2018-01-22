#include <algorithm>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
		long int n,k;
		scanf("%ld%ld",&n,&k);
		long int ar[n];
		long int s = sizeof(ar)/sizeof(ar[0]);

		for(int i=0;i<n;i++){

			scanf("%ld",&ar[i]);
		}
		int ct=0;
		int prev=-1,next=-1;
		sort(ar,ar+s);
			for(int i=0;i<n-1;i++){
				if(abs(ar[i]-ar[i+1]) <= k){
					if(abs(ar[i]-ar[i+1]))
					ct++;
					if(prev==-1)
						prev=ar[i];
					next=ar[i+1];
					k-=abs(prev-next);
				}
			}
			if(ct!=0)
				ct++;
			printf("%d",ct);
return 0;

}