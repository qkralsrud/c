#include <stdio.h>

void main()
{
	FILE *wfp;
	int i,k;

	wfp = fopen("c:\\c_study\\gugu.txt","w");

	for(k=2;k<10;k++)
	{
		fprintf(wfp," #Á¦%d´Ü# \t ",k);
	}
		fprintf(wfp,"\n\n");



	for(i=1;i<10;i++)
	{
		for(k=2;k<10;k++)
		{
			fprintf(wfp," %d X %d = %d\t ",k,i,k*i);
		}
		fprintf(wfp,"\n");
	}

	fclose(wfp);
}
