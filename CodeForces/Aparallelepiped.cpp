#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;

int main() {
    int one; cin>>one;
    int two; cin>>two;
    int three; cin>>three;

    int e1 = sqrt((one*three)/two);
    int e2 = sqrt((one*two)/three);
    int e3 = sqrt((two*three)/one);

    cout<<(4*e1+4*e2+4*e3);
}