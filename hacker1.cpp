#include <bits/stdc++.h>
 using namespace std;

 int main(){

   unsigned long int t1,t2;
   int i;

    cin>>t1;

    vector<int> v1(t1);                  //for 1st player 

       for(i=0;i<v1.size();i++){

         int temp=0;
         scanf("%d",&temp);
         v1.push_back(temp);

       }

       cin>>t2;

          vector<int> v2;                  //for second player
          int mx=INT_MIN;
           for(i=0;i<t2;i++){
            int tem=0;
         scanf("%d",&tem);
         if(tem>mx)
         	mx = tem;
         v2.push_back(tem);

           }
 				
 		/*		 for(i=0;i<t2;i++){
 				 printf("%d", v2[i]);
 				 }           
*/
           unsigned long long d = 0;

          // for(i=0;i<v1.size();i++){
          //  	 for(i=0;i<v2.size();i++){

          //  	 	if(v1[i] < v2[i]){
          //  	 		int c;
          //  	 		c = v2[i] - v1[i];

          //  	 		d += c+1;

          //  	 	}
          //  	 }
          //  }


           for(int i=0;i<v1.size();i++){
           		if(v1[i]<=mx){
           			int c = mx - v1[i] + 1;
           			d+=c;
           		}
           }

     /*for(vector<int>::iterator it1=v1.begin(); it1 != v1.end(); it1++){

        // vector<int>::iterator it1=v1.begin();
     	for(vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++,it1++){
     		// unsigned temp;
     		// if(it1 == v1.end())
     		// 	temp = 0;
     		// else 
     		// 	temp = *it1;
     		if(temp < *it2){
                // unsigned int c;
                // c = *it2 - temp;
                printf("%d\n",c+1);
                d += c+1;     			
     		}
     	}
     // }     
      */  
           //d=d+1;
          cout<<d;

     return 0;
 }