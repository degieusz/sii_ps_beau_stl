#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
//#include "print.h"
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <ostream>
#include <iterator>
#include <random>

using namespace std;

struct Test {
    typedef int foo;
};

template <typename T>
void f(typename T::foo) {
    pf

} // Definition #1

template <typename T>
void f(T) {pf}               // Definition #2

int main() {

    if(int i = 0; i ==0) {
        std::cout << "fkslfjdslfkd" << std::endl;

    }
    f<Test>(10); // Call #1.
    f<int>(10);  // Call #2. Without error (even though there is no int::foo) thanks to SFINAE.
}

