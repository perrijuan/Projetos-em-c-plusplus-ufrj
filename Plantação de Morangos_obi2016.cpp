#include <stdio.h>

int main()
{
   int a,b,c,d;
   scanf("%d%d", &a,&b);
   scanf("%d%d", &c,&d);
   
   int ans=a*b;
   int ans2=c*d;
   
   if(ans>ans2){
       printf("%d", ans);
   }else{
       printf("%d", ans2);
   }

    return 0;
}
