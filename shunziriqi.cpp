#include<stdio.h>
int main()
{
	int count=0,a[8];
a[0]=2;
a[1]=0;	
a[2]=2;
a[3]=2;
 for(int i=0;i<=1;i++){
	a[4]= i;
	for(int j=0;j<=9;j++){
		if(i==0&&j==0)continue;
		a[5]= j;
		for(int k=0;k<=3;k++){
			a[6]=k;
			for(int h=0;h<=9;h++){
				a[7]=h;
				if(k==0&&h==0)continue;
				for(int c=0;c<8;c++){
				if(a[c]!=0&&a[c+2]==a[c]+2&&a[c+1]==a[c]+1){
					count= count+1;
				}
				}
				
			}
		}
	}
}
printf("2022年共有%d个顺子日期。",count);
return 0;
}
