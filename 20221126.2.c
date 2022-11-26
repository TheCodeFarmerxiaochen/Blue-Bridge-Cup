#include<stdio.h>
int main(){
    int y;
    printf("请输入一个年份：(在1990-2050)\n");
    scanf("%d",&y);
    if (y%4==0&&y%100!=0||y%400==0)
        printf("yes");  
    else 
        printf("no");
        return 0;
     
}