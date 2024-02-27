
#include <array>
#include <string>
using namespace std;

class Solution {

    inline static const array<char, 2> CHARACTERS_IN_INPUT { {'L', 'R'} };

public:
    int balancedStringSplit(const string& input) const {
        int maxNumberOfBalancedSubstrings = 0;
        int currentBalance = 0;

        for (const auto& letter : input) {
            currentBalance += (letter == CHARACTERS_IN_INPUT[0]) ? 1 : -1;
            maxNumberOfBalancedSubstrings += (currentBalance == 0) ? 1 : 0;
        }
        return maxNumberOfBalancedSubstrings;
    }
};
