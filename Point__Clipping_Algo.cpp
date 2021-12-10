#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;
int main()
{
    cout << "Please Enter some coordinate :   " << endl << endl;
    int x1, y1, x2, y2;
    cout << "Top Left coordinate:  " << endl;
    cin >> x1 >> y1;
    cout << "Bottom Right coordinate: " << endl;
    cin >> x2 >> y2;
    int px, py;
    cout << "Enter the point coordinate: " << endl;
    cin >> px >> py;

    //int gd = DETECT, gm;
    //initgraph(&gd, &gm, " ");
    initwindow(900, 800, "Graph window");

    rectangle(x1,y1,x2,y2);
    if(px >= x1 && px <= x2 && py >= y1 && py <= y2){
        putpixel(px,py, BLUE);
        circle(px, py, 3);
    }
    getch();
    closegraph();

    return 0;
}
