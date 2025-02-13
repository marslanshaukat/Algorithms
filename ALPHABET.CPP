#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char s[26][2]={{'a','!'},{'b','@'},{'c','#'},{'d','$'},{'e','%'},{'f','^'},{'g','&'},{'h','*'},{'i','('},{'j',')'} ,{'k','_'},{'l','+'},{'m','='},{'n','-'},{'o','['},{'p',']'},{'q',';'},{'r',':'},{'s','/'},{'t','}'},{'u','{'},{'v','|'},{'w','>'},{'x','<'},{'y','~'},{'z','?'}};
char c;
clrscr();

for(int i=0;i<=25;i++)
{
 for(int j=0;j<=1;j++)
 {
  cout<<s[i][j];
 }
 cout<<endl;
}
cout<<"\nEnter any Alphabet: ";
cin>>c;
for(i=0;i<=25;i++)
{
 for(int j=0;j<1;j++)
 {
  if(c==s[i][j])
   {
   cout<<"\nThe Corresponding Symbol is: ";
   cout<<s[i][j+1];
   }
  }
}
getch();
}