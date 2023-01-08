
#include<bits/stdc++.h>
using namespace std;                                                                                              
int main()
{
    vector <int> a;int n,e,sum1,sum2;
    cin>>n;
    while(n)
    {
    n--;
    for(int j=0;j<5;j++)
    { cin>>e;
    a.push_back(e);
    }
    for(int j=0;j<5;j++)
    {if(j<3)

       sum1=sum1+a.at(j);
    
    else
    sum2=sum2+a.at(j);
    }
    if(sum1=sum2)
    cout<<"yes";
    else
    cout<<"no";

}
    return(0);
}
