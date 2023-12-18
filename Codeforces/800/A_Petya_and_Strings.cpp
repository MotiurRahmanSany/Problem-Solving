#include<bits/stdc++.h>
#include<string.h>

using namespace std;

#define ll long long

void solveIt(){
    char a[101], b[101];
    cin >> a >> b;
    for(int i = 0; i < 101; i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    cout << strcmp(a, b) << '\n';
    
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