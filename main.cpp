#include <iostream>
 
bool permutation(std::string s1, std::string s2) {

    if (s1.length() != s2.length()) return false;

	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s2.length(); j++) {
			if (s1[i] == s2[j]) {
				s1.erase(i--, 1); // if they are in common, have to go down by 1
				s2.erase(j--, 1);
			}
		}
	}

	return (s1.length() == 0);

}
 
int main()
{
    using namespace std;

    string s1 = "h         ";
    string s2 = "    h     ";
    bool x = permutation(s1, s2);

    cout << x << " " << s1 << " " << s2 << endl;

}

// basic compiling: g++ -o output filename.cpp
// multiple files: g++ main.cpp file.cpp -o output