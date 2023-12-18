#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    string s;
    cin >> s;
    int n = s.size();
    int u, l;
    u = l = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'a')l++;
        else u++;
    }
    bool T = false;
    if(u > l)T = true;  
    if(T){
        for(int i = 0; i < n; i++)
            cout << char(toupper(s[i]));
    }else 
        for(int i = 0; i < n; i++)
            cout << char(tolower(char(s[i])));
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