#include <stdio.h>

void main()
{
	int a,b,c;
	int hap = 0;

	printf("�հ��� ���۰� ==> ");
	scanf(" %d",&a);
	printf("�հ��� ���� ==> ");
	scanf(" %d",&b);
	printf("��� ==> ");
	scanf(" %d",&c);

	for( ; a<=b; a++){
		if( a % c == 0){
			hap+=a;
		}
	}
			
	printf("%d���� %d������ %d����� �հ� ==> %d ",a ,b ,c, hap);
}
	

