#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[])
{
	char s[]="hello";
	char *p=strchr(s,'l');//��ע�����ַ� 
	p=strchr(p+1,'l');
	printf("%s",p);
	return 0;
 } 
