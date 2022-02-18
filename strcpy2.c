#include <stdio.h>
#include <string.h>
int main(){
    char dest[50] = { 0 };
    char src[50] = { "http://c.biancheng.net" };
    strcpy(dest, src);
    puts(dest);//putsÊä³ö×Ö·û´® 
    return 0;
}
