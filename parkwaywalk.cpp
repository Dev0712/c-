#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{int n,m,count=0;
cin>>n>>m;
int k=m;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    if(m>=a[i])
    {m=m-a[i];}
    else
    {count=; m=m+k;}

}
cout<<count<<endl;
}
return 0;

    }
