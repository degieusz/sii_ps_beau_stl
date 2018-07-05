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
    random_device rd;
    mt19937 gen(rd());
    {
        vector<int> c(5,0);
        iota( begin(c), end(c) ,1);

        cout <<endl;
        std::for_each( begin(c), end(c), [](auto& e){
            cout << e << "  ";
        } );
        shuffle( begin(c), end(c), gen );
        //cout <<endl;
        //std::for_each( begin(c), end(c), [](auto& e){
            //cout << e << "  ";
        //} );
        //std::nth_element( begin(c), begin(c) + 4, end(c) );
        //cout <<endl;
        //std::for_each( begin(c), end(c), [](auto& e){
            //cout << e << "  ";
        //} );
        //cout << "\ndd :" <<*(begin(c)+4);

        auto total = accumulate( begin(c), end(c), 0);
        total = std::accumulate( begin(c), end(c), 1, [](auto total , auto i){
                return total*i;

        } );
        {
            vector<string> c{"abd" , "dsff", "werwet"};
            auto out = std::accumulate( begin(c), end(c), string{"we show you"}, [](const string& total, string& news){
                return total + " "+ news;
            } );
            cout << out;
            vector<string> d(2);
            std::copy( begin(c), end(c), begin(d) );

            std::cout << "dupa:" << std::endl;
            std::for_each( begin(d), end(d), [](auto& e){
                cout << e << "  ";
            } );

            c.erase(
                   std::remove(begin(c), std::remove( begin(c), end(c), "dsff" ) , "abd"));
            std::cout << "dupa22:" << std::endl;
            std::for_each( begin(c), end(c), [](auto& e){
                cout << e << "  ";
            } );

            //generate_n(begin(c))
            ///generate, transfort transfor 2 inputs, replace, replace if, unique _ unique_copy

        }
        std::cout <<  std::endl;
        std::cout << total << std::endl;

    }



    return 0;
}

