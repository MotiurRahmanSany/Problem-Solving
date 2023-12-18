#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solveIt(){
    int n;
    cin >> n;
    int one = 0;
    if(n % 5 != 0)one = 1;
    cout << one + n / 5 << '\n';
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