#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int gd = DETECT, gm;
    initgraph(&gd, &gm ,(char*)"");
    circle(324, 240, 200);
    getch();
    closegraph();
    return 0;
}
