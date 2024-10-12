#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"Enter a decimal number : ";
    cin>>n;
    int octal[50];
    int temp=n;
    int count =0;
    while (temp>0)
    {
        octal[count]=temp%8;
        temp/=8;
        count++;
    }
    cout<<"Octal Representation of "<<n<<" is ";
    for (int i = count-1; i >= 0; i--)
    {
        cout<<octal[i];
    }
    cout<<endl;
    return 0;
}