class Solution {
  public int[][] matrixReshape(int[][] mat, int r, int c) {
    int m = mat.length;
    int n = mat[0].length;
    int l = 0;
    int i, j;
    if (m * n != r * c) {
      return mat;
    }
    int[][] ans = new int[r][c];// 面向对象编程
    for (i = 0; i <= m - 1; i++) {
      for (j = 0; j <= n - 1; j++) {
        ans[l / c][l % c] = mat[i][j];// 坐标技巧
        l++;
      }
    }
    return ans;
  }
}