#include<iostream>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<string>
#include<stack>
#include<cctype>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<stdexcept>
#include<climits>
#include<cstdlib>
#include"malloc.h" 
using namespace std;

///�ڵ�����
typedef struct  node{
    node *lChild ;
    node *rChild ;
    int data ;//Ȩֵ
}TreeNode ; 
TreeNode * CreateHuffmanTree(int a[],int n)  ; //����a��ʾȨ������  n�Ǹ��� 
void  FindLittle(int *x1,int *x2 ,TreeNode**pArr,int n)  ; //���ҳ�2��Ȩֵ��С�Ľڵ���±� 


TreeNode * CreateHuffmanTree(int a[],int n)   //����a��ʾȨ������  n�Ǹ��� 
{     
    TreeNode**pArr=(TreeNode**)malloc(sizeof(TreeNode*)*n);  //��̬����ָ������
    TreeNode*p =NULL;//���ڷ��ع��������ĸ��ڵ��ָ�� 
    int k1,k2 ;  //k1������СȨ  k2�����СȨ    ������Ϊ FindLittle�Ĳ���������СȨ�±�
    for(int i=0;i<n;i++)
    {
        pArr[i]=new TreeNode ;    //Ϊ�ڵ�ָ�����鶯̬����ָ��Ķ���
        pArr[i]->data=a[i]  ;
        pArr[i]->lChild=pArr[i]->rChild=NULL ;//��ʼ��ÿ���ڵ�����ҽڵ㶼�ǿ�    
    }
    int  i;
    ///��Ϊ����������ѭ���Ĵӽڵ��������ҳ�Ȩֵ��С�������ڵ������� ����������ɾ���������ڵ�,���Ѻϲ���Ľڵ���ӵ������С�
    for(i=0;i<n-1;i++) //��Ϊ���ʣ��һ���ڵ����Ծͻ���ѡn-1�� 
    {
        FindLittle(&k1,&k2,pArr,n) ; //����2����СȨ�ڵ��±� 
        p=new TreeNode;   //ѭ���������pָ��Ľڵ�������յ�pRoot 
        p->data=pArr[k1]->data+pArr[k2]->data  ;
        p->lChild=pArr[k1] ;
        p->rChild=pArr[k2] ;  
        
        pArr[k1]=p    ;   //���ϲ�����½ڵ㸳ֵ��pArr��С���Ǹ��±�
        pArr[k2]=NULL ;   // ���±�����NULL, k1��k2Ҳ���Է�����������������Լ���
        
    }
    free(pArr) ;//�ͷ�ָ������  
    return p;  
}


void  FindLittle(int *x1,int *x2 ,TreeNode**pArr,int n)  //���ҳ�2��Ȩֵ��С�Ľڵ���±�
{
    int  k1,k2;  //����Ȩ��С�������ڵ��±� 
    k1=-1 ; //��ʾû���ҵ�����
    for(int i=0;i<n;i++)    //�ҳ����е�ǰ����Ԫ�ز�ΪNULL���±�
    {  
        if(pArr[i]!=NULL&&k1==-1)
        {
            k1=i ;     //��һ���±�
            continue ;
        }
        if(pArr[i]!=NULL) 
        {
            k2=i ;
            break;//�ҵ��ڶ����±��˳�ѭ��
        }
    }
    
    ////// ��СȨ��2���±������ʵ��//////////    
    for(int i=k2;i<n;i++) //�������Ȼ�ȡk1  ���ȡk2����һ��ʼ һ���Ǵ�k2��ʼѭ���� 
    { 
    if(pArr[i]!=NULL)
    {
        if(pArr[i]->data<pArr[k1]->data )  //����±�k1��Ȩ С�ڵ�ǰ�±��Ԫ�ص�Ȩ 
        {  
            k2=k1;  //��ʱ����k1<k2�������Ƿ��صĽ��
            k1=i ;
        }
        else if(pArr[i]->data<pArr[k2]->data)
        {
            k2=i ;
        }
        
    }    
    }
    *x1=k1  ;
    *x2=k2  ;
}

///����������������� 
void PreHufOrder(TreeNode*p)   //�������
{  
    if(p!=NULL)
    {
        printf("%d ",p->data) ; 
        PreHufOrder(p->lChild) ;
        PreHufOrder(p->rChild) ;
    } 
}

//�������  
void InHufOrder(TreeNode*p)
{
       if(p!=NULL)
       {
           InHufOrder(p->lChild) ;
           printf("%d ",p->data) ;
           InHufOrder(p->rChild) ;
       }
}
//�������� 
void PostHufOrder(TreeNode*p)
{
    if(p!=NULL)
    {
        InHufOrder(p->lChild) ;
        InHufOrder(p->rChild) ;
        printf("%d ",p->data) ;
    }
}
//�����  
void ClearHufTree(TreeNode*p)
{
    if(p!=NULL)
    {
        ClearHufTree(p->lChild) ;
        ClearHufTree(p->rChild) ;
        delete p ;
    }
}

int main()
{

   	int a[]={0,1,2} ;  //Ȩֵ 
    TreeNode*p=::CreateHuffmanTree(a,sizeof(a)/sizeof(int)) ; //����huffman��
    printf("Huffmanǰ�����:\n") ;
    PreHufOrder(p) ;  //ǰ�����huffmanTree
    printf("\n");
    printf("Huffman�������:\n") ;
    PostHufOrder(p) ;//�������
    printf("\n");
    printf("Huffman�������:\n") ;
    InHufOrder(p) ;//�������
    printf("\n");
    ClearHufTree(p) ;//�����
    int q;
    cin>>q;
    return  0 ;
}                                 
