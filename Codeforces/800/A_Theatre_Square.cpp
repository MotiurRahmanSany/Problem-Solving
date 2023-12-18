#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int n, m, a;
    cin >> n >> m >> a;
    int x, y;
    if(n % a == 0)x = n / a;
    else x = n / a + 1;
    if(m % a == 0)y = m / a;
    else y = m / a + 1;
    cout << x * 1LL * y << '\n';
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