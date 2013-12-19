#include <iostream>
#include "LevelCalc.h"
using namespace std;

LevelCalc::LevelCalc(){
    for(int i = 0 ; i < CURVE_TYPES ; i++)
        curves[i].setCurve((curve_t)i);
}
exp LevelCalc::toNext(curve_t curve, lv curLv){
    return curves[curve].expForLevel(curLv-1); // -1 to account for 0-index
}

exp LevelCalc::toNext(curve_t curve, lv curLv, exp curExp){
    (void)curve;
    (void)curLv;
    (void)curExp;
    return 0;
}

exp LevelCalc::toLv(curve_t curve, lv curLv, lv tarLv){
    return curLv == tarLv ? 0 : toNext(curve, curLv) + toLv(curve, curLv+1, tarLv);
    /* Semantically equivalent
    if(curLv == tarLv)
        return 0;
    return toNext(curve, curLv) + toLv(curve, curLv+1, tarLv);

    === or ===
    exp total = 0;
    for(lv i = curLv ; i < tarLv ; i++)
        total += toNext(curve, i);
    return total;
    */
}

