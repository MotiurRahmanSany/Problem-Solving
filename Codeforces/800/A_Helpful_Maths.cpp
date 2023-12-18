#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s, p;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i += 2)
        p.push_back(s[i]);
    sort(p.begin(), p.end());
    cout << p[0];
    int pn = p.size();
    for(int i = 1; i < pn; i++)
        cout << "+" << p[i];

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