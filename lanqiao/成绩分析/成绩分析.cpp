#include <iostream>
using namespace std;
int main()
{
  int n;
  int max_score = -1;
  int min_score = 101;
  int count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int score;
    scanf("%d", &score);
    max_score = max(max_score, score);
    min_score = min(min_score, score);
    count += score;
  }
  printf("%d\n%d\n%.2lf\n", max_score, min_score, (double) count / n);
  return 0;
} //×¢Òâ¸´Ï°ËÑË÷ºÍµÝ¹é 
