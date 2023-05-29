LIBRARY SYSTEM CODE:


#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
struct Book {
int id;
char title[50];
char author[50];
int is_available;
};
struct Library {
struct Book books[MAX_BOOKS];
int num_books;
};
void print_menu() {
printf("\nLibrary Management System\n");
printf("--------------------------\n");
printf("1. Add book\n");
printf("2. Delete book\n");
printf("3. Update book\n");
printf("4. Check out book\n");
printf("5. Check in book\n");
printf("6. View all books\n");
printf("7. Exit\n");
}
void add_book(struct Library *library) {
if (library->num_books >= MAX_BOOKS) {
printf("Library is full\n");
return;
}
struct Book new_book;
printf("Enter book ID: ");
scanf("%d", &new_book.id);
printf("Enter book title: ");
scanf("%s", new_book.title);
printf("Enter book author: ");
scanf("%s", new_book.author);
new_book.is_available = 1;
library->books[library->num_books] = new_book;
library->num_books++;
printf("Book added successfully\n");
}
int find_book_index(struct Library *library, int id) {
for (int i = 0; i < library->num_books; i++) {
if (library->books[i].id == id) {
return i;
}
  }
return -1;
}
void delete_book(struct Library *library) {
int id;
printf("Enter book ID to delete: ");
scanf("%d", &id);
int index = find_book_index(library, id);
if (index == -1) {
printf("Book not found\n");
return;
}
for (int i = index; i < library->num_books - 1; i++) {
library->books[i] = library->books[i + 1];
}
library->num_books--;
printf("Book deleted successfully\n");
}
void update_book(struct Library *library) {
int id;
printf("Enter book ID to update: ");
scanf("%d", &id);
int index = find_book_index(library, id);
if (index == -1) {
printf("Book not found\n");
return;
}
struct Book updated_book = library->books[index];
printf("Enter new title: ");
scanf("%s", updated_book.title);
printf("Enter new author: ");
scanf("%s", updated_book.author);
library->books[index] = updated_book;
printf("Book updated successfully\n");
}
void check_out_book(struct Library *library) {
int id;
printf("Enter book ID to check out: ");
scanf("%d", &id);
int index = find_book_index(library, id);
if (index == -1) {
printf("Book not found\n");
return;
  }
if (!library->books[index].is_available) {
printf("Book is already checked out\n");
return;
}
library->books[index].is_available = 0;
printf("Book checked out successfully\n");
}
void check_in_book(struct Library *library) {
int id;
printf("Enter book ID to check in: ");
scanf("%d", &id);
int index = find_book_index(library, id);
if (index == -1) {
printf("Book not found\n");
return;
}
if (library->books[index].is_available) {
printf("Book is already checked in\n");
return;
}
library->books[index].is_available = 1;
printf("Book checked in successfully\n");
}
void view_books(struct Library *library) {
printf("ID\tTitle\t\tAuthor\t\tAvailable\n");
printf("----------------------------------------------\n");
for (int i = 0; i < library->num_books; i++) {
printf("%d\t%s\t\t%s\t\t%s\n",
library->books[i].id,
library->books[i].title,
library->books[i].author,
library->books[i].is_available ? "Yes" : "No");
}
}
int main() {
struct Library library;
library.num_books = 0;
int choice;
do {
print_menu();
printf("Enter your choice: ");
scanf("%d", &choice);
  switch (choice) {
case 1:
add_book(&library);
break;
case 2:
delete_book(&library);
break;
case 3:
update_book(&library);
break;
case 4:
check_out_book(&library);
break;
case 5:
check_in_book(&library);
break;
case 6:
view_books(&library);
break;
case 7:
printf("Exiting program\n");
break;
default:
printf("Invalid choice\n");
}
} while (choice != 7);
return 0;
}
