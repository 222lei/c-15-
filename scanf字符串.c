//char a[]={'H','e','l','l','o','\0'}; '\0'��0��ͬ������'0'��ͬ�������c���Ե��ַ�������־�ַ����Ľ��� 
//char *s="hello"���治�ܸ��ģ������ģ�Ӧֱ�������鸳ֵ����char s[]="hello"

#include <stdio.h>
int main(void)
{
	char word[8];
	char word2[8];//��ĳЩ����£�����������ָ�룬Ҳ�����׵�ַ�����Բ���& 
	scanf("%7s",word);//scanf����һ�����ʣ�ֱ���ո񣬻س���tabΪֹ
	scanf("%7s",word2);
	printf("%s##%s##\n",word,word2); 
 } 
// char *string;
// scanf("%s",string);���ˣ�û�ж�string��ʼ��
//char a[100]="";���ַ�����a[0]=='\0' 
//char a[][10]���Ϊ10����ָ�����     char 8a[] ָ�����飬����ÿ������ָ�룬ָ���ַ��� 
