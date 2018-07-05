#pragma once

#include <iostream>

using namespace std;

template<typename T>
void print(T c) {
    for(auto& e:c) {
        cout << e << " ";
    }
    cout << endl;
}

