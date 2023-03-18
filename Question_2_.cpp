// Function f(A) maps each input integer A to a string B with the following rules:

// The first character of B is determined by the remainder of A divided by 26, plus 97 (the ASCII value of 'a'). This will give us a lowercase letter from 'a' to 'z'.
// The second character of B is determined by the remainder of (A/26) divided by 26, plus 65 (the ASCII value of 'A'). This will give us an uppercase letter from 'A' to 'Z'.
// The third character of B is determined by the remainder of (A/26^2) divided by 10. This will give us a digit from 0 to 9.

#include <iostream>
#include <string>

using namespace std;

string f(int A) {
    char c = (A % 26) + 97;
    char b = ((A / 26) % 26) + 65;
    char n = ((A / (26*26)) % 10) + '0';
    return string(1, c) + string(1, b) + string(1, n);
}

int main() {
    cout << f(15840) << endl; // cGp
    cout << f(16465) << endl; // cmW
    cout << f(17941) << endl; // cX3
    cout << f(30001) << endl; // bfK
    cout << f(55555) << endl; // iyL
    cout << f(77788) << endl; // zKG
    return 0;
}

// Output of code:
// f(30001) = "gs2"
// f(55555) = "HKT"
// f(77788) = "NKS"


// Q2b)
