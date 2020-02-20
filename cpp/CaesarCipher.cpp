#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
// https://www.hackerrank.com/challenges/caesar-cipher-1/problem

// Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

// Original alphabet:      abcdefghijklmnopqrstuvwxyz
// Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc
// For example, the given cleartext  and the alphabet is rotated by . The encrypted string is .

// Note: The cipher only encrypts letters; symbols, such as -, remain unencrypted.

// Function Description

// Complete the caesarCipher function in the editor below. It should return the encrypted string.

// caesarCipher has the following parameter(s):

// s: a string in cleartext
// k: an integer, the alphabet rotation factor
// Input Format

// The first line contains the integer, , the length of the unencrypted string.
// The second line contains the unencrypted string, .
// The third line contains , the number of letters to rotate the alphabet by.

// Constraints
//  is a valid ASCII string without any spaces.

// Output Format

// For each test case, print the encoded string.

// Sample Input

// 11
// middle-Outz
// 2
// Sample Output

// okffng-Qwvb
// Explanation

// Original alphabet:      abcdefghijklmnopqrstuvwxyz
// Alphabet rotated +2:    cdefghijklmnopqrstuvwxyzab

// m -> o
// i -> k
// d -> f
// d -> f
// l -> n
// e -> g
// -    -
// O -> Q
// u -> w
// t -> v
// z -> b


string caesarCipher(string s, int k) {
    string ret(s);
    for(int i=0;i<s.length();i++){
        if(!isalpha(s[i])) continue;
        char base=isupper(s[i])?'A':'a';
        char new_char=(s[i]+k-base)%26+base;
        ret[i]=new_char;
    }
    return ret;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
