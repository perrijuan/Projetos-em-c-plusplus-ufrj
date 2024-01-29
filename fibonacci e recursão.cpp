

#include<stdio.h>
//#include<bits/stdc++.h>
  
int fib1(int entrada){
  //metodo otimizado de forma linear logo ele aceita n > 15 mas n vai pois o vetor está limitado para n "pequeno fora que estamos usando int "
   static int vet[16];
  int a=0;
  int b=1;
  //usamos a estrutura de decisão for 
  for(int y=0;y<entrada;y++){
      vet[y]=a+b;
    a=b;
    b=vet[y];
    
  }
  return b;
}

int fibowhile(int entrada){
  //metodo otimizado de forma linear o(n)
  int a=0;
  int b=1;
  int cont=0;
  while(cont<entrada){
    int aux=a+b;
    a=b;
    b=aux;
  
     cont++;
  }
   return b;
}
int fibodowhile(int entrada){
  // metodo otimizado de forma linear o(n)
 int a=0;
 int b=1;
 int aux;
 int cont=0;
 do{
  aux=a+b;
  a=b;
  b=aux;
  cont++;
 }while(cont<entrada);
 return b;
}

int tabela(int entrada){
        //armazena os daods nesse vetor estatico 
        //pois como o algoritimo é exponencial isso é uma forma de
        //limitar o algoritimo
        //o algoritimo é O(2^n) logo nao está otimizado
       static int vet[16]={0,1};

            if(entrada<2){
                return vet[entrada];
            }
            //armazenamos a recursão de fibonacci no vetor
            vet[entrada]=tabela(entrada-1)+tabela(entrada-2);
        //pós o armazenamento no vetor retornamos o valor
         return vet[entrada];
    }
    
    int main(){
        
         int y;
         printf("\nescolha 1 para fibonacci tabelar recursiva");
         printf("\nescolha 2 fibonacci usando for");
         printf("\nescolha 3 para fibonacci do-while");
         printf("\nescolha 4 para fibonacci usando while");
         //usando um switch case para escolher o metodo que voce vai usar para a sequencia de fibonacci
         scanf("%d", &y);
        switch (y) { 
          case 1:
          //usando uma estrutura de decisão para o usuario colocar sempre o valor correto
          //o programa não vai iniciar se o valor não estiver satisfazendo a variação de entradas suportadas
          do{
          printf("digite um valor entre 5 e 15");
          scanf("%d",&y);
          }while(y<5||y>15);
            for(int i=0;i<y;i++){
              printf("os numeros são:%d\n", fib1(i));
            }
            break;
          case 2:
          do{
          printf("digite um valor entre 5 e 15");
          scanf("%d",&y);
          }while(y<5||y>15);
            for(int i=0;i<y;i++){
              printf("os numeros são:%d\n", fibowhile(i));
            }
            break;
            case 3:
            do{
            printf("digite um valor entre 5 e 15");
            scanf("%d",&y);
            }while(y<5||y>15);
            for(int i=0;i<y;i++){
              printf("os numeros são:%d\n", fibodowhile(i));
            }
            break;
            case 4:
            do{
            printf("digite um valor entre 5 e 15");
            scanf("%d",&y);
            }while(y<5||y>15);
            for(int i=0;i<y;i++){
              printf("os numeros são:%d\n", tabela(i));
            }
            break;
        }
        return 0;
    }
