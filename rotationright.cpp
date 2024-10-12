#include <iostream>

using namespace std;

int main() {
    int n ;
    cout<<"Enter the size of array : ";
    cin>>n;
    int len[n] ;
    cout<<"Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>len[i];
    }
    int t;
    cout<<"Enter the units to rotate right : ";
    cin>>t;
    cout<<"Array before rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout<<len[i]<<" ";
    }cout<<endl;
    
    int temp[t] ;
    int k = t;
    for (int i = 0; i < t; i++)
    {
        temp[i] = len[i+t];
    }

    for (int i = 0; i < t; i++)
    {
    len[i+t] = len[i];
    }
    for (int i = 0; i < t; i++)
    {
        len[i]=temp[i] ;
    }
    
    cout<<"Rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<len[i]<<" ";
    }cout<<endl;
    
    return 0;
}