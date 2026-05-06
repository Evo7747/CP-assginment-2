#include <iostream>
using namespace std;

void getExtremes(float& min, float& max, float a[], int n)
{
    min = a[0];
    max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }
}

int main()
{
    float arr[5], min, max;

    cout << "Enter 5 numbers:\n";

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    getExtremes(min, max, arr, 5);

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;

    return 0;
}