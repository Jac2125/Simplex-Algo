#include <iostream>
#include "AffineEq.h"
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

Affine::Affine(){};

string formatDouble(double value) {
    ostringstream oss;
    oss << fixed << setprecision(10) << value;
    string str = oss.str();

    // Remove trailing zeros
    str.erase(str.find_last_not_of('0') + 1, string::npos);
    // Remove the decimal point if it's the last character
    if (str.back() == '.') {
        str.pop_back();
    }

    return str;
}

void Affine::addToTerm(int deg, double coeff){
    if(coeff == 0) return; //Ignore meaningless addition
    equation.at(deg) += coeff;
    if(deg > largestDeg) largestDeg = deg;
}

void Affine::initTerm(int deg, double coeff){
    if(coeff == 0) return; //Ignore meaningless addition
    equation[deg] = coeff;
    if(deg > largestDeg) largestDeg = deg;
}

void Affine::displayEquation(){
    int firstCoeff = largestDeg;
    string firstTerm = formatDouble(equation.at(largestDeg)) + "x" + formatDouble(largestDeg);
    cout << firstTerm;
    for(int i = largestDeg-1; i >= 0; i--){
        cout << " + " << formatDouble(equation.at(i));
        if(i > 0 ) cout << "x" + formatDouble(i);
    }
}

double Affine::nthCoeff(int deg){
    return equation.at(deg);
}