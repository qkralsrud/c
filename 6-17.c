#include <stdio.h>

void main()
{
	int i , k, g;
	
	for(i = 2 ; i<=9; i++){
		printf(" #Á¦%d´Ü# \t",i);
	}
	printf("\n");
	for( k = 1; k<=9 ; k++){
		for(g = 2; g <= 9; g++)
			printf("%d X %d = %d\t",g , k, g*k);
	}
	printf("\n");
}


