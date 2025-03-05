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
    string input;
    getline(cin, input);
    for (int i=0; i<input.size();i++) {
        if (input[i] == 'H' || input[i]=='Q' || input[i]=='9') {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}