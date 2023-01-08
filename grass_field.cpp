  
 #include<iostream>
using namespace std;  
  int main()
  {int t;
  cin>>t;
  while(t--)
  {int a,b,c,d;int sum=0;
  cin>>a>>b;
  cin>>c>>d;
  sum=a+b+c+d;
  if(sum==4)
  {
    cout<<"2"<<endl;
  }
  else if(sum==1 || sum==2 ||sum==3 )
  {
    cout<<"1"<<endl;
  }
  else cout<<"0"<<endl;

  }
  
    return 0;
  } 
