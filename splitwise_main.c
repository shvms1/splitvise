#include <stdio.h>
#define ADD_ITEM_TO_BOUGHT 0
#define ADD_ITEM_YOU_BOUGHT 1

int main()
{
	int ch = 0;
    int choice = -1;
	char item[50] = {0};
    char person_name[50] = {0};
	int quantity = 0;
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
				do
                {
                    scanf("%s\n", item);
				    printf("please mention quantity\n");
				    scanf("%d", &quantity);
                    printf("want to end more? press 1 otherwise add 0");
                    scanf("%d", &choice);
                }
                while(choice != 0);
				break;
			case ADD_ITEM_YOU_BOUGHT:
				printf("add person to split with\n");
                do
                {                    
                    scanf("%s", person_name );
                    printf("want to add more person? press 1 else press 0");
                    scanf("%d", &choice);
                }
                while( choice != 0 );
				break;
            default:
                printf("wrong choice\n");
                break;
		}
	}
	while(ch != 2);

	return 0;
}
