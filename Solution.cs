
using System;

public class Solution
{
    private static readonly char[] CHARACTERS_IN_INPUT = { 'L', 'R' };

    public int BalancedStringSplit(string input)
    {
        int maxNumberOfBalancedSubstrings = 0;
        int currentBalance = 0;
        foreach (char letter in input)
        {
            currentBalance += (letter == CHARACTERS_IN_INPUT[0]) ? 1 : -1;
            maxNumberOfBalancedSubstrings += (currentBalance == 0) ? 1 : 0;
        }
        return maxNumberOfBalancedSubstrings;
    }
}
