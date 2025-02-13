#include<string.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>


void push(struct stacks *p,char c);
char pop(struct stacks *p);



struct stacks
{
int top;
char item[30];
};



void main()
{
clrscr();
char option;

do
{
clrscr();

int i,op=0;
char infix[30],output[30];
stacks *a;
a->top=0;


cout<<"plese enter the expression = ";
gets(infix);


for(i=0;infix[i]!='\0';i++)
{

if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^'||infix[i]=='('||infix[i]==')')
{

if(a->top==0)
{
push(a,infix[i]);
continue;
}else
{

//if paranthesis push in to stach;
if(infix[i]=='(')
{
push(a,infix[i]);
continue;
}//end of if '('

// checking presedence level
if(infix[i]=='+'||infix[i]=='-')
{
if(a->item[a->top-1]!='(')
{
output[op]=pop(a);
op++;
push(a,infix[i]);
continue;
}else
{
push(a,infix[i]);
}

}//end of if operator is '+'||'-'

if(infix[i]=='*'||infix[i]=='/')
{

if(a->item[a->top-1]!='(')
{
if(a->item[a->top-1]!='+'||a->item[a->top-1]!='-')
{
output[op]=pop(a);
op++;
push(a,infix[i]);
continue;
}else
{
push(a,infix[i]);
continue;

}//end of if a->item[a->top-1]!='+'

}else
{
push(a,infix[i]);
continue;
}
}//end of if operator == '*'||'\';


if(infix[i]=='^')
{
if(a->item[a->top-1]=='^')
{
output[op]=pop(a);
op++;
push(a,infix[i]);
continue;

}else
{
push(a,infix[i]);
continue;
}

}//end of if infix== '^'

//if right paranthesis then
if(infix[i]==')')
{
for(;a->item[a->top-1]!='(';)
{
output[op]=pop(a);
op++;
}
a->top--;
continue;
}//end of if right paranthesis

}//end of else of a->top==0;

}else
{

//if operend add to out put
output[op]=infix[i];
op++;

}//end of else of operator
}//end of for loop

for(;a->top>=1;)
{

output[op]=pop(a);
op++;

}//end of pop remaining operator;

int x=strlen(output);
cout<<"output  =  ";

for(i=0;i<x;i++)
{
cout<<output[i];
}
//cout<<"\n\n\t\toutput postfix form =  "<<output<<"\n\n";

cout<<"\n\nDo u want to continue?(y/n)  =  ";
cin>>option;

}while(option=='y'||option=='Y');
clrscr();
cout<<"\t\t\tThanks for using software!";
getch();
}




void push(struct stacks *p,char c)
{

p->item[p->top]=c;
p->top++;

}

char pop(struct stacks *p)
{

p->top--;
return p->item[p->top];

}