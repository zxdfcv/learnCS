#include <iostream>
using namespace std;

struct node{
  int data;
  int next;
};

node arr[105];

int main()
{
  // ���ڴ��������Ĵ���
  int m;
  int p;
  int q;
  int r;
  scanf("%d", &m);
  arr[0].next = 1;
  arr[0].data = 0;
  for (int i = 0; i <= 9; i++)
  {
    arr[i + 1].data = i + 1;
    arr[i].next = i + 1;//��ʼ��
  }
  arr[10].next = -1;//β��
  for (int i = 0; i < m; i++)
  {
    scanf("%d", &p);
    r = 0;
    q = arr[r].next;
    while (q != -1)
    {
      if (q == p)
      {
        arr[r].next = arr[q].next;
        arr[q].next = arr[0].next;
        arr[0].next = q; //��˳��
        break;
      }
      q = arr[q].next;
      r = arr[r].next;
    }
    if (q == -1)
    {
      return 1;//error
    }
    int s = arr[0].next;
    while (s != -1)
    {
      cout << arr[s].data << ' ' ;
      s = arr[s].next;
    }
    cout << endl;
  }
  return 0;
} //���Ը�ϰ��splay��
//�������Ϊ����
