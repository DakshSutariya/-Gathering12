#include<stdio.h>

fact(int num)
{
	if(num<=0)
	{
		return  1;
	}
	else
	{
		num=num*fact(num-1);
	}
	return num;
}
main()
{
	int n,ans;
	
	printf("enter number = ");
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("factoriyal = %d",ans);
	
	
}
