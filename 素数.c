#include <stdio.h>
int main()
{
	int x,i;
	int count=0;
	for(x=1;count<50;x++){
		for(i=2;i<x;i++){
			if(x%i==0)
			break; 
		}
		if(i==x){
			count++;
			printf("%d\t",x);
			if(count%5==0) printf("\n");
		} 
}
}
//����������ȹ�ϵ��������ȼ�����   //break �� continue������
//ѭ����Ƕ�� 
