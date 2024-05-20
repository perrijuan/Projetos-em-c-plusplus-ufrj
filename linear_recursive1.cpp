#include <stdio.h>

 int linear(int a, int b){
     if(a==0){
         return 1;
     }else{
         return b * linear(a-1, b);
     }
 }

int main()
{
    int n=7;
    int x=7654;
    
    int ans;
    ans=linear(n,x);
    printf("%d", ans);
};
 
