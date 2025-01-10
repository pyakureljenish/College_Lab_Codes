#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

typedef struct {
    float x, y, z;
} Point3D;

typedef struct {
    float r, g, b;
} Color;

void drawPixel(int x, int y, float z, float **zBuffer) {
    if (x >= 0 && x < SCREEN_WIDTH && y >= 0 && y < SCREEN_HEIGHT && z >= 0 && z <= 1 && z > zBuffer[x][y]) {
        zBuffer[x][y] = z;
    }
}

void drawTriangle(Point3D v0, Point3D v1, Point3D v2, float **zBuffer) {
    int minX = (int)(min(v0.x, min(v1.x, v2.x)));
    int maxX = (int)(max(v0.x, max(v1.x, v2.x)));
    int minY = (int)(min(v0.y, min(v1.y, v2.y)));
    int maxY = (int)(max(v0.y, max(v1.y, v2.y)));

    for (int x = minX; x <= maxX; x++) {
        for (int y = minY; y <= maxY; y++) {
            float area0 = ((v1.y - v2.y) * (float)(x - v2.x) + (v2.x - v1.x) * (float)(y - v2.y)) /
                          ((v1.y - v2.y) * (v0.x - v2.x) + (v2.x - v1.x) * (v0.y - v2.y));
            float area1 = ((v2.y - v0.y) * (float)(x - v2.x) + (v0.x - v2.x) * (float)(y - v2.y)) /
                          ((v1.y - v2.y) * (v0.x - v2.x) + (v2.x - v1.x) * (v0.y - v2.y));
            float area2 = 1 - area0 - area1;

            if (area0 >= 0 && area1 >= 0 && area2 >= 0) {
                float z = area0 * v0.z + area1 * v1.z + area2 * v2.z;
                drawPixel(x, y, z, zBuffer);
            }
        }
    }
}

int main() {
    float **zBuffer = (float **)malloc(SCREEN_WIDTH * sizeof(float *));
    for (int i = 0; i < SCREEN_WIDTH; i++) {
        zBuffer[i] = (float *)malloc(SCREEN_HEIGHT * sizeof(float));
        for (int j = 0; j < SCREEN_HEIGHT; j++) {
            zBuffer[i][j] = -1;
        }
    }

    Point3D v0 = {100, 100, 0.5};
    Point3D v1 = {200, 50, 0.7};
    Point3D v2 = {300, 200, 0.6};

    drawTriangle(v0, v1, v2, zBuffer);

    for (int i = 0; i < SCREEN_WIDTH; i++) {
        free(zBuffer[i]);
    }
    free(zBuffer);
				 printf("Name=Jenish Pyakurel Roll_no:106\n");


    return 0;
}
