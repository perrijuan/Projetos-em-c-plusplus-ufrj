#include <bits/stdc++.h>
#include <boost/chrono.hpp>
using namespace std;
int main()
{
    int x;
    int n;
    cin>>x;
    cin>>n;
    double cont=0;
    double xy=pow(x,n);
    for(double i=0;i<xy;i++){
        
        cont++;
    
    }
    cout<<cont<<endl;
    return 0;
}
