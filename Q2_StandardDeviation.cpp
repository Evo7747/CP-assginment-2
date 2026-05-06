#include <iostream>
#include <cmath>
using namespace std;

double stdev(double x[], int n)
{
    double sum = 0, mean, variance = 0;

    for(int i = 0; i < n; i++)
        sum += x[i];

    mean = sum / n;

    for(int i = 0; i < n; i++)
        variance += pow(x[i] - mean, 2);

    variance /= n;

    return sqrt(variance);
}

int main()
{
    double arr[5];

    cout << "Enter 5 numbers:\n";

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Standard Deviation = " << stdev(arr, 5);

    return 0;
}