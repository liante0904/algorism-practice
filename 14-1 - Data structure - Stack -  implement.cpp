#include <stdio.h>
#define SIZE 5
int top = 0;
int s[SIZE];

void push(int d){
	if(top >= SIZE){
		printf("overflow \n");
	}else {
		s[top] = d;
		top++;
	}
}

void pop(){
	if(top == 0){
		printf("empty \n");
	}else {
		printf("pop�� ����? %d \n", s[top - 1]);
		s[top - 1] = 0;
		top--;
	}
}
void dis(){
	int i;
	for (i = 0; i < SIZE; i++){
		printf("%d \t", s[i]);
	}
	printf("\n\n");
}

int main(void){
	int menu;
	int data;
	while(menu <= 3){
		printf("�޴� ���� 1. Ǫ�� 2. �� 3. ���� \n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				printf("���ÿ� Ǫ���� ���� �Է��ϼ���.");
				scanf("%d", &data); 
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				menu = 5;
				break;
			default:
				printf("�߸��� �޴� �Է�");
				break;
		}
		dis();
	}
}
