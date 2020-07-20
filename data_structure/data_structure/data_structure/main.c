//
//  main.c
//  data_structure
//
//  Created by 飞云川 on 2020/7/19.
//  Copyright © 2020 飞云川. All rights reserved.
//

#include <stdio.h>
#include <time.h>
int printN1(int N);
int printN2(int N);
int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    scanf("%d",&N);
//    printN1(N);
//    printN2(N);
    printf("%d\n",CLK_TCK);
    return 0;
}

int printN1(int N){
    int i;
    for(i=1;i<=N;i++){
        printf("%d\n",i);
    }
    return 0;
}
int printN2(int N){
    if(N){
        printN2(N-1);
        printf("%d\n",N);
    }
    return 0;
    
}
