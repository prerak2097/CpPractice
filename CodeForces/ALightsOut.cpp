#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


/// Answer is beyond this point
int toggle(int x) {
    if (x==0) {
        return 1;
    }
    return 0;
}

int main() {
    int matrix[3][3];
    for (int i =0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            cin >> matrix[i][j];
        }
    }
    int output[3][3]= { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j]%2==1) {
                output[i][j] = toggle(output[i][j]);
                if (i>0) {
                    output[i-1][j] = toggle(output[i-1][j]);
                }
                if (i<2) {
                    output[i+1][j] = toggle(output[i+1][j]);
                }
                if (j>0) {
                    output[i][j-1] = toggle(output[i][j-1]);
                }
                if (j<2) {
                    output[i][j+1] = toggle(output[i][j+1]);
                }
            }
        }
    }
    for (int i =0; i < 3; i++) {
        for (int j =0; j<3; j++) {
            cout << output[i][j];
        }
        cout << "\n";
    }
}