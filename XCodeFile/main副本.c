//
//  main.c
//  c-code17
//
//  Created by shangde on 13-8-27.
//  Copyright (c) 2013年 Ken. All rights reserved.
//

#include <stdio.h>
//枚举一周的类型
enum euWeekday {Sun,Mon,Tue,Wed,Thu,Fri,Sat};
//调用外部函数

//导入外部文件
#include "day17.h"
#include "day18.h"
#include "Array.h"


//声明外部实现了在main（）中使用的函数
//extern void FunctionA();


int main(int argc, const char * argv[])
{

    FunctionA2();
    
     return 0;
}

