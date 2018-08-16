#include <stdio.h>
#define SIZE 5

int rear=-1;
int front=-1;
int q[SIZE];


void input(int data){
	if(rear == SIZE-1){
	printf("������ ť�Դϴ�.\n");
		
	}else{
		rear++;
		q[rear] = data;
	}
}

void output(){
	int i;
	if(front == rear){
		printf("�� ť�Դϴ�.\n");
	} else{
		front++;
		printf("��ȯ �� ���� ? %d �Դϴ�.\n",q[front]);
		for(i=front;i<rear+1;i++){
			q[i]=q[1+i];
		}
		front--;
		rear--;
	}
}

void dis(){
	int i;
	for(i=0;i<SIZE;i++){
		printf("%d\t",q[i]);
	}
	printf("\n\n");
}


int main(){
	int data;
	int menu=0;
	while(menu<=3){
		printf("�޴� ���� 1. ��ǲ    2. �ƿ�ǲ    3. ����\n");
		scanf("%d", &menu);

		switch(menu){

		case 1:
			printf("���� �Է��ϼ���\t");
			scanf("%d",&data);
			input(data);
			break;
			
		case 2:
			output();
			break;

		case 3:
			menu=5;
			break;

		default:
			printf("�߸��� �޴� �Է�");
			scanf("%d", &menu);
			break;	
		}
	dis();		
	}
	return 0;
}

