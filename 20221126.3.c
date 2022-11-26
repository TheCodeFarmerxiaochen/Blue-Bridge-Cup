#include<stdio.h>
int pow(int x,int y){
    int z=x;
    if (x==1)
    return 1;
    if (y==0)
    {
    z=1;
    return z;    
    }
    
    while (y!=1)
    {
      z=z*x;
      y--;
    }
    return z;
}

int main (){
    int x=5;
    int y;
    int m=0;
    for (int  i = 0; i <32; i++)
    {   int n=x;  y=i;
        while(n!=0)       
        {int b=n-1;
            m=y/pow(2,b);
        printf("%d",m);
         y=y%pow(2,b);
           n--;
        }
        printf("\n");

    }
    return 0;
    
}
