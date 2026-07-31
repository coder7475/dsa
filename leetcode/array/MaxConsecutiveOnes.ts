/*
* Link: https://leetcode.com/problems/max-consecutive-ones/description/
*/

function findMaxConsecutiveOnes(nums: number[]): number {
    let maxOnes = 0, count = 0;

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] === 1) {
            count += 1
            maxOnes = Math.max(maxOnes, count);
        } else {
            count = 0;
        }
    }

    return maxOnes;
};