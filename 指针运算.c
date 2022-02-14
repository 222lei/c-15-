#include <stdio.h>
int main()
{
	char ac[]={0,1,2,3,4,5,6,7,8,9};
	char *p=ac;//即指向ac数组的第一个表值的地址；等价于*p=&ac[0] 
	char *p1=&ac[5];//若是上行的情况，则不用加取地址符 
	printf("p  =%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%d\n",*(p+1));//*p->ac[0];  *(p+1)->ac[1] 
	printf("p1-p=%d\n",p1-p);//单元格差 
    int ai[]={3,1,2,3,4,5,6,7,8,9};
	int *q=ai;//即&ai[0] 
	int *q1=&ai[6];//变成数组特定变量需要加& 
	printf("q  =%p\n",q);
	printf("q1 =%p\n",q1);
	printf("q+1=%p\n",q+1);//sizeof(char)=1;sizeof(int)=4加一实际上加的是sizeof的东西，如果是int，则是差4，若是char. 则差 1。 
	printf("q1-q=%d\n",q1-q);//地址差除以sizeof  ，几单元格差 
	return 0; //不带*则是指针（即地址），否则是所指 
 } 
//*p++ 取出指针p所指的数据来，完事之后顺便把p移到下一个位置上去 
