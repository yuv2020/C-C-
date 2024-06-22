#include <stdio.h>
#include <stdlib.h>

#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

typedef struct {
    double x, y;
} point;

typedef struct {
    point p1, p2;
} line;

int computeCode(point p, double xmin, double xmax, double ymin, double ymax) {
    int code = 0;
    if (p.x < xmin) {
        code |= LEFT;
    } else if (p.x > xmax) {
        code |= RIGHT;
    }
    if (p.y < ymin) {
        code |= BOTTOM;
    } else if (p.y > ymax) {
        code |= TOP;
    }
    return code;
}

void liangBarsky(line l, double xmin, double xmax, double ymin, double ymax) {
    double t0 = 0, t1 = 1;
    double dx = l.p2.x - l.p1.x;
    double dy = l.p2.y - l.p1.y;

    int p1code = computeCode(l.p1, xmin, xmax, ymin, ymax);
    int p2code = computeCode(l.p2, xmin, xmax, ymin, ymax);

    int accept = 0;
    while (!accept) {
        if (!(p1code | p2code)) {
            accept = 1;
        } else if (p1code & p2code) {
            break;
        } else {
            int codeOut = p1code ? p1code : p2code;
            double x, y;

            if (codeOut & TOP) {
                x = l.p1.x + dy * (ymax - l.p1.y) / dy;
                y = ymax;
            } else if (codeOut & BOTTOM) {
                x = l.p1.x + dx * (ymin - l.p1.y) / dy;
                y = ymin;
            } else if (codeOut & RIGHT) {
                y = l.p1.y + dx * (xmax - l.p1.x) / dx;
                x = xmax;
            } else {
                y = l.p1.y + dx * (xmin - l.p1.x) / dx;
                x = xmin;
            }

            if (codeOut == p1code) {
                l.p1.x = x;
                l.p1.y = y;
                p1code = computeCode(l.p1, xmin, xmax, ymin, ymax);
            } else {
                l.p2.x = x;
                l.p2.y = y;
                p2code = computeCode(l.p2, xmin, xmax, ymin, ymax);
            }
        }
    }
    if (accept) {
        printf("The line is accepted from (%.2f,%.2f) to (%.2f,%.2f)\n", l.p1.x, l.p1.y, l.p2.x, l.p2.y);
    } else {
        printf("The line is rejected\n");
    }
}

int main() {
    line l = {{-5, 3}, {7, 9}};
    double xmin = -2, xmax = 10, ymin = 0, ymax = 8;
    liangBarsky(l, xmin, xmax, ymin, ymax);
    return 0;
}

