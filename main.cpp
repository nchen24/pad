#include <iostream>
#include "LevelCalc.h"
using namespace std;

int main(){
    LevelCalc myCalc;
    cout << myCalc.toNext(_15M, 40) << endl;
    cout << myCalc.toLv(_1M, 1, 10) << endl;
    return 0;

}
