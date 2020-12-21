#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	double f, d, t, b;
	cin >> f >> d >> t >> b;
	//first solve for the total time of Bolt using time = distance / speed
	double tbolt=f/b;
	//next, solve for the total time of Tiger
	//formula: (solve for 't') d = (initial speed * time) + 1/2at^2
	//note: omit the (initial speed * time) part since the initial speed is zero
	double tigerT=sqrt((f+d)/(t/2));
	if(tbolt==tigerT)
		cout << "Tiger";
	else if(tigerT<tbolt)
		cout << "Tiger";
	else
		cout << "Bolt";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
