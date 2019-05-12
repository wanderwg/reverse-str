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
	Swap(arr, arr + size - 1);//���������ַ���
	while (*arr != '\0') {
		char* start = arr;
		char* end = start;
		while (*end != ' '&&*end != '\0') {
			++end;
		}
		Swap(start, end - 1);//���õ������ʣ�����end-1ָ�򵥴����һ����ĸ���±�
		if (*end != '\0') {
			arr = end + 1;//��ǰһ�������±�+1�������˿ո�ָ������һ��������λ��
		}
		else
			arr = end;
	}
}
int main() {
	char arr[] = "student a am i";
	Reserve(arr);
	printf("���ս����%s\n", arr);
	system("pause");
	return 0;
}
