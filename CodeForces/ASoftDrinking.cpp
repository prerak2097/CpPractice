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
    int n; cin>>n;
    int k; cin>>k;
    int l; cin>>l;
    int c; cin>>c;
    int d; cin>>d;
    int p; cin>>p;
    int nl; cin>>nl;
    int np; cin>>np;
    int toasts = 0;
    int literToasts = (k*l)/nl;
    int limes = (c*d);
    int saltGrams = (p/np);
    cout<<min({literToasts, limes, saltGrams})/n;
}