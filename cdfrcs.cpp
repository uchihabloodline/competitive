#include <bits/stdc++.h>
using namespace std;

int main(){

		int q,i,j;
		long int a[1000000];
		cin>>q;
		vector<int> vn(q);
		vector<int> vk(q);
		//vector<int> save(q);


				for(i=1;i<=q;i++){

					int n,k;
					scanf("%d %d",&n,&k);
					vn.push_back(n);
					vk.push_back(k);	
				}

				for(i=1;i<=q;i++){
					
					int c1=1,ct=0;
					if(vk[i]==1 && vn[i]>0){
							
						vn[i]-=c1;
						c1++;
						a[i]=ct;
						//save.push_back(ct);
						if(vn[i]<c1)
							break;
					}
					if(vk[i]==2 && vn[i]>0){
						vn[i]-=pow(c1,2);
						c1++;
						ct++;
							a[i]=ct;
						//save.push_back(i);
						if(vn[i]<c1)
							break;
					}
					if(vk[i]==3 && vn[i]>0){
						vn[i]-=pow(c1,3);
						c1++;
						ct++;
							a[i]=ct;
						//save.push_back(i);
						if(vn[i]<c1)
							break;
					}

					else{

						return 0 ;
					}

				}

				for(i=1;i<=q;i++){
					printf("%d",a[i]);
				}

	return 0;	
	}