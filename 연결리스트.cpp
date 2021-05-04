/*
	[ ����ü + ������ => ���� ����Ʈ ]
		-> �����Ͱ� ����� ������ ����
		
	[ �迭 ]
		-> �� ĭ ( �ε��� )  �� ���� ��
			=> [][][][][]
			=> ����� ���°� �ƴϰ� ���� ������ �޸� �����̴�.
	[ ���� ����Ʈ ]
		-> [ ��� ]  -> [ ��� ] -> [ ���� ]
			=> ù° ��带 ��� ( head ), ������ ��带 ( tail ), �׸��� �������� ��� ( node )
		-> [] -> [] -> []
			=> �ܹ��� ���Ḯ��Ʈ
		-> [] <-> [] <-> []
			=> ����� ���Ḯ��Ʈ 
		-> ����ü�� ���Ḯ��Ʈ ������ ����
			=> ��) ����ö	 
					struct station{
						char name[20];
						struct station *next;
					};
		-> ������ Ÿ���� �ٸ� �̸����� ����ϴ� ���
			=> typedef
			=> �����
				==>	typedef ������ Ÿ�� �ٲ��̸�;
				==> ex) typedef int integer;
				==> intger a; 
					===> ���� Ÿ�� a���� ����
					===> intger a; == int a; 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1��° ��� : �Ϲ� ���� ����Ʈ  
 
struct Linked_List {
	int date;
	struct Linked_List *next;
};

// 2��° ��� : typedef ��� 
typedef struct station { 
	char name [20];
	struct station * next;
}station;

int main() {
	
	station *head;
	head = (station*)malloc(sizeof(station));
	
	strcpy(head->name,"������");
	
	head->next = NULL;
	
	station *node1 = (station*)malloc(sizeof(station));
	head->next = node1;
	strcpy(node1->name,"���ڿ�");	
	
	node1->next = NULL;
	
	station *node2 = (station*)malloc(sizeof(station));
	node1->next = node2;
	strcpy(node2->name,"������");	
	
	node2->next = NULL;
	
	station *node3 = (station*)malloc(sizeof(station));
	node2->next = node3;
	strcpy(node3->name,"�̸ſ�");	
	
	node3->next = NULL;
	
	station *prt;
	prt = head;
	while(prt!=NULL){
		printf("%s ", prt->name);
			if(prt!=node3){
				printf("->");
			}
		prt = prt->next;
	}
	
	return 0;
}
