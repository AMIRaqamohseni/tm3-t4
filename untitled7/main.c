#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    clrscr();
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    setcolor(RED);
    rectangle(350+20,350+20,450+20,450+20);
    setcolor(YELLOW);
    rectangle(360+20,360+20,390+20,390+20);
    setcolor(YELLOW);
    line(350+20,350+20,400+20,300+20);
    setcolor(YELLOW);
    line(450+20,350+20,400+20,300+20);
    setcolor(YELLOW);
    line(365+20,335+20,365+20,300+20);
    setcolor(YELLOW);
    line(375+20,325+20,375+20,300+20);
    setcolor(YELLOW);
    rectangle(415+20,420+20,430+20,450+20);
    getch();
    closegraph();
    return 0;
}
