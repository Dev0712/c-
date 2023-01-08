#include<iostream>
using namespace std;
void linearsearch(int arr[])
{int item;
    cout<<"enter element that you want tosearch";
    cin>>item;
    for(int i=0;i<10;i++)
    {if(arr[i]==item)
    {
        cout<<"element is found ";
        cout<<arr[i];

    }
    }

 cout<<"elment is not found";
    

}
void binarysearch(int arr[10])
{int item,lb=1,ub=10,mid;


    cout<<"enter element tht you want to search";
    cin>>item;
    while(lb<=ub)
    {
        mid=lb+ub/2;
        if(arr[mid]==item)
        {cout<<"data is found";
        }
        else if (arr[mid]>item)
        {
           ub=mid-1;
        }
        else
        lb=mid+1;
    }cout<<"data is noy found";

}
int main()
{
    int arr[10];
    cout<<"enter elemenrs in array";
    for (int i=0;i<10;i++)
    {
       cin>>arr[i];

    }
    //linearsearch(arr);
    binarysearch(arr);
    return 0;

}