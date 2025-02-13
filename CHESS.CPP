/* 
   PROGRAM:CHESS
    */


#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int cp1=23,rp1=14,cp2=28,rp2=14,cp3=33,rp3=14,cp4=38,rp4=14,cp5=43,rp5=14;
int cp6=48,rp6=14,cp7=53,rp7=14,cp8=58,rp8=14,x[60][60],cr1=23,rr1=16,cr2=58,rr2=16,cc1=33,rc1=16,cc2=48,rc2=16,rn1=16,cn1=28,rn2=16,cn2=53,cq1=38,rq1=16,ck=43,rk=16;

void help();
void moveP(char);
void moveR(char);
void moveQ(char);
void moveN(char);
void moveC(char);

void main()
{
	int cp1=23,rp1=14,cp2=28,rp2=14,cp3=33,rp3=14,cp4=38,rp4=14,cp5=43,rp5=14;
	int cp6=48,rp6=14,cp7=53,rp7=14,cp8=58,rp8=14,x[60][60],cr1=23,rr1=16,cr2=58,rr2=16,cc1=33,rc1=16,cc2=48,rc2=16,rn1=16,cn1=28,rn2=16,cn2=53,cq1=38,rq1=16,ck=43,rk=16;
	char e1,e2,t;
	int i,j,a,b,c;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,40);
	cout<<"* * * * * * * * * * * * * * * * * * "<<endl;
	gotoxy(20,41);
	cout<<"* * * * * * Presented By  * * * * * "<<endl;
	gotoxy(20,42);
	cout<<"* *         AR$LAN        * * "<<endl;
	gotoxy(20,43);
	cout<<"* * * * * * * * * * * * "<<endl;
	gotoxy(20,44);
	cout<<"* * * * * * * * * * * * * * * * * * "<<endl<<endl<<endl;
	for(i=1;i<=60;i++)
	{
		for(j=1;j<=60;j++)
		{
			x[i][j]=0;
		}
	}
	for(i=23;i<=58;i+=5)
	{
		x[i][14]=1;
		x[i][16]=1;
	}
	gotoxy(19,2);
	for(i=8;i>=1;i--)
	{
		cout<<i<<"\n\n\t\t  ";

	}
	a=20;
	for(i=1;i<=9;i++)
	{
		b=2;
		for(j=1;j<=16;j++)
		{
			gotoxy(a,b);
			cout<<"³";
			b++;
		}
		a+=5;
	}
	b=1;
	for(i=1;i<=9;i++)
	{
		a=20;
		for(j=1;j<=41;j++)
		{
			gotoxy(a,b);
			cout<<"Ä";
			a++;
		}
		b+=2;
	}

	gotoxy(23,18);
	cout<<"A";
	gotoxy(28,18);
	cout<<"B";
	gotoxy(33,18);
	cout<<"C";
	gotoxy(38,18);
	cout<<"D";
	gotoxy(43,18);
	cout<<"E";
	gotoxy(48,18);
	cout<<"F";
	gotoxy(53,18);
	cout<<"G";
	gotoxy(58,18);
	cout<<"H";
	gotoxy(23,14);
	cout<<"p1";
	gotoxy(28,14);
	cout<<"p2";
	gotoxy(33,14);
	cout<<"p3";
	gotoxy(38,14);
	cout<<"p4";
	gotoxy(43,14);
	cout<<"p5";
	gotoxy(48,14);
	cout<<"p6";
	gotoxy(53,14);
	cout<<"p7";
	gotoxy(58,14);
	cout<<"p8";
	gotoxy(23,16);
	cout<<"R1";
	gotoxy(58,16);
	cout<<"R2";
	gotoxy(33,16);
	cout<<"C1";
	gotoxy(48,16);
	cout<<"C2";
	gotoxy(28,16);
	cout<<"N1";
	gotoxy(53,16);
	cout<<"N2";
	gotoxy(43,16);
	cout<<"K";
	gotoxy(38,16);
	cout<<"Q1";
	do{
		gotoxy(6,26);
		cout<<"                                                                                            ";
		gotoxy(6,27);
		cout<<"                                                                                           ";
		gotoxy(6,28);
		cout<<"                                                                           ";
		gotoxy(6,29);
		cout<<"                                                                                                   ";
		gotoxy(6,30);
		cout<<"                                                                   ";
		gotoxy(6,31);
		cout<<"                                                                                     ";
		gotoxy(25,23);
		cout<<"                                                ";
		gotoxy(10,20);
		cout<<"                         ";
		gotoxy(10,21);
		cout<<"                         ";
		gotoxy(10,22);
		cout<<"                         ";
		gotoxy(18,28);
		cout<<"Press F1 For Help";
		gotoxy(10,20);
		cout<<"Enter Element: ";
		e1=getche();
		if(e1==0)
		{
			help();
		}
		if(e1==27)
		{
			break;
		}
		e2=getche();
		if(e2==27)
		{
			break;
		}
		if(e2==0)
		{
			help();
		}
		if(e1=='p'||e1=='P')
		{
			if(e2=='1'||e2=='2'||e2=='3'||e2=='4'||e2=='5'||e2=='6'||e2=='7'||e2=='8')
				moveP(e2);
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Element";
			}
		}
		else if(e1=='r'||e1=='R')
		{
			if(e2=='1'||e2=='2')
				moveR(e2);
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Element";
			}
		}
		else if(e1=='c'||e1=='C')
		{
			if(e2=='1'||e2=='2')
				moveC(e2);
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Element";
			}
		}
		else if(e1=='q'||e1=='Q')
		{
			if(e2=='1')
				moveQ(e2);
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Element";
			}
		}
		else if(e1=='n'||e1=='N')
		{
			if(e2=='1'||e2=='2')
				moveN(e2);
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Element";
			}
		}

		else
		{
			gotoxy(10,22);
			cout<<"Illegal Element";
		}
		gotoxy(25,23);
		cout<<"Press t or ESC to terminate or any key to continue: ";
		t=getche();
	}while(t!='t'&&t!=27);
}
void help()
{
	gotoxy(6,26);
	cout<<"P1 to P8 are PAWN they move one step forward and can't jump";
	gotoxy(6,27);
	cout<<"R1 and R2 are ROOK they move in PLUS direction and can't jump";
	gotoxy(6,28);
	cout<<"N1 and N2 are HORSE they move in L direction and CAN JUMP";
	gotoxy(6,29);
	cout<<"C1 and C2 are BISHOP they move in X direction and can't jump";
	gotoxy(6,30);
	cout<<"Q is QUEEN she move in PLUS and X dirction and can't jump";
	gotoxy(6,31);
	cout<<"K is KING he moves one step in any direction";
getche();
return;
}
void moveP(char e2)
{
	int a,b,i;
	char al,lc;
	gotoxy(10,21);
	cout<<"Enter Target Location: ";
	al=getche();
	if(al==0)
	{
		help();
	}
	lc=getche();
	if(lc==0)
	{
		help();
	}
	if(e2=='1')
	{
		if(al=='a'&&lc=='1')
		{
			a=23;
			b=16;
		}
		else if(al=='a'&&lc=='2')
		{
			a=23;
			b=14;
		}
		else if(al=='a'&&lc=='3')
		{
			a=23;
			b=12;
		}
		else if(al=='a'&&lc=='4')
		{
			a=23;
			b=10;
		}
		else if(al=='a'&&lc=='5')
		{
			a=23;
			b=8;
		}
		else if(al=='a'&&lc=='6')
		{
			a=23;
			b=6;
		}
		else if(al=='a'&&lc=='7')
		{
			a=23;
			b=4;
		}
		else if(al=='a'&&lc=='8')
		{
			a=23;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp1!=23)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp1-2))
		{
			x[cp1][rp1]=0;
			gotoxy(cp1,rp1);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p1";
			rp1=b;
			x[cp1][rp1]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='2')
	{
		if(al=='b'&&lc=='1')
		{
			a=28;
			b=16;
		}
		else if(al=='b'&&lc=='2')
		{
			a=28;
			b=14;
		}
		else if(al=='b'&&lc=='3')
		{
			a=28;
			b=12;
		}
		else if(al=='b'&&lc=='4')
		{
			a=28;
			b=10;
		}
		else if(al=='b'&&lc=='5')
		{
			a=28;
			b=8;
		}
		else if(al=='b'&&lc=='6')
		{
			a=28;
			b=6;
		}
		else if(al=='b'&&lc=='7')
		{
			a=28;
			b=4;
		}
		else if(al=='b'&&lc=='8')
		{
			a=28;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp2!=28)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp2-2))
		{
			x[cp2][rp2]=0;
			gotoxy(cp2,rp2);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p2";
			rp2=b;
			x[cp2][rp2]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='3')
	{
		if(al=='c'&&lc=='1')
		{
			a=33;
			b=16;
		}
		else if(al=='c'&&lc=='2')
		{
			a=33;
			b=14;
		}
		else if(al=='c'&&lc=='3')
		{
			a=33;
			b=12;
		}
		else if(al=='c'&&lc=='4')
		{
			a=33;
			b=10;
		}
		else if(al=='c'&&lc=='5')
		{
			a=33;
			b=8;
		}
		else if(al=='c'&&lc=='6')
		{
			a=33;
			b=6;
		}
		else if(al=='c'&&lc=='7')
		{
			a=33;
			b=4;
		}
		else if(al=='c'&&lc=='8')
		{
			a=33;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp3!=33)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp3-2))
		{
			x[cp3][rp3]=0;
			gotoxy(cp3,rp3);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p3";
			rp3=b;
			x[cp3][rp3]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='4')
	{
		if(al=='d'&&lc=='1')
		{
			a=38;
			b=16;
		}
		else if(al=='d'&&lc=='2')
		{
			a=38;
			b=14;
		}
		else if(al=='d'&&lc=='3')
		{
			a=38;
			b=12;
		}
		else if(al=='d'&&lc=='4')
		{
			a=38;
			b=10;
		}
		else if(al=='d'&&lc=='5')
		{
			a=38;
			b=8;
		}
		else if(al=='d'&&lc=='6')
		{
			a=38;
			b=6;
		}
		else if(al=='d'&&lc=='7')
		{
			a=38;
			b=4;
		}
		else if(al=='d'&&lc=='8')
		{
			a=38;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp4!=38)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp4-2))
		{
			x[cp4][rp4]=0;
			gotoxy(cp4,rp4);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p4";
			rp4=b;
			x[cp4][rp4]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='5')
	{
		if(al=='e'&&lc=='1')
		{
			a=43;
			b=16;
		}
		else if(al=='e'&&lc=='2')
		{
			a=43;
			b=14;
		}
		else if(al=='e'&&lc=='3')
		{
			a=43;
			b=12;
		}
		else if(al=='e'&&lc=='4')
		{
			a=43;
			b=10;
		}
		else if(al=='e'&&lc=='5')
		{
			a=43;
			b=8;
		}
		else if(al=='e'&&lc=='6')
		{
			a=43;
			b=6;
		}
		else if(al=='e'&&lc=='7')
		{
			a=43;
			b=4;
		}
		else if(al=='e'&&lc=='8')
		{
			a=43;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp5!=43)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp5-2))
		{
			x[cp5][rp5]=0;
			gotoxy(cp5,rp5);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p5";
			rp5=b;
			x[cp5][rp5]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='6')
	{
		if(al=='f'&&lc=='1')
		{
			a=48;
			b=16;
		}
		else if(al=='f'&&lc=='2')
		{
			a=48;
			b=14;
		}
		else if(al=='f'&&lc=='3')
		{
			a=48;
			b=12;
		}
		else if(al=='f'&&lc=='4')
		{
			a=48;
			b=10;
		}
		else if(al=='f'&&lc=='5')
		{
			a=48;
			b=8;
		}
		else if(al=='f'&&lc=='6')
		{
			a=48;
			b=6;
		}
		else if(al=='f'&&lc=='7')
		{
			a=48;
			b=4;
		}
		else if(al=='f'&&lc=='8')
		{
			a=48;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp6!=48)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp6-2))
		{
			x[cp6][rp6]=0;
			gotoxy(cp6,rp6);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p6";
			rp6=b;
			x[cp6][rp6]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='7')
	{
		if(al=='g'&&lc=='1')
		{
			a=53;
			b=16;
		}
		else if(al=='g'&&lc=='2')
		{
			a=53;
			b=14;
		}
		else if(al=='g'&&lc=='3')
		{
			a=53;
			b=12;
		}
		else if(al=='g'&&lc=='4')
		{
			a=53;
			b=10;
		}
		else if(al=='g'&&lc=='5')
		{
			a=53;
			b=8;
		}
		else if(al=='g'&&lc=='6')
		{
			a=53;
			b=6;
		}
		else if(al=='g'&&lc=='7')
		{
			a=53;
			b=4;
		}
		else if(al=='g'&&lc=='8')
		{
			a=53;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp7!=53)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp7-2))
		{
			x[cp7][rp7]=0;
			gotoxy(cp7,rp7);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p7";
			rp7=b;
			x[cp7][rp7]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='8')
	{
		if(al=='h'&&lc=='1')
		{
			a=58;
			b=16;
		}
		else if(al=='h'&&lc=='2')
		{
			a=58;
			b=14;
		}
		else if(al=='h'&&lc=='3')
		{
			a=58;
			b=12;
		}
		else if(al=='h'&&lc=='4')
		{
			a=58;
			b=10;
		}
		else if(al=='h'&&lc=='5')
		{
			a=58;
			b=8;
		}
		else if(al=='h'&&lc=='6')
		{
			a=58;
			b=6;
		}
		else if(al=='h'&&lc=='7')
		{
			a=58;
			b=4;
		}
		else if(al=='h'&&lc=='8')
		{
			a=58;
			b=2;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(x[a][b]==1||cp8!=58)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
		if(b==(rp8-2))
		{
			x[cp8][rp8]=0;
			gotoxy(cp8,rp8);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"p8";
			rp8=b;
			x[cp8][rp8]=1;
		}
		else
		{
			gotoxy(10,22);
			cout<<"Illegeal Move";
			return;
		}
	}
	getch();
	return;
}
void moveR(char e2)
{
	char al,lc;
	int a,b,i;
	gotoxy(10,21);
	cout<<"Enter target Location: ";
	al=getche();
	if(al==0)
	{
		help();
	}
	lc=getche();
	if(lc==0)
	{
		help();
	}
	if(e2=='1'||e2=='2')
	{
		if(al=='a'&&lc=='1')
		{
			a=23;
			b=16;
		}
		else if(al=='a'&&lc=='2')
		{
			a=23;
			b=14;
		}
		else if(al=='a'&&lc=='3')
		{
			a=23;
			b=12;
		}
		else if(al=='a'&&lc=='4')
		{
			a=23;
			b=10;
		}
		else if(al=='a'&&lc=='5')
		{
			a=23;
			b=8;
		}
		else if(al=='a'&&lc=='6')
		{
			a=23;
			b=6;
		}
		else if(al=='a'&&lc=='7')
		{
			a=23;
			b=4;
		}
		else if(al=='a'&&lc=='8')
		{
			a=23;
			b=2;
		}
		else if(al=='b'&&lc=='1')
		{
			a=28;
			b=16;
		}
		else if(al=='b'&&lc=='2')
		{
			a=28;
			b=14;
		}
		else if(al=='b'&&lc=='3')
		{
			a=28;
			b=12;
		}
		else if(al=='b'&&lc=='4')
		{
			a=28;
			b=10;
		}
		else if(al=='b'&&lc=='5')
		{
			a=28;
			b=8;
		}
		else if(al=='b'&&lc=='6')
		{
			a=28;
			b=6;
		}
		else if(al=='b'&&lc=='7')
		{
			a=28;
			b=4;
		}
		else if(al=='b'&&lc=='8')
		{
			a=28;
			b=2;
		}
		else if(al=='c'&&lc=='1')
		{
			a=33;
			b=16;
		}
		else if(al=='c'&&lc=='2')
		{
			a=33;
			b=14;
		}
		else if(al=='c'&&lc=='3')
		{
			a=33;
			b=12;
		}
		else if(al=='c'&&lc=='4')
		{
			a=33;
			b=10;
		}
		else if(al=='c'&&lc=='5')
		{
			a=33;
			b=8;
		}
		else if(al=='c'&&lc=='6')
		{
			a=33;
			b=6;
		}
		else if(al=='c'&&lc=='7')
		{
			a=33;
			b=4;
		}
		else if(al=='c'&&lc=='8')
		{
			a=33;
			b=2;
		}
		else if(al=='d'&&lc=='1')
		{
			a=38;
			b=16;
		}
		else if(al=='d'&&lc=='2')
		{
			a=38;
			b=14;
		}
		else if(al=='d'&&lc=='3')
		{
			a=38;
			b=12;
		}
		else if(al=='d'&&lc=='4')
		{
			a=38;
			b=10;
		}
		else if(al=='d'&&lc=='5')
		{
			a=38;
			b=8;
		}
		else if(al=='d'&&lc=='6')
		{
			a=38;
			b=6;
		}
		else if(al=='d'&&lc=='7')
		{
			a=38;
			b=4;
		}
		else if(al=='d'&&lc=='8')
		{
			a=38;
			b=2;
		}
		if(al=='e'&&lc=='1')
		{
			a=43;
			b=16;
		}
		else if(al=='e'&&lc=='2')
		{
			a=43;
			b=14;
		}
		else if(al=='e'&&lc=='3')
		{
			a=43;
			b=12;
		}
		else if(al=='e'&&lc=='4')
		{
			a=43;
			b=10;
		}
		else if(al=='e'&&lc=='5')
		{
			a=43;
			b=8;
		}
		else if(al=='e'&&lc=='6')
		{
			a=43;
			b=6;
		}
		else if(al=='e'&&lc=='7')
		{
			a=43;
			b=4;
		}
		else if(al=='e'&&lc=='8')
		{
			a=43;
			b=2;
		}
		else if(al=='f'&&lc=='1')
		{
			a=48;
			b=16;
		}
		else if(al=='f'&&lc=='2')
		{
			a=48;
			b=14;
		}
		else if(al=='f'&&lc=='3')
		{
			a=48;
			b=12;
		}
		else if(al=='f'&&lc=='4')
		{
			a=48;
			b=10;
		}
		else if(al=='f'&&lc=='5')
		{
			a=48;
			b=8;
		}
		else if(al=='f'&&lc=='6')
		{
			a=48;
			b=6;
		}
		else if(al=='f'&&lc=='7')
		{
			a=48;
			b=4;
		}
		else if(al=='f'&&lc=='8')
		{
			a=48;
			b=2;
		}
		else if(al=='g'&&lc=='1')
		{
			a=53;
			b=16;
		}
		else if(al=='g'&&lc=='2')
		{
			a=53;
			b=14;
		}
		else if(al=='g'&&lc=='3')
		{
			a=53;
			b=12;
		}
		else if(al=='g'&&lc=='4')
		{
			a=53;
			b=10;
		}
		else if(al=='g'&&lc=='5')
		{
			a=53;
			b=8;
		}
		else if(al=='g'&&lc=='6')
		{
			a=53;
			b=6;
		}
		else if(al=='g'&&lc=='7')
		{
			a=53;
			b=4;
		}
		else if(al=='g'&&lc=='8')
		{
			a=53;
			b=2;
		}
		else if(al=='h'&&lc=='1')
		{
			a=58;
			b=16;
		}
		else if(al=='h'&&lc=='2')
		{
			a=58;
			b=14;
		}
		else if(al=='h'&&lc=='3')
		{
			a=58;
			b=12;
		}
		else if(al=='h'&&lc=='4')
		{
			a=58;
			b=10;
		}
		else if(al=='h'&&lc=='5')
		{
			a=58;
			b=8;
		}
		else if(al=='h'&&lc=='6')
		{
			a=58;
			b=6;
		}
		else if(al=='h'&&lc=='7')
		{
			a=58;
			b=4;
		}
		else if(al=='h'&&lc=='8')
		{
			a=58;
			b=2;
		}
		if(e2=='1')
		{
			if(cr1!=a&&rr1==b)
			{
			       if(cr1>a)
			       {
					for(i=cr1-5;i>=a;i-=5)
					{
						if(x[i][rr1]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(cr1<a)
				{
					for(i=cr1+5;i<=a;i+=5)
					{
						if(x[i][rr1]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cr1][rr1]=0;
				gotoxy(cr1,rr1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"R1";
				cr1=a;
				rr1=b;
				x[a][b]=1;
			}
			else if(cr1==a&&rr1!=b)
			{
				if(rr1>b)
				{
					for(i=rr1-2;i>=b;i-=2)
					{
						if(x[cr1][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(rr1<b)
				{
					for(i=rr1+2;i<=b;i+=2)
					{
						if(x[cr1][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cr1][rr1]=0;
				gotoxy(cr1,rr1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"R1";
				cr1=a;
				rr1=b;
				x[a][b]=1;
			}
		}
		if(e2=='2')
		{
			if(cr2!=a&&rr2==b)
			{
			       if(cr2>a)
			       {
					for(i=cr2-5;i>=a;i-=5)
					{
						if(x[i][rr2]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(cr2<a)
				{
					for(i=cr2+5;i<=a;i+=5)
					{
						if(x[i][rr2]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cr2][rr2]=0;
				gotoxy(cr2,rr2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"R2";
				cr2=a;
				rr2=b;
				x[cr2][rr2]=1;
			}
			else if(cr2==a&&rr2!=b)
			{
				if(rr2>b)
				{
					for(i=rr2-2;i>=b;i-=2)
					{
						if(x[cr2][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(rr2<b)
				{
					for(i=rr2+2;i<=b;i+=2)
					{
						if(x[cr2][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cr2][rr2]=0;
				gotoxy(cr2,rr2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"R2";
				cr2=a;
				rr2=b;
				x[cr2][rr2]=1;
			}

		}
	}
	else
	{
		gotoxy(10,22);
		cout<<"Illegal Move.";
	}
	getch();
	return;
}
void moveQ(char e2)
{
	char al,lc;
	int a,b,i,temp,temp1,temp2;
	gotoxy(10,21);
	cout<<"Enter target Location: ";
	al=getche();
	if(al==0)
	{
		help();
	}
	lc=getche();
	if(lc==0)
	{
		help();
	}
	if(e2=='1')
	{
		if(al=='a'&&lc=='1')
		{
			a=23;
			b=16;
		}
		else if(al=='a'&&lc=='2')
		{
			a=23;
			b=14;
		}
		else if(al=='a'&&lc=='3')
		{
			a=23;
			b=12;
		}
		else if(al=='a'&&lc=='4')
		{
			a=23;
			b=10;
		}
		else if(al=='a'&&lc=='5')
		{
			a=23;
			b=8;
		}
		else if(al=='a'&&lc=='6')
		{
			a=23;
			b=6;
		}
		else if(al=='a'&&lc=='7')
		{
			a=23;
			b=4;
		}
		else if(al=='a'&&lc=='8')
		{
			a=23;
			b=2;
		}
		else if(al=='b'&&lc=='1')
		{
			a=28;
			b=16;
		}
		else if(al=='b'&&lc=='2')
		{
			a=28;
			b=14;
		}
		else if(al=='b'&&lc=='3')
		{
			a=28;
			b=12;
		}
		else if(al=='b'&&lc=='4')
		{
			a=28;
			b=10;
		}
		else if(al=='b'&&lc=='5')
		{
			a=28;
			b=8;
		}
		else if(al=='b'&&lc=='6')
		{
			a=28;
			b=6;
		}
		else if(al=='b'&&lc=='7')
		{
			a=28;
			b=4;
		}
		else if(al=='b'&&lc=='8')
		{
			a=28;
			b=2;
		}
		else if(al=='c'&&lc=='1')
		{
			a=33;
			b=16;
		}
		else if(al=='c'&&lc=='2')
		{
			a=33;
			b=14;
		}
		else if(al=='c'&&lc=='3')
		{
			a=33;
			b=12;
		}
		else if(al=='c'&&lc=='4')
		{
			a=33;
			b=10;
		}
		else if(al=='c'&&lc=='5')
		{
			a=33;
			b=8;
		}
		else if(al=='c'&&lc=='6')
		{
			a=33;
			b=6;
		}
		else if(al=='c'&&lc=='7')
		{
			a=33;
			b=4;
		}
		else if(al=='c'&&lc=='8')
		{
			a=33;
			b=2;
		}
		else if(al=='d'&&lc=='1')
		{
			a=38;
			b=16;
		}
		else if(al=='d'&&lc=='2')
		{
			a=38;
			b=14;
		}
		else if(al=='d'&&lc=='3')
		{
			a=38;
			b=12;
		}
		else if(al=='d'&&lc=='4')
		{
			a=38;
			b=10;
		}
		else if(al=='d'&&lc=='5')
		{
			a=38;
			b=8;
		}
		else if(al=='d'&&lc=='6')
		{
			a=38;
			b=6;
		}
		else if(al=='d'&&lc=='7')
		{
			a=38;
			b=4;
		}
		else if(al=='d'&&lc=='8')
		{
			a=38;
			b=2;
		}
		if(al=='e'&&lc=='1')
		{
			a=43;
			b=16;
		}
		else if(al=='e'&&lc=='2')
		{
			a=43;
			b=14;
		}
		else if(al=='e'&&lc=='3')
		{
			a=43;
			b=12;
		}
		else if(al=='e'&&lc=='4')
		{
			a=43;
			b=10;
		}
		else if(al=='e'&&lc=='5')
		{
			a=43;
			b=8;
		}
		else if(al=='e'&&lc=='6')
		{
			a=43;
			b=6;
		}
		else if(al=='e'&&lc=='7')
		{
			a=43;
			b=4;
		}
		else if(al=='e'&&lc=='8')
		{
			a=43;
			b=2;
		}
		else if(al=='f'&&lc=='1')
		{
			a=48;
			b=16;
		}
		else if(al=='f'&&lc=='2')
		{
			a=48;
			b=14;
		}
		else if(al=='f'&&lc=='3')
		{
			a=48;
			b=12;
		}
		else if(al=='f'&&lc=='4')
		{
			a=48;
			b=10;
		}
		else if(al=='f'&&lc=='5')
		{
			a=48;
			b=8;
		}
		else if(al=='f'&&lc=='6')
		{
			a=48;
			b=6;
		}
		else if(al=='f'&&lc=='7')
		{
			a=48;
			b=4;
		}
		else if(al=='f'&&lc=='8')
		{
			a=48;
			b=2;
		}
		else if(al=='g'&&lc=='1')
		{
			a=53;
			b=16;
		}
		else if(al=='g'&&lc=='2')
		{
			a=53;
			b=14;
		}
		else if(al=='g'&&lc=='3')
		{
			a=53;
			b=12;
		}
		else if(al=='g'&&lc=='4')
		{
			a=53;
			b=10;
		}
		else if(al=='g'&&lc=='5')
		{
			a=53;
			b=8;
		}
		else if(al=='g'&&lc=='6')
		{
			a=53;
			b=6;
		}
		else if(al=='g'&&lc=='7')
		{
			a=53;
			b=4;
		}
		else if(al=='g'&&lc=='8')
		{
			a=53;
			b=2;
		}
		else if(al=='h'&&lc=='1')
		{
			a=58;
			b=16;
		}
		else if(al=='h'&&lc=='2')
		{
			a=58;
			b=14;
		}
		else if(al=='h'&&lc=='3')
		{
			a=58;
			b=12;
		}
		else if(al=='h'&&lc=='4')
		{
			a=58;
			b=10;
		}
		else if(al=='h'&&lc=='5')
		{
			a=58;
			b=8;
		}
		else if(al=='h'&&lc=='6')
		{
			a=58;
			b=6;
		}
		else if(al=='h'&&lc=='7')
		{
			a=58;
			b=4;
		}
		else if(al=='h'&&lc=='8')
		{
			a=58;
			b=2;
		}

		if(cq1!=a&&rq1==b)
		{
			       if(cq1>a)
			       {
					for(i=cq1-5;i>=a;i-=5)
					{
						if(x[i][rq1]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(cq1<a)
				{
					for(i=cq1+5;i<=a;i+=5)
					{
						if(x[i][rq1]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cq1][rq1]=0;
				gotoxy(cq1,rq1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"Q1";
				cq1=a;
				rq1=b;
				x[a][b]=1;
			}
			else if(cq1==a&&rq1!=b)
			{
				if(rq1>b)
				{
					for(i=rq1-2;i>=b;i-=2)
					{
						if(x[cq1][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				else if(rq1<b)
				{
					for(i=rq1+2;i<=b;i+=2)
					{
						if(x[cq1][i]==1)
						{
							gotoxy(10,22);
							cout<<"Illegal Move";
							return;
						}
					}
				}
				x[cq1][rq1]=0;
				gotoxy(cq1,rq1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"Q1";
				cq1=a;
				rq1=b;
				x[a][b]=1;
			}

		if(b<rq1)
		{
			temp1=(rq1-b)/2;
			if(a>cq1)
				temp2=cq1+(temp1*5);
			if(a<cq1)
				temp2=cq1-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cq1)
			{
				temp=cq1;
				for(i=rq1-2;i>=b;i-=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cq1)
			{
				temp=cq1;
				for(i=rq1-2;i>=b;i-=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}
			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cq1][rq1]=0;
			gotoxy(cq1,rq1);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"Q1";
			cq1=a;
			rq1=b;
			x[cq1][rq1]=1;
		}
		else if(b>rq1)
		{
			temp1=(b-rq1)/2;
			if(a>cq1)
				temp2=cq1+(temp1*5);
			if(a<cq1)
				temp2=cq1-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cq1)
			{
				temp=cq1;
				for(i=rq1+2;i<=b;i+=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cq1)
			{
				temp=cq1;
				for(i=rq1+2;i<=b;i+=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}
			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cq1][rq1]=0;
			gotoxy(cq1,rq1);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"Q1";
			cq1=a;
			rq1=b;
			x[cq1][rq1]=1;

		}
	}
	else
	{
		gotoxy(10,22);
		cout<<"Illegal Move";
	}
	getch();
	return;
}
void moveC(char e2)
{
	char al,lc;
	int a,b,i,temp1,temp2,temp;
	gotoxy(10,21);
	cout<<"Enter target Location: ";
	al=getche();
	if(al==0)
	{
		help();
	}
	lc=getche();
	if(lc==0)
	{
		help();
	}
	if(e2=='1'||e2=='2')
	{
		if(al=='a'&&lc=='1')
		{
			a=23;
			b=16;
		}
		else if(al=='a'&&lc=='2')
		{
			a=23;
			b=14;
		}
		else if(al=='a'&&lc=='3')
		{
			a=23;
			b=12;
		}
		else if(al=='a'&&lc=='4')
		{
			a=23;
			b=10;
		}
		else if(al=='a'&&lc=='5')
		{
			a=23;
			b=8;
		}
		else if(al=='a'&&lc=='6')
		{
			a=23;
			b=6;
		}
		else if(al=='a'&&lc=='7')
		{
			a=23;
			b=4;
		}
		else if(al=='a'&&lc=='8')
		{
			a=23;
			b=2;
		}
		else if(al=='b'&&lc=='1')
		{
			a=28;
			b=16;
		}
		else if(al=='b'&&lc=='2')
		{
			a=28;
			b=14;
		}
		else if(al=='b'&&lc=='3')
		{
			a=28;
			b=12;
		}
		else if(al=='b'&&lc=='4')
		{
			a=28;
			b=10;
		}
		else if(al=='b'&&lc=='5')
		{
			a=28;
			b=8;
		}
		else if(al=='b'&&lc=='6')
		{
			a=28;
			b=6;
		}
		else if(al=='b'&&lc=='7')
		{
			a=28;
			b=4;
		}
		else if(al=='b'&&lc=='8')
		{
			a=28;
			b=2;
		}
		else if(al=='c'&&lc=='1')
		{
			a=33;
			b=16;
		}
		else if(al=='c'&&lc=='2')
		{
			a=33;
			b=14;
		}
		else if(al=='c'&&lc=='3')
		{
			a=33;
			b=12;
		}
		else if(al=='c'&&lc=='4')
		{
			a=33;
			b=10;
		}
		else if(al=='c'&&lc=='5')
		{
			a=33;
			b=8;
		}
		else if(al=='c'&&lc=='6')
		{
			a=33;
			b=6;
		}
		else if(al=='c'&&lc=='7')
		{
			a=33;
			b=4;
		}
		else if(al=='c'&&lc=='8')
		{
			a=33;
			b=2;
		}
		else if(al=='d'&&lc=='1')
		{
			a=38;
			b=16;
		}
		else if(al=='d'&&lc=='2')
		{
			a=38;
			b=14;
		}
		else if(al=='d'&&lc=='3')
		{
			a=38;
			b=12;
		}
		else if(al=='d'&&lc=='4')
		{
			a=38;
			b=10;
		}
		else if(al=='d'&&lc=='5')
		{
			a=38;
			b=8;
		}
		else if(al=='d'&&lc=='6')
		{
			a=38;
			b=6;
		}
		else if(al=='d'&&lc=='7')
		{
			a=38;
			b=4;
		}
		else if(al=='d'&&lc=='8')
		{
			a=38;
			b=2;
		}
		if(al=='e'&&lc=='1')
		{
			a=43;
			b=16;
		}
		else if(al=='e'&&lc=='2')
		{
			a=43;
			b=14;
		}
		else if(al=='e'&&lc=='3')
		{
			a=43;
			b=12;
		}
		else if(al=='e'&&lc=='4')
		{
			a=43;
			b=10;
		}
		else if(al=='e'&&lc=='5')
		{
			a=43;
			b=8;
		}
		else if(al=='e'&&lc=='6')
		{
			a=43;
			b=6;
		}
		else if(al=='e'&&lc=='7')
		{
			a=43;
			b=4;
		}
		else if(al=='e'&&lc=='8')
		{
			a=43;
			b=2;
		}
		else if(al=='f'&&lc=='1')
		{
			a=48;
			b=16;
		}
		else if(al=='f'&&lc=='2')
		{
			a=48;
			b=14;
		}
		else if(al=='f'&&lc=='3')
		{
			a=48;
			b=12;
		}
		else if(al=='f'&&lc=='4')
		{
			a=48;
			b=10;
		}
		else if(al=='f'&&lc=='5')
		{
			a=48;
			b=8;
		}
		else if(al=='f'&&lc=='6')
		{
			a=48;
			b=6;
		}
		else if(al=='f'&&lc=='7')
		{
			a=48;
			b=4;
		}
		else if(al=='f'&&lc=='8')
		{
			a=48;
			b=2;
		}
		else if(al=='g'&&lc=='1')
		{
			a=53;
			b=16;
		}
		else if(al=='g'&&lc=='2')
		{
			a=53;
			b=14;
		}
		else if(al=='g'&&lc=='3')
		{
			a=53;
			b=12;
		}
		else if(al=='g'&&lc=='4')
		{
			a=53;
			b=10;
		}
		else if(al=='g'&&lc=='5')
		{
			a=53;
			b=8;
		}
		else if(al=='g'&&lc=='6')
		{
			a=53;
			b=6;
		}
		else if(al=='g'&&lc=='7')
		{
			a=53;
			b=4;
		}
		else if(al=='g'&&lc=='8')
		{
			a=53;
			b=2;
		}
		else if(al=='h'&&lc=='1')
		{
			a=58;
			b=16;
		}
		else if(al=='h'&&lc=='2')
		{
			a=58;
			b=14;
		}
		else if(al=='h'&&lc=='3')
		{
			a=58;
			b=12;
		}
		else if(al=='h'&&lc=='4')
		{
			a=58;
			b=10;
		}
		else if(al=='h'&&lc=='5')
		{
			a=58;
			b=8;
		}
		else if(al=='h'&&lc=='6')
		{
			a=58;
			b=6;
		}
		else if(al=='h'&&lc=='7')
		{
			a=58;
			b=4;
		}
		else if(al=='h'&&lc=='8')
		{
			a=58;
			b=2;
		}
	}
	if(e2=='1')
	{
		if(b<rc1)
		{
			temp1=(rc1-b)/2;
			if(a>cc1)
				temp2=cc1+(temp1*5);
			if(a<cc1)
				temp2=cc1-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cc1)
			{
				temp=cc1;
				for(i=rc1-2;i>=b;i-=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cc1)
			{
				temp=cc1;
				for(i=rc1-2;i>=b;i-=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}
			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cc1][rc1]=0;
			gotoxy(cc1,rc1);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"C1";
			cc1=a;
			rc1=b;
			x[cc1][rc1]=1;
		}
		else if(b>rc1)
		{
			temp1=(b-rc1)/2;
			if(a>cc1)
				temp2=cc1+(temp1*5);
			if(a<cc1)
				temp2=cc1-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cc1)
			{
				temp=cc1;
				for(i=rc1+2;i<=b;i+=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cc1)
			{
				temp=cc1;
				for(i=rc1+2;i<=b;i+=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}
			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cc1][rc1]=0;
			gotoxy(cc1,rc1);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"C1";
			cc1=a;
			rc1=b;
			x[cc1][rc1]=1;

		}
	}
	if(e2=='2')
	{
		if(b<rc2)
		{
			temp1=(rc2-b)/2;
			if(a>cc2)
				temp2=cc2+(temp1*5);
			if(a<cc2)
				temp2=cc2-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cc2)
			{
				temp=cc2;
				for(i=rc2-2;i>=b;i-=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cc2)
			{
				temp=cc2;
				for(i=rc2-2;i>=b;i-=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}

			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cc2][rc2]=0;
			gotoxy(cc2,rc2);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"C2";
			cc2=a;
			rc2=b;
			x[cc2][rc2]=1;
		}
		else if(b>rc2)
		{
			temp1=(b-rc2)/2;
			if(a>cc2)
				temp2=cc2+(temp1*5);
			if(a<cc2)
				temp2=cc2-(temp1*5);
			if(a!=temp2)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			if(a>cc2)
			{
				temp=cc2;
				for(i=rc2+2;i<=b;i+=2)
				{
					temp=temp+5;
					if(x[temp][i]==1)
					{
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					}
				}
			}
			if(a<cc2)
			{
				temp=cc2;
				for(i=rc2+2;i<=b;i+=2)
				{
					 temp=temp-5;
					 if(x[temp][i]==1)
					 {
						gotoxy(10,22);
						cout<<"Illegal Move";
						return;
					 }
				}
			}
			if(x[a][b]==1)
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
			x[cc2][rc2]=0;
			gotoxy(cc2,rc2);
			cout<<"  ";
			gotoxy(a,b);
			cout<<"C2";
			cc2=a;
			rc2=b;
			x[cc2][rc2]=1;
		}
	}
	return;
}
void moveN(char e2)
{
	char al,lc;
	int a,b,i;
	gotoxy(10,21);
	cout<<"Enter target Location: ";
	al=getche();
	if(al==0)
	{
		help();
	}
	lc=getche();
	if(lc==0)
	{
		help();
	}
	if(e2=='1'||e2=='2')
	{
		if(al=='a'&&lc=='1')
		{
			a=23;
			b=16;
		}
		else if(al=='a'&&lc=='2')
		{
			a=23;
			b=14;
		}
		else if(al=='a'&&lc=='3')
		{
			a=23;
			b=12;
		}
		else if(al=='a'&&lc=='4')
		{
			a=23;
			b=10;
		}
		else if(al=='a'&&lc=='5')
		{
			a=23;
			b=8;
		}
		else if(al=='a'&&lc=='6')
		{
			a=23;
			b=6;
		}
		else if(al=='a'&&lc=='7')
		{
			a=23;
			b=4;
		}
		else if(al=='a'&&lc=='8')
		{
			a=23;
			b=2;
		}
		else if(al=='b'&&lc=='1')
		{
			a=28;
			b=16;
		}
		else if(al=='b'&&lc=='2')
		{
			a=28;
			b=14;
		}
		else if(al=='b'&&lc=='3')
		{
			a=28;
			b=12;
		}
		else if(al=='b'&&lc=='4')
		{
			a=28;
			b=10;
		}
		else if(al=='b'&&lc=='5')
		{
			a=28;
			b=8;
		}
		else if(al=='b'&&lc=='6')
		{
			a=28;
			b=6;
		}
		else if(al=='b'&&lc=='7')
		{
			a=28;
			b=4;
		}
		else if(al=='b'&&lc=='8')
		{
			a=28;
			b=2;
		}
		else if(al=='c'&&lc=='1')
		{
			a=33;
			b=16;
		}
		else if(al=='c'&&lc=='2')
		{
			a=33;
			b=14;
		}
		else if(al=='c'&&lc=='3')
		{
			a=33;
			b=12;
		}
		else if(al=='c'&&lc=='4')
		{
			a=33;
			b=10;
		}
		else if(al=='c'&&lc=='5')
		{
			a=33;
			b=8;
		}
		else if(al=='c'&&lc=='6')
		{
			a=33;
			b=6;
		}
		else if(al=='c'&&lc=='7')
		{
			a=33;
			b=4;
		}
		else if(al=='c'&&lc=='8')
		{
			a=33;
			b=2;
		}
		else if(al=='d'&&lc=='1')
		{
			a=38;
			b=16;
		}
		else if(al=='d'&&lc=='2')
		{
			a=38;
			b=14;
		}
		else if(al=='d'&&lc=='3')
		{
			a=38;
			b=12;
		}
		else if(al=='d'&&lc=='4')
		{
			a=38;
			b=10;
		}
		else if(al=='d'&&lc=='5')
		{
			a=38;
			b=8;
		}
		else if(al=='d'&&lc=='6')
		{
			a=38;
			b=6;
		}
		else if(al=='d'&&lc=='7')
		{
			a=38;
			b=4;
		}
		else if(al=='d'&&lc=='8')
		{
			a=38;
			b=2;
		}
		if(al=='e'&&lc=='1')
		{
			a=43;
			b=16;
		}
		else if(al=='e'&&lc=='2')
		{
			a=43;
			b=14;
		}
		else if(al=='e'&&lc=='3')

		{
			a=43;
			b=12;
		}
		else if(al=='e'&&lc=='4')
		{
			a=43;
			b=10;
		}
		else if(al=='e'&&lc=='5')
		{
			a=43;
			b=8;
		}
		else if(al=='e'&&lc=='6')
		{
			a=43;
			b=6;
		}
		else if(al=='e'&&lc=='7')
		{
			a=43;
			b=4;
		}
		else if(al=='e'&&lc=='8')
		{
			a=43;
			b=2;
		}
		else if(al=='f'&&lc=='1')
		{
			a=48;
			b=16;
		}
		else if(al=='f'&&lc=='2')
		{
			a=48;
			b=14;
		}
		else if(al=='f'&&lc=='3')
		{
			a=48;
			b=12;
		}
		else if(al=='f'&&lc=='4')
		{
			a=48;
			b=10;
		}
		else if(al=='f'&&lc=='5')
		{
			a=48;
			b=8;
		}
		else if(al=='f'&&lc=='6')
		{
			a=48;
			b=6;
		}
		else if(al=='f'&&lc=='7')
		{
			a=48;
			b=4;
		}
		else if(al=='f'&&lc=='8')
		{
			a=48;
			b=2;
		}
		else if(al=='g'&&lc=='1')
		{
			a=53;
			b=16;
		}
		else if(al=='g'&&lc=='2')
		{
			a=53;
			b=14;
		}
		else if(al=='g'&&lc=='3')
		{
			a=53;
			b=12;
		}
		else if(al=='g'&&lc=='4')
		{
			a=53;
			b=10;
		}
		else if(al=='g'&&lc=='5')
		{
			a=53;
			b=8;
		}
		else if(al=='g'&&lc=='6')
		{
			a=53;
			b=6;
		}
		else if(al=='g'&&lc=='7')
		{
			a=53;
			b=4;
		}
		else if(al=='g'&&lc=='8')
		{
			a=53;
			b=2;
		}
		else if(al=='h'&&lc=='1')
		{
			a=58;
			b=16;
		}
		else if(al=='h'&&lc=='2')
		{
			a=58;
			b=14;
		}
		else if(al=='h'&&lc=='3')
		{
			a=58;
			b=12;
		}
		else if(al=='h'&&lc=='4')
		{
			a=58;
			b=10;
		}
		else if(al=='h'&&lc=='5')
		{
			a=58;
			b=8;
		}
		else if(al=='h'&&lc=='6')
		{
			a=58;
			b=6;
		}
		else if(al=='h'&&lc=='7')
		{
			a=58;
			b=4;
		}
		else if(al=='h'&&lc=='8')
		{
			a=58;
			b=2;
		}
	}
	if(e2=='1')
	{
		if(x[a][b]==1)
		{
			gotoxy(10,22);
			cout<<"Illegal move";
			return;
		}
		if(b==(rn1-4))
		{
			if((a==(cn1-5))||(a==(cn1+5)))
			{
				x[cn1][rn1]=0;
				gotoxy(cn1,rn1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N1";
				cn1=a;
				rn1=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(b==(rn1+4))
		{
			if((a==(cn1-5))||(a==(cn1+5)))
			{
				x[cn1][rn1]=0;
				gotoxy(cn1,rn1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N1";
				cn1=a;
				rn1=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(a==(cn1+10))
		{
			if((b==(rn1-2))||(b==(rn1+2)))
			{
				x[cn1][rn1]=0;
				gotoxy(cn1,rn1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N1";
				cn1=a;
				rn1=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(a==(cn1-10))
		{
			if((b==(rn1-2))||(b==(rn1+2)))
			{
				x[cn1][rn1]=0;
				gotoxy(cn1,rn1);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N1";
				cn1=a;
				rn1=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(x[a][b]==1)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}
	if(e2=='2')
	{
		if(x[a][b]==1)
		{
			gotoxy(10,22);
			cout<<"Illegal move";
			return;
		}
		if(b==(rn2-4))
		{
			if((a==(cn2-5))||(a==(cn2+5)))
			{
				x[cn2][rn2]=0;
				gotoxy(cn2,rn2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N2";
				cn2=a;
				rn2=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(b==(rn2+4))
		{
			if((a==(cn2-5))||(a==(cn2+5)))
			{
				x[cn2][rn2]=0;
				gotoxy(cn2,rn2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N2";
				cn2=a;
				rn2=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(a==(cn2+10))
		{
			if((b==(rn2-2))||(b==(rn2+2)))
			{
				x[cn2][rn2]=0;
				gotoxy(cn2,rn2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N2";
				cn2=a;
				rn2=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(a==(cn2-10))
		{
			if((b==(rn2-2))||(b==(rn2+2)))
			{
				x[cn2][rn2]=0;
				gotoxy(cn2,rn2);
				cout<<"  ";
				gotoxy(a,b);
				cout<<"N2";
				cn2=a;
				rn2=b;
				x[a][b]=1;
				return;
			}
			else
			{
				gotoxy(10,22);
				cout<<"Illegal Move";
				return;
			}
		}
		else if(x[a][b]==1)
		{
			gotoxy(10,22);
			cout<<"Illegal Move";
			return;
		}
	}

	getch();
	return;
}