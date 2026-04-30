#include<bits/stdc++.h>
using namespace std;

long long cnt = 0;

void merge(vector<int>& A, int l, int m, int r) {
    vector<int> L, R;
    for(int i = l; i < m; i++) L.push_back(A[i]);
    for(int i = m; i < r; i++) R.push_back(A[i]);
    
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);
    
    int i = 0, j = 0;
    for(int k = l; k < r; k++) {
        cnt++;
        if(L[i] <= R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void ms(vector<int>& A, int l, int r) {
    if(l + 1 < r) {
        int m = (l + r) / 2;
        ms(A, l, m);
        ms(A, m, r);
        merge(A, l, m, r);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    
    ms(A, 0, n);
    
    for(int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << A[i];
    }
    cout << "\n" << cnt << endl;
    return 0;
}