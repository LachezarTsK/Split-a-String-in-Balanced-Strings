
public class Solution {

    private static final char[] CHARACTERS_IN_INPUT = {'L', 'R'};

    public int balancedStringSplit(String input) {
        int maxNumberOfBalancedSubstrings = 0;
        int currentBalance = 0;

        for (char letter : input.toCharArray()) {
            currentBalance += (letter == CHARACTERS_IN_INPUT[0]) ? 1 : -1;
            maxNumberOfBalancedSubstrings += (currentBalance == 0) ? 1 : 0;
        }
        return maxNumberOfBalancedSubstrings;
    }
}
