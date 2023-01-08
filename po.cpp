#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
   {int n;
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++)
   {cin>>a[i];

   }
   for(int i=0;i<n-1;i++)
   {if(a[i]!=i+1)
   b[i]=i+1;
   else 
   b[i]=i+2;

   }
   for(int i=0;i<n-1;i++)
   {
       cout<<b[i];
   }
   


        }
    
    return 0;
}

 	 	    				         			 		 	 	
