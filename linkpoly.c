#include <stdio.h>
#include <stdlib.h>
// Define the structure for a polynomial node
struct node {
    int coeff;        // Coefficient of the term
    int expo;         // Exponent of the term
    struct node *link; // Pointer to the next term
};// Function to create a new node
struct node *createNode(int coeff, int expo) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->coeff = coeff;
    newNode->expo = expo;
    newNode->link = NULL;
    return newNode;
}// Function to read a polynomial
struct node *readPolynomial() {
    int n, coeff, expo;
    struct node *head = NULL, *temp = NULL;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &expo);
        struct node *newNode = createNode(coeff, expo);
        if (head == NULL) {
            head = newNode;
        } else {
            temp->link = newNode;
        }
        temp = newNode;
    }
    return head;
}// Function to display a polynomial
void displayPolynomial(struct node *head) {
    struct node *temp = head;
    if (head == NULL) {
        printf("Polynomial is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->expo);
        if (temp->link != NULL) {
            printf(" + ");
        }
        temp = temp->link;
    }
    printf("\n");
}// Function to add two polynomials
struct node *addPolynomials(struct node *p1, struct node *p2) {
    struct node *head = NULL, *temp = NULL;
    while (p1 != NULL && p2 != NULL) {
        struct node *newNode;

        if (p1->expo == p2->expo) {
            newNode = createNode(p1->coeff + p2->coeff, p1->expo);
            p1 = p1->link;
            p2 = p2->link;
        } else if (p1->expo > p2->expo) {
            newNode = createNode(p1->coeff, p1->expo);
            p1 = p1->link;
        } else {
            newNode = createNode(p2->coeff, p2->expo);
            p2 = p2->link;
        }
        if (head == NULL) {
            head = newNode;
        } else {
            temp->link = newNode;
        }
        temp = newNode;
    }   // Add remaining terms of p1
    while (p1 != NULL) {
        struct node *newNode = createNode(p1->coeff, p1->expo);
        if (head == NULL) {
            head = newNode;
        } else {
            temp->link = newNode;
        }
        temp = newNode;
        p1 = p1->link;
    }    // Add remaining terms of p2
    while (p2 != NULL) {
        struct node *newNode = createNode(p2->coeff, p2->expo);
        if (head == NULL) {
            head = newNode;
        } else {
            temp->link = newNode;
        }
        temp = newNode;
        p2 = p2->link;
    }
    return head;
}// Main function
int main() {
    struct node *poly1, *poly2, *result;
    printf("Enter the first polynomial:\n");
    poly1 = readPolynomial();
    printf("Enter the second polynomial:\n");
    poly2 = readPolynomial();
    printf("\nFirst Polynomial: ");
    displayPolynomial(poly1);
    printf("Second Polynomial: ");
    displayPolynomial(poly2);
    result = addPolynomials(poly1, poly2);
    printf("\nResultant Polynomial: ");
    displayPolynomial(result);
    return 0;
}
