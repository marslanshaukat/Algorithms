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
void insBet();

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
int count=0;

if(list!=NULL)
{

int d;
cout<<"\nEnter the data u want to delete  = ";
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
}//end of if ==d


}//end of else

if(count==0)
{

cout<<"\n\n\t\tYour value not found"<<endl;
}

}else
{

cout<<"\n\n\t\tNo any data entered yet!"<<endl;
}

}

void node::insBet()
{


if(list!=NULL)
{

int d,e,count=0;
cout<<"\nEnter the value u want to add  = ";
cin>>e;
cout<<"\n\nEnter the value after which u want to enter the value  =  ";
cin>>d;

l=list;

if(l->data==d)
{
temp=new(node);
temp->next=l->next;
l->next=temp;
temp->data=e;

count++;
cout<<"\n\n\t\tvalue added successfully!"<<endl;
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
temp=new(node);
temp->next=l->next;
l->next=temp;
temp->data=e;
cout<<"\n\n\t\tvalue added successfully!"<<endl;
count++;
}//end of if ==d


}//end of else

if(count==0)
{

cout<<"\n\n\t\tYour value not found"<<endl;
}

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
cout<<"4:- for insert after any value"<<endl;
cout<<"5:- for exit"<<endl;
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

if(i==4)
{

a->insBet();

}


if(i!=1&&i!=2&&i!=3&&i!=4&&i!=5)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;

}

}while(i!=5);

cout<<"\n\n\t\tDo u want to continue?(y/n)  =  ";
cin>>option;

}while(option=='y'||option=='Y');


getch();
}