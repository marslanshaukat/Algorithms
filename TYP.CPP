#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<iostream.h>

int total=0;
int missed=0;
int hits=0;
int check=0;

int    GraphDriver;		// The Graphics device driver
int    GraphMode;		//The Graphics mode value
int    MaxX, MaxY;		// The maximum resolution of the screen
time_t *t;

struct node
{
	char data;
	int horzPosition, vertPosition;
	node *nextNodePtr, *lNodePtr, *tempNodePtr;
	char insert(int, int);
	void del(char);
	void print();
}*listNodePtr;

//Function Prototypes
void spalshScreen();
void welcomeScreen(char *);
void help();
void result();
void setborder();

char node :: insert(int hp, int vp)
{
	settextstyle(0, 0, 3);
	setcolor(random(24));
	int c=rand()%2;
	char d=65+rand()%26;
	if(c==0)//defining small letters
		d=d+32;
    lNodePtr=listNodePtr;
    if(lNodePtr==NULL)
    {
		listNodePtr=new node;
		listNodePtr->data=d;
		listNodePtr->horzPosition=hp;
		listNodePtr->vertPosition=vp;
		listNodePtr->nextNodePtr=NULL;
    }
    else
    {
		while(lNodePtr->nextNodePtr != NULL)
			lNodePtr=lNodePtr->nextNodePtr;
		if(lNodePtr->nextNodePtr == NULL)
	    {
			tempNodePtr=new node;
			tempNodePtr->data=d;
			tempNodePtr->horzPosition=hp;
			tempNodePtr->vertPosition=vp;
			lNodePtr->nextNodePtr = tempNodePtr;
			tempNodePtr->nextNodePtr =NULL;
		}
    }
	total++;
    return d;
}

void node :: del(char k)
{
    lNodePtr=listNodePtr;
    if(lNodePtr->data==k)
    {
		listNodePtr=lNodePtr->nextNodePtr;
		delete lNodePtr;
		check=1;
    }
    else
    {
		while(lNodePtr->data != k && lNodePtr != NULL)
		{
			tempNodePtr=lNodePtr;
			lNodePtr=lNodePtr->nextNodePtr;
		}
		if(lNodePtr->data==k)
		{
		    tempNodePtr->nextNodePtr=lNodePtr->nextNodePtr;
		    delete lNodePtr;
			check=1;
		}
    }
}

void node :: print()
{
	char c[4];
	lNodePtr=listNodePtr;
	while(lNodePtr != NULL)
	{
		lNodePtr->vertPosition+=30;
		moveto(lNodePtr->horzPosition , lNodePtr->vertPosition);
		c[0]=lNodePtr->data;
		c[1]='\0';
		outtext(c);
		if(lNodePtr->vertPosition>400)
		{
			del(lNodePtr->data);
			missed++;
		}
		lNodePtr=lNodePtr->nextNodePtr;
	}
}

void help()
{
     outtextxy(100, 200, "Help");
      getch();
}

void result()
{
	settextstyle(1,0,1);
	char hitstring[25];
	char missedstring[25];
	char totalstring[25];

	itoa(hits, hitstring, 10);//changing int into string
	itoa(missed, missedstring, 10);
	itoa(total, totalstring, 10);

	outtextxy(100, 450,"Points:");
	outtextxy(200, 450,hitstring);
	outtextxy(300, 450,"Missed:");
	outtextxy(400, 450,missedstring);
	outtextxy(500, 450, "Total:");
	outtextxy(600, 450,totalstring);
}
void setborder()
{
	setfillstyle(1,1);
	bar(1, 440, MaxX, MaxY);
	
}
void spalshScreen()
{
     for(int i=10 ;i<640; i+=10)
     {
	     outtextxy(550,400 , "Loading...");
	     bar(10,430, i, 445);
	     delay(50);
     }
}

void welcomeScreen(char *msg)
{
     for(int j=10; j<640; j+=10)
     {
		 settextstyle(4, 0, 8);
		 setcolor(BLUE);
		 outtextxy(200, 200, msg);
		 line(1, 200, j, 200);
		 line(640, 300,640-j, 300);
		 delay(50);
     }
}

int main()
{
    char key;//character to be deleted
    node *list;

    GraphDriver=DETECT;
    initgraph(&GraphDriver,&GraphMode,"C:\\TC\\BGI");

    MaxX=getmaxx();
    MaxY=getmaxy();

    srand(time(t));

    spalshScreen();
    cleardevice();
    welcomeScreen("Welcome");
    cleardevice();
    while(1)
	{
		for(int color =1; color<=15 ;color++)
		{
	     setcolor(color);
	      circle(0, 500, color*15);
		  delay(50);
		}
		int x1=MaxX/2,x2,x3 ,y1=MaxY/2 ,y2,y3;
		x3=x2=x1;
		y2=y1+50;
		y3=y2+50;
		setcolor(WHITE);
		settextstyle(4, 0, 5);
		setcolor(RED);
		outtextxy(x1, y1 ,"Enter");
		setcolor(15);
		outtextxy(x3, y3 ,"Exit");

		int y=y1;
		char mov;
		while(1)
		{
			mov=getch();
			if(mov==72)//upper arrow key
			{
				y=y-50;
				(y1==y-50)?y:y=y1;
				if(y==y1)
				{
					setcolor(RED);
					outtextxy(x1, y1 ,"Enter");
					setcolor(15);
					outtextxy(x3, y3 ,"Exit");
				}
				else if(y==y2)
				{
					setcolor(RED);
					setcolor(15);
					outtextxy(x3, y3 ,"Exit");
					outtextxy(x1, y1 ,"Enter");
				}
				else if(y==y3)
				{
					setcolor(RED);
					outtextxy(x3, y3 ,"Exit");
					setcolor(15);
					outtextxy(x1, y1 ,"Enter");
				}
			}
			else if(mov==80)//lower arrow key
			{
				y=y+50;
				(y3==y+50)?y:y=y3;
				if(y==y1)
				{
					setcolor(RED);
					outtextxy(x1, y1 ,"Enter");
					setcolor(15);
					outtextxy(x3, y3 ,"Exit");
				}
				else if(y==y2)
				{
					setcolor(RED);
					setcolor(15);
					outtextxy(x3, y3 ,"Exit");
					outtextxy(x1, y1 ,"Enter");
				}
				else if(y==y3)
				{
					setcolor(RED);
					outtextxy(x3, y3 ,"Exit");
					setcolor(15);
					outtextxy(x1, y1 ,"Enter");
				}
			}
			else if(mov==13)//enter key key
			{
				if(y==y1)
				{
					cleardevice();
					outtextxy(MaxX/2,MaxY/2, "Proceeding...");
					delay(300);
					cleardevice();
					break;
				}
				else if(y==y2)
				{
					cleardevice();
					help();
					getch();
				}
				else
				{
					cleardevice();
					welcomeScreen("Good Bye");
					closegraph();
					exit(1);
				}
			}
		}
		settextstyle(1, 0, 2);
		setcolor(15);
		setborder();
		result();
		while(1)
		{
			int x=40+rand()%MaxX-40;//setting horzontal area for printing values in pixels
			moveto(x , 1);
			char v[4];
			v[0]=list->insert(x, 1);
			v[1]='\0';
			outtext(v);
			if((kbhit()))
			{
				key=getch();
				if(key==27)
				{
					cleardevice();
					break;
				}
				else
				{
					list->del(key);
					if(check==1)
						hits++;
					check=0;
				}
			}
			delay(500);
			cleardevice();
			settextstyle(0, 0, 2);
			setcolor(15);
			setborder();
			result();
			list->print();
		}
		cleardevice();
		settextstyle(8,0,0);
		setcolor(7);
		outtextxy(MaxX/2, MaxY/2, "Result");
		result();
		getch();
		cleardevice();
	}
	getch();
	return 0;
}
