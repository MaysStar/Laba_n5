#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <time.h>
#include <string>
#include <Windows.h>
#include <cstdlib>


using namespace std;

int main() {
	string S1, S2;
	cout << "Enter first massif: ";
	getline(cin, S1);
	cout << endl;
	cout << "Enter second massif: ";
	getline(cin, S2);
	cout << endl;
	int countOfConsonants = 0;
	for (int i = 0; i < S1.length(); i++) {
		S1[i] = tolower(S1[i]);
		for (int j = 0; j < S2.length(); j++) {
			S2[j] = tolower(S2[j]);
			if (S1[i] == S2[j] && S1[i] != ' ' && S1[i] != 'a' && S1[i] != 'o' && S1[i] != 'i' && S1[i] != 'e' && S1[i] != 'u') {
				cout << S1[i] << endl;
				countOfConsonants++;
			}
		}
	}
	cout << "amount of consonants: " << countOfConsonants;
}
