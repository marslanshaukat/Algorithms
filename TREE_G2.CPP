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
int search(int d);
void gview(int arr[],int ind);
void preorder();
void inorder();
void postorder();
void postorder1(node *s);
int isbt();
void sbt();
void icbt();
int countnodes(node *b);
void nodes();
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

int node:: search(int d)
{
int count=0;
l=list;

if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
return 2;
}else
{
if(l->data==d)
{
cout<<"\nValue found at level =  "<<count<<endl;
return 1;
}else
{

while(l!=NULL)
{
if(l->data==d)
{
cout<<"\nValue found at level =  "<<count<<endl;
return 1;
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
return 0;
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
x=x+1
;
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
x=x+10;
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
x=x-10;
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
clrscr();
if(s!=NULL)
{
postorder1(s->pre);
postorder1(s->next);
cout<<s->data<<"---";

}


}//end of method



int node::isbt()
{
int count=0;
clrscr();
node *stack[20];
int top=-1;
if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

cout<<"\n\n\t\t\tStrictly binary tree information cell\n\n";

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
if(top>=0)
{
temp=stack[top];
}else
{
temp=stack[0];
}
if(temp!=NULL)
{

if(l->data<list->data)
{
if(l->next!=NULL&&l->pre==NULL)
{

cout<<"\n\n\nTo make it strictly binary tree you have to enter value LESS then  =  "<<temp->data<<"   and less then  =   "<<l->data;
count++;
}
if(l->next==NULL&&l->pre!=NULL)
{
cout<<"\n\n\nTo make it strictly binary tree you have to enter value GREATER then  =  "<<l->data<<"   and LESS then  =   "<<temp->data;
count++;
}
}else
{
if(l->next!=NULL&&l->pre==NULL)
{

cout<<"\n\n\nTo make it strictly binary tree you have to enter value LESS then  =  "<<l->data;
count++;
}
if(l->next==NULL&&l->pre!=NULL)
{
cout<<"\n\n\nTo make it strictly binary tree you have to enter value GREATER then  =  "<<l->data;
count++;
}

}//end of if l->data<list->data



}else
{

if(l->next!=NULL&&l->pre==NULL)
{

cout<<"\n\n\nTo make it strictly binary tree you have to enter value LESS then  =  "<<l->data;
count++;
}
if(l->next==NULL&&l->pre!=NULL)
{
cout<<"\n\n\nTo make it strictly binary tree you have to enter value GREATER then  =  "<<l->data;
count++;
}
}//end of temp!=NULL

//cout<<l->data<<"---";


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

if(count==0)
{

cout<<"\n\n\t\t\tIt is a strictly binary tree!";

}


}//list==null;
return count;
}//end of isbt method



void node::sbt()
{


clrscr();
node *stack[20];
int top=-1;
if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

//cout<<"\n\n\t\t\tIn \n\n";
if(isbt()!=0)
{

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
//cout<<l->data<<"---";

if(l->next!=NULL&&l->pre==NULL)
{
int value=l->data-1;
int present=search(value);
if(present==0)
{

insert(value);

}

}
if(l->next==NULL&&l->pre!=NULL)
{

int value=l->data+1;
int present=search(value);
if(present==0)
{

insert(value);

}
}

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
clrscr();
cout<<"\n\n\tProcess completed\n";
}else
{

cout<<"\n\n\t\tIT is already Strictly binary tree\n" ;
}

}//list==null;

}//end of sbt



void node::icbt()
{

int o=isbt();

clrscr();

if(o==0)
{
int p=countnodes(list->next);
int q=countnodes(list->pre);
if(p==q)
{
cout<<"\n\n\t\tIt is a complete binary tree!\n\n";
}else
{
cout<<"\n\n\t\tIt is a STRICTLY  binary tree!\n\n";
}

}else
{
cout<<"\n\n\t\tIt is a neither Strictly nor Compelete binary tree!\n\n";

}


}//end of icbt;

int node::countnodes(node *b)
{

clrscr();
node *stack[20];
int top=-1;
int count=0;
if(b==NULL)
{
count=0;
}else
{


l=b;

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
//cout<<l->data<<"---";
count++;

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

return count;
}//end of countnodes


void node::nodes()
{

clrscr();

if(list==NULL)
{
cout<<"\n\n\t\tNO value enterde yet!\n\n"<<endl;
}else
{

int p=countnodes(list->next);
int q=countnodes(list->pre);
int r=p+q+1;
cout<<"\n\nNumber of nodes  =  "<<r<<"\n\n";

}//list==null;

}


void main()
{
clrscr();


int i,j,k,x;
char option;

do
{
list=NULL;
node *a;
int array[20]={NULL},p=0;
do
{
clrscr();
cout<<"1:- For add"<<endl;
cout<<"2:- For search"<<endl;
cout<<"3:- For Graphical view"<<endl;
cout<<"4:- For Transverse view"<<endl;
cout<<"5:- For Others"<<endl;
cout<<"6:- For exit"<<endl;
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



if(i==5)
{

do
{
clrscr();
cout<<"1:- For information to make Strictly binary tree"<<endl;
cout<<"2:- For making Strictly binary tree"<<endl;
cout<<"3:- For information about complete binary tree"<<endl;
cout<<"4:- Number of noods "<<endl;
cout<<"5:- For exit"<<endl;
cout<<"\n\t\tEnter option =  ";
cin>>k;


if(k==1)
{
a->isbt();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}
if(k==2)
{
a->sbt();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}
if(k==3)
{
a->icbt();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}

if(k==4)
{
a->nodes();
cout<<"\n\n\t\t\tPress any key .............";
getch();

}

if(k!=1&&k!=2&&k!=3&&k!=4&&k!=5)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;
cout<<"\n\n\t\t\tPress any key .............";
getch();
}

}while(k!=5);

}//end of if==4

if(i!=1&&i!=2&&i!=3&&i!=4&&i!=5&&i!=6)
{
cout<<"\n\n\t\tPlease enter a valid option!\n"<<endl;
cout<<"\n\n\t\t\tPress any key .............";
getch();
}

}while(i!=6);

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