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
    int friends; cin>>friends;
    int totalSum = 0;
    for (int i =0; i < friends; i ++) {
        int value; cin>>value;
        totalSum+=value;
    }
    int count =0; 
    for (int i=1; i<=5; i++) {
        int sumtoworkwith = totalSum+i;
        if (sumtoworkwith%(friends+1)!=1) {
            count++;            
        }
    }
    cout<<count;
}