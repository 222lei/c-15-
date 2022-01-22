#include <stdio.h>
int main()
{
	float foot;
	float inch;
	printf("请输入身高的英尺和英寸:");
	scanf("%f %f",&foot,&inch);
	printf("身高是%f米",(foot+inch/12)*0.3048);
	return 0;
	
}
//标点符号,  ;      整型和浮点型搞在一起会变成浮点型 
