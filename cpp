#include <iostream>

using namespace std;

// A : Z = 65 : 90
// a : z = 97 : 122
// spacja = 32
// . = 46

int sum(int a, int b)
{
  //Duze czy male litery
	int flag = (a - 97 >= 0) ? 97 : 65;

	a -= flag;
	int m = 26;

	// np 97 + 97
	int s = a + b;

	s = s % m;

	//r 19 + 97
	return s + flag;
}

int deSum(int s, int b)
{

	int flag = (s - 97 >= 0) ? 97 : 65;

	int m = 26;

	s -= flag;

	int sumAB;
	int modAB;

	for (size_t i = 0; i < m; i++)
	{
		modAB = (i + b) % m;
		if (modAB == s) {
			sumAB = i;
		}
	}

	sumAB += flag;

	return sumAB;
}

void encrypt(string& napis, string k)
{
	int l = 0;
	int wynSum;

	for (int i = 0; i < napis.length(); i++) {

		if (int(napis[i]) == 32) {

			napis[i] = char(32);
			i++;

		}
		else if (int(napis[i] == 46)) {
			napis[i] = char(32);
			i++;
			napis[i] = char(32);

		}
		else {

			wynSum = sum(int(napis[i]), int(k[l]));
			napis[i] = char(wynSum);

			if (l >= k.length() - 1) {
				l = 0;
			}
			else
				l++;

		}
	}
}

void decrypt(string& napis, string k) {

	int l = 0;
	int wynSum;

	for (int i = 0; i < napis.length(); i++) {

		if (int(napis[i]) == 32) {

			if (int(napis[i + 1]) == 32) {
				napis[i] = '.';
			}
			else {
				napis[i] = ' ';
			}

			i++;
		}
		else {

			wynSum = deSum(int(napis[i]), int(k[l]));
			napis[i] = char(wynSum);

			if (l >= k.length() - 1)
				l = 0;
			else
				l++;
		}
	}
}

int main()
{
	string napis = "Jest to napis napis. Napis sklada sie z kilku zdan.";
	string klucz = "przykladowy klucz";

	encrypt(napis, klucz);

	cout << napis << '\n';

	decrypt(napis, klucz);

	cout << napis << '\n';

	return 0;
}
