#include<stdio.h>
int main(){
    int a,b,n;  
    printf("�����빲�ж��ٿ���\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	a=(n-i)*2;
	b=(i-1)*2;
		if(a>b)printf("��%d�Ź�ľ����ܳ���%d����\n",i,a);
	else printf("��%d�Ź�ľ����ܳ���%d����\n",i,b);
	}
	return 0;
}
