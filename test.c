#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Swap(char* left, char* right) {
	while (left <= right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}
void Reserve(char arr[]) {
	int size = strlen(arr);
	Swap(arr, arr + size - 1);//逆置整个字符串
	while (*arr != '\0') {
		char* start = arr;
		char* end = start;
		while (*end != ' '&&*end != '\0') {
			++end;
		}
		Swap(start, end - 1);//逆置单个单词，其中end-1指向单词最后一个字母的下标
		if (*end != '\0') {
			arr = end + 1;//给前一个单词下标+1就跳过了空格指到了下一个单词首位置
		}
		else
			arr = end;
	}
}
int main() {
	char arr[] = "student a am i";
	Reserve(arr);
	printf("最终结果：%s\n", arr);
	system("pause");
	return 0;
}
