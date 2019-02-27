/*Consider int val=0xCAFE; Write expressions using bitwise operators that do the
following:
a. test if atleast three of last four bits (LSB) are on
b. reverse the byte order (i.e., produce val=0xFECA)
c. rotate fourbits (i.e., produce val=0xECAF)*/
#include<stdio.h>
main()
{
	int val = 0xcafe, val1, val2, val3, res;
	char exit;
	printf("\nINPUT VALUE : %X", val);
	//TO CHECK IF THE LAST FOUR BITS ARE CONTAING 1'S
	val1 = 0xcafe & 0x000f;
	if (val1 > 7 && val1 < 15)
		printf("\nATLEAST 3 OF THE LAST 4 BITS ARE 1");
	else
		printf("\nLESS THAN 3 OF THE LAST 4 BITS ARE 1");
	//TO REVERSE THE BYTE ORDER
	val1 = val >> 8;
	val2 = val << 8;
	val3 = val2 & 0xff00;
	res = val1 + val3;
	printf("\nREVERSED BYTE ORDER ARE : %X", res);
	//ROTATED BITS ARE
	val1 = val >> 4;
	val2 = val << 12;
	val3 = val2 & 0xf000;
	res = val1 + val3;
	printf("\nROTATED BITS : %X", res);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}