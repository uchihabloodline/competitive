#include <iostream>
#include <vector> 
#include <stdio.h>
using namespace std;

int main(){

		long int n,temp=0;
		scanf("%ld",&n);  //how many elements

		int ar[n];   //array of size of n

			for(int i=0;i<n;i++){    // enter the elements
				scanf("%d",&ar[i]);
			}

			for(int i=0;i<n-1;i++){                       //slection sort starts

				for(int j=i+1;j<n;j++){

					if(ar[i]>ar[j]){

						temp=ar[i];
						ar[i]=ar[j];
						ar[j]=temp;
					}
				}
			}

			for(int i=0;i<n;i++){                   //printing sorted array
				printf("%d" "",ar[i]);
			}
		return 0;
}
