#include <stdio.h>
#include <string.h>
char *mcpy(char *dst,const char *src)
{
//	int idx=0;//������ʽ 
//	while(src[idx]!='\0'){
//		dst[idx]=src[idx];
//		idx++;
//	}dst[idx]='\0';
//	return dst;//��󷵻�ָ�룬ָ������׵�ַ
    char *rest=dst; 
    while(*src!='\0'){
    	*dst=*src;
    	dst++;
    	src++;
	}*dst='\0';
	return rest; //Ҫ�ľ���dst����ĵ�ַ������Ϊ��;��ı�ָ��dst��ֵ ���������ʼ�Ҹ�ָ��ָ��ָ��dst�ĳ���ַ 
}
int main(int argc,char const *argv[])//strcpy�����ص�������  char *dst=(char*)malloc(strlen(src)+1);  strcpy(dst,src)
{
	char s1[]="    ";
	char s2[]="abc";
	mcpy(s1,s2);
	printf("%s",s1);
	return 0; 
}
