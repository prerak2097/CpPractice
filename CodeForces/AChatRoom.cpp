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
    cin>>input;
    string hello = "hello";
    int left =0;
    for ( int i =0; i < input.size();i++) {
        if (left < hello.length() && input[i] == hello[left]) {
            left++;
        }
    }
    if (left == hello.length()) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}