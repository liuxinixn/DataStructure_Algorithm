//
//  main.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/5.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 1.选择排序（On^2）
    /** 工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，直到全部待排序的数据元素排完。 选择排序是不稳定的排序方法（比如序列[5， 5， 3]第一次就将第一个[5]与[3]交换，导致第一个5挪动到第二个5后面）(缺：两层for循环必须全部走完) */
    int selectionSort(void);
    selectionSort();
    
    
    // 2.插入排序（On^2）
    /** 插入排序的基本思想是：每步将一个待排序的记录，按其关键码值的大小插入前面已经排序的文件中适当位置上，直到全部插入完为止。（优：提前终止循环）*/
    int insertionSort(void);
    insertionSort();
    
    //插入排序的优化
    int optimizationInsertionSort(void);
    optimizationInsertionSort();
    
    
    // 3.冒泡排序（On^2）
    /**冒泡排序算法的运作如下：（从后往前）
     1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
     2.对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
     3.针对所有的元素重复以上的步骤，除了最后一个。
     4.持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。 */
    int bubbleSort(void);
    bubbleSort();
    
    int bubbleSortTwo(void);
    bubbleSortTwo();
    
    // 4.希尔排序（On^2）
    
    
    // n-1.归并排序（Onlogn）
    
    
    // n.找到字符串中第一个不重复的字符   
    int firstNoRepetition(void);
    firstNoRepetition();

    return 0;
}

