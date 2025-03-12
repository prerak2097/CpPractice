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
    set<char> vowels={'a','e','i','o','u','y','Y','A','E','I','O','U'};
    string input;
    cin>>input;
    string output = "";
    for (int i =0; i < input.size(); i++) {
        if (vowels.find(input[i]) != vowels.end()) {
            continue;
        } else {
            output+='.'; 
            output+=tolower(input[i]);
        }
    }
    cout<<output;
}