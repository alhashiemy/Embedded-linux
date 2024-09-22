
#include <iostream>
#include <string>
#include <memory>

class Book {
private:
    std::string title;
    std::string author;

public:
    Book(const std::string& t, const std::string& a) : title(t), author(a) {}

    void display() {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    std::unique_ptr<Book> bookUnique = std::make_unique<Book>("The Great Gatsby", "F. Scott Fitzgerald");

    bookUnique->display();

    std::shared_ptr<Book> bookShared = std::move(bookUnique);

    bookShared->display();

    std::weak_ptr<Book> bookWeak = bookShared;

    // Check if weak_ptr is expired before using it
    if (bookWeak.use_count()) {
        std::shared_ptr<Book> sharedBookFromWeak = bookWeak.lock();
        sharedBookFromWeak->display();
    } else {
        std::cout << "Weak pointer expired." << std::endl;
    }

    return 0;
}