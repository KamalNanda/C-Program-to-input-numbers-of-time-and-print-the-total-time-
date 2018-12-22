#include<stdio.h>
#include<conio.h>
void main()
{
int i, n, min[20] , sec[20] , se[20] ,minute,second;
long int tsec =0 ,t, tse=0;
clrscr();
printf("How many times you want to enter time - ");
scanf("%d",&n);
for(i=0;i<n;i++)
 { printf("Enter minutes of %d time - ",i+1);
   scanf("%d",&min[i]);
   printf("Enter seconds of %d time - ",i+1);
   scanf("%d",&sec[i]);
 }
for(i=0;i<n;i++)
 {
   se[i] = min[i]*60 ;
 }

for(i=0;i<n;i++)
 {
   tsec = tsec + sec[i] ;
   tse = tse + se[i];
 }
 t= tsec + tse;
minute = t/60;
second= t%60;
printf("Total time = %d.%d",minute,second);
getch();

}