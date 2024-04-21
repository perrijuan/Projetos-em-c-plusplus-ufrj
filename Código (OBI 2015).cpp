#include <iostream>
#include <string>
using namespace std;
//transformar string -> para partir em uma lista de 3
int main(){

    int n;
    string num;
    cin>>n;
    cin>>num;
    int ans=0;
    //remove os spacos da entrada q estava dando eroo
    cin.ignore();
    getline(cin, num);
    num.erase(remove(num.begin(), num.end(), ' '), num.end());
   for(int a=0;a<=n-3;a++){
       string bits = num.substr(a,3);
       if(bits=="100"){
           ans++;
       }
   }
       cout<<ans;

    return 0;
}
