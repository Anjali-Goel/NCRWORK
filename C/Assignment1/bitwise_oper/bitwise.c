#include<stdio.h>
main()
{
	int val = 0xcafe, val1, val2, val3, res;
	char exit;
	printf("\nINPUT VALUE : %X", val);
	val1 = 0xcafe & 0x000f;
	if (val1 > 7 && val1 < 15)
		printf("\nATLEAST 3 OF THE LAST 4 BITS ARE 1");
	else
		printf("\nLESS THAN 3 OF THE LAST 4 BITS ARE 1");
	val1 = val >> 8;
	val2 = val << 8;
	val3 = val2 & 0xff00;
	res = val1 + val3;
	printf("\nREVERSED BITS ARE : %X", res);
	val1 = val >> 4;
	val2 = val << 12;
	val3 = val2 & 0xf000;
	res = val1 + val3;
	printf("\nROTATED BITS : %X", res);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}