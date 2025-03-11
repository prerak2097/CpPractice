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
    int sets; cin>>sets;
    int capacity; cin>>capacity;
    vector<int> prices;
    for ( int i =0; i < sets; i++) {
        int price; cin>>price;
        prices.push_back(price);
    }
    sort(prices.begin(), prices.end());
    int output = 0;
    for ( int i =0; i < capacity; i ++) {
        if (prices[i] < 0) {
            output+=abs(prices[i]);
        }
    }
    cout<<output;
}