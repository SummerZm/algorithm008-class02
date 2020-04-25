/*
 *  问题: 将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
 *  链接: https://leetcode-cn.com/problems/merge-two-sorted-lists/
 *  解法: 递归/归并
 *  完成度: 50%
 */
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            // 终止条件
            if (l1==NULL) return l2;
            if (l2==NULL) return l1;
            // 进入递归路径选择 【如何给递归函数传参数】
            // 留下大的,小的往前挪一个节点.
            // 因为数组是从小往大排的，总能重新选路的机会.
            if (l1->val>l2->val) {
                // 退出递归路径选择 【如何接住递归函数的返回】
                // 返回小的,留下大的.【与进入的路径相反】
                l2->next = mergeTwoLists(l1, l2->next);
                return l2;
            }
            else {
                l1->next = mergeTwoLists(l1->next, l2);   
                return l1;
            }

            // 当前工作:从最终期待的结果,可知函数主要工作是返回小的.
            // 为了代码工整可读, 才需要另起一个重复判断, 一般情况下,选路时会包含子问题的求解
            //return l1->val>l2->val?l2:l1;
        }

        ListNode* mergeTwoLists1(ListNode* l1, ListNode* l2) {
            ListNode *head=NULL, *tail=NULL;
            while (l1 && l2) {
                ListNode *temp= NULL;
                if ( l1->val < l2->val) {
                    temp = l1;
                    l1 = l1->next;
                }
                else {
                    temp = l2;
                    l2 = l2->next;
                }

                if (head==NULL) {
                    head = temp;
                    tail = temp;
                }
                else {
                    tail->next = temp;
                    tail = tail->next;
                }
            }
            if (tail) {
                tail->next = l1==NULL?l2:l1;
            }
            else {
                head = l1==NULL?l2:l1;
            }
            return head;
        }
};

