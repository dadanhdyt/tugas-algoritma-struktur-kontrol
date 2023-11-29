#include <iostream>
using namespace std;

int main()
{
    int fahrenheit, celcius;
    cout << "Masukan suhuh (F): ";
    cin >> fahrenheit;

    celcius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit;
    cout << "\370F = ";
    cout << celcius << "\370C";
}