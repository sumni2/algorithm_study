#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, C, D, E;
	scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
	printf("%d", (A*A + B*B + C*C + D*D + E*E)%10);
	return 0;
}
