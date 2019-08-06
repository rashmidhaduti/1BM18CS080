#include<stdio.h>
#include<conio.h>
int main()
{
struct marks
   {
   int m1;
   int m2;
   int m3;
   }
   struct student
   {
   char name [30];
   char usn [30];
   int marks ,m;
   }s1;
   clrscr();
   printf("\n enter student name");
   scanf("%s",s1);
   printf("\n enter student usn");
   scanf("%s",s1);
   printf("\n enter marks of three subjects");
   scanf("%d %d %d",s1.m.m1,s1.m.m2,s1.m.m3);
   printf("\n\n student information");
   printf("\n name:%s",s1);
   printf("\n usn:%s",s1);
   printf("\n marks of three subject:%d %d %d",s1.m.m1,s1.m.m2,s1.m.m3);
   getch();
   return 0;
   }

