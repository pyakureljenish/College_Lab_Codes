#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(7);
 rectangle(60,80,150,200);
 rectangle(95,140,120,200);
 line(60,80,100,15);
 line(100,15,150,80);
 circle(100,60,10);
 printf("Name=Jenish Pyakurel Roll_no:106\n");

 getch();
 closegraph();
}