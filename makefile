all: to1337 toplain

to1337: to1337.cpp
	g++ to1337.cpp -std=c++0x -o to1337
	
toplain: lex.yy.c
	g++ lex.yy.c -std=c++0x -o toplain
	
lex.yy.c: 1337.flex
	flex 1337.flex