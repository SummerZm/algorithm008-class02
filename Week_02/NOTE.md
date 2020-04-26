学习笔记

- 如何将一个数组进行反转
    ```C++
    // [0, len)
    for (int i=0; i<len/2; i++) {
        tmp = nums[len-i-1];
        nums[len-i-1] = nums[i];
        nums[i] = tmp;
    }

    // [k, len)
    for (int i=k; i<(len+k)/2; i++) {
        tmp = nums[len-i-1+k];
        nums[len-i-1+k] = nums[i];
        nums[i] = tmp;
    }
    ```

- 特征分析
    1. 确定问题数据讨论哪些特征项
    2. 生成特征项, 寻找适合存储操作的数据结构
    3. 特征项的分析, 返回结果
