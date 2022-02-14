#include <stdio.h>
int main()
{
	char ac[]={0,1,2,3,4,5,6,7,8,9,-1};
	char *p=ac;
//	int i;
//	for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
//		printf("ac[i]==%d\n",ac[i]);
//	}
	while(*p!=-1){//必须是所指，所以是*p 
		printf("%d\n",*p);
		*p++;//*p++ 取出指针p所指的数据来，完事之后顺便把p移到下一个位置上去 
	}
	return 0;
 } 
