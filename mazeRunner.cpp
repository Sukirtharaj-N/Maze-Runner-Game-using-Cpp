#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <stdio.h>
#include <fstream.h>
#include <string.h>
int f=0,ff=0;

void decor(int i, int j)
{
    moveto(0,0);
    outtextxy(i+62,j,"*");
    outtextxy(i+54,j+5,"***");
    outtextxy(i+46,j+10,"*****");
    outtextxy(i+38,j+15,"*******");
    outtextxy(i+30,j+20,"*********");
    outtextxy(i+38,j+25,"*******");
    outtextxy(i+46,j+30,"*****");
    outtextxy(i+54,j+35,"***");
    outtextxy(i+62,j+40,"*");
}

void decormenu()
{
    textcolor(RED);
    cprintf("*	*	*	*	*	*	*	*");
    cprintf("\r\n");
    cprintf(" *	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("	*	*	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("*   *	*	*	*	*	*	*	*");
    cprintf("\r\n");
    cprintf(" *	*   *	*	*	*	*	*	*	");
    cprintf("\r\n");
    cprintf(" *	*	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("	*	*	*	*	*	*	*	");
    cprintf("\r\n");
    cprintf(" *	*	*	*	*	*	*	*");
    cprintf("\r\n");
    cprintf("*	*	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("   *	*	*	*	*	*	*	");
    cprintf("\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");
    cprintf("*	*	*	*	*	*	*	*");
    cprintf("\r\n");
    cprintf(" *	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("	*	*	*	*	*	*	*	* ");
    cprintf("\r\n");
    cprintf("*   *	*	*	*	*	*	*	*");
    cprintf("\r\n");
    cprintf(" *	*   *	*	*	*	*	*	*	");
    cprintf("\r\n");
    cprintf(" *	*	*	*	*	*	*	* ");
}

class primary
{
    char uname[22],ppw[15]; public:

    void registeration()
    {
        decormenu();
        textcolor(YELLOW);
        gotoxy(30,10);
        cprintf("\r\n\r\n	:REGISTRATION:\r\n\r\n	ENTER USERNAME:");
        gets(uname);
        cprintf("\r\n	ENTER PASSWORD:");
        while((ppw[ff]=getch())!='\r')
        {
            cprintf("*");
            ++ff;
        }
        ppw[ff]='\0';
    }

    char* uuname()
    {
        return uname;
    }
    char* pppw()
    {
        return ppw;
    }
} p1;

void login(char userrname[],char passsword[])
{
    textcolor(YELLOW);
    gotoxy(30,10);
    cprintf("\r\n\r\n	: LOGIN :\r\n\r\n	ENTER USERNAME:");
    gets(userrname);
    cprintf("\r\n	ENTER PASSWORD:");
    while((passsword[f]=getch())!='\r')
    {
        cprintf("*");
        ++f;
    }
    passsword[f]='\0';
}

class secondary
{
    public:
    char name[22],pw[15]; int count;

    char* namee()
    {
        return name;
    }
    char* pww()
    {
        return pw;
    }
} s1;

void map1()
{
    int x,y;
    setlinestyle(0,0,1);
    x=getmaxx()/2;
    y=getmaxy()/2;
    line(x-200,y-200,x+200,y-200); //mapborder line(x-200,y-200,x-200,y+200);
    line(x-200,y+200,x+200,y+200); line(x+200,y-200,x+200,y+200);

    //RE-border...
    line(x-180,y-180,x+180,y-180); line(x-180,y-180,x-180,y+180);
    line(x-180,y+180,x+180,y+180); line(x+180,y-180,x+180,y+180);

    //center box...
    line(x-35,y-35,x+35,y-35);
    line(x-35,y-35,x-35,y+35);
    line(x+35,y-35,x+35,y+35); line(x-35,y+35,x+35,y+35);

    //left bottom shape..
    line(x-140,y+60,x-105,y+60); line(x-105,y+60,x-105,y+100);
    line(x-105,y+100,x-55,y+100); line(x-55,y+100,x-55,y+140);
    line(x-55,y+140,x-140,y+140); line(x-140,y+140,x-140,y+60);

    //right bottom shape... line(x+105,y+60,x+140,y+60); line(x+140,y+60,x+140,y+140);
    line(x+140,y+140,x+55,y+140);
    line(x+55,y+140,x+55,y+100);
    line(x+55,y+100,x+105,y+100); line(x+105,y+100,x+105,y+60);

    //left top shape...
    line(x-140,y-140,x-55,y-140);
    line(x-55,y-140,x-55,y-100);
    line(x-55,y-100,x-105,y-100);
    line(x-105,y-100,x-105,y-60);
    line(x-105,y-60,x-140,y-60);
    line(x-140,y-60,x-140,y-140);

    //right top shape... line(x+55,y-140,x+140,y-140); line(x+140,y-140,x+140,y-60);
    line(x+140,y-60,x+105,y-60); line(x+105,y-60,x+105,y-100);
    line(x+105,y-100,x+55,y-100); line(x+55,y-100,x+55,y-140);

    //colour...
    int bbb[]={x-140,y-140,x-55,y-140,x-55,y-100,x-105,y-100,x-105,y-60,x-140,y-60};
    setfillstyle(1,4); fillpoly(6,bbb);
    int bbb2[]={x+55,y-140,x+140,y-140,x+140,y-60,x+105,y-60,x+105,y-100,x+55,y-100};
    setfillstyle(1,4); fillpoly(6,bbb2);
    int bbb3[]={x-140,y+60,x-105,y+60,x-105,y+100,x-55,y+100,x-55,y+140,x-140,y+140};
    setfillstyle(1,4); fillpoly(6,bbb3);
    int bbb4[]={x+105,y+60,x+140,y+60,x+140,y+140,x+55,y+140,x+55,y+100,x+105,y+100};
    setfillstyle(1,4); fillpoly(6,bbb4);
    int bbb5[]={x-35,y-35,x+35,y-35,x+35,y+35,x-35,y+35};
    setfillstyle(1,4); fillpoly(4,bbb5);
    int bbb6[]={x-200,y-200,x-180,y-180,x+180,y-180,x+200,y-200};
    setfillstyle(1,4); fillpoly(4,bbb6);
    int bbb7[]={x-200,y-200,x-180,y-180,x-180,y+180,x-200,y+200};
    setfillstyle(1,4); fillpoly(4,bbb7);
    int bbb8[]={x+200,y-200,x+180,y-180,x+180,y+180,x+200,y+200};
    setfillstyle(1,4);
    fillpoly(4,bbb8);
    int bbb9[]={x+200,y+200,x-200,y+200,x-180,y+180,x+180,y+180};
    setfillstyle(1,4); fillpoly(4,bbb9);
}

int check1(int a, int b)
{
    int x=getmaxx()/2, y=getmaxy()/2; int flag;
    if((a>x-41 && a<x+41 )&&(b>y-41 && b<y+41))	//center box flag=1;
    else if((a<x+41 && a>x-41 )&&(b<y-41 && b>y+41)) flag=1;

    else if((a>x-146 && a<x-99 )&&(b>y-146 && b<y-54))	//top left flag=1;	//I
    else if((a<x-105 && a>x-146 )&&(b<y-146 && b>y-54)) flag=1;

    else if((a>x-103 && a<x-50 )&&(b>y-145 && b<y-94))	//top left flag=1;	//II
    else if((a<x-50 && a>x-103 )&&(b<y-145 && b>y-94)) flag=1;

    else if((a>x-146 && a<x-99 )&&(b>y+146 && b<y+54))	//bottom left flag=1;	//I
    else if((a<x-99 && a>x-146 )&&(b<y+146 && b>y+54)) flag=1;

    else if((a>x-103 && a<x-50 )&&(b>y+145 && b<y+94))	//bottom left flag=1;	//II
    else if((a<x-50 && a>x-103 )&&(b<y+145 && b>y+94)) flag=1;


    else if((a>x+99 && a<x+145 )&&(b>y-145 && b<y-54))	//top right flag=1;	//I
    else if((a<x+145 && a>x+99 )&&(b<y-145 && b>y-54)) flag=1;


    else if((a>x+50 && a<x+103 )&&(b>y-145 && b<y-94))	//top right flag=1;	//II
    else if((a<x+103 && a>x+50 )&&(b<y-145 && b>y-94)) flag=1;


    else if((a>x+99 && a<x+145 )&&(b>y+145 && b<y+54))	//bottom right flag=1;	//I
    else if((a<x+145 && a>x+99 )&&(b<y+145 && b>y+54)) flag=1;


    else if((a>x+50 && a<x+103 )&&(b>y+145 && b<y+94))	//bottom right flag=1;	//II
    else if((a<x+103 && a>x+50 )&&(b<y+145 && b>y+94)) flag=1;


    else if((a>x+174 && a<x+200 )&&(b>y-186 && b<y+200))	//border I flag=1;
    else if((a<x+200 && a>x+174 )&&(b<y-186 && b>y+200))

    flag=1;

    else if((a>x-200 && a<x-174 )&&(b>y-186 && b<y+200))	//border II flag=1;
    else if((a<x-174 && a>x-200 )&&(b<y-186 && b>y+200)) flag=1;


    else if((a>x-174 && a<x+200 )&&(b>y+200 && b<y+174))	//border III flag=1;
    else if((a<x+200 && a>x-174 )&&(b<y+200 && b>y+174)) flag=1;


    else if((a>x-174 && a<x+200 )&&(b>y-200 && b<y-174))	//border IV flag=1;
    else if((a<x+200 && a>x-174 )&&(b<y-200 && b>y-174)) flag=1;

    else flag=0 ;

    return flag;
}

void map3()

{
    int x,y;
    setlinestyle(0,0,1);
    x=getmaxx()/2; y=getmaxy()/2;
    line(x-200,y-150,x+200,y-150); //mapborder
    line(x-195,y-145,x+195,y-145);
    line(x-200,y-150,x-200,y);
    line(x-195,y-145,x-195,y-5);
    line(x+200,y-150,x+200,y); line(x+195,y-145,x+195,y-5);
    line(x-200,y,x-140,y);
    line(x-195,y-5,x-135,y-5);
    line(x+200,y,x+140,y); line(x+195,y-5,x+135,y-5);
    line(x-140,y,x-140,y+50);
    line(x-135,y-5,x-135,y+55);
    line(x+140,y,x+140,y+50); line(x+135,y-5,x+135,y+55);
    line(x-140,y+50,x-200,y+50); line(x-135,y+55,x-195,y+55);
    line(x+140,y+50,x+200,y+50); line(x+135,y+55,x+195,y+55);
    line(x-200,y+50,x-200,y+200); line(x-195,y+55,x-195,y+195);
    line(x+200,y+50,x+200,y+200); line(x+195,y+55,x+195,y+195);
    line(x-200,y+200,x+200,y+200); line(x-195,y+195,x+195,y+195);

    int bbb[]={x-100,y-80,x-100,y-100,x+100,y-100,x+100,y-80,x-100,y-80};
    setfillstyle(1,4);	//blocks fillpoly(5,bbb);
    int bbb2[]={x-50,y-30,x-50,y-50,x+50,y-50,x+50,y-30,x-50,y-30};
    fillpoly(5,bbb2);
    int bbb3[]={x-10,y-5,x-10,y+50,x+10,y+50,x+10,y-5};
    fillpoly(4,bbb3);
    int bbb4[]={x-90,y-5,x-90,y+50,x-70,y+50,x-70,y-5};
    fillpoly(4,bbb4);
    int bbb5[]={x+90,y-5,x+90,y+50,x+70,y+50,x+70,y-5};
    fillpoly(4,bbb5);
    int bbb6[]={x-175,y+80,x-175,y+100,x-30,y+100,x-30,y+140,x-175,y+140,x- 175,y+160,x+175,y+160,x+175,y+140,x+30,y+140,x+30,y+100,x+175,y+100,x+175,y+80};
    fillpoly(12,bbb6);
}

int check3(int a,int b)
{
    int flag;
        if((a>219 && a<419)&&(b>139 && b<159)) flag=1;
    else if((a>269 && a<369)&&(b>189 && b<209)) flag=1;
    else if((a>309 && a<329)&&(b>239 && b<289)) flag=1;
    else if((a>229 && a<249)&&(b>239 && b<289)) flag=1;
    else if((a>389 && a<409)&&(b>239 && b<289)) flag=1;
    else if((a>144 && a<494)&&(b>439 && b<459)) flag=1;
    else if((a>289 && a<349)&&(b>459 && b<499)) flag =1;
    else if((a>144 && a<494)&&(b>499 && b<519)) flag =1;
    else if(b<97 || b>431) flag=1;
    else if((a<127 || a>511) && !(b>231 && b<296)) flag=1;
    else if((a>451 || a<181) && (b>231 && b<296)) flag=1;
    else flag=0; return flag;
}

void map2()

{
    int x,y;
    setlinestyle(0,0,1);
    x=getmaxx()/2; y=getmaxy()/2;
    line(x-300,y+150,x-300,y-150);
    line(x-300,y+150,x-50,y+150);
    line(x-50,y+20,x-50,y+150);
    line(x-50,y+20,x+50,y+20);
    line(x+50,y+150,x+50,y+20);
    line(x+50,y+150,x+300,y+150);
    line(x+300,y-150,x+300,y+150);
    line(x+50,y-20,x-50,y-20);
    line(x-50,y-150,x-50,y-20);
    line(x-50,y-150,x-300,y-150);
    line(x+300,y-150,x+50,y-150);
    line(x+50,y-20,x+50,y-150);

    setfillstyle(1,4);
    int b1[]={x-80,y+30,x-180,y+30,x-180,y-30,x-80,y-30};
    fillpoly(4,b1);
    int b2[]={x+80,y-30,x+180,y-30,x+180,y+30,x+80,y+30};
    fillpoly(4,b2);
    int b3[]={x-270,y+120,x-270,y-120,x-250,y-120,x-250,y+120};
    fillpoly(4,b3);
    int b4[]={x+270,y-120,x+270,y+120,x+250,y+120,x+250,y-120};
    fillpoly(4,b4);
    int b5[]={x-230,y+90,x-230,y-90,x-210,y-90,x-210,y+90};
    fillpoly(4,b5);
    int b6[]={x+230,y-90,x+230,y+90,x+210,y+90,x+210,y-90};
    fillpoly(4,b6);
    int b7[]={x-80,y+130,x-230,y+130,x-230,y+110,x-80,y+110};
    fillpoly(4,b7);
    int b8[]={x+80,y-130,x+230,y-130,x+230,y-110,x+80,y-110};
    fillpoly(4,b8);
    int b9[]={x-80,y-130,x-230,y-130,x-230,y-110,x-80,y-110};
    fillpoly(4,b9);
    int b10[]={x+80,y+130,x+230,y+130,x+230,y+110,x+80,y+110};
    fillpoly(4,b10);
    int b11[]={x-80,y+60,x-180,y+60,x-180,y+80,x-80,y+80};
    fillpoly(4,b11);
    int b12[]={x+80,y-60,x+180,y-60,x+180,y-80,x+80,y-80};
    fillpoly(4,b12);
    int b13[]={x-80,y-60,x-180,y-60,x-180,y-80,x-80,y-80};
    fillpoly(4,b13);
    int b14[]={x+80,y+60,x+180,y+60,x+180,y+80,x+80,y+80};
    fillpoly(4,b14);
}

int check2(int a, int b)
{
    int x=getmaxx()/2, y=getmaxy()/2;
    int flag;

    if((a>x-180 && a<x-80 )&&(b>y-30 && b<y+30))	//1 flag=1;
    else if((a<x+180 && a>x+80 )&&(b<y+30 && b>y-30)) flag=1;


    else if((a<x-250 && a>x-270 )&&(b<y+120 && b>y-120))	//2 flag=1;
    else if((a>x+250 && a<x+270 )&&(b>y-120 && b<y+120)) flag=1;


    else if((a<x-210 && a>x-230 )&&(b<y+90 && b>y-90))	//3 flag=1;
    else if((a>x+210 && a<x+230 )&&(b>y-90 && b<y+90)) flag=1;


    else if((a<x-80 && a>x-230 )&&(b<y+130 && b>y+110))	//4 flag=1;
    else if((a>x+80 && a<x+230 )&&(b>y-130 && b<y-110)) flag=1;


    else if((a<x+230 && a>x+80 )&&(b>y+110 && b<y+130))	//5 flag=1;
    else if((a>x-230 && a<x-80 )&&(b<y-110 && b>y-130))	//5 flag=1;


    else if((a<x-80 && a>x-180 )&&(b>y+60 && b<y+80))	//6 flag=1;
    else if((a>x+80 && a<x+180 )&&(b<y-60 && b>y-80))

    flag=1;

    else if((a<x-80 && a>x-180 )&&(b>y-80 && b<y-60))	//7 flag=1;
    else if((a>x+80 && a<x+180 )&&(b<y+80 && b>y+60)) flag=1;
    //BOXCHECKOVER

    else if(a<x-300 || a>x+300) flag=1;
    else if((b<y-150 || b>y+150) && !(a>x-50 && a<x+50)) flag=1;
    else if((a>x-50 && a<x+50) && !(b>y-20 && b<y+20)) flag=1;
    else flag=0;

    return flag;
}

void rainbow(int x,int y,int z,int q,int a,int b,int c,int d,int e,int f,int g,int h)
{
    for(int i=20;i<100;i++)
    {
        delay(10); setcolor(i/10);
        arc(x,y,0,180,i-10);
        arc(z,q,0,180,i-10);
        arc(a,b,0,180,i-10);
        arc(c,d,0,180,i-10);
        arc(e,f,0,180,i-10);
        arc(g,h,0,180,i-10);
    }
}

void poster()
{
    int x1,y1; x1=getmaxx()/2; y1=getmaxy()/2; cleardevice(); setfillstyle(1,4);
    int a[]={x1-10,y1-10,x1-10,y1-120,x1-100,y1-120,x1-100,y1-10,x1-70,y1-10,x1-70,y1-70,x1-40,y1-70,x1-40,y1-10};

    fillpoly(8,a); setfillstyle(1,1);
    int mm[]={x1-120,y1-10,x1-120,y1-120,x1-150,y1-120,x1-170,y1-70,x1-190,y1-120,x1-220,y1-120,x1-220,y1-10} ;

    fillpoly (7,mm); setfillstyle(1,2);
    int zz[]={x1+10,y1-10,x1+10,y1-40,x1+70,y1-90,x1+10,y1-90,x1+10,y1-120,x1+100,y1-120,x1+100,y1-90,x1+40,y1-40,x1+100,y1- 40,x1+100,y1-10};

    fillpoly(10,zz); setfillstyle(1,3);
    int ee[]={x1+130,y1-10,x1+230,y1-10,x1+230,y1-40,x1+160,y1-40,x1+160,y1-50,x1+200,y1-50,x1+200,y1-70,x1+160,y1- 70,x1+160,y1-80,x1+230,y1-80,x1+230,y1-120,x1+130,y1-120} ;

    fillpoly(12,ee); setfillstyle(1,5);
    int mmm[]={x1-120,y1+120,x1-120,y1+10,x1-150,y1+10,x1-170,y1+50,x1-190,y1+10,x1-220,y1+10,x1-220,y1+120} ;

    fillpoly (7,mmm); setfillstyle(1,6);


    int aaa[]={x1-10,y1+120,x1-10,y1+10,x1-100,y1+10,x1-100,y1+120,x1-70,y1+120,x1-70,y1+60,x1-40,y1+60,x1-40,y1+120};
    fillpoly(8,aaa); setfillstyle(1,7); int
    sss[]={x1+10,y1+120,x1+100,y1+120,x1+100,y1+50,x1+30,y1+50,x1+30,y1+30,x1+100,y1+30,x1+100,y1+10,x1+10,y1+10,x1+10,y1+8 0,x1+70,y1+80};

    fillpoly(10,sss); setfillstyle(1,9);
    int hhh[]={x1+120,y1+120,x1+150,y1+120,x1+150,y1+70,x1+190,y1+70,x1+190,y1+120,x1+220,y1+120,x1+220,y1+10,x1+190,y1+10,x1+ 190,y1+50,x1+150,y1+50,x1+150,y1+10,x1+120,y1+10};

    fillpoly(12,hhh); settextstyle(6,0,1) ;
    outtextxy(150,450,"**USE HEADPHONES FOR BETTER EXPERIENCE**");

    settextstyle(0,0,0);
    setcolor(WHITE);
    outtextxy(0,20,"*	*	*	*	*	*	*	*");
    outtextxy(0,40," *	*	*	*	*	*	*	* * ");

    outtextxy(0,60," *
    *	*
    *
    *
    *
    *
    *
    *
    ");

    outtextxy(0,80,"* *			*					*					*		*			*			*		*			"); outtextxy(0,400,"*	*			*				*					*				*				*			*"); outtextxy(0,420,"   *		*			*				*		*			*				*				* * "); outtextxy(0,440," *	*				*	*			*				*		*		*			* "); outtextxy(0,460,"* *				*					*          *        *      *         *      *       "); outtextxy(0,120," * * *");
    outtextxy(0,160," *	* ");

    outtextxy(0,200," *   *   ");

    outtextxy(0,240," * * * ");

    outtextxy(0,280," *	* ");

    outtextxy(0,320,"*	*    ");


    outtextxy(0,360," *	* "); outtextxy(545,120," * * *"); outtextxy(545,160," *			* "); outtextxy(545,200," * * "); outtextxy(545,240," * * * "); outtextxy(545,280," *				* "); outtextxy(545,320,"*		* "); outtextxy(545,360," *			* "); sound(100);
    delay(100); sound(800); delay(100); sound(200); delay(100); sound(900); delay(100); sound(400); delay(100); sound(700); delay(100); sound(1000); delay(100); sound(500); delay(100); sound(1000); delay(100); sound(700); delay(100); sound(400);

    delay(100); sound(900); delay(100); sound(200); delay(100); sound(800); delay(100); sound(100); delay(1000); nosound();
}

void main()
{
    clrscr(); randomize();
    int i,j,x,y,ch,flag=0, level=1,count123,p,q;

    char msg[10],time[25],username[22],password[15]; int a,b,c;
    int soundd=0,soundd2=0,soundd3=0,to,timeover=0;

    int map1f[4][2]={{250,190},{270,350},{200,200},{400,190}};

    int map2f[4][2]={{134,249},{560,249},{381,249},{505,249}};

    int map3f[4][2]={{365,369},{319,100},{279,479},{369,479}};

    int gdriver= DETECT,gmode; initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI"); poster();
    getch(); closegraph(); vishal:

    clrscr(); decormenu(); gotoxy(30,10);
    textcolor(LIGHTBLUE);

    cprintf("\r\n\r\n	|1.REGISTER.1|"); textcolor(YELLOW);
    cprintf("\r\n	|2.LOGIN.2|"); textcolor(GREEN);
    cprintf("\r\n	|3.INSTRUCTIONS.3|"); textcolor(BROWN);
    cprintf("\r\n	|4.QUIT.4|"); textcolor(LIGHTRED);
    cprintf("\r\n	ENTER YOUR CHOICE:");
    int dhandam;
    cin>>dhandam;
    sound(500); delay(100); nosound();
    switch(dhandam)
    {
        case 1:
            clrscr();
            p1.registeration();
            ofstream rout("primary.dat",ios::app|ios::binary);
            rout.write((char*)&p1,sizeof(p1));
            rout.seekp(0);
            rout.close();
            count123=0;
            goto vishal ;

        case 2:
            clrscr();
            count123=0; decormenu(); textcolor(YELLOW); gotoxy(30,10);
            login(username,password);
            fstream lin("primary.dat",ios::binary); while(!lin.eof())
            {
                lin.read((char*)&p1,sizeof(p1));
                if( (strcmp(username,p1.uuname())==0) && (strcmp(password,p1.pppw())==0))
                {
                    count123=1;
                    strcpy(s1.pww(),password);
                    strcpy(s1.namee(),username);
                }
                else count123=0;
            }
            lin.seekg(0);
            lin.close();
            break;

        case 3:
            clrscr();
            textcolor(LIGHTGREEN);
            cprintf("\r\n	INSTRUCTIONS TO PLAY\r\n");
            cprintf("\r\n 1.The hero of this game is Masher(yellow circle) help him satisfy his hunger by making him eat food (blue cicle).\r\n 2. You have two minutes, Let's see how much you can satisfy him \r\n3.controls-\r\nW - Move Up\r\nS - Move Down\r\nA- Move left \r\nD - Move Right \r\n\r\n	!!! ALL THE BEST !!! ");
            getch();
            goto vishal;

        case 4: exit(0);
                break;
    }

    if(count123==0)
    {
        cout<<"ID DOES NOT EXIST";
        getch();
        goto vishal;
    }
    else
    {
        hell:
        clrscr(); decormenu(); textcolor(YELLOW); gotoxy(30,10);
        cprintf("\r\n\r\n	|!1.START GAME.1!|\r\n	|!2.SCORES.2!|\r\n	|!3.MAIN MENU.3!|\r\n\r\n	ENTER YOUR CHOICE:");
        s1.count=0; int choice;
        cin>>choice;
        sound(800); delay(100); nosound();
        to=timeover;
        switch(choice)
        {
            case 1:
                clrscr();
                s1.count=0; p=340;q=189;
                i=200;j=230;
                int gdriver= DETECT,gmode;
                initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
                clrscr();
                struct time t,T ;
                gettime(&t);
                while(1)
                {
                    gettime(&T);
                    outtextxy(150,20,"TIME :");
                    sprintf(time,"%2d:%02d:%02d.", T.ti_hour, T.ti_min, T.ti_sec);
                    outtextxy(220,20,time);
                    if (((T.ti_min-t.ti_min)>=2) && (T.ti_sec==t.ti_sec))
                    {
                        timeover++;
                        goto gameover;
                    }
                    outtextxy(400,20,"POINTS: ");
                    sprintf(msg," %d",s1.count);
                    outtextxy(450,20,msg);
                    if(s1.count>5)
                        level=2;
                    if(s1.count>10)
                        level=3;
                    if (level==1)
                    {
                        map1();
                        if(s1.count==0)
                        {
                            if(soundd==0)
                            {
                                sound(100);
                                delay(50);
                                sound(200);
                                delay(50);
                                sound(300);
                                delay(50);
                                sound(400);
                                delay(50);
                                sound(600);
                                delay(50);
                                sound(700);
                                delay(50);
                                sound(800);
                                delay(50);
                                sound(900);
                                delay(50);
                                sound(1000);
                                delay(50);
                                nosound();
                            }
                            soundd+=1;
                        }
                        decor(0,0);
                        decor(0,100);
                        decor(0,200);
                        decor(0,300);
                        decor(0,400);
                        decor(500,0);
                        decor(500,100);
                        decor(500,200);
                        decor(500,300);
                        decor(500,400);
                    }
                    else if(level==2)
                    {
                        if(s1.count-1==5)
                        {
                            if(soundd2==0)
                            {
                                sound(100);
                                delay(50);
                                sound(200);
                                delay(50);
                                sound(300);
                                delay(50);
                                sound(400);
                                delay(50);
                                sound(600);
                                delay(50);
                                sound(700);
                                delay(50);
                                sound(800);
                                delay(50);
                                sound(900);
                                delay(50);
                                sound(1000);
                                delay(50);
                                nosound();
                            }
                            soundd2+=1;
                        }
                        int a=check2(i,j);
                        if (a==1)
                        { i=391;j=249;}
                        map2();
                        decor(0,0);
                        decor(0,400);
                        decor(500,0);
                        decor(500,400);
                    }
                    else if(level==3)
                    {
                        if(s1.count-1==10)
                        {
                            if(soundd3==0)
                            {
                                sound(100);
                                delay(50);
                                sound(200);
                                delay(50);
                                sound(300);
                                delay(50);
                                sound(400);
                                delay(50);
                                sound(600);
                                delay(50);
                                sound(700);
                                delay(50);
                                sound(800);
                                delay(50);
                                sound(900);
                                delay(50);
                                sound(1000);
                                delay(50);
                                nosound();
                            }
                            soundd3+=1;
                        }
                        int a=check3(i,j);
                        if (a==1)
                        { i=300;j=250; }
                        map3();
                        decor(0,0);
                        decor(0,100);
                        decor(0,200);
                        decor(0,300);
                        decor(0,400);
                        decor(500,0);
                        decor(500,100);
                        decor(500,200);
                        decor(500,300);
                        decor(500,400);
                    }
                    setcolor(WHITE);
                    setfillstyle(SOLID_FILL,YELLOW);
                    circle(i,j,5);
                    floodfill(i,j,WHITE);
                    if((i>p-10&&i<p+10)&&(j>q-10&&j<q+10))
                    {
                        sound(500);
                        delay(50);
                        sound(600);
                        delay(50);
                        nosound();
                        s1.count++;
                        int m=random(4);
                        switch(level)
                        {
                            case 1 :
                                p=map1f[m][0];
                                q=map1f[m][1];
                                break;

                            case 2 :
                                p=map2f[m][0];
                                q=map2f[m][1];
                                break;

                            case 3 :
                                p=map3f[m][0];
                                q=map3f[m][1];
                                break;
                            default : break;
                        }
                    }
                    switch (s1.count)
                    {
                        case 6 :
                            p=391;q=249;
                            break;
                        case 11:
                            p=380;q=249;
                            break;
                        default: break;
                    }
                    setfillstyle(SOLID_FILL,BLUE);
                    circle(p,q,5);
                    floodfill(p,q,WHITE);
                    ch=getch();
                    if(ch==119)
                    { x=0; y= -10; }
                    else if(ch==97)
                    { x= -10; y=0; }
                    else if(ch==100)
                    { x =10; y=0; }
                    else if(ch==115)
                    { x=0; y=10; }
                    else if(ch==65||ch==27)
                    {
                        closegraph ;
                        exit(0);
                    }
                    i=i+x; j=j+y;
                    if(level==1)
                    { flag=check1(i,j); }
                    else if(level==2)
                    { flag=check2(i,j); }
                    else
                    {flag=check3(i,j);}
                    if(flag==0)
                        cleardevice();
                    else
                    {
                        gameover:
                        int s;
                        clrscr();
                        cleardevice();
                        rainbow(319,139,319,339,119,139,119,339,519,139,519,339);
                        setcolor(YELLOW);
                        settextstyle(4,0,0);
                        if(flag==1)
                            outtextxy(0,200,"!!GAMEOVER!! PRESS ESC TO CLOSE ");
                        else if(timeover>to)
                            outtextxy(0,200,"!!TIMEOVER!! PRESS ESC TO CLOSE ");
                        settextstyle(1,0,0);
                        outtextxy(150,150,"YOUR SCORE : ");
                        sprintf(msg," %d",s1.count);
                        outtextxy(350,150,msg);
                        sound(100);
                        delay(50);
                        sound(200);
                        delay(50);
                        sound(300);
                        delay(50);
                        sound(400);
                        delay(50);
                        sound(500);
                        delay(50);
                        sound(600);
                        delay(50);
                        sound(700);
                        delay(50);
                        sound(800);
                        delay(50);
                        sound(900);
                        delay(50);
                        sound(1000);
                        sound(100);
                        nosound();
                        ofstream tout("secondary.dat",ios::app|ios::binary);
                        tout.write((char*)&s1,sizeof(s1));
                        tout.seekp(0);
                        tout.close();
                        s1.count=0;
                        esc: s=getch();
                        if(s==27)
                        {
                            closegraph();
                            goto hell;
                        }
                        else goto esc;
                    }
                }

                case 2 :
                    clrscr();
                    cout<<"\n \n YOUR RECENT SCORES \n";
                    ifstream simbu("secondary.dat",ios::in|ios::binary);
                    while(!simbu.eof())
                    {
                        simbu.read((char*)&s1,sizeof(s1));
                        if(simbu.eof())
                            break;
                        if(strcmp(username,s1.namee())==0)
                            cout<<"	||	"<<s1.count;
                    }
                    simbu.seekg(0);
                    simbu.close();
                    getch();
                    goto hell;

                case 3: goto vishal;

                default: break;
        }
        exit(0);
    }
    exit(0);
}
