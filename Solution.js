
/**
 * @param {string} input
 * @return {number}
 */
var balancedStringSplit = function (input) {
    const CHARACTERS_IN_INPUT = ['L', 'R'];
    let maxNumberOfBalancedSubstrings = 0;
    let currentBalance = 0;

    for (let letter of input) {
        currentBalance += (letter === CHARACTERS_IN_INPUT[0]) ? 1 : -1;
        maxNumberOfBalancedSubstrings += (currentBalance === 0) ? 1 : 0;
    }
    return maxNumberOfBalancedSubstrings;
};
