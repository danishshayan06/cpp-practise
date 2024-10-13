#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int arrA[10];
    int arrB[10];
    int arrC[10];
    int indexC = 0;
    for (int i = 0; i < 10; i++)
    {
        arrA[i] = rand() % 100 + 1;
        arrB[i] = rand() % 100 + 1;
    }

    cout << "ARRAY A IS : { ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrA[i] << " ";
    }
    cout << "}" << endl;
    cout << "ARRAY B IS : { ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrB[i] << " ";
    }
    cout << "}" << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {

            if (arrA[j] > arrA[j + 1])
            {
                int t = arrA[j + 1];
                arrA[j + 1] = arrA[j];
                arrA[j] = t;
            }
            if (arrB[j] > arrB[j + 1])
            {
                int t = arrB[j + 1];
                arrB[j + 1] = arrB[j];
                arrB[j] = t;
            }
        }
    }

    cout << "ARRAY A after sorting IS : { ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrA[i] << " ";
    }
    cout << "}" << endl;
    cout << "ARRAY B after sorting IS : { ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrB[i] << " ";
    }
    cout << "}" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (arrA[i] == arrB[j])
            {
                bool isunique = true;
                for (int l = 0; l < indexC; l++)
                {
                    if (arrC[l] == arrA[i])
                    {
                        isunique = false;
                        break;
                    }
                }
                if (isunique)
                {
                    arrC[indexC++] = arrA[i];
                }
            }
        }
    }
    cout << "Intersection of Array A and Array B is { ";
    for (int i = 0; i < indexC; i++)
    {
        cout << arrC[i] << " ";
    }
    cout << "}" << endl;
}