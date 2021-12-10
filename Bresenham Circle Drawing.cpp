#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;



void SetPixel(int xc, int yc, int x, int y){
    putpixel(xc+x, yc+y, BLUE);
    putpixel(xc-x, yc+y, BLUE);
    putpixel(xc+x, yc-y, BLUE);
    putpixel(xc-x, yc-y, BLUE);
    putpixel(xc+y, yc+x, BLUE);
    putpixel(xc-y, yc+x, BLUE);
    putpixel(xc+y, yc-x, BLUE);
    putpixel(xc+y, yc-x, BLUE);
    putpixel(xc-y, yc-x, BLUE);

}




void Bresenham_Circle(int cx, int cy, int cr){
    int x = 0, y = cr;
    int d = 3 - 2 * cr;
    while(x <= y){
        SetPixel(cx,cy,x,y);
        if(d < 0) d = d + (4 * x) + 6;
        else{
            d = d + 4 * (x-y) + 10;
            y--;
        }
        x++;
        delay(50);
    }
}


int main()
{
    int cx, cy, cr;
    cx = 300;
    cy = 300;
    cr = 150;
    initwindow(800, 600, "Graph window");
    Bresenham_Circle(cx, cy,cr);
    getch();
    closegraph();

}
