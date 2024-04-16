#include <iostream>
using namespace std;
int main()
{
   
    double x;
    float n;
    cin>>x;
    cin>>n;
    double cont=0;
     if(n < 0) {
            x = 1 / x;
        } 
     //usamos a função já pronta "labs", para achar o valor absoluto de x
       long num = n;
        
        double pow = 1;
        
        while(num){ 
            if(num & 1) { 
                pow *= x;
            }
            
            x *= x;
            num >>= 1;
        }
        
        for(double x=0;x<pow;x++){
            cont++;
        }
        
        cout<<cont<<endl;
        
        return 0;
    
}

