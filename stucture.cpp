#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[34];
    int marks[5];
    int mobno;
    char email[45];

};
int main()
{
student s1,s2;

cout<<"enter roll no of student\n";
cin>>s1.rollno;
cout<<"enter name of student\n";
gets(s1.name);
cout<<"enter marks in 5 subjects\n";
for( int i=0;i<5;i++)
{
    cin>>s1.marks[i];
}
cout<<"mob no of student\n";
cin>>s1.mobno;
cout<<"enter email id of student\n";
gets(s1.email);
cout<<s1.rollno<<"\n";
puts(s1.name);
for(int i=0;i<5;i++)
{
cout<<s1.marks[i]<<"\n";
}
cout<<s1.mobno;
puts(s1.email);
return 0;
}