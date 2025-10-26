[hackmd version url link](https://hackmd.io/@41eOHZkcS3y8iYNWvrdBig/rJyU7XdTyx)

# **Maze Generation and Path Finding**

## **Project Overview**
本專案使用 C++/CLI Windows Forms 開發迷宮視覺化與求解的工具，能夠自動產生迷宮、從檔案讀取迷宮、使用「Try & Error（DFS）」來找出出口，並透過 DataGridView 與動畫即時呈現搜尋過程。

## **Basic Function**  
 - 點選 `Open File` 可讀取 .txt 格式的迷宮檔案 (0/1 matrix)。
 - 點選 `Save Maze File` 可將產生的迷宮儲存成 .txt 檔。
 - `Find a Path` 使用 深度優先搜尋（DFS） 的 Try & Error 方式生成迷宮、找到出口。
 - 顯示迷宮的純文字版本（使用 RichTextBox）。

## **Bonus  Function**  
- 可自行設定入口 (出口固定)。
- 點選 `Generate Maze` 可根據 Control Box 內容來自動生成不同大小、入口的迷宮。
- 使用 DataGridView 顯示迷宮。
- 點選尋找路徑的過程會有動畫顯示，`Find a Path` 會用 DFS 搜尋出路，並動畫顯示過程。
- tab page `path` 可以顯示老鼠經過的路徑。