#include <iostream>
#include "AffineEq.h"

using namespace std;

int main() {
    Affine linearEq;

    // Initialize terms
    linearEq.initTerm(2, 3.23244);  // 3.23244x^2
    linearEq.initTerm(1, 4.2);  // 4.2x^1
    linearEq.initTerm(0, 5.0304);  // 5,0304x^0
    linearEq.initTerm(6, 0);
    // Add to terms
    linearEq.addToTerm(2, 2); // 5.23244x^2
    linearEq.addToTerm(1, -1); // 3.2x^1

    // Display the Affine equation
    cout << "Affine equation: ";
    linearEq.displayEquation();
    cout << endl;

    // Get the coefficient of a specific term
    double coeff = linearEq.nthCoeff(2);
    cout << "Coefficient of x^2: " << coeff << endl;

    return 0;
}