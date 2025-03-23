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
    int passengers, planes;
    cin>>passengers>>planes;
    priority_queue<int, vector<int>, greater<int>> minheap;
    priority_queue<int> maxheap;

    for (int i=0; i < planes; i++) {
        int cap; cin>>cap;
        if(cap > 0) {
            minheap.push(cap);
            maxheap.push(cap);
        }
    }    
    int maxProfit=0;
    int minProfit=0; 
    while (passengers>0) {
        int minval = minheap.top();
        int maxval = maxheap.top();
        minheap.pop();
        maxheap.pop();
        maxProfit+=maxval;
        minProfit+=minval;
        maxval--;
        minval--;
        if (minval > 0) {
            minheap.push(minval);
        }
        if (maxval>0) {
            maxheap.push(maxval);
        }
        passengers--;
    }
    cout<<maxProfit<<' '<<minProfit;
}