#include <stdio.h>
int main()
{
	char ac[]={0,1,2,3,4,5,6,7,8,9};
	char *p=ac;//��ָ��ac����ĵ�һ����ֵ�ĵ�ַ���ȼ���*p=&ac[0] 
	char *p1=&ac[5];//�������е���������ü�ȡ��ַ�� 
	printf("p  =%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%d\n",*(p+1));//*p->ac[0];  *(p+1)->ac[1] 
	printf("p1-p=%d\n",p1-p);//��Ԫ��� 
    int ai[]={3,1,2,3,4,5,6,7,8,9};
	int *q=ai;//��&ai[0] 
	int *q1=&ai[6];//��������ض�������Ҫ��& 
	printf("q  =%p\n",q);
	printf("q1 =%p\n",q1);
	printf("q+1=%p\n",q+1);//sizeof(char)=1;sizeof(int)=4��һʵ���ϼӵ���sizeof�Ķ����������int�����ǲ�4������char. ��� 1�� 
	printf("q1-q=%d\n",q1-q);//��ַ�����sizeof  ������Ԫ��� 
	return 0; //����*����ָ�루����ַ������������ָ 
 } 
//*p++ ȡ��ָ��p��ָ��������������֮��˳���p�Ƶ���һ��λ����ȥ 
