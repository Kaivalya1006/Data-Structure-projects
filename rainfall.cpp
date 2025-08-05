#include <iostream>


using namespace std;

int main() {
    const int cities = 3;
    const int months = 4;
    float rainfall[cities][months];

    
    cout << "Enter the rainfall data for 3 cities over 4 months:\n";
    for (int i = 0; i < cities; i++) {
        cout << "City " << i + 1 << ":\n";
        for (int j = 0; j < months; j++) {
            cout << "  Month " << j + 1 << ": ";
            cin >> rainfall[i][j];
        }
    }

    
    cout << "\nRainfall Data (in mm):\n";
    cout << setw(10) << "City\\Month";
    for (int j = 0; j < months; j++) {
        cout << setw(10) << "Month " << j + 1;
    }
    cout << endl;

    for (int i = 0; i < cities; i++) {
        cout << setw(10) << "City " + to_string(i + 1);
        for (int j = 0; j < months; j++) {
            cout << setw(10) << rainfall[i][j];
        }
        cout << endl;
    }

    
    cout << "\nAverage Rainfall per City:\n";
    for (int i = 0; i < cities; i++) {
        float total = 0;
        for (int j = 0; j < months; j++) {
            total += rainfall[i][j];
        }
        float average = total / months;
        cout << "City " << i + 1 << ": " << fixed << setprecision(2) << average << " mm\n";
    }

    return 0;
}
