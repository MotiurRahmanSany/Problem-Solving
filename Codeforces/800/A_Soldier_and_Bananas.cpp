#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int k, n, w;
    cin >> k >> n >> w;
    ll total = 0;
    int i = 1;
    while(w--){
        total += i * k;
        i++;
    }
    if(n > total)cout << 0 << '\n';
    else
        cout << total - n << '\n';
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