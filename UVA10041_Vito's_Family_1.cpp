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
	cin>>n;									//몇개 나 실험할건지 입력 
	for(int i=0;i<n;i++)
	{
		result =0;							//최종값 초기화 
		cin>>m;								//입력 
		for(int j=0;j<m;j++)
		{
			cin>>addr[j];					//주소 입력  
		}
		sort(addr,addr+m,cmp);				//순서 배열 1. 시작 2. 마지막 숫자3.체크 
		mid=addr[m/2];
		for(int j=0;j<m;j++)
		{
			result+=abs(addr[j]-mid);		//절대값 구하는 함수	
		} 
		cout<<result<<endl;
	}
return 0;
} 

