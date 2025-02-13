/* 
   PALINDROM NUMBER ASSIGNMENT
   
*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

void main()
{
clrscr();
char x[5],y[5];
int a,count=0;

cout<<"ENTER STRING: ";
gets(x);
cout<<endl<<endl<<"REVERSE OF STRING IS:"<<strrev(x);
for(a=strlen(x);a>=0;a--)
{
  y[a]=x[strlen(x)-1-a];
}
for(a=0;a<strlen(x);a++)
{
if(x[a]==y[a])
count=count+1;
}
if(count==strlen(x))
cout<<endl<<endl<<"ENTERED STRING IS **PALINDROM**";
else
cout<<endl<<endl<<"ENTERED STRING IS NOT PALINDROM";
getch();
}