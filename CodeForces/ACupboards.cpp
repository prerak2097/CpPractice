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
 
int countZeros(int values[], int valSize) {
    int count = 0;
    for (int i=0; i < valSize; i++) {
        if (values[i]==0) {
            count++;
        }
    }
    return count;
}

int main() {
    int cupboards; cin>>cupboards;
    int leftArray[cupboards];
    int rightArray[cupboards];

    for (int i =0; i < cupboards; i ++) {
        int left; cin>>left;
        int right; cin>>right;

        leftArray[i]=left;
        rightArray[i]=right;
    }

    int pos =0;
    int leftZeros= countZeros(leftArray, cupboards);
    int leftOnes = cupboards-leftZeros;
    int rightZeros = countZeros(rightArray, cupboards);
    int rightOnes = cupboards-rightZeros;
    int output =0;
    if (leftZeros==0 || leftOnes == 0) {
        output+=0;
    } else if (leftZeros>leftOnes) {
        output+=leftOnes;
    } else {
        output+=leftZeros;
    }

    if (rightZeros==0||rightOnes==0) {
        output+=0;
    } else if (rightZeros>rightOnes) {
        output+=rightOnes;
    } else {
        output+=rightZeros;
    }
    cout<<output;
}