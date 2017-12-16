/*
�ѽ�� 
�����������㷨��ʵ����C++��д
���ͷ֣�10 - ���ʱ�䣺2008-12-18 15:55 
����Ҫ��
1.�����ԣ��û�����������ַ�����ϵͳ�Զ�����ÿ���ַ��Ĺ���������Ͷ�Ӧ�Ĺ�������
2.�Ѻ��ԣ�����Ҫ�Ѻã���������ʾ������չʾ���Ի�
3.�ɶ��ԣ�Դ��������������в��
4.��׳�ԣ��û�����Ƿ�����ʱ��ϵͳҪ��ʱ����������Ϣ 
*/

#include <conio.h> 
#include<stdio.h> 
#include<stdlib.h> 
#define MAXLEN 100 

typedef struct Huffmantree 
{ 
	char ch; /*��ֵ*/ 
	int weight,mark; /*weightΪȨֵ,markΪ��־��*/ 
	struct Huffmantree *parent,*lchild,*rchild,*next; 
}Hftree,*linktree; 

/*����������ַ������ϲ���ͬ��������ÿ���ַ��������г��ֵĴ��� */ 
linktree tidycharacter(char character[]) 
{ 
	int i=0; 
	linktree tree,ptr,beforeptr,node; /*��ʽ ,treeΪͷ���,beforeptrΪptr��ǰһ���,nodeΪ������Ľ��*/ 

	tree=(linktree)malloc(sizeof(Hftree));/*�����������ͷ���*/ 
	if(!tree)return NULL; 
	tree->next=NULL; /* ͷ���Ϊ��,�Һ������Ϊ��*/ 

	for(i=0;character[i]!='\0'&&character[i]!='\n';i++) /*����ֱ���ַ�������Ϊֹ*/ 
	{ 
		ptr=tree; 
		beforeptr=tree; 

		node=(linktree)malloc(sizeof(Hftree)); /*��������node*/ 
		if(!node)return NULL; 
		node->next=NULL; 
		node->parent=NULL; 
		node->lchild=NULL; 
		node->rchild=NULL; /*�ÿ�*/ 
		node->mark=0; 
		node->ch=character[i]; 
		node->weight=1; 

		if(tree->next==NULL) 
		tree->next=node; /*ͷ������һ���Ϊ��,����node*/ 

		else 
		{ 
			ptr=tree->next; 
			while(ptr&&ptr->ch!=node->ch) 
			{/*��ָ����������β*/ 
				ptr=ptr->next; 
				beforeptr=beforeptr->next; /*����*/ 
			} 
			if(ptr&&ptr->ch==node->ch) 
			{/*���������ĳ�����ַ����½����ַ���ͬ*/ 
			/*���ý���Ȩ��һ*/ 
				ptr->weight=ptr->weight+1; 
				free(node); /*�ͷ�node���Ĵ洢�ռ�*/ 
			} 
			else 
			{/*�½������н�㲻��ͬ,���½����������*/ 
				node->next=beforeptr->next; 
				beforeptr->next=node; /*node������beforeptr֮��*/ 
			} 
		} 
	} 
	return tree; 
} 

/*����������ַ��������ִ�����С�����˳������ */ 
linktree taxisnode(linktree tree) 
{ 
	linktree head,ph,pt,beforeph; /*headΪ������ı�ͷ���*/ 

	head=(linktree)malloc(sizeof(Hftree));/*�����������ͷ���*/ 
	if(!head)return NULL; 
	head->next=NULL; /*�½���ͷ���Ϊ��,�������ҲΪ��*/ 

	ph=head; 
	beforeph=head; 

	while(tree->next)
	{ 
		pt=tree->next;/*ȡ�������������Ԫ���*/ 
		tree->next=pt->next; 
		pt->next=NULL; /*ȡ��pt��ָ��Ľ��*/ 

		ph=head->next; 
		beforeph=head; 

		if(head->next==NULL) 
		head->next=pt;/*������ǰ����������Ԫ���*/ 
		else 
		{ 
			while(ph&&ph->weight<pt->weight) 
			{/*����������������Ӧλ��*/ 
				ph=ph->next; 
				beforeph=beforeph->next; 
			} 
			pt->next=beforeph->next; 
			beforeph->next=pt; 
		} 
	} 
	free(tree); 
	return head; 
} 

/*����������ַ��������������� */ 
linktree createHftree(linktree tree) 
{ 
	linktree p,q,newnode,beforep; 

	for(p=tree->next,q=p->next;p!=NULL&&q!=NULL;p=tree->next,q=p->next) 
	{ 
		tree->next=q->next; 
		q->next=NULL; 
		p->next=NULL; 

		newnode=(linktree)malloc(sizeof(Hftree));/*�����½����Ϊ�����������м���*/ 
		if(!newnode)return NULL; 
		newnode->next=NULL; 
		newnode->mark=0; 

		newnode->lchild=p;/*ȡ����ͷ��������������Ϊ�½������Ҷ���*/ 
		newnode->rchild=q; 
		p->parent=newnode; 
		q->parent=newnode; 
		newnode->weight=p->weight+q->weight; 

		p=tree->next; 
		beforep=tree; 

		if(p!=NULL&&p->weight>=newnode->weight)/*���½�����ԭ�������Ӧλ��*/ 
		{
			newnode->next=beforep->next; 
			beforep->next=newnode; 
		} 
		else
		{ 
			while(p!=NULL&&p->weight<newnode->weight) 
			{ 
				p=p->next; 
				beforep=beforep->next; 
			} 
			newnode->next=beforep->next; 
			beforep->next=newnode; 
		} 
	} 
	return (tree->next); 
} 

/*�Ի����������б��� */ 
void Huffmancoding(linktree tree) 
{ 
	int index=0; 
	char *code; 
	linktree ptr=tree; 
	code=(char *)malloc(10*sizeof(char));/*����������ͳ�ƻ���������*/ 

	printf("�ַ��Լ�������ӦȨ��---------����������\n\n"); 
	if(ptr==NULL) 
	{ 
		printf("���������ǿյ�!\n"); 
		exit(0); 
	} 
	else 
	{ 
		while(ptr->lchild&&ptr->rchild&&ptr->mark==0) 
		{ 
			while(ptr->lchild&&ptr->lchild->mark==0) 
			{ 
				code[index++]='0'; 
				ptr=ptr->lchild; 
				if(!ptr->lchild&&!ptr->rchild) 
				{ 
				ptr->mark=1; 
				code[index]='\0'; 
				printf("\tw[%c]=%d\t\t\t",ptr->ch,ptr->weight); 
				for(index=0;code[index]!='\0';index++) 
				printf("%c",code[index]); 
				printf("\n"); 
				ptr=tree; 
				index=0; 
				} 
			} 
			if(ptr->rchild&&ptr->rchild->mark==0) 
			{ 
				ptr=ptr->rchild; 
				code[index++]='1'; 
			} 
			if(!ptr->lchild&&!ptr->rchild) 
			{ 
				ptr->mark=1; 
				code[index++]='\0'; 
				printf("\tw[%c]=%d\t\t\t",ptr->ch,ptr->weight); 
				for(index=0;code[index]!='\0';index++) 
				printf("%c",code[index]); 
				printf("\n"); 
				ptr=tree; 
				index=0; 
			} 
			if(ptr->lchild->mark==1&&ptr->rchild->mark==1) 
			{ 
				ptr->mark=1; 
				ptr=tree; 
				index=0; 
			} 
		} 
	} 
	printf("\n"); 
	free(code); 
} 

/*���� */ 
void decode(linktree tree,char code[]) 
{ 
	int i=0,j=0; 
	char *char0_1; 
	linktree ptr=tree; 
	char0_1=(char *)malloc(10*sizeof(char));/*����������ͳ�������0��1����*/ 

	printf("����������-----��Ӧ�ַ�\n\n"); 
	for(j=0,ptr=tree;code[i]!='\0'&&ptr->lchild&&ptr->rchild;j=0,ptr=tree) 
	{ 
		for(j=0;code[i]!='\0'&&ptr->lchild&&ptr->rchild;j++,i++) 
		{ 
			if(code[i]=='0') 
			{ 
			ptr=ptr->lchild; 
			char0_1[j]='0'; 
			} 
			if(code[i]=='1') 
			{ 
			ptr=ptr->rchild; 
			char0_1[j]='1'; 
			} 
		} 
		if(!ptr->lchild&&!ptr->rchild) 
		{ 
			char0_1[j]='\0'; 
			for(j=0;char0_1[j]!='\0';j++) 
			printf("%c",char0_1[j]); 
			printf("\t\t%c\n",ptr->ch); 
		} 
		if(code[i]=='\0'&&ptr->lchild&&ptr->rchild) 
		{ 
		char0_1[j]='\0'; 
		printf("û�������ļ���0��1���У�%s��ƥ����ַ�!\n",char0_1); 
		return; 
		} 
	} 
	free(char0_1); 
} 


/*�ļ�*/ 
int change() 
{ 
	FILE *fp; 
	char ch; 
	if((fp=fopen("e10_1.c","rt"))==NULL) 
	{ 
		printf("Cannot open file strike any key exit!"); 
		getch(); 
		exit(1); 
	} 
	ch=fgetc(fp); 
	while (ch!=EOF) 
	{ 
		putchar(ch); 
		ch=fgetc(fp); 
	} 
	fclose(fp); 

} 

/*�ͷŻ���������ռ�õĿռ�*/ 
void deletenode(linktree tree) 
{ 
	linktree ptr=tree; 
	if(ptr) 
	{ 
		deletenode(ptr->lchild); 
		deletenode(ptr->rchild); 
		free(ptr); 
	} 
} 

int main() 
{ 
	int n; 
	char character[MAXLEN],code[MAXLEN]; 

	FILE *f1; 

	linktree temp,ht,htree,ptr=NULL; 

	printf("һ������:\n������Ҫ���Ե��ַ���:\n\n"); 
	scanf("%s",character); 
	printf("\n"); 

	temp=tidycharacter(character); 

	ht=taxisnode(temp); 

	htree=createHftree(ht); 

	Huffmancoding(htree); 
	
	printf("��������:\n���������ڽ����0��1����:\n\n"); 
	scanf("%s",code); 
	printf("\n"); 

	decode(htree,code); 

	deletenode(htree); 

	getch();
}

