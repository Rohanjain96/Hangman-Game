#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void drawstickman(int a,int wordl)
{
int gd=DETECT,gm,x;
initgraph(&gd,&gm,"c:\\Turbo c3\\BGI");
x=wordl;
x=x+3;
switch(x)
{case 6:
{
switch(a)
{case 1:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
}
break;
case 2:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);
}
break;
case 3:
{line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);
line(25,170,35,160);
line(45,170,35,160);
}
}
}
break;
case 7:
{
switch(a)
{case 1:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
}
break;
case 2:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
}
break;
case 3:
{line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);
}
break;
case 4:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);
line(25,170,35,160);
line(45,170,35,160);
}
}
}
break;
case 8:
{
 switch(a)
{case 1:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
}
break;
case 2:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
}
break;
case 3:
{line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
}
break;
case 4:
{
line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);

}
break;
case 5:
{line(10,100,10,200);
line(10,100,60,100);
line(35,100,35,120);
line(10,125,20,100);
circle(35,125,5);
line(35,130,35,160);
line(25,150,35,140);
line(45,150,35,140);
line(25,170,35,160);
line(45,170,35,160);
}
}
}
}
return;
}
void play()
{
int b,enter,i,j,k,a=0;
char words3[][3]={"orb","cat","ate","act","got","bag","ten","put","sun","new","ash","ear"};
char words4[][4]={"boat","four","more","rush","cash","must","dust","cold","nose","blue","glue","tube"};
char words5[][5]={"smash","trash","touch","aside","aside","mouth","youth","cleft","clear","cleat","study","clerk"};
char copy[5],word;
char h[6]={ '_','_','_','_','_' };
clrscr();
printf("\n\n\n\n\n\n\n\n\n\t\t\t1:3 words");
printf("\n\t\t\t2:4 words");
printf("\n\t\t\t3:5 words");
printf("\n\t\t\tEnter your choice.....");
scanf("%d",&b);
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tloading.....");
delay(500);
printf("....");
delay(500);
clrscr();
switch(b)
{
    case 1:
{   randomize();
    i=(rand()%(12)+0);
for(j=0;j<3;j++)
 {
    enter=0;
    printf("\n\n\n\n\t\tGUESS THE LETTER:");
 printf("\n\n\n\n\n\n\n\n\n\n\n\t\t%c %c %c ",h[0],h[1],h[2]);
 printf("\n\t\tENTER LETTER:  ");
 word=getche();
 if(word>=41&&word<=90)
 word+=32;
    if(h[0]==word)
    {
    printf("\n\n\n\n\t\tNot again");
   j--;
   getch();
    }
    if(h[1]==word)
    {
    printf("\n\n\n\n\t\tNot again");
   j--;
    getch();
    }
  if(h[2]==word)
    {
   printf("\n\n\n\n\t\tNot again");
   j--;
    getch();
    }
  if(words3[i][0]==word)
   {
   enter=1;
   h[0]=word;
   }
 if(words3[i][1]==word)
   {
   enter=1;
   h[1]=word;
   }
 if(words3[i][2]==word)
   {
   enter=1;
   h[2]=word;
   }
 if(enter==1)
    {
    printf("\n\n\n\n\t\tGOOD! NEXT");
    getch();
    }

   else
   {
 printf("\n\n\n\n\t\tTRY AGAIN !");
 a++;
 j--;
 getch();
   }
    drawstickman(a,3);

   if(a==3)
 {
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t YOU LOSE!!");
 printf(" \n\t\t\tcorrect word is:");
 for(k=0;k<3;k++)
 {
 printf("%c",words3[i][k]);
 }
 return;
 }
 if(j==2)
 {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t YOU guess it correct!!");
 return;
 }
 }
}
break;
case 2:
{randomize();
i=(rand()%(12)+0);
for(j=0;j<4;j++)
 {
    enter=0;
    printf("\n\n\n\n\t\tGUESS THE LETTER:");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t%c %c %c %c",h[0],h[1],h[2],h[3]);
 printf("\n\t\tENTER LETTER:");
 word=getche();
 if(word>=41&&word<=90)
 word+=32;
    if(h[0]==word)
    {
    printf("\n\n\n\n\t\tNot again");
   j--;
   getch();
    }
    if(h[1]==word)
    {
    printf("\n\n\n\n\t\tNot again");
   j--;
    getch();
    }
  if(h[2]==word)
    {
	   printf("\n\n\n\n\t\tNot again");
   j--;
   getch();
    }
  if(h[3]==word)
    {
   printf("\n\n\n\n\t\tNot again");
   j--;
   getch();
    }
   if(words4[i][0]==word)
   {
   enter=1;
   h[0]=word;
   }
 if(words4[i][1]==word)
   {
   enter=1;
   h[1]=word;
   }
 if(words4[i][2]==word)
   {
   enter=1;
   h[2]=word;
   }
 if(words4[i][3]==word)
   {
   enter=1;
   h[3]=word;
   }
 if(enter==1)
    {
    printf("\n\n\n\n\t\tGOOD! NEXT");
     getch();
    }

   else
   {
 printf("\n\n\n\n\t\tTRY AGAIN !");
 a++;
 j--;
 getch();
 }
  drawstickman(a,4);
 if(a==4)
 {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t YOU LOSE!!!");
 printf("\n\t\t correct word is:");
  for(k=0;k<4;k++)
 {
 printf("%c",words4[i][k]);
 }
 return;}
 if(j==3)
 {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t YOU guess it correct!!");
 return;
 }
 }
 break;
 case 3:
 { randomize();
   i=(rand()%(12)+0);
for(j=0;j<5;j++)
 {
	enter=0;
	printf("\n\n\n\n\t\tGUESS THE LETTER:");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t%c %c %c %c %c",h[0],h[1],h[2],h[3],h[4]);
	printf("\n\t\tENTER LETTER: ");
	word=getche();
 if(word>=41&&word<=90)
	word+=32;
    if(h[0]==word)
    {
	printf("\n\n\n\n\t\tGOOD! NEXT");
	j--;
    }
    if(h[1]==word)
    {
	printf("\n\n\n\n\t\tNot again");
	j--;
    }
  if(h[2]==word)
    {
	printf("\n\n\n\n\t\tNot again");
	j--;
    }
  if(h[3]==word)
    {
	printf("\n\n\n\n\t\tNot again");
	j--;
    }
    if(h[4]==word)
    {
	printf("\n\n\n\n\t\tNot again");
	j--;
    }
   if(words5[i][0]==word)
   {
	enter=1;
	h[0]=word;
   }
 if(words5[i][1]==word)
   {
	enter=1;
	h[1]=word;
   }
 if(words5[i][2]==word)
   {
	enter=1;
	h[2]=word;
   }

 if(words5[i][3]==word)
   {
	enter=1;
	h[3]=word;
   }
  if(words5[i][4]==word)
   {
	enter=1;
	h[4]=word;
   }
 if(enter==1)
    {
	printf("\n\n\n\n\t\tGOOD! NEXT");
    }

   else
   {
	printf("\n\n\n\n\t\tTRY AGAIN !");
	a++;
	j--;
 }
 drawstickman(a,5);
 if(a==5)
 {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t YOU LOSE!!!");
 printf("\n\t\t correct word is:");
  for(k=0;k<5;k++)
 {
 printf("%c",words5[i][k]);
 }
 return;}
 if(j==4)
 {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t YOU guess it correct!!");
 return;
 }
 }
}
}

default:
printf("You have enter wrong choice!!!!");
getch();
play();
}
}
void instruction()
{clrscr();
printf("\n\n\n\n\t\t\tRULES");
printf("\n\n\t1:You have chances based on wordlengths(3/4/5)");
printf("\n\n\t2:To save man you have to guess correct alphabets and guess correct word");
printf("\n\n\t3:With every wrong guess chances get deduct and one part will be shown ");
printf("\n\n\t hanged");
}
void credits()
{clrscr();
printf("\n\n\n\n\n\n\n\t\t ROHAN JAIN(BTECH-COMPUTER SCIENCE)");
printf("\n\t\t HMRITM");

}
void main()
{int ch,i;
clrscr();
printf("\n\n\n\n\n\n\n\t\t\t\tHANGMAN");
printf("\n\n\n\n\t\t\t1:PLAY");
printf("\n\t\t\t2:INSTRUCTIONS");
printf("\n\t\t\t3:CREDITS");
printf("\n\t\t\t4:EXIT");
printf("\n\t\t\tENTER YOUR CHOICE.....");
scanf("%d",&ch);
switch(ch)
{case 1:
{
play();
}
break;
case 2:
{instruction();
}
break;
case 3:
{credits();
}
break;
case 4:
{
exit(0);
}
break;
default:printf("wrong choice!!!!");
}
getch();
}
