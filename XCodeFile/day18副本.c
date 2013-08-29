//
//  day18.c
//  c-code17
//
//  Created by shangde on 13-8-29.
//  Copyright (c) 2013年 Ken. All rights reserved.
//

#include <stdio.h>




//求完备数
void FunctionA(){
    int i,j;
    int sum=0;
    for(i=1;i<10000;i++){
        for(j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
                //	printf("*** i=%d,j=%d,sum=%d",i,j,sum);
            }
        }
        if (i%j==0&&sum==i){
            printf("%d是完备数。\n",sum);
        }
        sum=0;
    }
}

//==================================================================================
//a+aa+aaa+aaaa+aaaaa......=?
void FunctionB(){
    long a=1;
    long sum=a;
    long all=a;
    long total=a;
    
    for(int i=0;i<9;i++){
        if (i==0) {
            printf("---i=%d , sum=%ld , all=%ld \n",i,sum,all);
            printf("===total=%ld  \n\n",total);
            continue;
        }
        sum=10*sum;
        all=sum+all;
        printf("---i=%d , sum=%ld , all=%ld \n",i,sum,all);
        total=all+total;
        printf("===total=%ld  \n\n",total);
    }
}


//================================================================================
//练习三：
//求 2/1+3/2+5/3+8/5+13/8.....前20项之和？
void FunctionC(){
    int a,b,c,d;
    int Res=0;
    a=2;
    b=1;
    for(int i=1;i<21;i++){
        Res=a/b+Res;
        c=a+b;d=a;
        a=c;b=d;
        printf("a = %d,b = %d,Res=%d\n",a,b,Res);
    }
}


//数组冒泡排序
void FunctionD(){
    int arr_Array[10];
    int nInput;
    for (int i = 0; i<10; i++) {
        printf("Please enter a number:");
        scanf("%d",&nInput);
        arr_Array[i]=nInput;
    }
    printf("==============原始数组===============\n");
    for (int j = 0; j<10; j++) {
        printf("%d ",arr_Array[j]);
        printf("\n");
    }
    int i,j;
    for (j=0; j<10; j++) {
        for (i=0; i<10; i++) {
            //判断大小，符合条件交换两个变量的值；
            if(arr_Array[i]>arr_Array[i+1]){
                arr_Array[i]=arr_Array[i]+arr_Array[i+1];
                arr_Array[i+1]=arr_Array[i]-arr_Array[i+1];
                arr_Array[i]=arr_Array[i]-arr_Array[i+1];
            }
        }
    }
}