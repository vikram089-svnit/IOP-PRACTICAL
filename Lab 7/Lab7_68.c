#include <stdio.h>

struct book
{
    char name[50];
    char author[50];
    float price;
};

void read(struct book *b)
{
    printf("Enter book name: ");
    scanf(" %[^\n]", b->name);

    printf("Enter author name: ");
    scanf(" %[^\n]", b->author);

    printf("Enter price: ");
    scanf("%f", &b->price);
}

void display(struct book b)
{
    printf("\nBook Information\n");
    printf("Book Name: %s\n", b.name);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main()
{
    struct book b;

    read(&b);
    display(b);

    return 0;
}