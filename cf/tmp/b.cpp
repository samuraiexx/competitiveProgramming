#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define st first
#define nd second
#define db(x) cerr << #x << " = " << x << endl
#define _ << ", " << 
typedef long long ll;

int main(){
  int n, a, b, c, t;
  cin >> n >> a >> b >> c >> t;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(b > c) ans += a;
    else ans += (c - b)*(t - x) + a;
  }
  cout << ans << endl;
}
