#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;

int score(long point,int sx,int sy)
{
    char score[50];
    int len,rem;
    len=to_string(point).length();
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,9);
    for(int i=len-1;i>=0;i--)
    {
        rem=point%10;
        score[i]=char(rem+48);//any single digit number + 48 gives its ascii value
        point=point/10;
    }
    score[len]='\0';
    outtextxy(sx,sy,score);
}

int x1=250,x2=600,y1=350,y2=630;//obstracle 1
int c1=400,c2=600,d1=500,d2=630;//Obstracle 2
int main()
{
    long p=0;
    int i=0,uf=0,df=0;
    int of1=0,of2=0,t=0;
    int page=0,j=0;
    int x=90,y=599,r=50;
    initwindow(1065,700);
    while(1)
    {
            setactivepage(page);
            setvisualpage(1-page);
            cleardevice();

            line(0,650,1065,650);
            circle(x,y+i,r);
            rectangle(x1-t,x2,y1-t,y2);
            rectangle(c1-t,c2,d1-t,d2);

            //Logic For Jump Using Flag
            if(GetAsyncKeyState(VK_SPACE))
            {
                uf=1;
            }
            if(uf==1)
            {
                i-=5;
            }
            if(i==-200)
            {
                uf=0;
                df=1;
            }
            if(i==0)
            {
                df=0;
            }
            if(df==1)
            {
                i+=5;
            }
            //Logic for Random Obstracle
            if(of1 == 1)
            {
                t-=10;
            }
            if(x1 == 500)
            {
                of1=0;
                //of2=1;
            }
            /*if(of2 == 1)
            {
                t-=10;
            }

            if(c1 == 0)
            {
                of1=0;
                of2=0;
            }*/




            p+=1;
            score(p,100,100);
            delay(20);
            page=1-page;
    }
    getch();
    closegraph();

}
