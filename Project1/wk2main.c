#include <stdio.h>
#include <stdbool.h>
#include "list.h"


void option_insert(List *my_list) {
	int input;
	printf("input insert\n");
	scanf_s("%d", &input);
	insert_in_order(my_list, input);
}

void option_delete(List *my_list) {
	int input;
	printf("input delete\n");
	scanf_s("%d", &input);
	delete_list(my_list, input);
}

void option_print(List *my_list) {
	printf("printing\n");
	print_list(my_list);
}

int main() {
	List my_list = new_list();


	List list1 = new_list();
	List list2 = new_list();

	insert_in_order(&list1, 1);
	insert_in_order(&list1, 5);
	insert_in_order(&list1, 3);
	insert_in_order(&list1, 8);

	insert_in_order(&list2, 2);
	insert_in_order(&list2, 7);
	insert_in_order(&list2, 9);
	insert_in_order(&list2, 10);

	List newList = merge_list(&list1, &list2);
	print_list(&newList);

	int quit = 0;
	int input = 1;

	while (quit == 0) {
		int option;
		scanf_s("%d", &option);

		switch (option) {
			case 0: quit = 1;
				break;
			case 1: option_insert(&my_list);
				break;
			case 2: option_delete(&my_list);
				break;
			case 3:	option_print(&my_list);
				break;
			case 4:	reverse_list(&my_list);
		}
	}

	destroy_list(&my_list);

	return 0;
}