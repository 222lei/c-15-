#include <stdio.h>
int main()
{
	int i=0;
	int p;
//	p=(int)&i;//强制类型转换成int 
    printf("%p\n",&i);
	printf("%p\n",&p);
    return 0;	
} 
//堆栈，先写的在上面，相差4 
