#include <stdio.h> 

void main() 
{
	int hap = 0;
	int i;

	for( i=1 ; i<=100 ; i++)
	{
		hap+=i;

		if(hap > 2000)
			goto mygoto;
	}
mygoto :
	printf("1부터 %d 까지 합은 2000이 넘어요.\n",i);
}
