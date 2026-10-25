#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Input(int* a, const int size);
void Print(int* a, const int size);

template <typename T>
void Input(T* a, const int size);

template <typename T>
void Print(T* a, const int size);

int main()
{
    const int n = 5;

    int a[n];
    Input(a, n);
    cout << "Input(a, n) = ";
    Print(a, n);

    Input<int>(a, n);
    cout << "Input<int>(a, n) = ";
    Print<int>(a, n);

    double b[n];
    Input<double>(b, n);
    cout << "Input<double>(b, n) = ";
    Print<double>(b, n);

    string c[n];
    Input<string>(c, n);
    cout << "Input<string>(c, n) = ";
    Print<string>(c, n);

    return 0;
}
void Input(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

template <typename T>
void Input(T* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

template <typename T>
void Print(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}