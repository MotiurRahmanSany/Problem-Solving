#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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