#include <stdio.h>
#include <string.h>
//int main(int arg,char const *argv[])
//{
//	char line[]="hello";
//	printf("strlen=%lu\n",strlen(line));//�ǲ���0�� 
//	printf("sizeof=%lu\n",sizeof(line));
//	return 0;
//}
int main(int arg,char const *argv[])
{
	char line[]="hello";
	printf("strlen=%lu\n",mylen(line));//�ǲ���0�� 
	printf("sizeof=%lu\n",sizeof(line));
	return 0;
}
int mylen(const char *s) 
{
	int cnt=0;
	int idx=0;
	while(s[cnt]!='\0'){
		cnt++;
		idx++;
	}
    return cnt;
}


