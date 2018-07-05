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


using namespace std;

int twos= 0;
const int target =2;
vector<int> v{1,2,2,3,4,6};
template<typename T>
void fun(T i) {
    pf;
}


int main()
{
    fun(5);

    string s("dsfdsfs");
    vector<int> c(100,2);
    std::iota( begin(c), end(c), 0 );
    random_shuffle( begin(c), end(c) );

    std::cout << std::boolalpha << std::any_of( begin(c), end(c), [](auto e){return e ==2;});

    print(c);
    sort( begin(c), end(c), [](auto a, auto b){
        return  a > b;
            } );
    print(c);
    return 0;
}

