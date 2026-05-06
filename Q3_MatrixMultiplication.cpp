#include <iostream>
using namespace std;

void GetValue(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];
}

void ComputeAxA(int a[3][3], int b[3][3], int result[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

void PrintArray(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}

int main()
{
    int a[3][3], b[3][3], result[3][3];

    cout << "Enter Matrix A:\n";
    GetValue(a);

    cout << "Enter Matrix B:\n";
    GetValue(b);

    ComputeAxA(a, b, result);

    cout << "Result:\n";
    PrintArray(result);

    return 0;
}