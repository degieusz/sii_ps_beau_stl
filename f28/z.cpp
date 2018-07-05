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

int main()
{

    std::vector<int> c;
    std::vector<int> b;
    std::vector<int> d(10);
    //fill_n(back_inserter(c), 10, 2);
    int n=0;
    mt19937 rng;
    std::generate_n(back_inserter(c), 10, [&n](){ return ++n; });
    std::generate_n(back_inserter(b), 10, [&n](){ return n*=2; });
    //std::generate_n(std::ostream_iterator<std::mt19937::result_type>(cout, " "), 10, [&rng ](){ return rng();});


    auto lld = [](auto&e){
        return e*2;
    };
    auto lld2 = [](auto&e, auto&f){
        return e+f;
    };

    std::transform( begin(c), end(c), begin(d), lld );
    std::transform( begin(c), end(c), begin(b), begin(d), lld2 );
    for_each( begin(c), end(c), [](auto& e){
        std::cout << e << std::endl;
    } );

    cout << "dupa" << endl;
    for_each( begin(d), end(d), [](auto& e){
        std::cout << e << std::endl;
    } );


    std::replace_if( begin(d), end(d), [](auto&e){ if (e> 600) return true; return false;}, -1 );
    cout << "dupa" << endl;
    for_each( begin(d), end(d), [](auto& e){
        std::cout << e << std::endl;
    } );
    return 0;
}

            //generate_n(begin(c))
            ///generate, transfort transfor 2 inputs, replace, replace if, unique _ unique_copy
