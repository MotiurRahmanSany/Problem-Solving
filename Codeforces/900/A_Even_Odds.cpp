#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    ll n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k > n / 2){
            k -= n / 2;
            cout << k * 2 << '\n';
        }else
            cout << 2 * k - 1 << '\n';
    }else{
        if(k > n / 2 + 1){
            k -= (n / 2 + 1);
            cout << k * 2 << '\n';
        }else cout << k * 2 - 1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int tt = 1;
    // cin >> tt;
    while(tt--){
        solveIt();            
    }
    
	return 0;
}