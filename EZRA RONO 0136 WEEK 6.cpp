#include <iostream>
using namespace std;

int main()
{
    int numbers[20];
    int odd[20], even[20];
    int oddCount = 0, evenCount = 0;

    cout << "Enter 20 integers between 1 and 100:\n";
    for (int i = 0; i < 20; i++)
    {
        cin >> numbers[i];

        if (numbers[i] % 2 == 0)
            even[evenCount++] = numbers[i];
        else
            odd[oddCount++] = numbers[i];
    }

    cout << "\nEven numbers:\n";
    for (int i = 0; i < evenCount; i++)
        cout << even[i] << " ";

    cout << "\n\nOdd numbers:\n";
    for (int i = 0; i < oddCount; i++)
        cout << odd[i] << " ";

    return 0;
}