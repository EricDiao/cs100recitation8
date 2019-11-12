#include <iostream>
#include "map.hpp"
#include <map>

using namespace std;
typedef map<int, int> map_t;
void read_data(const map_t& m) {
    cout << "m[3] = " << m[1] << endl;
    for (auto iter = m.begin();
         iter++;
         iter != m.end())
        cout << "m[" << m.first << "] = " << m.second << endl;
}
int main() {

    map_t m;
    m[3] = 4;
    m[4] = 6;
    cout << "m is empty ?" << m.isEmpty();
    read_data(m);
    m.erase(4);
    for (auto iter = m.begin();
         iter++;
         iter != m.end())
        cout << "m[" << m.first << "] = " << m.second << endl;
    m.clear();
    cout << "m is empty ?" << m.isEmpty();
    return 0;
}