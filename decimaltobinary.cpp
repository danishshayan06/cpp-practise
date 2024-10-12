#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    
    int temp = n;
    int arr[100];
    int count = 0;
    
    while (temp>0)
    {
        arr[count] = temp%2;
        temp/=2;
        count++;
    }
    

    cout<<"Binary representation of "<<n<<" is ";
    for (int i = count-1; i >=0; i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}