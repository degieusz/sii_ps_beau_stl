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
vector<int> v{1,2,2,3,4,6};

void countTwos() {
    //int twos= 0;
    //const int target =2;
    //vector<int> v{0,1,2,2,34,5,2,1,2,4,5};
    //vector<int> v(100,0);

    //iota(begin(v), end(v), 0);
    //random_shuffle(begin(v),end(v));

    for(size_t i = 0 ; i < v.size() ; ++i) {
        if (v[i] == target) { ++twos; };
    }
    print(v);
    cout << "twos" << twos << endl;
    cout << count(begin(v), end(v), target);
}


void countOdd() {
    cout <<
        count_if(begin(v), end(v), [](auto& i)
            {
                return i%2==0;

            });
}
int main()
{
    //countOdd();

    std::map<int, int> c{{1,2},{2,2},{3,1}, {44,2}};
    std::cout << count_if(begin(c),end(c), [](auto e){return e.second ==2;}) << std::endl;

    if(any_of(begin(c), end(c),
                [](auto e)
                { return e.second == 1; }
                )) {
        std::cout << "any of tru" << std::endl;}


    return 0;
}

