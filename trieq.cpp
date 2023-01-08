#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,c=0,d[6],s;
   cin>>t;
   while(t--)
   { cin>>n;
      while(n--)
      {
         for(int i=0;i<6;i++)
         {
            d[i]=n%10;
            n=n/10;
            if(d[i]>0)
            d[i]=1;
            else 
            d[i]=0;
         }
         for(int i=0;i<6;i++)
         {
            s +=d[i];
         }
         if(s==1)
         c++;
         }
         cout<<c<<"/n";
      }

   }

