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
    int k; cin>>k;
    int l; cin>>l;
    int m; cin>>m;
    int n; cin>>n;
    int d; cin>>d;
    int suffered = 0;
    for ( int i =1; i <= d; i++ ) {
        if (i%k==0) {
            suffered++;
        } else if (i%l==0) {
            suffered++;
        } else if (i%m==0) {
            suffered++;
        } else if (i%n == 0) {
            suffered++;
        }
    }
    cout<<suffered;
}