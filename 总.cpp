#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node
{
	int data;
	Node *left = NULL;
	Node *right = NULL;
};

string NoSpace(string s)
{
	int len = s.length();
	string temp = "";
	for(int i=0;i<len;i++)
	{
		if(s[i]!=' ')
			temp += s[i];
	}
	return temp;
}

Node* search(int num,Node *L)//查找函数,查找到即返回该节点指针，否则返回NULL 
{
	if(L)
	{
		if(num==L->data)
			return L;
		Node *p = search(num,L->left);
		if(p==NULL)
			return search(num,L->right);
		return p;
	} 
	return NULL;
} 

void preorder(Node *L)
{
	if(L)
	{
		cout<<L->data<<" ";
		preorder(L->left);
		preorder(L->right);
	}
}

void inorder(Node *L)
{
	if(L)
	{
		inorder(L->left);
		cout<<L->data<<" ";
		inorder(L->right);
	}
}

void postorder(Node *L)
{
	if(L)
	{
		postorder(L->left);
		postorder(L->right);
		cout<<L->data<<" ";
	}
}

int deep(Node *L)
{
	if(L->left == NULL)return 1;
	if(L->right == NULL)return 1;
	int d1 = deep(L->left);
	int d2 = deep(L->right);
	return d1>d2?d1+1:d2+1;
}


Node* Tree1(string s)//输入树的嵌套括号表示序列，返回根节点的指针 
{
	s = NoSpace(s);
	stack <Node*> sta;//用来存放之前的根节点 
	Node *L = new Node; 
	Node *last = L;
	int len = s.length();
	
	int num = 0;
	int i =0;
	while('0'<=s[i]&&s[i]<='9')		//取得第一个数 
		num = num*10 + s[i++] - '0';
	last->data = num;
	char judge;
	while(i<len)//13(11(10,17(22,23)),15(19,8))
	{
		num = 0;
		judge = s[i++];
		while('0'<=s[i]&&s[i]<='9')
			num = num*10 + s[i++] - '0';
		Node *next = new Node;
		if(judge=='(')
		{
			next->data = num;
			last->left = next;
			sta.push(last);
			last = next;
		} 
		else if(judge==',')
		{
			next->data = num;
			sta.top()->right = next;
			sta.pop();
			last = next;
		}
		//cout<<num1<<"sb"<<judge<<endl;
		
		while(i<len&&s[i]==')')//右括号直接跳过 
			i++;
	}
	return L;
}

Node* Tree2(int *pre,int *in,int n)//通过前序和中序序列构造一棵二叉树，返回根指针 
{
	if(n==0)return NULL;
	int i=0;
	for(i=0;i<n;i++)
		if(in[i]==pre[0])
			break;
	Node *p = new Node;
	p->data = pre[0];
	int *preleft = new int[i];
	for(int j=0;j<i;j++)
		preleft[j] = pre[j+1];
		
	int *inleft = new int[i];
	for(int j=0;j<i;j++)
		inleft[j] = in[j];
	
	int *preright = new int[n-1-i];
	for(int j=0;j<n-1-i;j++)
		preright[j] = pre[i+1+j];
	
	int *inright = new int[n-1-i];
	for(int j=0;j<n-1-i;j++)
		inright[j] = in[i+1+j];
	
	p->left = Tree2(preleft,inleft,i);
	p->right = Tree2(preright,inright,n-1-i);
	
	/*for(int j=0;j<i;j++)
		cout<<preleft[j]<<" ";cout<<endl;
	for(int j=0;j<i;j++)
		cout<<inleft[j]<<" ";cout<<endl;
	for(int j=0;j<n-1-i;j++)
		cout<<preright[j]<<" ";cout<<endl;
	for(int j=0;j<n-1-i;j++)
		cout<<inright[j]<<" ";cout<<endl;*/
	return p;
}

Node* Huffman(vector <int> weight)
{
	sort(weight.begin(),weight.begin()+weight.size());
	vector <Node*> a;
	for(int i=0;i<weight.size();i++)
	{
		Node *p = new Node;
		p->data = weight[i];
		a.push_back(p);
	}
	while(a.size()>1)
	{
		Node *p = new Node;
		p->data = a[0]->data + a[1]->data;
		//for(int i=0;i<a.size();i++)cout<<a[i]->data<<" ";cout<<endl;
		p->left = a[0];
		p->right = a[1];
		a.erase(a.begin());
		a.erase(a.begin());
		if(a.size()>2)
		{
			int i;
			for(i=0;i<a.size()-1;i++)
			{
				if(a[i]->data <= p->data&&p->data < a[i+1]->data)
				{
					a.insert(a.begin()+1+i,p);
					break;
				}
			}
			if(i==a.size()-1)
				a.push_back(p);
		}
		else 
		{
			a.push_back(p);
		}
	}
	return a[0];
}



void print(Node *L,char a[50][50],int row,int col,int d)//a是二维字符数组，存放二叉树的形状 
{														//row 和 col是用来递归的下标 ,是数组开始的位置。d 是树的深度 
	
	int num = pow(2,d);
	
	a[row-1][col+num] = (char)(L->data+'0');
	//cout<<L->data<<endl;
	if(L->left!=NULL)
	{
		for(int i=0;i<num/2;i++)
			a[row+i][col+num-i] = '/';
		print(L->left,a,row+num/2+1,col,d-1);
	}
	if(L->right!=NULL)
	{
		for(int i=0;i<num/2;i++)
			a[row+i][col+num+i+1] = '\\';
		print(L->right,a,row+num/2+1,col+num+1,d-1);
	}
	
}

/*              1   //16  30
                /\   //16 0
               /  \  //15 2
    	      /    \
	         /      \
	        /        \
	       /          \
	      /            \
	     /              \
        2                7   //8  16
        /\              /\   //8 0 14 0
       /  \            /  \  // 7 1 12 1
      /    \          /    \
     /      \        /      \
    3        4      8       9 // 4  8  6  8
    /\      /\
   /  \    /  \
  2    2  5    6              //2   4 2 4 2 4 2 4 */
int main()
{
	string s = "1(2(3,4(5,6)),7(8,9))";//1.1测试 
	Node *p1 = Tree1(s);
	preorder(Tree1(s));
	cout<<endl;
	inorder(Tree1(s));
	cout<<endl;
	postorder(Tree1(s));
	cout<<endl;
	Node *p5 = Tree1("1(2,3(4,5(6,7))") ;
	preorder(p5);
	cout<<endl;
	inorder(p5);
	cout<<endl;
	postorder(p5);
	cout<<endl;
	
	cout<<endl;
	
	Node *p2 = search(11,p1);//2.1测试 
	if(p2)
	{
		preorder(p2);
		cout<<endl; 
	} 
	else 
		cout<<"NO FINDING!"<<endl; 
	cout<<endl;
	
	int prearray[] = {13, 11, 10, 17, 22, 23, 15, 19, 8};//1.2测试 
	int inarray[] = {10, 11, 22, 17, 23, 13, 19, 15, 8};
	Node *p3 = Tree2(prearray,inarray,9);
	preorder(p3);
	cout<<endl;
	cout<<endl;
	
	vector<int> v;				//1.3测试 
	for(int i=0;i<9;i++)
		v.push_back(prearray[i]);
	Node *p4 = Huffman(v);
	preorder(p4);
	cout<<endl;
	
	char b[50][50] = {'\0'};//测试 
	
	
	int d = deep(p5);
	print(p5,b,1,0,d);
	for(int i=0;i<50;i++)
	{
		for(int j=0;j<50;j++)
			cout<<b[i][j];
		cout<<endl;
	}
}
