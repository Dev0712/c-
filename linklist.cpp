//exp 5linklist

#include<iostream>
using namespace std;

struct node
{
    int info;
    node *link;

}start;

node create()
{int val;
    cout<<"enter the val";
    cin>>val;
    node *temp= new node;
    temp->info=val;
    temp->link=NULL;
    return *temp;

}

