#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // program to find the pearson product moment of co-efficent
    int size;

    cout << "\n---Calculate Pearson product moment of co-efficent---\n";
    cout << "Input number of observations (n): ";
    cin >> size;

    float x[size], y[size];
    float sumX = 0, sumY = 0, sumXY = 0, sumXSquared = 0, sumYSquared = 0;

    cout << "\nEnter values of X:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> x[i];
        sumX += x[i];
        sumXSquared += x[i] * x[i];
    }

    cout << "\nEnter values of Y:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> y[i];
        sumY += y[i];
        sumYSquared += y[i] * y[i];
        sumXY += x[i] * y[i];
    }

    float pearsonNumerator = size * sumXY - sumX * sumY;
    float pearsonDenominator =
        sqrt((size * sumXSquared - sumX * sumX) * (size * sumYSquared - sumY * sumY));
    float pearsonCoefficient = pearsonNumerator / pearsonDenominator;

    // print the array of X
    cout << "\nValues of X: ";
    for (int i = 0; i < size; i++) {
        cout << x[i] << " ";
    }

    // print the array of Y
    cout << "\nValues of Y: ";
    for (int i = 0; i < size; i++) {
        cout << y[i] << " ";
    }

    // Square of X
    cout << "\n\nProduct of X: \n";
    cout << " X  *  X  =  X^2 " << endl;
    for (int i = 0; i < size; i++) {
        cout << x[i] << " * " << x[i] << " = ";
        cout << x[i] * x[i] << " " << endl;
    }

    // Square of Y
    cout << "\nProduct of Y: \n";
    cout << " Y  *  Y  =  Y^2 " << endl;
    for (int i = 0; i < size; i++) {
        cout << y[i] << " * " << y[i] << " = ";
        cout << y[i] * y[i] << " " << endl;
    }

    // print the product of xy
    cout << "\nProduct of XY: \n";
    cout << " X  *  Y  =  XY " << endl;
    for (int i = 1; i < size; i++) {
        cout << x[i] << " * " << y[i] << " = ";
        cout << x[i] * y[i] << " " << endl;
    }

    cout << "\nSum of X: " << sumX << endl;
    cout << "Sum of Y: " << sumY << endl;
    cout << "Sum of XY: " << sumXY << endl;
    cout << "Sum of X^2: " << sumXSquared << endl;
    cout << "Sum of Y^2: " << sumYSquared << endl;
    cout << "Pearson product moment coefficient: " << pearsonCoefficient << endl;

    system("Pause");
    return 0;
}
