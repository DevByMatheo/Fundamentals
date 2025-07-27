#include "numbers.h"
#include <stdio.h>

int app(void)
{
    int choice = 0;
    do
    {
        show_menu();
        printf("> ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                do_operation(choice);
                break;
            case 2:
                do_operation(choice);
                break;
            case 3:
                do_operation(choice);
                break;
            case 4:
                do_operation(choice);
                break;
            case 5:
                break;
            default:
                printf("Option incorrect !\n");
                break;
        }
    }
    while(choice != 5);
    return 0;
}

int main(void)
{
    app();
    return 0;
}
