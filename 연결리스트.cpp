/*
	[ 구조체 + 포인터 => 연결 리스트 ]
		-> 데이터가 연결된 형태의 구조
		
	[ 배열 ]
		-> 각 칸 ( 인덱스 )  이 있을 때
			=> [][][][][]
			=> 연결된 형태가 아니고 각각 독립된 메모리 구조이다.
	[ 연결 리스트 ]
		-> [ 헤드 ]  -> [ 노드 ] -> [ 테일 ]
			=> 첫째 노드를 헤드 ( head ), 마지막 노드를 ( tail ), 그리고 나머지는 노드 ( node )
		-> [] -> [] -> []
			=> 단방향 연결리스트
		-> [] <-> [] <-> []
			=> 양방향 연결리스트 
		-> 구조체로 연결리스트 구조를 만듦
			=> 예) 지하철	 
					struct station{
						char name[20];
						struct station *next;
					};
		-> 데이터 타입을 다른 이름으로 사용하는 방법
			=> typedef
			=> 사용방법
				==>	typedef 데이터 타입 바꿀이름;
				==> ex) typedef int integer;
				==> intger a; 
					===> 정수 타입 a변수 선언
					===> intger a; == int a; 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1번째 방법 : 일반 연결 리스트  
 
struct Linked_List {
	int date;
	struct Linked_List *next;
};

// 2번째 방법 : typedef 사용 
typedef struct station { 
	char name [20];
	struct station * next;
}station;

int main() {
	
	station *head;
	head = (station*)malloc(sizeof(station));
	
	strcpy(head->name,"수내역");
	
	head->next = NULL;
	
	station *node1 = (station*)malloc(sizeof(station));
	head->next = node1;
	strcpy(node1->name,"정자역");	
	
	node1->next = NULL;
	
	station *node2 = (station*)malloc(sizeof(station));
	node1->next = node2;
	strcpy(node2->name,"서현역");	
	
	node2->next = NULL;
	
	station *node3 = (station*)malloc(sizeof(station));
	node2->next = node3;
	strcpy(node3->name,"이매역");	
	
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
