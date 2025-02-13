/* 
   PROGRAM:Link List
   */


#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
struct node
{
int data;
node *next,*l,*temp;
void insert();
void print();
void del();
} *list;


void node::insert()
{
int d;
l=list;
cout<<"\nEnter data=";
cin>>d;
if(l==NULL)
{
list=new(node);
list->data=d;
list->next=NULL;
cout<<"\n\n\t\tvalue added successfully!!"<<endl;
}else
{
while(l->next!=NULL)
{
l=l->next;
}
if(l->next==NULL)
{
temp=new(node);
temp->data=d;
l->next=temp;
temp->next=NULL;
cout<<"\n\n\t\tvalue added successfully!!"<<endl;
}
}
}
void node::print()
{
if(list!=NULL)
{
l=list;
while(l->next!=NULL)
{
cout<<l->data<<endl;
l=l->next;
}
if(l->next==NULL)
{
cout<<l->data<<endl;
}
}else
{
cout<<"\n\n\t\tNo value is present"<<endl;
}
}
void node::del()
{
int count=0;

if(list!=NULL)
{
int d;
cout<<"\nEnter the value u want to delete=";
cin>>d;
l=list;
if(l->data==d)
{
list=l->next;
delete(l);
count++;
cout<<"\n\n\t\tvalue deleted successfully!"<<endl;
}else
{
temp=l;
l=l->next;
while(l->data!=d&&l->next!=NULL)
{
temp=l;
l=l->next;
}
if(l->data==d)
{
temp->next=l->next;
delete(l);
cout<<"\n\n\t\tvalue deleted successfully!"<<endl;
count++;
}
}
if(count==0)
{
cout<<"\n\n\t\tYour value not found"<<endl;
}
}else
{
cout<<"\n\n\t\tNo data entered yet!!"<<endl;
}
}
void main()
{
start:
clrscr();
int i;
char option;
do
{
node *a;
cout<<endl<<endl<<endl;
cout<<"* * * * * * * * * * * * * * * * * * "<<endl;
cout<<"* * * * * * Presented By  * * * * * "<<endl;
cout<<"* *         AR$LAN        * * "<<endl;
cout<<"* * * * * * * * * * * * "<<endl;
cout<<"* * * * * * * * * * * * * * * * * * "<<endl<<endl<<endl;

cout<<"\n\n1:- For adding value"<<endl;
cout<<"2:- For printing value"<<endl;
cout<<"3:- For deleting value"<<endl;
cout<<"4:- For exit"<<endl;
cout<<"\n\t\tEnter option=";
cin>>i;
if(i==1)
{
a-> insert();
}
if(i==2)
{
a-> print();
}
if(i==3)
{
a->del();
}
if(i==4)
{
exit(0);
}
if(i!=1&&i!=2&&i!=3&&i!=4)
{
cout<<"\n\n\t\tPlease enter a valid option!!\n"<<endl;
}
}while(i!=4);
getch();
}