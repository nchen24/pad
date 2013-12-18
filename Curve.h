#ifndef CURVE_H_INCLUDED
#define CURVE_H_INCLUDED
#include "GenTypes.h"

class Curve{
    public:
        Curve();
        Curve(curve_t type);
        void setCurve(curve_t type);
        exp expForLevel(lv cur);

        void printCurve(); //TODO: DELETE
    private:
        void readData(curve_t type);
        curve_t curveType;
        exp vals[MAX_LV];
};
#endif
