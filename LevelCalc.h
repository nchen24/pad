#ifndef LEVELCALC_H_INCLUDED
#define LEVELCALC_H_INCLUDED
#include "GenTypes.h"
#include "Curve.h"

class LevelCalc{
    public:
        LevelCalc();
        exp toNext(curve_t curve, lv curLv);
        exp toNext(curve_t curve, lv curLv, exp curExp);
        exp toLv(curve_t curve, lv curLv, lv tarLv);

    private:
        Curve curves[CURVE_TYPES];
};
#endif
