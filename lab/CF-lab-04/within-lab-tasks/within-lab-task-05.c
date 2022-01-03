#include <stdio.h>

int main() {
	int number_to_find, input_numbers[5], index_of_number;
		
	printf("Enter 5 intergers:\n");
	for(int i = 0; i < 5; i++) {
		printf("Integer# %d: ", i + 1);
		scanf("%d", &input_numbers[i]);
	}
	
	while(1) {
		printf("Enter Integer to Find: ");
		scanf("%d", &number_to_find);
		index_of_number = -1;
		for (int i = 0; i < 5; i++) {
			if(number_to_find == input_numbers[i]) {
				index_of_number = i;
				break;
			}
		}
		if (index_of_number != -1) {
			printf("%d Found at Index# %d\n", number_to_find, index_of_number);
		} else {
			printf("%d Not Found!\n", number_to_find);
		}
	}
	
	getchar();
	return 0;
}

