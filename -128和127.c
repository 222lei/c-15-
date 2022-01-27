#include <stdio.h>
int main()
{
    unsigned char a=127;//如果是unsigned 则是 255加一等于0 
	a=a+1;
	printf("a=%u",a);
	return 0;
 } 
