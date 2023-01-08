#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,sum=0,min;int m;
       cin>>n;
       int v[n];
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       min=v[0];

       for (int i=0;i<n;i++)
       {
           if(min<v[i])
           min=v[i];
       }
       for(int i=0;i<n;i++)
       {     m=v[i]-min;
           sum=sum+m;
       }
       cout<<sum<<"\n";

    }
    return 0;
}