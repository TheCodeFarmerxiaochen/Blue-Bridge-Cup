#include<stdio.h>
int main(){
int a[10];
for(int j=0;j<=9;j++){
a[j]= 2021;
}
for(int i=1;;i++){
	int count= i;
while(count!=0){
	int t= count%10;
	if(a[t]==0){
		printf("×î¶àÆ´µ½%d¡£\n",i-1);
		return 0;
	    }
	a[t]--;
	count= count/10;
    }
}
return 0;
}             
