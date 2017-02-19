#include<stdio.h>
main()
{
int i,j,n;
printf("enter a num to check prime or not:");
scanf("%i",&n);
j=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
		j++;
}
if(j==2)
printf("this is prime\n");
else
printf("not prime\n");
}
