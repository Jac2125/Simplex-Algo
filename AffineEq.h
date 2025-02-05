#ifndef AFFINE_EQ
#define AFFINE_EQ

#include <map>
using namespace std;

class Affine{
    int largestDeg = 0;
    map<int,double> equation;
    public:
        Affine();
        void addToTerm(int deg, double coeff); 
        void initTerm(int deg, double coeff);
        virtual void displayEquation();
        double nthCoeff(int deg);

};

#endif