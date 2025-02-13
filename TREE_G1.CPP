#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

void post1(int,int);
void post(int,int);

struct node
{

int data;
node *next,*l,*temp,*temp1,*pre;

int insert(int d);
void search(int d);
void gview(int arr[],int ind);
void preorder();
void inorder();
void postorder();
void postorder1(node *s);

} *list;


int node::insert(int d)
{

l=list;
int count=0;
if(l==NULL)
{

list=new(node);
list->data=d;
list->next=NULL;
list->pre=NULL;
cout<<"\n\n\t\tValue added successfully!\n\n";
cout<<"level of the value entered =  "<<count;
}else
{


while(l!=NULL)
{

if(l->data==d)
{
cout<<"\n\n\t\tValue already exists!\n\n";
return 0;
}
if(d>l->data)
{
temp=l;
l=l->next;
count++;
}
if(d<l->data)
{
temp=l;
l=l->pre;
count++;
}

}//end of while loop

if(l==NULL)
{
temp1=new(node);
temp1->data=d;
temp1->next=NULL;
temp1->pre=NULL;

if(d>temp->data)
{
temp->next=temp1;
}
if(d<temp->data)
{
temp->pre=temp1;
}

}//else l==null


cout<<"\n\n\t\tValue added successfully!\n\n";
cout<<"level of the value entered =  "<<count;
}//end of else
return 1;
}

void node:: search(int d)
{
int count=0;
l=list;

if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;

}else
{
if(l->data==d)
{
cout<<"\nValue found at level =  "<<count<<endl;
}else
{

while(l!=NULL)
{
if(l->data==d)
{
cout<<"\nValue found at level =  "<<count<<endl;
return;
}
if(d<l->data)
{
l=l->pre;
count++;
}

if(d>l->data)
{
l=l->next;
count++;
}

}//end while
cout<<"\n\n\t\tValue not present!"<<endl;
}//end if data at o level

}//end l==null

}//end methd


void node::gview(int arr[],int p)
{
clrscr();
//l=list;
if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

for(int i=0;i<p;i++)
{
l=list;
int x=40,y=1;
int d=0;
while(l!=NULL)
{


if(l->data==arr[i])
{
if(i!=0)
{

if(arr[i]<temp->data)
{
post1(x,y);
y=y+2;
x=x-1;
}
if(arr[i]>temp->data)
{
post(x,y);
y=y+2;
x=x+1;
}

}
gotoxy(x,y);
cout<<l->data;

break;

}//end of ==l->data
if(arr[i]>l->data)
{
d++;
temp=l;
l=l->next;
if(d==1)
{
x=x+7;
}else
{
x=x+3;
}
y=y+1;
}
if(arr[i]<l->data)
{
d++;
temp=l;
l=l->pre;
if(d==1)
{
x=x-7;
}else
{
x=x-3;
}
y=y+1;
}


}//end of while

}//end of for


}//end of list==null
gotoxy(55,48);
cout<<"press any key.......";

}//end of method


void node::preorder()
{
clrscr();
int top=0;
if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

cout<<"\n\n\t\t\tIn Preorder\n\n";
node *stack[10];

stack[top]=list;

while(top>=0)
{
l=stack[top];
top--;

while(l!=NULL)
{
cout<<l->data<<"---";

if(l->next!=NULL)
{
top++;
stack[top]=l->next;
}
l=l->pre;


}//end of inner while
}//end of outter while
}//list==null
}        //end of method


void node::inorder()
{
clrscr();
node *stack[20];
int top=-1;
if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

cout<<"\n\n\t\t\tIn Inorder\n\n";

l=list;

while(l!=NULL)
{
top++;
stack[top]=l;
l=l->pre;
}
while(top>=0)
{
l=stack[top];
top--;
cout<<l->data<<"---";


if(l->next!=NULL)
{
l=l->next;
while(l!=NULL)
{
top++;
stack[top]=l;
l=l->pre;

}//end of while

}   //end of if

}     //end of top>=o

}//list==null;

}//end of inorder method


void node::postorder()
{

if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{
cout<<"\n\n\t\t\tIn Postorder\n\n";
postorder1(list);


}//end of list==null

} //end of method

void node::postorder1(node *s)
{

if(s!=NULL)
{
postorder1(s->pre);
postorder1(s->next);
cout<<s->data<<"---";

}


}//end of method


void main()
{
clrscr();


int i,j,x;
char option;

do
{
list=NULL;
node *a;
int array[20]={NULL},p=0;
do
{
clrscr();
cout<<"\n\n1:- for add"<<endl;
cout<<"2:- For search"<<endl;
cout<<"3:- For Graphical view"<<endl;
cout<<"4:- For Transverse view"<<endl;
cout<<"5:- for exit"<<endl;
cout<<"\n\t\tEnter option =  ";
cin>>i;


if(i==1)
{
cout<<"\n\nEnter value to insert  =  ";
cin>>x;
int check=a-> insert(x);
if(check==1)
{
array[p]=x;
p++;
}

cout<<"\n\n\t\t\tPress any key .............";
getch();
}

if(i==2)
{

cout<<"\n\nEnter your valve to search =  ";
cin>>x;
a->search(x);
cout<<"\n\n\t\t\tPress any key .............";
getch();
}
if(i==3)
{
a->gview(array,p);
getch();
}

if(i==4)
{

do
{
clrscr();
cout<<"1:- For Preorder view"<<endl;
cout<<"2:- For Inorder view"<<endl;
cout<<"3:- For Postorder view"<<endl;
cout<<"4:- for exit"<<endl;
cout<<"\n\t\tEnter option =  ";
cin>>j;


if(j==1)
{
a->preorder();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}
if(j==2)
{
a->inorder();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}
if(j==3)
{
a->postorder();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}


if(j!=1&&j!=2&&j!=3&&j!=4)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;
cout<<"\n\n\t\t\tPress any key .............";
getch();
}

}while(j!=4);

}//end of if==4

if(i!=1&&i!=2&&i!=3&&i!=4&&i!=5)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;
cout<<"\n\n\t\t\tPress any key .............";
getch();
}

}while(i!=5);

cout<<"\n\n\t\tDo u want to continue?(y/n)  =  ";
cin>>option;

}while(option=='y'||option=='Y');


getch();
}



void post1(int x,int y)
{
gotoxy(x-1,y);
cout<<".."<<endl;
gotoxy(x-1,y+1);
cout<<"|\n";
}


void post(int x,int y)
{
gotoxy(x,y);
cout<<".."<<endl;
gotoxy(x,y+1);
cout<<" |\n";
}