#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    for(int i = 0; i < n; i++)
        st.insert(s[i]);
    if(st.size() % 2 == 0)cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';
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