#include<stdio.h>
int main(){
	int a,b,n,day;
	scanf("%d%d%d",&a,&b,&n);
	day = n/(a*5+b*2)*7;
	n = n%(a*5+b*2);
	if(n<a*5){
	day= day+ (n/a);
	   if(n%a!=0)day = day+ 1;
	}
	else{ day = day+ 5 +(n %(5*a))/b;
	if((n %(5*a))/b!=0)day=day+1;
	}
	printf("����Ҫ%d��ˢ�⡣",day);
	return 0;
}
