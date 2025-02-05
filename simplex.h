#ifndef SIMPLEX
#define SIMPLEX
#include "AffineEq.h"
#include <vector>

/** Jaemin Park
 * This header file is a brief overview of how the simplex algo
 *  is operated.
 * Assumption: variables are greater than zero, the problem is already in SEF
 */
class Problem {
    Affine objective{};
    vector<Affine> constraints{};
    double opt;
    map<int, double> currOptX;
    vector<int> rhVec;
    bool isOptimal();
    //void getSEF();
    public:
        Problem();
        void displayProblem();
        void runSimplex();
        void runSimplexOnce();
        double getObjectiveVal();
        map<int, double>& getCurrConstraints();
};

#endif SIMPLEX