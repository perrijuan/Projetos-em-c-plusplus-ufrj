#include <stdio.h>

//mdc de forma recursiva 

long mdc(long a, long b){
    if(a==0) return b;
    return mdc(b%a, a);
}


int main()
{
    //quantidade de n
   long a,num, resultado,ans,n;
   //quantidade de n 
   scanf("%ld", &n);
   
   //faz a chamada n vezes para usando a propriedade de mdc(a,b(c)), sendo o c o novo valor 
   for(int q=0;q<n;q++){
       scanf("%ld", &num);
       resultado=mdc(resultado,num);
       
   }
   
   printf("%ld", resultado);
    return 0;
}
