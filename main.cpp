//
//  main.cpp
//  interest_calculator
//
//  Created by Mathew Rasband on 4/3/21.
//

#include <iostream>

using namespace std;

int main(){
    
    double rate {.02};
    double principal {500};
    double time {5};
    double interest;
    interest = principal * rate * time;
    cout << interest << endl;
    
    return 0;
}
