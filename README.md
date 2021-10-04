## UVA10041_Vitos_Family_1
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
-----
```c++
sort(addr,addr+m,cmp);				//순서 배열 1. 시작 2. 마지막 숫자3.체크 
```
Used cmp to check a < b
```c++
mid=addr[m/2];
```
Find the mid one number.
```c++
for(int j=0;j<m;j++)
{
  result+=abs(addr[j]-mid);		//절대값 구하는 함수	
}
  .....
```
Find the minimal numbers , one by one to substract them. 
