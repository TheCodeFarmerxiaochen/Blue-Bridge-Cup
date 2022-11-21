#include<stdio.h>
int main(){
    int a,b,n;  
    printf("请输入共有多少颗树\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	a=(n-i)*2;
	b=(i-1)*2;
		if(a>b)printf("第%d颗灌木最高能长到%d厘米\n",i,a);
	else printf("第%d颗灌木最高能长到%d厘米\n",i,b);
	}
	return 0;
}
