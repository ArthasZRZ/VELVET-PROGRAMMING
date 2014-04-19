#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

string high_precise_subtraction(string n1, string n2){
	int l1 = n1.length(), l2 = n2.length();
	int idx = 0;
	int g = 0;
	string str;
	while(g || idx < l1 || idx < l2){
		int p1, p2; p1 = p2 = 0;
		if(idx < l1) p1 = n1[l1-idx-1] - '0';
		if(idx < l2) p2 = n2[l2-idx-1] - '0';

		int ans = p1 - p2 + g;
		int digit = ans % 10;
		
		if(idx >= l1 && idx >= l2)
			str.push_back('-');
		else
			str.push_back(digit + '0');
		g = - (ans / 10);
		idx ++;
		cout << str << endl;
	}
	return str;
}

int main(){
	freopen("3115.in", "r", stdin);
	string n1, n2; cin>>n1>>n2;
	cout << high_precise_subtraction(n1, n2) << endl;
	return 0;
}