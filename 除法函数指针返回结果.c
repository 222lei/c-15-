#include <stdio.h>
//��������ɹ�������1�����ɹ�������0��
int divide(int a,int b,int *result); 
int main()
{   int a=5,b=2,c;
    if(divide(a,b,&c)){
    	printf("a/b�Ľ����%d",c);
	}
 } 
int divide(int a,int b,int *result)//ָ��Ӧ�ó��������������������״̬��ָ�뷵������Ľ�� 
{
	int ret=1;
	if(b==0){
		ret=0;
	}else{
		*result=a/b;
	}
	return ret;
 } 
// int *p;
// *p=12;��ʹpָ��ָ����Ǹ�δ֪֮��װ��12 
