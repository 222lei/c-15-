#include <stdio.h>
void f(int *p);
void g(int i); 
int main(void)
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	return 0;	
}

void f(int *p)
{
	printf(" p=%p\n",p);
	printf(" *p=%d\n",*p);
	*p=26;	//实际是对i去做的 
}
void g(int i)
{
	printf("i=%d\n",i);
	}	

//指针就是保存地址的变量 ！！！！！！ 
