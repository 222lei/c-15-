#include <stdio.h>

int main() {
    int month = 0;
    char *months[] = {"January","February","March","Arpil","May","June","July",
    "August","September","October","November","December"};//char *months[]ָ�����飬����ÿ��Ԫ�ض���ָ�룬ָ���ַ��� 
    scanf("%d",&month);//char a[][10] ���Σ����Ϊ10����ָ�� 
    if(month > 0 && month < 13)printf("%s",months[month-1]);
    else printf("No such month.");
    return 0;
}
