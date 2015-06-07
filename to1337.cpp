#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, vector<string> > m;
	for(char c='A';c<='Z';c++){
		m[c]=vector<string>();
	}
	m['T'].push_back("~|~");
	m['X'].push_back("}{");
	m['H'].push_back("}-{");
	m['D'].push_back("|}");
	m['K'].push_back("|{");
	m['L'].push_back("|_");
	m['N'].push_back("|\\|");
	m['M'].push_back("|\\/|");
	m['P'].push_back("|D");
	m['R'].push_back("|?");
	m['D'].push_back("|>");
	m['F'].push_back("|=");
	m['K'].push_back("|<");
	m['B'].push_back("|8");
	m['B'].push_back("|3");
	m['R'].push_back("|2");
	m['H'].push_back("|-|");
	m['P'].push_back("|*");
	m['D'].push_back("|)");
	m['O'].push_back("{}");
	m['J'].push_back("u|");
	m['W'].push_back("`//");
	m['V'].push_back("`/");
	m['J'].push_back("_|");
	m['M'].push_back("^^");
	m['D'].push_back("]}");
	m['P'].push_back("][D");
	m['I'].push_back("][");
	m['B'].push_back("]8");
	m['B'].push_back("]3");
	m['H'].push_back("]-[");
	m['D'].push_back("])");
	m['Y'].push_back("\\j");
	m['V'].push_back("\\/");
	m['H'].push_back("\\-\\");
	m['L'].push_back("[_");
	m['P'].push_back("[]D");
	m['K'].push_back("[]<");
	m['M'].push_back("[\\/]");
	m['D'].push_back("[>");
	m['M'].push_back("JVL");
	m['B'].push_back("I3");
	m['A'].push_back("@");
	m['X'].push_back("><");
	m['C'].push_back("<");
	m['Z'].push_back("7_");
	m['T'].push_back("7");
	m['G'].push_back("6");
	m['S'].push_back("5");
	m['A'].push_back("4");
	m['E'].push_back("3");
	m['Z'].push_back("2");
	m['L'].push_back("1");
	m['O'].push_back("0");
	m['N'].push_back("/\\/");
	m['A'].push_back("/\\");
	m['A'].push_back("//\\\\");
	m['M'].push_back("//.");
	m['A'].push_back("//-\\\\");
	m['A'].push_back("/.");
	m['A'].push_back("/-\\");
	m['H'].push_back("/-/");
	m['M'].push_back(".\\\\");
	m['T'].push_back("-|-");
	m['T'].push_back("+");
	m['U'].push_back("(_|");
	m['G'].push_back("(_>");
	m['U'].push_back("(_/");
	m['U'].push_back("(_)");
	m['M'].push_back("(\\/)");
	m['N'].push_back("(\\)");
	m['M'].push_back("(T)");
	m['F'].push_back("(=");
	m['Q'].push_back("(,)");
	m['O'].push_back("()");
	m['C'].push_back("(");
	m['T'].push_back("']['");
	m['Z'].push_back("'/_");
	m['Y'].push_back("'/");
	m['Y'].push_back("%");
	m['S'].push_back("$");
	m['H'].push_back("#");
	m['T'].push_back("\"I\"");
	m['I'].push_back("!");
	
	string l;
	while(getline(cin,l)){
		for(char c:l){
			c=toupper(c);
			if(c>='A'&&c<='Z')
			cout<<m[c][rand()%m[c].size()];
			else cout<<c;
		}
		cout<<"\n";
	}
}
