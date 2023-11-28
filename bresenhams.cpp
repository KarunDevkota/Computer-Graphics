#include<stdio.h>
#include<graphics.h>
int main()
{
int x,y,x1,y1,x2,y2,p,dx,dy;
int gd= DETECT,gm;
initgraph (&gd,&gm,"C:\\TurboC3\\BGI");
printf("\n Enter the x-coordnates of the first point:");
scanf("%d%d",&x1,&x2);
printf("\n Enter the y-coordinates of the second point:");
scanf("%d%d",&y1,&y2);
6 | P a g e
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
putpixel(x,y,2);
p=(2*dy-dx);
while (x<=x2)
{
if(p<0)
{
x=x+1;
p=p+2*dy;
}
else
{
x=x+1;
y=y+1;
p=p+(2*dy)-2*dx;
}
putpixel(x,y,7);
}
getch();
closegraph();
}
