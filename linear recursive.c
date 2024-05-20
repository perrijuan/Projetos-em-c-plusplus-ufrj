#include<stdio.h>

int linear(int base, int expp){
    if(expp==0){
        return 1;
    }else if(expp%2==0){
        int aux;
        aux=linear(base, expp/2);
        return aux*aux;
    }else{
        return base*linear(base, expp-1);
    }
}

int main(){
    int n=3;
    int x=62;
    int ans;
    ans=linear(n,x);
    printf("%d", ans);
    return 0;
}
