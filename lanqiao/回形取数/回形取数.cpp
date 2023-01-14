#include <iostream>
using namespace std;

int arr[255][255];

int main()
{

  int m, n;
  int flag = 0;

  int x1 = 0;
  int x2;
  int y1 = 0;
  int y2;
  int i = 0;
  int j = 0;
  int total;
  int cnt = 0;
  
  cin >> m;
  cin >> n;
  
  total = m * n;
  x2 = m - 1;
  y2 = n - 1;
  for (int k = 0; k < m; k++)
  {
  	for (int l = 0; l < n; l++)
  	{
  		cin >> arr[k][l];
	}
  }
//for (int k = 0; k < m; k++)
//  {
//  	for (int l = 0; l < n; l++)
//  	{
//  		cout <<  arr[k][l] << ' ';
//	}
//	cout << endl;
//  }
  while (cnt < total)
  {
  	cout << arr[i][j] << ' ';
    cnt++;
    if (flag == 0)
    {
      if (i + 1 <= x2)
      {
        i++;
      }
      else
      {
        flag = (flag + 1) & 3;
        j++;
        y1++;
      }
    }
    else if (flag == 1)
    {
      if (j + 1 <= y2)
      {
        j++;
      }
      else
      {
        flag = (flag + 1) & 3;
        i--;
        x2--;
      }
    }
    else if (flag == 2)
    {
      if (i - 1 >= x1)
      {
        i--;
      }
      else
      {
        flag = (flag + 1) & 3;
        j--;
        y2--;
      }
    }
    else if (flag == 3)
    {
      if (j - 1 >= y1)
      {
        j--;
      }
      else
      {
        flag = (flag + 1) & 3;
        i++;
        x1++;
      }
    }
  }
  //
  cout << '\n';
  return 0;
}
