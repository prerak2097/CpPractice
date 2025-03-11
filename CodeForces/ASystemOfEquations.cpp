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
    int m; cin>>m;
    int pairs =0;
    for (int a=0; a<=max(n,m); a++) {
        for (int b=0; b<=max(n,m); b++) {
            if (pow(a,2)+b == n && a+pow(b,2)==m) {
                pairs++;
            }
        }
    }
    cout<<pairs;
}