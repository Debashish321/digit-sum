#include<stdio.h>
main()
{
int sum=0,num,rem;
printf("Enter the number to show digit sum : ");
scanf("%d",&num);
while(num!=0)
{
	rem=num%10;
	sum+=rem;
	num=num/10;
}
printf("\nSum of digits is %d\n",sum);
return 0;
}
