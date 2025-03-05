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
    string line;
    vector<string> elements;
    getline(cin, line);
    istringstream stream(line);
    string element;
    while (stream >> element) {
        elements.push_back(element);
    }

    set<string> elementSet;
    for (auto elem: elements) {
        elementSet.insert(elem);
    }

    cout<<elements.size()-elementSet.size();

}