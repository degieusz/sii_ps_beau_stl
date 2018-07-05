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

template<typename T>
struct ta
{
    T* c;
    struct mit;

    ta() {
        c = new T[size()];
    }

    ~ta() {
        delete []c;
    }
    int size() const {
        return 4;
    }

    mit begin() {
        return mit(&c[0]);
    }
    mit end() {
        return mit(&c[size()]);
    }

    T& operator[](int in) {
        return c[in];
    }

    struct mit : public iterator<input_iterator_tag, int>
    {
        using reference  = T&;
        using pointer = T*;
        using value_type = T;
        using self_type = mit;
        pointer p;

        mit(pointer pt):p(pt) {};

        bool operator==(const mit& rhs) {return p == rhs.p;};
        bool operator!=(const mit& rhs) {return p != rhs.p;};
        bool operator<(const mit& rhs) {return p < rhs.p;};
        bool operator>(const mit& rhs) {return p > rhs.p;};

        self_type operator++() {
            mit i = *this;
            p++;
            return i;
        }

        self_type operator++(int j) {
            p++;
            return *p;
        }

        reference operator*()
        {
            return *p;
        }

        pointer operator->()
        {
            return p;
        }
    };

};

template<typename T>
typename ta<T>::mit begin( ta<T> t) {
    return typename ta<T>::mit(&t[0]);
}

template<typename T>
typename ta<T>::mit end( ta<T> t) {
    return typename ta<T>::mit(&t[t.size()]);
}

int main()
{
    ta<int> t;
    //auto i1 = ta<int>::mit(t);
    t[1]=3;
    t[3]=5;
    for(auto it = t.begin(); it != t.end(); ++ it) {
        cout << *it << " ";
    }
    cout << endl;
    for_each(begin(t), end(t), [](auto e){
        cout << e <<" ";
    });
    cout << endl;


    return 0;
}

