#include <stdio.h>

void main()
{
	int a, b;
	char c;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &c, &b);

	switch(c)
	{
	    case '+': printf("%d + %d = %d", a, b, a+b); break;
	    case '-': printf("%d - %d = %d", a, b, a-b); break;
	    case '*': printf("%d * %d = %d", a, b, a*b); break;
	    case '/': printf("%d / %d = %d", a, b, a/b); break;
	    case '%': printf("%d % %d = %d", a, b, a%b); break;
            default :printf("�����ڸ� �߸� �Է��߽��ϴ�.");
	}
}
