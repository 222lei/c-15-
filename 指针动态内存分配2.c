#include <stdio.h>
#include <stdlib.h>//malloc�ر� 
int main(void)
{
	void *p;
	int cnt=0;
	while((p=malloc(100*1024*1024))){//100�� 
	     cnt++; 	
	}
	printf("����%d00��",cnt);
 } 
 //1.free���뷵�س���ַ�����P++����free(p),���Ǵ����   2.*p=&i   free(p)ͬ���Ǵ���� 
