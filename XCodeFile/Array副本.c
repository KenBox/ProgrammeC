//
//  Array.c
//  c-code17
//
//  Created by shangde on 13-8-29.
//  Copyright (c) 2013年 Ken. All rights reserved.
//

#include <stdio.h>

void FunctionArray(){
    //死循环，耗尽内存
    while(2>1){
        printf("Hello,World!\n");
        //手动停止整个程序；
        //break; //停止一个代码块;
        //exit(-1);//停止整个程序;
    }
    printf("hahahahah!\n");
}


void CreatArray(){
    //定义一个数组
    int arr_WorkYears[50];//工作年限
    
    //定义时赋值
    //double arr_Salary[10]={1500.0,2000.0,2500.0,2800.0,3200.0,3500.0,4000.0,4500.0,5000.0,6000.0};//工资
    
    //自动赋值
    for (int i=0; i<50; i++) {
        arr_WorkYears[i]=i+1;
    printf("年限 arr_WorkYears[%d] =%d\n",i,arr_WorkYears[i]);
    }
    //手动赋值
    /*
    for (int i=0;i<50;i++){
        int temp = 0;
        printf("请输入一个数字:");
        scanf("%d",&temp);
        arr_WorkYears[i]=temp;
        printf("年限 arr_WorkYears[%d] =%d\n",i,arr_WorkYears[i]);
    }
     */
    
}

//成绩录入系统
//1#输入学号打印各次考试成绩及平均值；
//2#输入考试场次，打印每个学生的成绩及本次考试的平均值；
//3#根据学号查出学生某次考试成绩;
//4#录入考试成绩
void CheckScore(){
    int arr_Score1[6]={85,78,82,96,45,83};
    int arr_Score2[6]={74,58,66,85,69,81};
    int arr_Score3[6]={85,61,61,89,55,83};
    int arr_Score4[6]={85,78,99,100,51,78};
    int num;
    printf("请输入学号:");
    scanf("%d",&num);
    switch (num) {
        case 1:
            
            printf("您的6次考试成绩分别是:%d",arr_Score1[0]);
            break;
            
        default:
            break;
    }
    
}



//从键盘输入一个数字，求这个数字的平方、立方（使用函数调用的方法完成）
void FunctionA1(){
    int a,Res,Res1;
    printf("请输入一个数字:");
    scanf("%d",&a);
    Res=a*a;
    Res1=Res*a;
    printf("这个数字的平方是:%d.立方是%d.\n",Res,Res1 );
    
}


//编写程序，给长度为10的数组赋值，并求出最大值、和、平均值
void FunctionA2(){
    const int LENGTH=10;
    int arr_Array[LENGTH]={51,52,11,222,300,67,23,98,115,20};
    int nSum,nMax;
    float nAvg;
    for (int i=0; i<LENGTH; i++) {
        nSum+=arr_Array[i];
    }
    printf("该数组之和为：%d\n",nSum);
    for (int i=0; i<LENGTH; i++) {
        if (arr_Array[i]>arr_Array[i+1]) {
            nMax=arr_Array[i];
            arr_Array[i+1]=arr_Array[i];
        }
    }
    printf("该数组中最大的是：%d\n",nMax);
    nAvg=(float)nSum/LENGTH;
    printf("该数组的平均值是：%.2f\n",nAvg);
    
}

