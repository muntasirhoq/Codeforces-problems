#include<stdio.h>

 int main()
 {
     int test,i,componentX=0,componentY=0,componentZ=0,a,b,c;
     scanf("%d",&test);

     while(test--)
     {
         scanf("%d %d %d",&a,&b,&c);
         componentX+=a;
         componentY+=b;
         componentZ+=c;
     }

     if(componentX==0 && componentY==0 && componentZ==0)
        printf("YES\n");
    else
        printf("NO\n");

     return 0;
 }
