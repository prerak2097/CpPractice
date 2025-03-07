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
    int pages; cin>>pages;
    vector<int> week;
    int number;
    while (cin>>number) {
        week.push_back(number);
    }
    int i =0;
    while (pages>0) {
        if (i==7) {
            i=0;
        }
        pages-=week[i];
        i++;
    }
    cout<<i;
}