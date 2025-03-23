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
    if (input.length() < 7) {
        cout<<"NO";
        return 0;
    }
    int left =0;
    int sum = 0;
    for (int right =0; right < 7; right++) {
        sum+=input[right]-'0';
    }
    if ( sum == 0 || sum==7) {
        cout<<"YES";
        return 0;
    }
    for (int right = 7; right < input.length(); right++) {
        sum-=input[left]-'0';
        sum+=input[right]-'0';
        left++;
        if(sum==0 || sum==7) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}