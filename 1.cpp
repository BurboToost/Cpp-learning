#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int piv = arr[0];
    vector<int> r;
    
    for(int i = 1; i < n; i++){
        if(arr[i] < piv){
            r.push_back(arr[i]);
        }
    }

    r.push_back(piv);

    for(int i = 1; i < n; i++){
        if(arr[i] > piv){
            r.push_back(arr[i]);
        }
    }
    
    for(int i = 0; i < r.size(); i++){
        if(i > 0) cout << " ";
        cout << r[i];
    }
    cout << endl;
    
    return 0;
}