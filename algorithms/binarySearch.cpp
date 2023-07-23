// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Performs binary search on a sorted array to find the presence of an element.
bool binarySearch(int a[], int l, int r, int x) {
    while(l <= r) {
        int m = (l + r) / 2;

        if(a[m] == x) {
            return true;
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return false;
}