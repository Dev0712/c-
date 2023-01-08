//program for linear search


#include<iostream>
using namespace std;

int main()
{int s,f;
cout<<"enter a size of array";
cin>>s;
   int arr[s];
   cout<<"enter array elements";
   for(int i=0;i<s;i++)
{cin>>arr[i];
}
int val;
cout<<"enter value that you want to search";
cin>>val;
for(int i=0;i<s;i++)
{
    if(arr[i]==val)
    f=1;
}
if(f==1)
cout<<"value is found";
else
cout<<"value is not found";
return 0;
};
