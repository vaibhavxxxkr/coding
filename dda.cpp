#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x, y, epsilon;
    int gd = DETECT, gm, i, val, r;

    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);

    // Initialize the graphics mode
    initgraph(&gd, &gm, "");

    x1 = 0;
    y1 = r;
    x = x1;
    y = y1;
    i = 0;

    do
    {
        val = pow(2, i);
        i++;
    } while (val < r);

    epsilon = 1 / pow(2, i - 1);

    do
    {
        x2 = x1 + y1 * epsilon;
        y2 = y1 - epsilon * x2;
        putpixel(200 + x2, 200 + y2, WHITE);
        x1 = x2;
        y1 = y2;
    } while ((y1 - y) > epsilon || (x - x1) > epsilon);

    getch();
    closegraph();

    return 0;
}
