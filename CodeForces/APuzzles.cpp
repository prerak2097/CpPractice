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
    int students, puzzles;
    cin>>students>>puzzles;
    vector<int> difficulties;
    for ( int i =0; i < puzzles; i++) {
        int difficulty; cin>>difficulty;
        difficulties.push_back(difficulty);
    }
    sort(difficulties.begin(), difficulties.end());
    int minDiff = INFINITY;
    int left =0;
    for(int right= students-1; right < difficulties.size(); right++) {
        minDiff = min(minDiff, difficulties[right]-difficulties[left]);
        left++; 
    }
    cout<<minDiff;
}