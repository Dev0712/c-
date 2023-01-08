#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s; int d=10;
    printf("set data : ");
    scanf("%d%d%d",&h,&m,&s);
     if(h>12||m>60||s>60)
     {
        printf(" error !!");
        exit(0);
     }
     while(1)
     { s++;
        if(s>59)
        {m++; s=0;
        }
        if(m>59){
        h++; m=0;
        }
        if(h>11){
        h=1;
        }

        printf("\n clock :");
        printf( "\n %d:%d:%d",h,m,s);
        Sleep(d);
        system("cls");


     }
}