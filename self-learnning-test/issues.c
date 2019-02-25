#include <stdio.h>
#include <string.h>

int main()
{
	printf("First issues for interview\n");

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = &a[1];
	int i;
	int d;

	printf("p[6] = %d\n", p[6]);
	printf("sizeof(a) = %lu\n", sizeof(a));

	bzero( a, sizeof(a) );     /*set a[i] = 0*/
	//memset(a, 0, sizeof(a));   /*set a[i] = 0*/

	for(i = 0 ; i < 10; i++ )

		printf("a[%d] = %d\n", i, a[i]);
	char *str[] = {"ab" , "cd" , "ef" , "gh" , "ij"};
	char *t;
	t = (str+4)[-1];
	printf("t = %s\n", t);

	char c = 0x80;
	d = c;
	printf("d = %d\n", d);
	if ( i < 0) {
		printf("return 1\n");
	} else {
		printf("return 2\n");
	}

	printf("executiong successfully\n");

	return 0;
}
