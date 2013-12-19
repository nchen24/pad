#include <iostream>
#include "LevelCalc.h"
using namespace std;

string lowerString(string word){
    for(unsigned i = 0 ; i < word.length() ; i++) word[i] = tolower(word[i]);
    return word;
}
void printOps();
int main(){
    LevelCalc myCalc;

    string input = "";
    int curve;
    int cur, tar;

    while (input != "q"){
        printOps();
        cin >> input;
        input = lowerString(input);
        
        if(input == "n" || input == "next"){
            cin >> curve >> cur;
            if(curve < 0 || curve > 6)
                cout << "Error, invalid curve\n";
            else
                cout << myCalc.toNext((curve_t)curve, cur) << endl;
        }
        else if(input == "t" || input == "to" || input == "tolv"){
            cin >> curve >> cur >> tar;
            if(curve < 0 || curve > 6)
                cout << "Error, invalid curve\n";
            else
                cout << myCalc.toLv((curve_t)curve, cur, tar) << endl;
        }
        else if(input == "q" || input == "quit")
            break;
        else{
            cout << "Option not recognized\n";
        }
    }
    return 0;

}

void printOps(){
    cout << "Experience curves are: 0 = 1M, 1.5M, 2M, 2.5M, 3M, 4M, 5M\n";
    cout << "[N]ext: Calculates exp to next level given (curve, curLv)\n";
    cout << "[T]oLv: Calculates exp to target level given (curve, curLv, tarLv)\n";
    cout << "[Q]uit: Quits\n";
}
