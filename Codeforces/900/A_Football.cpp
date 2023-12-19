#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0, cnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]){
            cnt++;
            ans = max(cnt, ans);
        }
        else cnt = 1;
    }
    cout << (ans > 6 ? "YES" : "NO") << '\n';
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