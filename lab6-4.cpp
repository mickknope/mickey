#include <stdio.h>
#include <string.h>

int p[] = {50, 120, 90};
int o;

int men(){
    printf("--------- Menu --------- \n");
    printf("1. Salad	50 bath\n");
    printf("2. pizza	120 bath\n");
    printf("3. Banoffee	90 bath\n");
    printf("-------------------------\n\n");
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
        scanf("%d", &o);
        if (o <= 0){
            printf("Doesn't have this menu, please try again.");
        }
    } while (o <= 0);

    struct menu mu[(int)o];
    float total = 0;

    for (int i = 0; i < o; i++){
    	
    	printf("\nOrder: %d ", i + 1);
    	
        do{
            printf("\nMenu (1-3): ");
            scanf("%d", &mu[i].m);
            if (mu[i].m < 1 || mu[i].m > 3){
                printf("Please select 1-3\n");
            }
        } while (mu[i].m < 1 || mu[i].m > 3);

        do{
            printf("Quantity: ");
            scanf("%d", &mu[i].e);
            if (mu[i].e <= 0){
                printf("Please enter a quantity\n");
            }
        } while (mu[i].e <= 0);
    }
    
    FILE *file = fopen("C:\\Users\\USER\\Downloads\\Food.txt" , "w");
	if(file == NULL){
		printf("Can't open the file.");
		return 1;
	}
	
	fprintf(file, "Order summary\n");
	fprintf(file, "Menu\tQty\tPrice\n");
	
    for (int i = 0; i < o; i++){
        int menu_idx = mu[i].m - 1;
        float subtotal = p[menu_idx] * mu[i].e;
        total += subtotal;

        printf("\n%d\t%d\t%d baht\n", mu[i].m, mu[i].e, p[menu_idx]);
        fprintf(file, "%d\t%d\t%d baht\n", mu[i].m, mu[i].e, p[menu_idx]);
    }
	
	printf("Food cost: %.2f baht\n", total);
    float vat = total * 0.07;
    printf("VAT(7%%): %.2f baht\n", vat);
    printf("Total: %.2f baht\n", total + vat);

	fprintf(file, "\nFood cost: %.2f baht\n", total);
	fprintf(file, "VAT(7%%): %.2f baht\n", vat);
	fprintf(file, "Total: %.2f baht\n", total + vat);
	
	fclose(file);
    return 0;
    
}