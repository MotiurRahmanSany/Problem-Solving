#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int n;
    cin >> n;
    if(n > 2 and n % 2 == 0)cout << "YES" << '\n';
    else cout << "NO" << '\n';
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