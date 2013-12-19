#ifndef GEN_TYPES_H_INCLUDED
#define GEN_TYPES_H_INCLUDED
enum curve_t{
    _1M,
    _15M,
    _2M,
    _25M,
    _3M,
    _4M,
    _5M,
};

enum element_t{
    Fire,
    Water,
    Grass,
    Light,
    Dark,
};

typedef unsigned lv;
typedef unsigned exp;

const int      MAX_LV      = 99;
const int      CURVE_TYPES  = 7;

const char * const _1MCURVEDATA  = "curveData/1MCurve.data";
const char * const _15MCURVEDATA = "curveData/15MCurve.data";
const char * const _2MCURVEDATA  = "curveData/1MCurve.data";
const char * const _25MCURVEDATA = "curveData/25MCurve.data";
const char * const _3MCURVEDATA  = "curveData/3MCurve.data";
const char * const _4MCURVEDATA  = "curveData/4MCurve.data";
const char * const _5MCURVEDATA  = "curveData/5MCurve.data";

#endif
