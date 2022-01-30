#include <stdio.h>
int search(int key,int a[],int length);
int main()
{
    int a[]={5,8,9,16,32,66,7,6,1,2,3,10,11}; 
    int x;
	int log;
	printf("请输入一个数字:");
	scanf("%d",&x);
	log=search(x,a,sizeof(a)/sizeof(a[0]));//不能是a[],只能是a 
	if(log!=-1){
		printf("%d是第%d个\n",x,log);
	} else{
		printf("不存在"); 
	} 
	return 0;
 }
 int search(int key,int a[],int length)
 {   int ret=-1;
     int i;
 	for(i=0;i<length;i++){
 		if(a[i]==key){
 			ret=i+1;
 			break;
		 }
	 }return ret;
 }
 //sizeof是字节数。sizeof(a)/sizeof(a[0])永远是数组长度
 //数组变量本身不能被赋值，必须遍历获得 
 //数组座位参数时，必须用另一个参数来传递数组的长度。不能再用a[?]和sizeof来表示 
