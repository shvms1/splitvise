#include <stdio.h>
#define ADD_ITEM_TO_BOUGHT 0
#define ADD_ITEM_YOU_BOUGHT 1

int main()
{
	int ch = 0;
	char item[50];
	int quntity = 0;
	printf("********************welcome to splitwise********************");
	do
	{
		printf("\t\tselect option\n");
		printf("\t\t To add item to bought, press 0\n");
		printf("\t\t To add Expenses (items you have bought), press 1\n");
		scanf("%d", &ch);

		switch(ch)
		{
			case ADD_ITEM_TO_BOUGHT: 
				printf("please mention items\n");
				scanf("%s\n", item);
				printf("please mention qyantity\n");
				scanf("%d", quantity);
				break;
			case ADD_ITEM_YOU_BOUGHT:
				printf("add person to split with\n");
				break;

		}


	}
	while(ch != 2)

	return 0;
}
