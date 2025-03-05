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
    double drinks; cin>>drinks;
    double sumOfPercents=0;
    for (int i=0; i < drinks; i ++) {
        int value; cin>>value;
        sumOfPercents+=value;
    }
    sumOfPercents=sumOfPercents;
    cout<<setprecision(12)<<fixed<<sumOfPercents/drinks;
}