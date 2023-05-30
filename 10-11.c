#include <stdio.h>

void gugu(int a)
{
	int i;
	for(i=1;i<10;i++)
	{
		printf(" %d X %d = %d\n",a,i,a*i);
	}
	
}

void main()
{
	int a;

	printf("출력하고 싶은 단 입력 : ");
	scanf("%d",&a);
	gugu(a);
}
