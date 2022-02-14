#include <stdio.h>
#include <stdlib.h>//malloc必备 
int main(void)
{
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024))){//100兆 
	     cnt++; 	
	}
	printf("用了%d00兆",cnt);
 } 
 //1.free必须返回初地址，如果P++后再free(p),则是错误的   2.*p=&i   free(p)同样是错误的 
