#include <stdio.h>



int main()
{
char *str = "Hello";
char *str2 = "Hello";//只读的  或者使用malloc得到的空间
char word[] = "Hello";
char line[10] = "Hello";


printf("str  =%p \n",str);
printf("str2 =%p \n",str2);//指针定义的字符串存在区域不可修改 相当于有const


printf("&word=%p \n",&word);
printf("&line=%p \n",&line);


word[0] = 'B';//数组创建的字符串可以对单个值进行修改
printf("word  = %s\n",word);

//相邻的两个字符串可以自动连接
// str[0] = "1";  //指针创建的  只读的 不能修改其中的值
// str = "11111111";  //指针创建的  可以整体修改
printf("str =%s\n"
"1234\n",str);
char buffer[100] = "";
printf("打印空字符串 %d" , buffer[0] == '\0');
// printf("%c  \
//     1234",*str2);
    
}