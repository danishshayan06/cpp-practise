#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        arr[i] = rand() % 100 + 1; // generate a random number between 1 and 100
    }
    cout<<"Array before sorting : ";
    for (int i = 0; i < 15; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 14 ; i++)
    {
        for (int j = 0; j < 14-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int t = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= t;
            }
            
        }
        
    }
    cout <<"Array after sorting in asc : " ;
    for (int i = 0; i < 15; i++)
    {     
        cout << arr[i] << " ";
    }
    cout<<endl;
     for (int i = 0; i < 14 ; i++)
    {
        for (int j = 0; j < 14-i; j++)
        {
            if (arr[j]<arr[j+1])
            {
                int t = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= t;
            }
            
        }
        
    }
    cout <<"Array after sorting in dsc : " ;
    for (int i = 0; i < 15; i++)
    {     
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}
