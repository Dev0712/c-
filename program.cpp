#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum1=0,sum2=0,n;int a[n];
    cin>>n;
    while(n)
    {n--;
        cin>>a[n];
        while(a[n])
        {
            for(int i=0;i<3;i++)
            {
                sum1=sum1+a[n]%10;
                a[n]=a[n]/10;
            }
            for(int i=3;i<6;i++)
            {
                sum2=sum2+a[n]%10;
               a[n]=a[n]/10;
            }
        }
    
if(sum1==sum2)
{
    cout<<"yes\n";
}
else
{ cout<<"NO \n";}
    }
    return 0;
}