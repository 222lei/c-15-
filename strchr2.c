#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[])//ȡllo 
{
	char s[]="hello";
	char *p=strchr(s,'l');//��ע�����ַ� 
    char *t=(char*)malloc(strlen(p)+1);
    strcpy(t,p);
	printf("%s",t);
	free(t);
	return 0;
 } 
