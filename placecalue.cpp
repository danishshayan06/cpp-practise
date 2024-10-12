#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a 6 digit number : ";
    cin >> n;
    int power = 1;
    if (n > 99999 && n < 1000000)
    {
        int temp = n;
        int arr[6];
        for (int i = 0; i < 6; i++, temp /= 10)
        {
            arr[i] = temp % 10;
        }
        int placevalue;
        cout << "Enter the place value : ";
        cin >> placevalue;

        if (placevalue == arr[0])
        {
            cout << "Units"<<endl;
        }
        else if (placevalue == arr[1])
        {
            cout<<"Tens"<<endl;
        }
        else if (placevalue == arr[2])
        {
            cout<<"Hundreds"<<endl;
        }
        else if (placevalue == arr[3])
        {
            cout<<"Thousands"<<endl;
        }
        else if (placevalue == arr[4])
        {
            cout<<"Ten Thousands"<<endl;
        }
        else if (placevalue == arr[5])
        {
            cout<<"Hundred Thousands"<<endl;
        }
        else{
            cout<<"Invalid place value"<<endl;
        }

       
    }
    else
    {
        cout << "you didn't entered six digit number " << endl;
    }

    return 0;
}