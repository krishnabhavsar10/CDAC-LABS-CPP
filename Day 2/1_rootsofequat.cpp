#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

void findRootsLinear(double a, double b) {
    if (a == 0) {
        if (b == 0) {
            cout << "Infinite solutions exist." << endl;
        } else {
            cout << "No solution exists." << endl;
        }
    } else {
        double root = -b / a;
        cout << "The root is: " << root << endl;
    }
}

void findRootsQuadratic(double a, double b, double c) {
    if (a == 0) {
        // The equation is not quadratic, fall back to linear equation
        findRootsLinear(b, c);
        return;
    }

    double D = b * b - 4 * a * c;  // Discriminant

    if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two distinct real roots: " << root1 << " and " << root2 << endl;
    } else if (D == 0) {
        double root = -b / (2 * a);
        cout << "One real root (repeated): " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Complex roots: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }
}

int main() {
    // Example usage:
    double a, b, c;
    
    // Linear example
    cout << "Linear equation (ax + b = 0) coefficients:" << endl;
    cin >> a >> b;
    findRootsLinear(a, b);
    
    // Quadratic example
    cout << "\nQuadratic equation (ax^2 + bx + c = 0) coefficients:" << endl;
    cin >> a >> b >> c;
    findRootsQuadratic(a, b, c);

    return 0;
}
