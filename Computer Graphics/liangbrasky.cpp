#include <stdio.h>
#include <conio.h>
#include <graphics.h>

#define true 1
#define false 0

#define xmin 100
#define ymin 100
#define xmax 300
#define ymax 200

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

void liangBarsky(int x1, int y1, int x2, int y2) {
    float t1 = 0, t2 = 1;
    int dx = x2 - x1, dy = y2 - y1;

    float p[4] = {-dx, dx, -dy, dy};
    float q[4] = {x1 - xmin, xmax - x1, y1 - ymin, ymax - y1};

    for (int i = 0; i < 4; i++) {
        if (p[i] == 0 && q[i] < 0) {
            printf("Line completely outside the clipping window\n");
            return;
        }

        float t = q[i] / p[i];
        if (p[i] < 0 && t > t1)
            t1 = t;
        else if (p[i] > 0 && t < t2)
            t2 = t;
    }

    if (t1 < t2) {
        int x1_clip = x1 + t1 * dx;
        int y1_clip = y1 + t1 * dy;
        int x2_clip = x1 + t2 * dx;
        int y2_clip = y1 + t2 * dy;

        setcolor(RED);
        rectangle(xmin, ymin, xmax, ymax);
        setcolor(GREEN);
        line(x1_clip, y1_clip, x2_clip, y2_clip);
    } else {
        printf("Line lies completely outside the clipping window\n");
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

    liangBarsky(x1, y1, x2, y2);
	
			 printf("Name=Jenish Pyakurel Roll_no:106\n");


    getch();
    closegraph();
    return 0;
}
