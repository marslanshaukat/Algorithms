#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>

struct node
{
char data;
node *next,*l,*temp;
void insert(char d);
int del(char m);
void end(int i,int j);
}*list;

void node::insert(char d)
{
l=list;
if(l==NULL)
{
list=new node;
list->data=d;
list->next=NULL;
}
else
{
while(l->next!=NULL)
l=l->next;
if(l->next==NULL)
{
temp=new node;
temp->data=d;
l->next=temp;
temp->next=NULL;
}
}
}

int node::del(char f)
{
int hit=0;
int miss=0;
if(f==27)
end(hit,miss);
else
{
 if(list!=NULL)
 {
 l=list;
  if(l->data==f)
  {
  list=l->next;
  hit=hit+1;
  delete(l);
  }
 else
 {
  while(l->data!=f&&l->next!=NULL)
  {
  temp=l;
  l=l->next;
  }
  if(l->data==f)
  {
  temp->next=l->next;
  temp=l;
  l=l->next;
  hit=hit+1;
  delete(temp);
  }
 }
}
}
if(hit==5||miss==5)
end(hit,miss);
return(0);
}


void main()
{
clrscr();
node *u;
int x;
int y=0;
char a,b;
x=rand()%79;
a=97+rand()%26;
u->insert(a);
start:
clrscr();
gotoxy(10,23);
for(int i=10;i<70;i++)
cout<<"*";
gotoxy(x,y++);
if(y==24)
main();
cout<<a;
if(kbhit())
{
b=getch();
u->del(b);
}
delay(200);
goto start;
}

void node::end(int x,int y)
{
node *u;
char opt;
start:
clrscr();
cout<<"\n\nCorrect Hits = "<<x;
cout<<"\n\nMiss Hits = "<<y<<"\n";
cout<<"\nExit ? (Y/N)\n\n";
cin>>opt;
if(opt=='y')
exit(0);
else
main();
}