  
  #include<iostream>
  #include<deque>
using namespace std;  
  
  int main()
  {int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n;
    int a[n];
    for (int i=0;i<(n-1);i++)
    {
       cin>>a[i];
    }


int findOdd (int arr[], int n)
   {
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
    }
x=findOdd(a,n);
 cout<<x;
  }
  
       return 0;
  }