#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>


/*void Obstacle1()
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
}*/
int page=0,j,i;



int x=90,y=599,r=50;
int x1=250,x2=600,y1=350,y2=630,a1=300,a2=600,b1=350,b2=630;//obstracle 1
int c1=400,c2=600,d1=450,d2=630,e1=450,e2=600,f1=500,f2=630;//Obstracle 2
int main()
{
    int gd=DETECT,gm;
    //initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(1065,700);

    //Ball
 //int a = 0;



    while(1)
    {




	for(int i=0;i<=1055;i++) {
     /*int r=0,arr[10]={1,0,0,0,0,0,2,0,0,0};
     int g1=0,g2=0;
     r=rand()%3;
     switch(arr[r])
     {
         case 1:g1=1;break;
         case 2:g2=1;break;
     }
     if (g1==1)
     {
         x1+=10;
         break;
         cleardevice();
         if(x1==600)
         {
             x1=10;
             g1=0;
         }
     }
      if (g2==1)
     {
         x2+=10;
         break;
         cleardevice();
         if(x2==600)
         {
             x2=10;
             g2=0;
         }
     }*/

    //Obstacle
    rectangle(x1-i,x2,y1-i,y2);
    rectangle(a1-i,a2,b1-i,b2);
    rectangle(c1-i,c2,d1-i,d2);
    rectangle(e1-i,e2,f1-i,f2);



		//Moving

        if(GetAsyncKeyState(VK_UP))
        y-=1;
        else if(GetAsyncKeyState(VK_DOWN))
        y+=1;
        if(GetAsyncKeyState(VK_RETURN))
        break;

        //Color

        //Function Call

        /*setfillstyle(SOLID_FILL,LIGHTMAGENTA);
        floodfill(251,601,WHITE);
        floodfill(351,631,WHITE);*/

         //Obstacle();
       // Obstacle1();
        //Obstacle2();
        //Obstacle3();


        //thankyou();
        //start();

        //TO Stop Flickering
        setactivepage(page);
        setvisualpage(1-page);

        page=1-page;
        delay(0.1);
		cleardevice();
        line(0,650,1065,650);
        //Circle




        circle(x,y,r);
        if(GetAsyncKeyState(VK_SPACE))
        {

            circle(x,y,r);
            delay(0.2);
            cleardevice();
            circle(x,y-100,r);
            line(0,650,1065,650);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(x,y-1,WHITE);

        }
        //Logic For Score
    	cleardevice();
        char a[10]="";
        itoa(i,a,10); //converting integer to array and storing in a(10 Is For Decimal)
        outtextxy(350,100,"Score = ");
        outtextxy(400,100,a);
        /*outtextxy(200,380,"Press space to jump");
        outtextxy(200,400,"Avoid Obstacles and score HighScore");*/
        j++;//Score




	}//if

    }//while

    getch();
    closegraph();

}
