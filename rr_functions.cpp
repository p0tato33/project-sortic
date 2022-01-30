#include "sortic.h"

void rra(vector <int>& a) {
    int lenght = a.size();
    vector<int> vc = a;
    if (lenght > 0) {
        for (int i = 1; i < lenght; i += 2) {
            a[i] = vc[i - 1];
            a[i + 1] = vc[i];
        }
        a[0] = vc[lenght - 1];
    }
}

void rrb(vector <int>& b) {
    int lenght = b.size();
    vector<int> vc = b;
    if (lenght > 0) {   
        for (int i = 1; i < lenght; i += 2) {
            b[i] = vc[i - 1];
            b[i + 1] = vc[i];
        }
        b[0] = vc[lenght - 1];
    }
}

void rrr(vector <int>& a, vector <int>& b) {
    rra(a);
    rra(b);
}
