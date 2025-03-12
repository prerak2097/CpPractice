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
#include <sstream>
 
using namespace std;
 

int main() {
    string s;
    cin>>s;
    bool flag = true;
    for ( int i =0; i < s.size(); i++) {
        if (s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B') {
            i+=2;
            if(!flag) {
                cout<<" ";
            }
            continue;
        } else{
            flag=false;
            cout<<s[i];
        }
    }
    return 0;

}