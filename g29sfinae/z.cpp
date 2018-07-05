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

auto sum1()
{
    return 0;
}
//template<typename T>
//auto sum1(T t)
//{
    //return t;
//}

template<typename T, typename ...Args>
auto sum1(T t, Args ...args)
{
    return t + sum1(args...);
}

//sum1 and sum 2 the same but fold args cpp17 feature used in latter
template<typename ...Args> auto sum2(Args ...args)
{
    return (args + ...);
}

template <typename T>
void f(typename T::foo) {
    pf

} // Definition #1

template <typename T>
void f(T) {pf}               // Definition #2



template<typename Der>
struct Base {
    void interface() {
        pf;
        static_cast<Der*>(this)->impl();
    }
};

struct Derived : public Base<Derived> {
    void impl() {
        pf;
    }
};


int main() {

    Base<Derived> c;
    c.interface();


    //cout << sum2(2,34,5);
    //cout << endl;
    //cout << sum1(2,34,5);
    //cout << endl;
    //f<Test>(10); // Call #1.
    //f<int>(10);  // Call #2. Without error (even though there is no int::foo) for def1 thanks to SFINAE.
}

