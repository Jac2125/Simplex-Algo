#ifndef AFFINE_FUNCTION
#define AFFINE_FUNCTION

#include "AffineEq.h"
#include <string>

class AffineFunction : public Affine{
    Affine aff;
    string sign = "=";
    double rightHand = 0;
    public:
        AffineFunction();
        void setSign(string sign);
        string& getSign();
        void setRightHand(double val);
        double& getRHVal();
        void displayEquation() override;
};

#endif