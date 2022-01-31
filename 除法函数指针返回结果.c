#include <stdio.h>
//如果除法成功，返回1，不成功，返回0；
int divide(int a,int b,int *result); 
int main()
{   int a=5,b=2,c;
    if(divide(a,b,&c)){
    	printf("a/b的结果是%d",c);
	}
 } 
int divide(int a,int b,int *result)//指针应用场景二：函数返回运算的状态，指针返回运算的结果 
{
	int ret=1;
	if(b==0){
		ret=0;
	}else{
		*result=a/b;
	}
	return ret;
 } 
// int *p;
// *p=12;会使p指针指向的那个未知之地装上12 
