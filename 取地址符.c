#include <stdio.h>
int main()
{
	int a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
//	p=(int)&i;//强制类型转换成int 
    printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
    return 0;	
} 
//堆栈，先写的在上面，相差4 
//相邻数组元素地址差4 
