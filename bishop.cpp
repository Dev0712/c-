#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,k,n,e;
 vector<int> p;
 vector<int> h;
 cin>>t;
 while(t--)
 {
  cin>>n>>k;
  for(auto i=0;i<n;i++)
  {
  cin>>e;
  p.push_back(e);
  }

   for(auto i=0;i<n;i++)
   {
    cin>>e;
  h.push_back(e);
   }
   if(k>0){
while(k>0)
{int min,sum;
    
for(auto i=0;i<n;i++)
   {
    h[i]=h[i]-k;   
    if(h[i]==0)
    {
        p.erase(p.begin()+i);
    }
   }


   for(auto i=0;i<n;i++)
   { min=p[i];
    if(p[i<min])  
   min=p[i];
   }
   k=k-min;
      for(auto i=0;i<n;i++)
{
sum=sum+h[i];
}
if(sum==0)
cout<<"yes";

}
   }
   else{
    cout<<"no";
   }
 
 }
 return 0;
}