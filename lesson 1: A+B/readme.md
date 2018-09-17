# A+B
-------

## 老师的上课输入样例
```
2 3
```

## 老师的输出样例
```
2 + 3 = 5
```

我的输入输出样例
```
Please input two numbers
input  NO 0:3
input  NO 1:6

3 + 6 = 9
```
+ 默认输入两个数字，更改输入次数在`#define  NUM 2`。
## 简单的出错处理
+ 就是输入非数字时，报错。
```
Please input two numbers
input  NO 0:4
input  NO 1:e
input error!
```
```
Please input two numbers
input  NO 0:r
input error!
```
## 改进与反思
+ 出错处理有点简单，希望通过`cin`的标志将报错信息细化，然后使用`try...throw...`进行处理。
+ 最开始是使用`scanf`的返回值`2!=scanf("%d %d",&a,&b);`进行判断,但是一旦输入两个以上的数字，只对于前两个数相加。所以使用循环限制输入次数。

## 编译信息
1. gcc/g++
+ 版本信息
```
g++ (Ubuntu 7.3.0-16ubuntu3) 7.3.0
```
+ 编译命令
```
g++ -c utility.cpp -o utility.o
g++ -c main.cpp -o main.o
g++ main.o utility.o -o test
/.test
```
2. cmake
+ 版本信息
```
cmake version 3.10.2
```

+ `CMakeLists.txt`
```
cmake_minimum_required(VERSION 3.10)
project(fundamental_curriculum_design)

set(CMAKE_CXX_STANDARD 11)

add_executable(fundamental_curriculum_design main.cpp utility.h utility.cpp)
```