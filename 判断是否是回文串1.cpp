#include<cstdio>
#include<cstring>  //�ַ�����������ͷ�ļ�
int main(){
    char str[10];
    int i=0,num=0,flag=0;
    gets(str);//�ȼ���scanf("%s",str);
    do{ //��do-whileѭ��ͳ���ַ������ַ��ĸ���num
        num++;
    }
	while(str[num]!='\0');
    do{ //��do-whileѭ�����ж�Ӧ�ַ����жϣ����Ƿ��Ӧ��ͬ
        if(str[i]!=str[num-1-i]){ //�����Ӧ�ַ�����ͬ����flag=1
            flag=1;
            break;
        }
    i++;
    }
	while(i<num/2);
    if(flag==0)
       printf("���ַ����ǻ��Ĵ���");
    else
       printf("���ַ������ǻ��Ĵ���");
} 
