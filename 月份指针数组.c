#include <stdio.h>

int main() {
    int month = 0;
    char *months[] = {"January","February","March","Arpil","May","June","July",
    "August","September","October","November","December"};//char *months[]指针数组，数组每个元素都是指针，指向字符串 
    scanf("%d",&month);//char a[][10] 矩形，跨度为10的行指针 
    if(month > 0 && month < 13)printf("%s",months[month-1]);
    else printf("No such month.");
    return 0;
}
