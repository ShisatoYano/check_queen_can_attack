#include <iostream>
using namespace std;

// returns true if the queen can attack the opponent
bool check_queen_can_attack(int q_r, int q_c, int o_r, int o_c) {
    // queen and opponent are in same row
    if (q_r == o_r) {
        return true;
    }

    // queen and the opponent are in same column
    if (q_c == o_c) {
        return true;
    }

    // queen can attack diagonally
    if (abs(q_r - o_r) == abs(q_c - o_c)) {
        return true;
    }

    return false;
}

int main() {
    int q_r = 4, q_c = 5; // position of queen
    int o_r = 6, o_c = 7; // position of opponent

    if (check_queen_can_attack(q_r, q_c, o_r, o_c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    q_r = 1, q_c = 1;
    o_r = 3, o_c = 2;

    if (check_queen_can_attack(q_r, q_c, o_r, o_c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
