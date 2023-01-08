
#include<bits/stdc++.h>

using namespace std;
class student
{
    private:
    int rollno,i;
    char name[28];
    int marks[6];
    public:
   void getdata(int r,int m[6],char n[34])
    {
      rollno=r;
        strcpy(n,name);
        for(i=0;i<6;i++)
        {
             marks[i]=m[i];
        }
    }
    void showdata()
    {
        cout<<"roll no of student is:\n";
        cout<<rollno;
        cout<<"name of student is:\n";
        cout<<name;
        cout<<"marks of student in various subjecys ia:\n";
        for(i=0;i<6;i++)
        {

        cout<<marks[i]<<"\n";
        }
        cout<<"percentage of student is:\n";
        cout<<percentage();


    }
     int percentage()
     {
         int sum=0,per;
         for(i=0;i<6;i++)
         {
             sum+=marks[i];

         }
         per=sum/6;
         return per;

     }
     int writedata();
     void readdata();

};

int student::writedata()
{
    ofstream f;
    f.open("student.txt",ios::out|ios::app);
    f.write((char*)this,sizeof(*this));
    f.close();
    return 1;
}

int main()
{student s1;int a,b[6];char name[34];int x;
cout<<"enter roll no of student\n";
cin>>a;
cout<<"enter name of student\n";

gets (name);
cout<<"enter marks in 6 subjects";
for(int i=0;i<6;i++)
{cin>>b[i];
}
s1.getdata(a,b,name);
s1.percentage();
x=s1.writedata();
if(x==1)
{cout<<"containt is written in file\n";}

    s1.showdata();
    return 0;


}
