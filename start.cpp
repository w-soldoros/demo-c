/*
 * @Author: wutianqi
 * @Date: 2023-06-23 15:32:46
 * @Todo: 入口文件
 *
 * Copyright © 2014-2023 Rabbitpre.com. All Rights Reserved.
 */
#include <iostream>
using namespace std;

#include <fstream>
#include <string>

class Person
{
public:
  char m_Name[64];
  int m_Age;
};

void test01()
{
  int i, j;
  char test[1000];
  ifstream ifs;
  ifs.open("E:/c++/demo-c/dist/person.txt", ios::in);
  if (!ifs.is_open())
  {
    cout << "close error" << endl;
  }
  while (ifs >> test)
  {
    cout << test[i] << endl;
  }

  ifs.close();
}

int main()
{

  test01();

  system("pause");

  return 0;
};