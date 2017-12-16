#include<cstdio>
#include<cstring>  //字符串处理函数的头文件
int main(){
    char str[10];
    int i=0,num=0,flag=0;
    gets(str);//等价于scanf("%s",str);
    do{ //该do-while循环统计字符串中字符的个数num
        num++;
    }
	while(str[num]!='\0');
    do{ //此do-while循环进行对应字符的判断，看是否对应相同
        if(str[i]!=str[num-1-i]){ //如果对应字符不相同，则flag=1
            flag=1;
            break;
        }
    i++;
    }
	while(i<num/2);
    if(flag==0)
       printf("此字符串是回文串！");
    else
       printf("此字符串不是回文串！");
} 
