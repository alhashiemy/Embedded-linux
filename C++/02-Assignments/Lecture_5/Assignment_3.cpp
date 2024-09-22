#include <iostream>
#include <vector>
#include <string>

// Book class
class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string title, std::string author, int year) : title(title), author(author), year(year) {}

    std::string getTitle() {
        return title;
    }

    std::string getAuthor() {
        return author;
    }

    int getYear() {
        return year;
    }

    void displayInfo() {
        std::cout << "Title: " << title << ", Author: " << author << ". Year: " << year << std::endl;
    }
};

// LibraryCatalog class
class LibraryCatalog {
private:
    std::vector<Book> books;

public:
    void addBook(std::string title, std::string author, int year) {
        Book newBook(title, author, year);
        books.push_back(newBook);
    }

    void searchByAuthor(std::string authorName) {
        for (auto& book : books) {
            if (book.getAuthor() == authorName) {
                book.displayInfo();
            }
        }
    }

    void displayCatalog() {
        for (auto& book : books) {
            book.displayInfo();
        }
    }
};

int main() {
    LibraryCatalog catalog;
    int choice;
    do {
        std::cout << "\nLibrary Catalog System\n";
        std::cout << "1. Add a book\n2. Search by author\n3. Display catalog\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1: {
                std::string title, author;
                int year;
                std::cout << "Enter Title: ";
                std::getline(std::cin, title);
                std::cout << "Enter Author: ";
                std::getline(std::cin, author);
                std::cout << "Enter Year: ";
                std::cin >> year;
                catalog.addBook(title, author, year);
                break;
            }
            case 2: {
                std::string authorName;
                std::cout << "Enter author's name to search: ";
                std::getline(std::cin, authorName);
                catalog.searchByAuthor(authorName);
                break;
            }
            case 3: {
                std::cout << "\nCatalog Contents:\n";
                catalog.displayCatalog();
                break;
            }
            case 4:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}