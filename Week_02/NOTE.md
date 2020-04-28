学习笔记

- 数组反转
    ```C++
    // [start, len)
    void reverse(int start, int end, vector<int>& arr) {
        for (int i=start; i<(end-start)/2; i++) {
            int tmp = arr[end-i-1+start];
            arr[end-i-1+start] = arr[i];
            arr[i] = tmp;
        }
    }
    ```
- 数组环形换座
    ```C++
    void rotate(vector<int>& nums, int k) {
        int count = 0;
        int len = nums.size();
        k = k % len;

        for (int start=0; count<len; start++) {
            int prev = nums[start];
            int current = start;
            do {
                int next = (current+k) % len;
                
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;

                current = next;
                count++;
            } while (start != current);
        }
    }
    ```

- 特征分析
    1. 确定问题数据讨论哪些特征项
    2. 生成特征项, 寻找适合存储操作的数据结构
    3. 特征项的分析, 返回结果
