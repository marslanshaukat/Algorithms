 /* 
    PROGRAM: GAME (MINESWEEPER)
     */


#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
clrscr();
char choice;
char a[5][5]={{'O','O','O','O','O'},{'M','O','M','M','O'},{'M','O','O','M','O'},{'O','M','O','M','O'},{'O','O','O','O','O'}};
char d[5][5];
int b,c,e,f,option,back;
//do
//{
clrscr();

cout<<"\n\n\n\t****************************************************";
cout<<"\n\t* \t            MINE$WEEPER                    * ";
cout<<"\n\t**************************************************** ";
cout<<"\n\n\n\n";
cout<<"Menu is:-\n";
cout<<"1) Play\n";
cout<<"2) Help\n";
cout<<"3) Exit\n\n";
cout<<"Select your option=";

cin>>option;
if(option==1)
goto option1;
else if(option==2)
goto option2;
else if(option==3)
goto option3;
else
{
main();
}
option1:
{
clrscr();
cout<<endl;
cout<<"\n\nInput Matrix Is As Below:\n\n ";
for(b=0;b<5;b++)
{
for(c=0;c<5;c++)
 {
cout<<"\t"<<"*";
 }
cout<<endl;
}
start:
cout<<"\n\nEnter Row=";
cin>>e;
if(e>=6)
{
cout<<"\nMaximum rows are 5.So please enter correct number of rows.";
goto start;
}
start1:
cout<<"\n\nEnter Coloum=";
cin>>f;
if(f>=6)
{
cout<<"\nMaximum coloums are 5.So please enter correct number of coloum.";
goto start1;
}
cout<<"\n\n\nOutput Matrix Is As Below:\n\n ";
for(b=0;b<5;b++)
{
for(c=0;c<5;c++)
 {
int count=0;
if(a[b][c]=='M' || a[b][c]=='m')
{
cout<<"\t"<<a[b][c];
}
else
{
if(b==0&&c==1)
{
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==0&&c==2)
{
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}
if(b==0&&c==3)
{
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==1&&c==0)
{
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==1&&c==1)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==1&&c==2)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}
if(b==1&&c==3)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==1&&c==4)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==2&&c==0)
{
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==2&&c==1)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==2&&c==2)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==2&&c==3)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==2&&c==4)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==3&&c==0)
{
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==3&&c==1)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==3&&c==2)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}
if(b==3&&c==3)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==3&&c==4)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==4&&c==1)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==4&&c==2)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==4&&c==3)
{
if(a[b-1][c-1]=='M' || a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}


if(b==0&&c==0)
{
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
if(a[b+1][c+1]=='M'||a[b+1][c+1]=='m')
{
count++;
}
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==0&&c==4)
{
if(a[b+1][c]=='M'||a[b+1][c]=='m')
{
count++;
}
if(a[b+1][c-1]=='M'||a[b+1][c-1]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==4&&c==0)
{
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b-1][c+1]=='M'||a[b-1][c+1]=='m')
{
count++;
}
if(a[b][c+1]=='M'||a[b][c+1]=='m')
{
count++;
}
cout<<"\t"<<count;
}

if(b==4&&c==4)
{
if(a[b-1][c-1]=='M'||a[b-1][c-1]=='m')
{
count++;
}
if(a[b-1][c]=='M'||a[b-1][c]=='m')
{
count++;
}
if(a[b][c-1]=='M'||a[b][c-1]=='m')
{
count++;
}
cout<<"\t"<<count;
}
}
}
cout<<endl;
}
again:
{
cout<<"\n\n\t\tDO YOU WANT TO CONTINUE (Y/N)= ";
cin>>choice;
if(choice=='y' || choice=='Y')
{
goto option1;
}
else if(choice=='n' || choice=='N')
{
main();
}
else
goto again;
}
}

/*while(choice=='y' || choice=='Y');
clrscr();
cout<<"\n\n\t\t\t!!!! THANX FOR PLAYING THIS GAME !!!!"<<"\n\n\t\t\t**** HOPE SO U ENJOYED THIS GAME ****";
*/
option2:
{
clrscr();
cout<<"HELP MENU IS:-\n\n";
cout<<"1) 'M' stands for Mine\n\n";
cout<<"2)  Digit tells number of mines around it\n\n";
cout<<"3)  Entered ROW & COLOUM should not be greater than 5\n\n";
cout<<"4)  MAIN MENU\n\n";
backk:
cout<<"\n\nTo go back type digit 4: ";
cin>>back;
if(back==4)
{
main();
}
else
cout<<"\n\nYou can choose only 4th option";
goto backk;
}

option3:
{
exit(0);
}

getch();
}