#include <stdio.h>
#include <string.h>

int main()
{
	printf("First issues for interview\n");

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = &a[1];
	int i;

	printf("p[6] = %d\n", p[6]);
	printf("sizeof(a) = %lu\n", sizeof(a));

	bzero( a, sizeof(a) );     /*set a[i] = 0*/
	memset(a, 0, sizeof(a));   /*set a[i] = 0*/

	for(i = 0 ; i < 10; i++ )
		printf("a[%d] = %d\n", i, a[i]);

	printf("executiong successfully\n");

	return 0;
}
