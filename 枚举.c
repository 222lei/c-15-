//enum color {red,yellow,green,numcolors};0 1 2依次递增  小套路自动计数 
//void f(enum color c);
//但是实际上是以整数来输入输出的 
#include <stdio.h> 
enum color {red,yellow,green,numcolors};
int main(int argc,char const *argv[])
{
	int color=-1;
	char *cn[numcolors]={"red","yellow","green"};
	char *colorname=NULL;
	printf("请输入你喜欢的颜色的代码；");
	scanf("%d",&color); 
	if(color>=0&&color<numcolors){
		colorname=cn[color];
	}else{colorname="unknown";
}
    printf("你喜欢的颜色是%s",colorname);	
    return 0;	
}


