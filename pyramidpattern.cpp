#include <iostream>

using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact ;
}
int combination(int a , int b){
    int comb = factorial(a)/(factorial(a-b)*factorial(b)) ;
    return comb;
}

int main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<"*";
        }
        for (int j = 1; j < i; j++)
        {
             cout<<"*";
        }
        
        
        cout<<endl;
    }
    
}