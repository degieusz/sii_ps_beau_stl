#pragma once

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

template<typename T>
void print(T c) {
    for(auto& e:c) {
        cout << e << " ";
    }
    cout << endl;
}

template<typename T>
std::vector<T> range(T start, T end)
{
  std::vector<T> r(end+1-start, T(0));
  std::iota(r.begin(), r.end(), T(start));//increasing sequence
  return r;
}

template<typename T>
std::vector<T> range(T end)
{
  std::vector<T> r(end+1, T(0));
  std::iota(r.begin(), r.end(), T(0));//increasing sequence
  return r;
}
