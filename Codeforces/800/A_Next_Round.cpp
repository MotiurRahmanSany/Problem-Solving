#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int n, k;
    cin >> n >> k;
    int a[n];
    int ans = 0;
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < n; i++)
        if(a[i] > 0 and a[i] >= a[k - 1])
            ans++;
    
    cout << ans << '\n';
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