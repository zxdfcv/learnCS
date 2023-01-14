#include <iostream>
using namespace std;
int main()
{
  int n;
  scanf("%d", &n);
  int excellent = 0;
  int pass = 0;
  for (int i = 0; i < n; i++)
  {
    int score;
    scanf("%d", &score);
    pass += (score >= 60) ? 1 : 0;
    excellent += (score >= 85) ? 1 : 0;
  }
  printf("%.0f%%\n%.0f%%", (double)pass / n * 100, (double) excellent / n * 100);
  return 0;
}
