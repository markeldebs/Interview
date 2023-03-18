#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> get_squares(int n, int m) {
    vector<pair<int, int>> squares;
    while (n > 0 && m > 0) {
        int square_size = (n > m) ? m : n; // pick the smaller side as the square size
        squares.push_back({square_size, square_size});
        if (n > m) {
            n -= square_size;
        } else {
            m -= square_size;
        }
    }
    return squares;
}

int main() {
    int n, m;
    cout << "Enter the dimensions of the rectangular piece of paper (N M): ";
    cin >> n >> m;
    vector<pair<int, int>> squares = get_squares(n, m);
    cout << "Squares: ";
    for (const auto& square : squares) {
        cout << square.first << "x" << square.second << " ";
    }
    cout << endl;
    return 0;
}

// The function get_squares takes the dimensions n and m of the rectangular piece of paper and returns a vector of pairs representing 
// the squares that can be made out of it. The main program prompts the user to enter the dimensions, 
// calls the function to get the squares, and prints them to the console.