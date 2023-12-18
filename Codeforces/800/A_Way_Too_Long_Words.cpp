#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    cin >> s;
    int n = s.size();
    if(n > 10)
        cout << s[0] << n - 2 << s[n - 1] << '\n';
    else cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int tt;
    cin >> tt;
    while(tt--){
        solveIt();            
    }
    
	return 0;
}