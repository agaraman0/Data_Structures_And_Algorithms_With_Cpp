#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 10000;

vector<int> primes;

bool p[N];

void seive() {
	for (int i = 2; i < N; i++) {
		if (p[i] == 1) continue;
		primes.push_back(i);
		for (int j = i * i; j < N; j += i) {
			p[j] = 1;
		}
	}
}

int32_t main()
{
	ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// int t;cin>>t;while(t--)
	{
		int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
		seive();
		for (auto x : primes) {
			cout << x << " ";
		}
	}
}
