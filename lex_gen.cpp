#include <bits/stdc++.h>
using namespace std;

int main() {
	string l;
	vector<pair<string,char>> ans;
	while (getline(cin, l)) {
		vector < string > v;
		v.push_back("");
		for (int i = 0; i < l.size(); i++) {
			if (l[i] != ' ') {
				v.back() += l[i];
			} else {
				v.push_back("");
			}
		}
		char c=v.front().front();
		for(string s:v){
			if(s.back()!=':')
			ans.push_back(pair<string,char>(s,c));
		}
	}
	sort(ans.begin(),ans.end());
	reverse(ans.begin(),ans.end());
	for(auto s:ans){
		cout<<"\""<<s.first<<"\"\t{s+=\""<<s.second<<"\";}\n";
	}
}
