#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < length; i++)
        cout << arr[i] * 2 << " ";

    getch();
    return 0;
}