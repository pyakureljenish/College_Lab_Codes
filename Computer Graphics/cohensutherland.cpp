#include<stdio.h>
#include<conio.h>
#include<graphics.h>

#define INSIDE 0
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

#define xmin 100
#define ymin 100
#define xmax 300
#define ymax 200

#define true 1
#define false 0

int computeCode(int x, int y) {
    int code = INSIDE;

    if (x < xmin)
        code |= LEFT;
    else if (x > xmax)
        code |= RIGHT;
    if (y < ymin)
        code |= BOTTOM;
    else if (y > ymax)
        code |= TOP;

    return code;
}

void cohenSutherland(int x1, int y1, int x2, int y2) {
    int code1, code2, code;
    int x, y;
    int accept = false, done = false;
    int clipped_x1 = x1, clipped_y1 = y1, clipped_x2 = x2, clipped_y2 = y2;

    code1 = computeCode(x1, y1);
    code2 = computeCode(x2, y2);

    do {
        if (!(code1 | code2)) {
            accept = true;
            done = true;
        } else if (code1 & code2) {
            done = true;
        } else {
            int code_out = code1 ? code1 : code2;

            if (code_out & TOP) {
                x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
                y = ymax;
            } else if (code_out & BOTTOM) {
                x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
                y = ymin;
            } else if (code_out & RIGHT) {
                y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
                x = xmax;
            } else {
                y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
                x = xmin;
            }

            if (code_out == code1) {
                clipped_x1 = x;
                clipped_y1 = y;
                code1 = computeCode(clipped_x1, clipped_y1);
            } else {
                clipped_x2 = x;
                clipped_y2 = y;
                code2 = computeCode(clipped_x2, clipped_y2);
            }
        }
    } while (!done);

    if (accept) {
        setcolor(RED);
        rectangle(xmin, ymin, xmax, ymax);
        setcolor(GREEN);
        line(clipped_x1, clipped_y1, clipped_x2, clipped_y2);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x1, y1, x2, y2;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    cohenSutherland(x1, y1, x2, y2);

     
    outtextxy(100,200, "minx");
    outtextxy(300, 200, "miny");
	outtextxy(200,100, "maxx");
    outtextxy(200, 300, "maxy");outtextxy(100,200, "minx");
    outtextxy(300, 200, "miny");
	outtextxy(200,100, "maxx");
    outtextxy(200, 300, "maxy");

    printf("Name=Jenish Pyakurel Roll_no:106\n");

    getch();
    closegraph();
    return 0;
}
