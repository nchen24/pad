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

typedef unsigned lv;
typedef unsigned exp;

const int      MAX_LV      = 99;
const int      CURVE_TYPES  = 7;

const char * const _1MCURVEDATA  = "1MCurve.data";
const char * const _15MCURVEDATA = "15MCurve.data";
const char * const _2MCURVEDATA  = "1MCurve.data";
const char * const _25MCURVEDATA = "25MCurve.data";
const char * const _3MCURVEDATA  = "3MCurve.data";
const char * const _4MCURVEDATA  = "4MCurve.data";
const char * const _5MCURVEDATA  = "5MCurve.data";

#endif
