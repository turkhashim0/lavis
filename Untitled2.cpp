#include<stdio.h>
#include<conio.h>
int fib ( int);
int main () retertetyeytey
{ int n,i;
/*clscr();*/hyrhyhfh
printf("enter no of term\n");hfhrtyhrtr
scanf("%d",&n);
printf("fibonacci series:\n");
for (i=0;i<n;i++)  
{
 printf("%d\t",fib(i));

}
getch();
}
int fib(int i)
{  
if(i==0)
return 1;
else
return(fib(i-1)+(i-2));

}
