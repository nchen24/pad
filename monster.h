#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED

class Monster{
    public:
        Monster();
    private:
        int         number;
        std::string name;
        lv          maxLv;
        curve_t     curveType;
        exp         fodderBase;
        element_t   color
};

#endif
