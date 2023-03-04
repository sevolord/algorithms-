//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        /*
            Задав целочисленный массив nums размера n, верните минимальное количество ходов, необходимое для того, 
            чтобы все элементы массива стали равными.
            За один ход можно увеличить или уменьшить элемент массива на 1.
            Тестовые примеры разработаны таким образом, чтобы ответ помещался в 32-битное целое число.
        */

        /*
            предположим, что достаточным алгоритом будет сначала найти среднее от поступивших чисел, а затем выдать разницу
            от среднего для каждого числа и сложить их
        */
        long sum=0; 
        for (int i=0; i < nums.size(); i++)
            sum+=nums[i];
        long medium=sum/nums.size();
        int steps=0;
        for (int i=0; i < nums.size(); i++)
        {
            steps+=abs(medium-nums[i]);
        } 
        return steps;
    }
};