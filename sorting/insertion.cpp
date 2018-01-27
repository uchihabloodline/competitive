#include <bits/stdc++.h>

using namespace std;

void sswap(int val1, int val2) {
	int tmp = val1;
	val1 = val2;
	val2 = tmp;
}

void sprint(int list[],int size){
	for(int i=0;i<size;i++){
		cout<<list[i]<<" ";
	}
}

int main(){
	
		int n,i,j;
		cin>>n;
		int a[n];

			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			}

				for(i=0;i<n;i++){
					for(j=i;j<n;j++){
						if(a[i]>a[j]){
								swap(a[i],a[j]);
						}
					}
				}

				sprint(a,n);
				return 0;
}

