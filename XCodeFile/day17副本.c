//
//  day17.c
//  c-code17
//
//  Created by shangde on 13-8-29.
//  Copyright (c) 2013年 Ken. All rights reserved.
//

#include <stdio.h>



// 字符串类型
void Function1(){
    char str[] = "strings";
    printf("%ld",sizeof(str));
}

//               列数 列数
void Function2(){
    int arr_ArrayA[3][3][3]={{{1,2,3},{4,5,6}},{{77,88,99},{100,110,120}},{{11,12,13},{10,20,30}}};
    int i,j,k;
    for (i=0;i<3;i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                printf("%d ",arr_ArrayA[i][j][k]);
                
            }
            printf("\n");
        }
        printf("\n");
    }
}


//招收程序员，年龄大于20，小于40.
void Function3(){
    int nAge;
    printf("请输入程序员年龄.\n");
    scanf("%d",&nAge);
    if (nAge>=20&&nAge<=40) {
        printf(">>>>>招收\n");
    }
    else {
        printf(">>>>>不招收\n");
    }
}

//if else 嵌套使用，输入一个日期数字（1-7），判断是星期几？
void Function4(){
    int nInput;
    printf("请输入一个日期数字:");
    scanf("%d",&nInput);
    if (nInput==1) {
        printf("您输入的日期是星期日.\n");
    }
    if (nInput==2){
        printf("您输入的日期是星期一.\n");
    }
    if (nInput==3) {
        printf("您输入的日期是星期二.\n");
    }
    if (nInput==4) {
        printf("您输入的日期是星期三.\n");
    }
    if (nInput==5) {
        printf("您输入的日期是星期四.\n");
    }
    if (nInput==6) {
        printf("您输入的日期是星期五.\n");
    }
    if (nInput==7) {
        printf("您输入的日期是星期六.\n");
    }
    else {
        printf("您的输入出错了,请输入1-7的数字。");
    }
    
}

//用switch方法；
void Function5(){
    int nDay;
    printf("请输入一个日期数字:");
    scanf("%d",&nDay);
    //switch语句的格式
    
    
    
    
    switch (nDay) {
        case 1:
            printf("星期天\n");
            break;
            
        case 2:
            printf("星期一\n");
            break;
            
        case 3:
            printf("星期二\n");
            break;
            
        case 4:
            printf("星期三\n");
            break;
            
        case 5:
            printf("星期四\n");
            break;
            
        case 6:
            printf("星期五\n");
            break;
            
        case 7:
            printf("星期六\n");
            break;
            
        default:printf("请输入1-7的数字。\n");
            break;
    }
}

//根据人的年龄，判断幼儿、少年、青年、中年、老年；
void Function6(){
    int nInput;
    printf("请输入您的年龄:");
    scanf("%d",&nInput);
    enum lev;
    
    if (nInput>0&&nInput<5) {
        printf("幼儿\n");
    }
    if (nInput>=5&&nInput<15) {
        printf("少年\n");
    }
    if (nInput>=15&&nInput<25) {
        printf("青年\n");
    }
    if (nInput>=25&&nInput<60) {
        printf("中年\n");
    }
    if (nInput>=60&&nInput<150) {
        printf("老年\n");
    }
    if (nInput<=0&&nInput>=150){
        printf("请输入一个合理的数字。");
    }
    
}


//使用for循环输出一个菱形图案;

void Function7(){
    int i,j;
    //用k控制矩阵的大小
    int k=11;
    
    //解决k是偶数时的问题
    
    if (k%2==0) {
        k++;
    }
    
    for (i=0; i<k; i++) {
        for (j=0; j<k; j++) {
            //判断i的大小是否超过k/2，此处设置i<k/2;
            if(i<k/2){
                if(j<k/2-i||j>k/2+i){
                    printf(" ");
                }
                else {
                    printf("*");
                }
            }
            //此处设置i>=k/2;
            if(i>=k/2){
                if (j<i-k/2||j>=k-(i-k/2)) {
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        printf(" \n");
    }
}

//图案；
void Function8(){
    int i,j,k = 5;
    for (i=1; i<=k; i++) {
        for (j = 1; j<=i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = k -1;i>0 ; i--) {
        for (j = 1; j<= i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}


//使用while循环输出9*9的乘法表；

void Function10(){
    int i = 1,j,nSum;
    while (i<10) {
        j = 1;
        while (j<=i) {
            nSum = i * j;
            printf("%d * %d = %d \t",j,i,nSum);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("====================\n");
    
    for (i = 1; i<10; i++) {
        j=1;
        while (j<=i) {
            printf("%d * %d = %d | \t",j,i,j*i);
            printf("\n-----------\n");
            j++;
        }
        
        
    }
}
