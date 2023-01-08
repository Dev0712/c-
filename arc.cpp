#include <graphics.h>
using namespace std;

int main()
{
int gd = DETECT;int gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

putpixel(25,25,RED);
getch();
closegraph();
}
