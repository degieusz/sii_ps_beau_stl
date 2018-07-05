#pragma once

#include <iostream>

using namespace std;
#define pf std::cout << __PRETTY_FUNCTION__ <<i << "\n";

template<typename T>
void print(T c) {
    for(auto& e:c) {
        cout << e << " ";
    }
    cout << endl;
}

    /*std::for_each( begin(c), end(c), [](auto& e){*/
        /*cout << e.n << "  " << e.s << " " <<e.p<< endl;*/
    /*} );*/
