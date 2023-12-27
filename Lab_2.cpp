#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukr");
    double length; // Довжина ребра куба

    // Введення довжини ребра куба
    cout << "Введіть довжину ребра куба: ";
    cin >> length;

    // Розрахунок об'єму куба (V = a^3)
    double volume = length * length * length;

    // Розрахунок площі поверхні куба (S = 6 * a^2)
    double surface_area = 6 * length * length;

    // Виведення результатів
    cout << "Об'єм куба: " << volume << endl;
    cout << "Площа поверхні куба: " << surface_area << endl;

    return 0;
}