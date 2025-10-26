# HW1: Selection Sort v.s. Bubble Sort

## 作業簡介
本作業實作不同排序演算法的比較，包含作業要求的 Selection Sort、Bubble Sort，並可額外加入 Quick Sort、Merge Sort 兩種排序演算法。程式能夠將隨機產生數字進行排序，並計算 CPU 運行時間以及檢查排序結過是否正確，最後將排序所需的時間視覺化成圖表結果，以供比較不同排序方法的效率。

## 功能說明
### Requirements
 1. 輸入數據：
 - ```Data Amount``` 可輸入整數 n（產生隨機數值的數量）和 
 - ```Max Data Value``` 可設定數值的 range（隨機生成數字的最大值，最小值為 1）。
 2. ```RandomData``` 按鈕：
 - 可隨機生成數據：產生 n 個隨機整數，範圍為 [0, range-1] 或 [1, range]。
 3. ```Echo Print``` 選項：
 - 產生隨機數值或排序前勾選可決定是否顯示數值或排序成果。
 4. 對隨機數據進行排序：
 - ```SelectionSort```
 - ```BubbleSort```
 - ```MergeSort```
 - ```QuickSort```
 5. ```BinarySearch``` 搜尋功能：
 - 在排序後的數據中搜尋特定目標數字。
 6. 計算 CPU 運行時間：
 - 測量隨機生成數值和排序演算法的執行時間。
 7. 排序演算法運行時間比較表：
 - 第二個 Comparison Table 分業顯示四種排序演算法運行時間比較。

### Bonus
1. 輸入檢測：
- 只能輸入數字，若輸入其他字元則跳出警告視窗提醒使用者。
2. 程式碼註解：
- ```#pragma region Utility Methods``` 和 ```#pragma endregion``` 間有為各項功能寫註解，包含寒士所需輸入參數、程式功能等。
3. 繪製圖表：
- Comparison Table 分業透過 Windows Forms Chart 繪製不同排序演算法的時間比較圖。
4. 更多排序方法：
- 除 ```SelectionSort```、```BubbleSort```，可額外加入 ```MergeSort``` 和 ```Quick Sort```。
5. 使用者介面
- UI 直觀易用。