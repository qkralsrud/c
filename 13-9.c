#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student{
		char name[10];
		int age;
	};

	struct student *p;
	int num;

	printf("�Է��� �л� �� : ");
	scanf("%d",&num);

	p = (struct student*) malloc(sizeof(struct student) * num);

	for(int i = 0; i < num; i++){
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d",(p + i)->name , &(p + i)->age);
	}

	printf("\n---�л� ���  ---\n");
	
	for(int i = 0; i < num; i++){
		printf("�̸� : %s ,���� : %d\n", (p + i)->name, (p + i)->age);
	}

	free(p);
}

	
