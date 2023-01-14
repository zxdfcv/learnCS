#include <iostream>
using namespace std;

//�߾��Ӹ߾����߾��˵;�

//ע�⸴ϰjava�����﷨��֪ʶ

int nums[10005];
int nums_len;

void init(int x)
{
  nums_len = 0;
  do
  {
    nums[nums_len] = x % 10;
    x /= 10;
    nums_len++;
  } 
  while (x); //����ֱ�Ӹ�ֵ + flatten
}

void flatten()
{
  nums_len += 11;//�����
  for (int i = 0; i < nums_len; i++)
  {
    nums[i + 1] += nums[i] / 10;
    nums[i] %= 10; 
  }

  for (; !nums[nums_len - 1] && nums_len > 1; nums_len--);
}

void mul(int x)
{
  for (int i = 0; i < nums_len; i++)
  {
    nums[i] = nums[i] * x;
  }
  flatten();
}


void print()
{
  for (int i = nums_len - 1; i >= 0; i--)
  {
    cout << nums[i];
  }
  cout << '\n';
}

int main()
{
  // ���ڴ��������Ĵ���
  init(1);
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    mul(i);
  }
  print();
  //cout << nums_len << endl;
  return 0;
}
