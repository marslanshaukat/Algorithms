#include<conio.h>
#include<iostream.h>

//void insert(struct node *list);
//void print(struct node *list);
//void del(struct node *list);


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
cout<<"\nEnter data  =  ";
cin>>d;

if(l==NULL)
{

list=new(node);
list->data=d;
list->next=NULL;
cout<<"\n\n\t\tvalue added successfully!"<<endl;
}else
{

while(l->next!=NULL)
{
l=l->next;

}//end of while loop

if(l->next==NULL)
{
temp=new(node);
temp->data=d;
l->next=temp;
temp->next=NULL;
cout<<"\n\n\t\tvalue added successfully!"<<endl;
}

}//else l==null

}

void node::print()
{
//l=list;
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
cout<<"\n\n\t\tNo data is present"<<endl;
}//end of else

}



void node::del()
{

if(list!=NULL)
{

l=list;


list=l->next;
delete(l);
cout<<"\n\n\t\tvalue deleted successfully!"<<endl;




}else
{

cout<<"\n\n\t\tNo any data entered yet!"<<endl;
}

}


void main()
{
clrscr();


int i;
char option;

do
{
node *a;

do
{

cout<<"\n\n1:- for add"<<endl;
cout<<"2:- for print"<<endl;
cout<<"3:- for delete"<<endl;
cout<<"4:- for exit"<<endl;
cout<<"\n\t\tEnter option =  ";
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

if(i!=1&&i!=2&&i!=3&&i!=4)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;

}

}while(i!=4);

cout<<"\n\nDo u want to continue?(y/n)  =  ";
cin>>option;

}while(option=='y'||option=='Y');


getch();
}