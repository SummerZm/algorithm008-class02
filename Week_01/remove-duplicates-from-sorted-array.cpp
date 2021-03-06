
/*
 * 问题：给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
 * 完成度: 30%
 * 前置条件: daat is order.
 * 注解: 第一次出现往前挪并交换，再次出现不处理.
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0;
        int len = nums.size();
        if (len==0) return 0;

        for (int i=1; i<len; i++) {
            if (nums[i]!=nums[n]) {
                n++;
                nums[n] = nums[i];
            }
        }
        return n+1;
    }
};