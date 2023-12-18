#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){ 
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)s[i] = tolower(s[i]);
    for(int i = 0; i < n; i++)
        if(s[i] != 'a' and s[i] != 'e' and s[i] != 'y' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u')
            cout << "." << s[i];
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