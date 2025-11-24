#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

string Lower(string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string word, article;
	getline(cin, word);
	getline(cin, article);

	string target = Lower(word);

	vector<string>words;
	vector<int>positions;

	istringstream iss(article);
	string currentword;
	int pos = 0;

	while (iss >> currentword) {
		positions.push_back(pos);
		words.push_back(Lower(currentword));
		pos += currentword.length() + 1;
	}

	int count = 0;
	int firstpos = -1;

	for (int i = 0; i < words.size(); i++) {
		if (words[i] == target) {
			count++;
			if (firstpos == -1) {
				firstpos = positions[i];
			}
		}
	}

	if (count > 0) {
		cout << count << " " << firstpos << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;

}
