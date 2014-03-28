#include<iostream>
#include<cstdio>
#include<cctype>
#include <algorithm>
#include <functional>
using namespace std;
bool notdigital(char c) {
	return !isdigit(c);
}
int main() {
	string answer, output, input;
	for (int n, m, runcase = 0; cin >> n && n;) {
		cin.get();
		answer.clear();
		output.clear();
		for (int i = 0; i < n;answer = i++ ? answer + "\n" + input : input)
			getline(cin, input);
		(cin >> m).get();
		for (int i = 0; i < m; output = i++ ? output + "\n" + input : input)
			getline(cin, input);
		printf(
				(answer == output) ? "Run #%d: Accepted\n" :
				(answer.erase(
						remove_if(answer.begin(), answer.end(), notdigital),
						answer.end()), output.erase(
						remove_if(output.begin(), output.end(), notdigital),
						output.end()), (answer != output)) ?
						"Run #%d: Wrong Answer\n" :
						"Run #%d: Presentation Error\n", ++runcase);
	}
	return 0;
}
