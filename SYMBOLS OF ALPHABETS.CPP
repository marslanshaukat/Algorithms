/*
  PROGRAM: TO FIND SYMBOLS OF ALPHABETS
  */

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int s[]={80,40,90,30,60,65,25,55,95,85,15,20,10};
int a,b,c;
char option;
clrscr();
do
{
cout<<"\t\t***PROGRAM THAT PRINTS MAXIMUM THREE NUMBERS OUT OF THIRTEEN***";

cout<<endl<<"Given 13 numbers are:-"<<endl;
{
for(c=0;c<=12;c++)
cout<<endl<<" "<<s[c]<<endl;
}
for(int i=0;i<=12;i++)
{
for(int j=i;j<=12;j++)
{
if(s[i]<s[j])
{
a=s[i];
s[i]=s[j];
s[j]=a;
}
}
}
cout<<"\n\n\nHighest 3 Numbers From The Given 13 numbers are:-{";
for(i=0;i<=2;i++)
{
cout<<" "<<s[i];
}
cout<<" }";
cout<<endl<<"\n\t\tDo You Want To Continue?"<<"\n\n\t Answer=";
cin>>option;
}while(option=='Y' || option=='y');
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t      *** THANKS FOR USING THIS PROGRAM ***";

getch();
}