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
    int n,a,b;
    cin>>n>>a>>b;
    int pos=0;
    for (int i =1; i<=n;i++) {
        if ( i >a && i >=n-b) {
            pos++;
        }
    }
    cout<<pos;
}