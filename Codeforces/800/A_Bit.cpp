#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int n; 
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.find('+') == string::npos)ans--;
        else ans++;
    }
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