#include <stdio.h>
int main()
{
	int a=0;
    unsigned int b=0; 
	while(++a>0);//��Ϊ�������һ���ɸ��ģ����Ǹ���������ѭ�������������� 
		printf("int����������������:%d\n",a-1); 
		while(++b!=0);//������++b,Ҫ��Ȼֱ���˳��� 
		//��Ϊunsigned�������һ����0 
		printf("unsigned int����������������:%u",b-1);//unsigned int ����%u����� 
		return 0;
 } 
 //�������������� 
