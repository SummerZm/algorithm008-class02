/*************************************************************************
 > File Name: lemonade-change.cpp
 > Author: Leafxu
 > Created Time: 2020年05月17日 23:06:29
 ************************************************************************/
/*
 *  问题：柠檬水找零
 *  示例：
 *  输入：
 *  输出：   
 *  要求：  
 *  说明：
 *
 *  完成度：40%
 *  解法：贪心算法
 *  注解：第一次把问题想复杂了~~.
 *  链接：https://leetcode-cn.com/problems/lemonade-change
 */
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int len = bills.size();
        int five=0, ten=0;
        for (int i=0; i<len; i++) {
            if (bills[i]==5) {
                five++;
            }
            else if (bills[i]==10) {
                if (five>0) {
                    five--;
                    ten++;
                }
                else {
                    return false;
                }
            }
            else {
                if (five>0 && ten>0) {
                    five--;
                    ten--;
                }
                else if (five>=3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }         
        }
        return true;
    }
};

