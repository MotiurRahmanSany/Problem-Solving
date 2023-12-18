#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    int n;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
        if(s[i] == s[i + 1])cnt++;
    cout << cnt << '\n';
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