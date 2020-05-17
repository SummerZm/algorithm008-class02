/*************************************************************************
 > File Name: best-time-to-buy-and-sell-stock-ii.cpp
 > Author: Leafxu
 > Created Time: 2020年05月17日 23:27:59
 ************************************************************************/
/*
 *  问题：股票最佳抛售时间
 *  示例：
 *  输入：
 *  输出：   
 *  要求：  
 *  说明：
 *
 *  完成度：20%
 *  解法：贪心算法
 *  注解：1.暴力； 2. 谷峰法； 3. 一次遍历法, 4. 动态规划法
 *  链接：https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int len = prices.size();
        for (int i=0; i<len-1; i++) {
            if (prices[i]<prices[i+1]) {
                maxProfit += prices[i+1] - prices[i];
            }
        }
        return maxProfit;
    }
};
