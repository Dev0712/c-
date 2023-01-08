#include<iostream>?
using namespace std;
#define size 10;

void push(int top,int x,int stack[])
{if(top==size)
cout<<"overflow";
else{

    top=top+1;
stack[top]=x;
}
}
