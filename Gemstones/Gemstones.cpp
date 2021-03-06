// Gemstones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int getGemCount(vector<string> &rocks) {
	int count = 0;
	vector<bool> gem(26);
	for (int l = 'a'; l <= 'z'; l++) {
		bool flag = true;
		for (int i = 0; i < rocks.size(); i++) {
			if (rocks[i].find(l) == string::npos) {
				gem[i] = false;
				flag = false;
				break;
			}
		}
		if (flag) count++;
	}
	return count;
}

int main()
{
	int n;
	cin >> n;
	vector<string> rocks(n);
	for (int i = 0; i < n; i++) {
		cin >> rocks[i];
	}
	cout << getGemCount(rocks);

    return 0;
}

