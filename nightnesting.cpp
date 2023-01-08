
#include<iostream>
using namespace std;

int main()
{
    int num,k,count=0,fast=0;
    cin>>num>>k;
    while(count<num){
count++;
if((count%k==0) && (!(count%(k*k)==0))){
    
    fast++;
}
    }
cout<<fast;
return 0;

}