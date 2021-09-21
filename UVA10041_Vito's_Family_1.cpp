/*
Sample Input
2
2 2 4
3 2 4 6
Sample Output
2
4
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int addr[501];
bool cmp(int a,int b)
{
	return (a < b);
}

int main()
{
	int n,m,mid,result;
	cin>>n;									//� �� �����Ұ��� �Է� 
	for(int i=0;i<n;i++)
	{
		result =0;							//������ �ʱ�ȭ 
		cin>>m;								//�Է� 
		for(int j=0;j<m;j++)
		{
			cin>>addr[j];					//�ּ� �Է�  
		}
		sort(addr,addr+m,cmp);				//���� �迭 1. ���� 2. ������ ����3.üũ 
		mid=addr[m/2];
		for(int j=0;j<m;j++)
		{
			result+=abs(addr[j]-mid);		//���밪 ���ϴ� �Լ�	
		} 
		cout<<result<<endl;
	}
return 0;
} 

