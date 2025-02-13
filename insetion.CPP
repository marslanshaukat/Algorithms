#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int check=0;
struct queue
{
int front,back;
int item[5];
};
void insert(queue *v)
{
int x;
if(v->back+1==v->front || v->back==4&&v->front==0)
{
cout<<"\n\nQUEUE IS FULL\n";
}
else
{
cout<<"\n\nENTER ELEMENT=";
cin>>x;
v->item[v->back]=x;
if(v->back==4)
{
v->back=0;
}
else
{
v->back++;
}
cout<<x<<"\thas been added\n";
}
}
void del(queue *v)
{
if(v->front==v->back && check==0)
{
cout<<"\n\nQUEUE IS EMPTY\n";
}
else
{
cout<<v->item[v->front]<<"\thas been deleted\n";
if(v->front==4)
{
v->front=0;
check=0;
}
}
v->front++;
}
void print(queue *v)
{
while(v->front!=v->back)
{
cout<<v->item[v->front]<<endl;
if(v->front==4)
v->front=0;
else
v->front++;
}
}
int main()
{
clrscr();
queue *p;
int choice,v;
p->back=0;
p->front=0;
insert(p);
insert(p);
insert(p);
insert(p);
insert(p);
del(p);
del(p);
insert(p);
print(p);
getch();
return 0;
}