#include <assert.h>
#include <iostream>
#include <fstream>
#include "curve.h"
using namespace std;

Curve::Curve(){
}

Curve::Curve(curve_t type){
    curveType = type;
    readData(type);
}

void Curve::readData(curve_t type){
    std::ifstream fin;
    switch (type){
        case _1M:
            fin.open(_1MCURVEDATA);
            break;
        case _15M:
            fin.open(_15MCURVEDATA);
            break;
        case _2M:
            fin.open(_2MCURVEDATA);
            break;
        case _25M:
            fin.open(_25MCURVEDATA);
            break;
        case _3M:
            fin.open(_3MCURVEDATA);
            break;
        case _4M:
            fin.open(_4MCURVEDATA);
            break;
        case _5M:
            fin.open(_5MCURVEDATA);
            break;
        default:
            assert(0);
    }
    assert(fin);

    std::string trash, val;
    for(int i = 0 ; i < MAX_LV ; i++){
        fin >> trash >> trash >> val;
        vals[i] = atoi(val.c_str());
    }
}

//TODO: DELETE
void Curve::printCurve(){
    for(int i = 0 ; i < MAX_LV ; i++)
        cout << vals[i] << endl;
}

void Curve::setCurve(curve_t type){
    curveType = type;
    readData(type);
}

exp Curve::expForLevel(lv cur){
    return vals[cur];
}
