#include <iostream>
#include <algorithm>
using namespace std;

double mean(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    return (double)sum / n;
}

double median(int arr[], int n)
{
    sort(arr, arr + n);

    if(n % 2 == 0)
        return (arr[n/2] + arr[(n/2)-1]) / 2.0;

    return arr[n/2];
}

int mode(int arr[], int n)
{
    int mode = arr[0], maxCount = 0;

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main()
{
    int arr[5];

    cout << "Enter 5 numbers:\n";

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Mean = " << mean(arr, 5) << endl;
    cout << "Median = " << median(arr, 5) << endl;
    cout << "Mode = " << mode(arr, 5) << endl;

    return 0;
}