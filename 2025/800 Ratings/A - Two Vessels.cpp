#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

	int t;
	cin >> t;
	
	while(t--)
	{
	    int a, b, c;
        cin >> a >> b >> c;

        if(a == b) {
            cout << 0 << nline;
            continue;
        }

        if(a+b < c && a != b) {
            cout << 1 << nline;
            continue;
        }

        float d = (a+b)/2.0;
        int mn = min(a, b);

        int res = ceil((d - mn)/c);
        cout << (res) << nline;
        
	}
}
