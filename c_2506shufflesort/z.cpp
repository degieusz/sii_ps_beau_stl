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

int twos= 0;
const int target =2;
vector<int> v{1,2,2,3,4,6};
template<typename T>
void fun(T i) {
    pf;
}

struct E
{
    string n;
    string s;
    int p;
    /* data */
    friend ostream& operator<<(ostream & out, const E& e);
};
    ostream& operator<<(ostream & out, const E&e) {
        return out << e.n << "  " << e.s << " " <<e.p<< endl;
    }

int main()
{
    std::vector<E> c{
        {"K", "G", 1200},
        {"K", "R", 6200},
        {"K", "M", 8200},
        {"W", "G", 3200},
        {"k", "G", 1200}
    };

    std::cout << std::is_sorted( begin(c), end(c), [](auto a , auto b){
        return a.n < b.n;
    } );
    std::cout << std::boolalpha <<std::is_sorted( begin(c), end(c), [](auto a , auto b){
        return a.n < b.n;
    } );
    sort( begin(c), end(c), [](auto a, auto b){
        return a.p < b.p;
    } );

    stable_sort( begin(c), end(c), [](auto a, auto b){
        return a.n < b.n;
    } );
    //print(c);

    std::for_each( begin(c), end(c), [](auto& e){
        cout << e.n << "  " << e.s << " " <<e.p<< endl;
    } );
    random_device rd;
    mt19937 gen(rd());

    vector<int> d(100,0);
    iota( begin(d), end(d) , 0);
    shuffle( begin(d), end(d), gen  );
    std::for_each( begin(d), end(d), [](auto& e){
        cout << e << "  ";
    } );
    //partial_sort( d.begin(), d.begin() + 14 , d.end());
    cout << "\nis sorted\n" << *is_sorted_until( d.begin(), d.begin() +14 );
    cout << endl;
    //sort( d.begin(), d.end() );
    std::for_each( begin(d), end(d), [](auto& e){
        cout << e << "  ";
    } );
    cout << endl;
    std::cout << *lower_bound( d.begin(), d.end(), 3 ) << std::endl;
    std::cout << *upper_bound( d.begin(), d.end(), 3 ) << std::endl;

    vector<int> v3(3);
    partial_sort_copy( begin(d), end(d), begin(v3), end(v3) );
    for_each( begin(v3), end(v3), [](auto e) {cout <<e << " ";} );

    {
        vector<int> c(10,0);
        iota( begin(c), end(c) ,0);
        cout <<endl;
        std::for_each( begin(c), end(c), [](auto& e){
            cout << e << "  ";
        } );
        shuffle( begin(c), end(c), gen );
        cout <<endl;
        std::for_each( begin(c), end(c), [](auto& e){
            cout << e << "  ";
        } );
        std::nth_element( begin(c), begin(c) + 4, end(c) );
        cout <<endl;
        std::for_each( begin(c), end(c), [](auto& e){
            cout << e << "  ";
        } );
        cout << "\ndd :" <<*(begin(c)+4);


    }

    return 0;
}

