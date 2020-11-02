#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int ans=0;
	for(int x=0; x<=4000; ++x) {
		for(int y=0; y<=4000; ++y) {
			int zc=n-(x*a+y*b);
			if(zc<0)
				break;
			double z=(zc/(double)c);
			if(z==(int)z)
				ans=max(ans, (int)z+y+x);
		}
	}
	cout << ans << "\n";
}
