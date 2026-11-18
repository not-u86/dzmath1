#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    
    double X[4] = { -2, 0, 1, 3 };
    double Y[4] = { -1, -1, 2, 14 };

    int n = 4;

   
    double div_diff[4];
    for (int i = 0; i < n; i++) {
        div_diff[i] = Y[i];
    }


    double a[4];

    
    a[0] = div_diff[0];
    cout << "кэф a0: " << a[0] << endl;

    
    for (int k = 1; k < n; k++) {
        for (int i = 0; i < n - k; i++) {
            div_diff[i] = (div_diff[i + 1] - div_diff[i]) / (X[i + k] - X[i]);
        }

        a[k] = div_diff[0];
        cout << "кэф a" << k << ": " << a[k] << endl;
    }

    
    double x = 2;
    double result = 0;
    double multiplier = 1;

    for (int i = 0; i < n; i++) {
        result = result + a[i] * multiplier;
        multiplier = multiplier * (x - X[i]);
    }

    cout << "\nитог P(2) = " << result << endl;

    system("pause");
    return 0;
}