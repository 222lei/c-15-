#include <stdio.h>
int main()
{
	int a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
//	p=(int)&i;//ǿ������ת����int 
    printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
    return 0;	
} 
//��ջ����д�������棬���4 
//��������Ԫ�ص�ַ��4 
