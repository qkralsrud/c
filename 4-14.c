#include <stdio.h>

void main()
{
	int a;
	
	printf("�⵵�� �Է��ϼ��� : ");
	scanf("%d",&a);

	if(a % 4 == 0 && a % 100 !=0)
		printf("%d ���� ���� �Դϴ�", a);
	else
		printf("������ �ƴմϴ�.");
}
