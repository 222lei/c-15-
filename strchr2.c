#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[])//取llo 
{
	char s[]="hello";
	char *p=strchr(s,'l');//需注意是字符 
    char *t=(char*)malloc(strlen(p)+1);
    strcpy(t,p);
	printf("%s",t);
	free(t);
	return 0;
 } 
