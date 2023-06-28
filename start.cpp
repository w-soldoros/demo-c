/*
 * @Author: wutianqi
 * @Date: 2023-06-23 15:32:46
 * @Todo: 入口文件
 *
 * Copyright © 2014-2023 Rabbitpre.com. All Rights Reserved.
 */
#include <iostream>
#include "demo.h"
using namespace std;

int main()
{
  struct Start
  {
    /* data */
    char name;
    int age;
  };
  int a = 10;
  int b = 20;
  swapNum(a, b);
  cout << a << endl;
  cout << b << endl;
  const Start start = {'a', 20};
  cout << (start.name) << endl;
  cout << (start.age) << endl;

  system("pause");
  return 0;
}
