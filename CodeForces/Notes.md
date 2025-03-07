## Useful notes

### Cpp Basics
- To initialize a 2d vector
```
    vector<vector<int>> pointVector(points, vector<int>(2));
```

### Math
#### Rounding
- To set a specific amount that we want the cout to round the number to, I can use 
```
cout<<setprecision(#ofDecimalPlaces)<<fixed<<variableIWantToPrint;
```

#### Finding GCD
```
int gcd(int a, int b) {
    int res= min(a,b);
    while (res > 1) {
        if (a%res == 0 && b%res==0) {
            break;
        }
        res--;
    }
    return res;
}
```