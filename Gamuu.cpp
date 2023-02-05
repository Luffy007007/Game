#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>



/*void jump(int x,int y)
{
    int a=getch();
    if (a==72)
    {
      //circle(90+i,301,30);
      y--;
    }

}*/
/*void start()
{

    int a=getch();
    if (a==72)
    {
         cleardevice();
    }
*/
/*
void start()
{


    GetCursorPos(&SetCursorPos);
    if(GetAsyncKeyState(VK_LBUTTON))
       {
           outtextxy(cursorPos.x,cursorPos.y,"Hello");

       }
}*/
/*void thankyou()
{
	int i;
	while (!kbhit())
	{
		cleardevice();
		settextstyle(10, 0, 6);
		setcolor(random(50));
		outtextxy(70,200, "THANK YOU");
		delay(700);
	}
}*/

void Obstacle()
{
    rectangle(250,600,350,630);
    rectangle(300,600,350,630);
}

void Obstacle1()
{
    rectangle(400,600,450,630);
    rectangle(450,600,500,630);
}
void Obstacle2()
{
    rectangle(600,600,650,630);
    rectangle(650,600,700,630);
}
void Obstacle3()
{
    rectangle(750,600,800,630);
    rectangle(800,600,850,630);
}
int page=0;
int main()
{
    int gd=DETECT,gm;
    //initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(1065,700);

    //Ball
    int x=90,y=599,r=50;
    //int a = 0;

    while(1)
    {


	for(int i=0;i<=1055;i++) {
		/*if(kbhit()) {
		a=getch();
		}
		if(a==32) {
		closegraph();
		break;
		}*/

        //Circle
		circle(x+i,y,r);

		//Moving
		/*
        if(GetAsyncKeyState(VK_UP))
        y-=10;
        else if(GetAsyncKeyState(VK_DOWN))
        y+=10;
        if(GetAsyncKeyState(VK_RETURN))
        break; */

        int w=0;
        int q=0;
        int jump=0;
        if(kbhit())
        {
			w = getch();
		}
		if(w == 72)
        {
			closegraph();
			break;
		}
		if(q == 32)
        {
			jump = 1;
			q = 0;
		}
		if (jump == 1)
        {
                if(x>=560)
                {
                    x--;
                }
                if(x==560)
                {
                    jump = 2;
                }
        }
        if(jump == 2)
        {
            if(y<560)
            y++;
        }

        //Color
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(x+i,y,WHITE);
        //Function Call
        Obstacle();
        /*setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(251,601,WHITE);
        floodfill(351,631,WHITE);*/


        Obstacle1();
        Obstacle2();
        Obstacle3();


        //thankyou();
        //start();

        //TO Stop Flickering
        setactivepage(page);
        setvisualpage(1-page);

        page=1-page;
        delay(10);
		cleardevice();
        line(0,650,1065,650);




	}//if

    }//while

    getch();
    closegraph();

}
