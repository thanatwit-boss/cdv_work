#include <stdio.h>
#include <string.h>

int p[] = {299, 15, 65};
float o;

int men(){
	
    printf("--------- Menu --------- \n");
    printf("1. kfc	299 bath\n");
    printf("2. coffee	15 bath\n");
    printf("3. cake	65 bath\n");
    printf("-------------------------\n");
    return (0);
}

struct menu{
	
    int m;
    int e;
};

int main(){
	
    men();

    do{
        printf("How many orders would you like to have: ");
        scanf("%f", &o);
        if (o <= 0)
        {
            printf("Please enter a positive number\n");
        }
    } while (o <= 0);

    struct menu mu[(int)o];
    float total = 0;

    for (int i = 0; i < o; i++){
    	
        do{
            printf("\nMenu (1-3): ");
            scanf("%d", &mu[i].m);
            if (mu[i].m < 1 || mu[i].m > 3)
            {
                printf("Invalid menu choice. Please select 1-3\n");
            }
        } while (mu[i].m < 1 || mu[i].m > 3);

        do{
            printf("Quantity: ");
            scanf("%d", &mu[i].e);
            if (mu[i].e <= 0)
            {
                printf("Please enter a positive quantity\n");
            }
        } while (mu[i].e <= 0);
    }

    for (int i = 0; i < o; i++){
    	
        int menu_idx = mu[i].m - 1;
        float subtotal = p[menu_idx] * mu[i].e;
        total += subtotal;

        printf("%d\t%d\t%d\t%.2f baht\n",
            mu[i].m, mu[i].e, p[menu_idx], subtotal);
    }

    printf("\nTotal: %.2f baht\n", total);

    float vat = total * 0.07;
    printf("VAT (7%%): %.2f baht\n", vat);
    printf("Total after tax: %.2f baht\n", total + vat);
    return 0;
}