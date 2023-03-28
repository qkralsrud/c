#include <stdio.h>

void main()
{
	int a;
	
	printf("년도를 입력하세요 : ");
	scanf("%d",&a);

	if(a % 4 == 0 && a % 100 !=0)
		printf("%d 년은 윤년 입니다", a);
	else
		printf("윤년이 아닙니다.");
}
