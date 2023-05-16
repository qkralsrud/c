#include <stdio.h>

void main()
{
	int a,b;

	
	printf("a 값 입력 : ");
	scanf("%d",&a);

	printf("b 값 입력 : ");
	scanf("%d", &b);

	int *p1 ;
	int *p2 ;

	p1 = &a;
	p2 = &b;

	int tmp;
	
	tmp = *p1;	
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a 는 %d, b 는 %d ", a, b);
}



