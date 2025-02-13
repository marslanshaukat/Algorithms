/* AR$LAN 
    */

#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

struct queue
{

int front;
int back;
int array[5];

};

int insert(queue *p)
{
int z;
//if(p->front==0 && p->back==5)
//cout<<endl<<"Queue is full"<<endl;
if(p->back==5)
p->back=0;
if(p->front==p->back&&p->array[p->front]!=NULL)
{
cout<<endl<<"Queue is full"<<endl;
return(0);
}
else
{
cout<<endl<<"Enter Item= ";
cin>>z;
p->array[p->back]=z;
p->back++;
cout<<endl<<z<<"  "<<"has been added in queue"<<endl;
}
return(0);
}

void del(queue *p)
{
if(p->front==p->back &&  p->array[p->front]==NULL)
cout<<endl<<"Queue is empty"<<endl;
else
{
int x;
x=p->array[p->front];
p->front++;
cout<<endl<<x<<"  "<<"has been deleted from queue"<<endl;
}
}

void print(queue *p)
{
cout<<endl<<endl<<"Your Added Elements Are= ";
for(int i=p->front;i<=p->back-1;i++)
{
cout<< p->array[i]<<" ";
}
}

void main()
{
clrscr();

int i,x,choice;
queue *a;
a->back=0;
a->front=0;

cout<<"* * * * * * * * * * * * * * * * * * "<<endl;
cout<<"* * * * * * Presented By  * * * * * "<<endl;
cout<<"* *         AR$LAN        * * "<<endl;
cout<<"* * * * * * * * * * * * "<<endl;
cout<<"* * * * * * * * * * * * * * * * * * "<<endl<<endl<<endl;

start:
cout<<"\n\n1:- To Input value in queue"<<endl;
cout<<"2:- To Delete value from queue"<<endl;
cout<<"3:- To Print values present in queue"<<endl;
cout<<"4:- To Exit"<<endl;
cout<<"\n\n\t\t\tEnter your option= ";
cin>>choice;

if(choice==1)
{
insert(a);
goto start;
}

if(choice==2)
{
del(a);
goto start;
}

if(choice==3)
{
print(a);
goto start;
}

if(choice==4)
exit(0);


getch();
}