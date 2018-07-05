#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
#include "print.h"
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
vector<int> c{1,2,2,3,4,6};
vector<int> d{4,7};


int main()
{
    auto r = find( begin(c), end(c), target );
    r = find_if( begin(c), end(c),  [](auto e){
            return e % 3 == 0;
    } );
    if (r != end(c)) {
        std::cout << "fiund::" << std::endl;

    }
    r = find_first_of( begin(c), end(c), begin(d), end(d) );
    std::cout << "ffo " << *r << std::endl;


    string txt{"sylwia godek je serek"};
    string s{"je"};
    auto d = distance( begin(s), end(s) );
    auto f = search( begin(txt), end(txt), begin(s), end(s) );

    cout << *(f++) << *f << endl;
    std::cout << "dfsdf" << std::endl;




    return 0;
}

