#include<bits/stdc++.h>
using namespace std;

int partition(vector<string>& A, int p, int r) {
    int i = p - 1;
    int pv = stoi(A[r].substr(2));
    
    for(int j = p; j < r; j++) {
        if(stoi(A[j].substr(2)) <= pv) {
            swap(A[++i], A[j]);
        }
    }
    swap(A[++i], A[r]);
    return i;
}

void qs(vector<string>& A, int p, int r) {
    if(p < r) {
        int q = partition(A, p, r);
        qs(A, p, q - 1);
        qs(A, q + 1, r);
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> A(n), B(n);
    
    for(int i = 0; i < n; i++){
        char s;
        int x;
        cin >> s >> x;
        A[i] = B[i] = string(1, s) + " " + to_string(x);
    }
    
    qs(A, 0, n - 1);
    sort(B.begin(), B.end(), [](const string& a, const string& b) {
        return stoi(a.substr(2)) < stoi(b.substr(2));
    });
    
    bool st = true;
    for(int i = 0; i < n; i++)
        if(A[i] != B[i]) st = false;
    
    cout << (st ? "Stable" : "Not stable") << endl;
    for(int i = 0; i < n; i++)
        cout << A[i] << endl;
    
    return 0;
}