#include<stdio.h>
#include<graphics.h>
#include<math.h> 
#include<conio.h>
#include<dos.h>

float round(float a); 

void main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,steps,k; 

    float xincr,yincr,x,y,dx,dy; 

    printf("enter x1,y1\n"); 
    scanf("%d %d",&x1,&y1); 

    printf("enter x2,y2\n"); 
    scanf("%d %d",&x2,&y2);

    initgraph(&gd,&gm,"c:\\turboc3\\BGI");
    dy=y2-y1;
    dx=x2-x1;

    if(abs(dx)>abs(dy))
        steps=abs(dx); 
    else
        steps=abs(dy);

    xincr=dx/(float)steps; 
    yincr=dy/(float)steps; 
    x=x1;
    y=y1;

    for(k=1;k<=steps;k++)
    {
        delay(100);
        y+=yincr;
        x+=xincr;
        putpixel(round(x),round(y),WHITE);
    }
    outtextxy(200,20,"DDA"); 
    outtextxy(x1+5,y1-5,"(x1,y1)");
    outtextxy(x2+5,y2+5,"(x2,y2)");
    printf("Name=Jenish Pyakurel\nRoll_no:106");
    getch();
    closegraph(); 
}

float round(float a)
{
    int b=a+0.5;
    return b;
}
