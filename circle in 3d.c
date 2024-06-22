#include <graphics.h>
#include <conio.h>

void drawCircle(int xc, int yc, int radius)
{
    int x = 0;
    int y = radius;
    int p = 1 - radius;

    while (x <= y)
    {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        if (p < 0)
            p += 2 * x + 3;
        else
        {
            p += 2 * (x - y) + 5;
            y--;
        }
        x++;
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a circle
    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 100;
    drawCircle(centerX, centerY, radius);

    // Perform translation
    int translateX = 50;
    int translateY = 50;

    centerX += translateX;
    centerY += translateY;

    // Draw the translated circle
    drawCircle(centerX, centerY, radius);

    getch();
    closegraph();
    return 0;
}

