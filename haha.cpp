#include <bits/stdc++.h>

using namespace std ;

int m(1000) ;
string n = "" ;

int cal(string ss)
{
	int nn(0) ;
	char c = 'A' ;
	int a[26] = {} ;
	for ( int i = 0 ; i < ss.length() ; i++ )
	{
		if (a[ss[i]-c] != 1 )
		{
			a[ss[i]-c] = 1 ;
			nn++ ;
		}
	}	
	if ( nn < m )
	{
		m = nn ;
		n = ss ;
		return m ;
	}
	return nn ;
}
int main()
{
	int num ;
	string s ;
	cin >> num ;
	priority_queue<string, vector<string>, greater<string> > b;
	while (num--)
	{
		cin >> s ;
		b.push(s) ;
	}
	while (!b.empty())
	{
		cal(b.top()) ;
		b.pop();
	}
	cout << n ;
}