#include<iostream>
#include<bitset>
#include <sys/select.h>
//projeto de alu de 4 bits  - 2023/29/12
 
using namespace std;

bitset<4>addbit(bitset<4>a, bitset<4>b){
//vamos adicionar a parte de soma de bit a bit precisa ser manual pois o bitset não faz operaçoes artimeticas 
  bitset<4>result;

  //carry é o "vai-um" fundamental para a operação bit a bit 
    unsigned int carry=0;

    //soma bit a bit para cada posição y
      for(int y=0;y<4;y++){
      result[y]=a[y]^b[y]^carry;
      //atualizando o valor do carry 
      carry=(a[y]&b[y])|((a[y]^b[y])&carry);
  
        }
      //define i bit com o valor mais significativo como o carry
      result[4]=carry;
      return result;
    }
//subtração de dois bits sets usando XOR
bitset<4>subbit(bitset<4>x,bitset<4>z){
  
  bitset<4>result;
  for(int i=0;i<4;i++){
    result[i]=x[i]^z[i];


  }
//pegamos o bit mais significativo novamente
    return result;
}
bitset<4>multiply(bitset<4>t, bitset<4>u){
  //a saida com o tamanho em bit do produto 
  bitset<4>result;
   //loop com cada bit de x 
    for(int i=0;i<4;i++){
      //caso o bit de x seja 1
        if(t[i]){
          //loop com cada bit de y
          for(int j=0;j<4;j++){
            //caso o bit seja 1
            if(u[j]){
              //seta o bit correspondente ao resultado
              result[i+j]=1;
             }
           }
         }
       }
    return result;
    } 

//fazer a função de divisão em binarios..... 

int main(){
  int bit1,bit2;
  //pega dois numeros interos e converte em binarios de 4 bits para fazer as operaçoes
  cin>>bit1;
  cin>>bit2;

  bitset<4>add(bit1);
  bitset<4>add2(bit2);

  
  
  //exibe na tela os numeros em base decimal 
  //cout<<add<<add.to_ulong()<<endl;
  //cout<<add2<<add.to_ulong()<<endl;
  
  cout<<"qual das operações o deseja que o processador faça ?"<<endl;
  cout<<"1 - operação logica XOR"<<endl;
  cout<<"2 - operação logica AND"<<endl;
  cout<<"3 - operação logica OR"<<endl;
  cout<<"4 - operação de soma"<<endl;
  cout<<"5 - operação de subtração"<<endl;
  cout<<"6 - operação de multiplicação"<<endl;
  int select;
  bitset<4>sumbit=addbit(bit1,bit2);
  bitset<4>subtrabit=subbit(bit1, bit2);
  bitset<4>multibit=multiply(bit1, bit2);
  cin>>select;

  if(select==1){
  //operação logica XOR
  bitset<4>xorbit=add^add2;
  cout<<"XOR logico:"<<xorbit<<endl;
  
  }else if(select==2){
  //operação logica AND
  bitset<4>andbit=add&add2;
  cout<<andbit<<"AND logico"<<andbit.to_ulong()<<endl;
  }else if(select==3){
  //operação logica OR
  bitset<4>orbit=add|add2;
  cout<<orbit<<"OR logico em binario"<<orbit.to_ulong()<<endl;
  }else if(select==4){
  cout<<sumbit<<"valor em decimal é:"<<sumbit.to_ulong()<<endl;
  }else if(select==5){
  cout<<subtrabit<<"valor em decimal é:"<<subtrabit.to_ulong()<<endl;
  }else if(select==6){
  cout<<multibit<<"valor em decimal é:"<<multibit.to_ulong()<<endl;
  }
  
  return 0;

}
