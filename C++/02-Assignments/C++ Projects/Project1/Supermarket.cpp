#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
#include <sstream>


struct Product {
    std::string name;
    double price;
};

class Category
{
    private:
        std::string category;
        std::vector<Product> product;
        
        void refresh() {
            std::fstream file;
            std::string  line;
            file.open(category + ".txt", std::ios::in);
            if(file.is_open()) {
                Product tempProduct;
                while(getline(file, line)) {
                    std::stringstream ss(line);
                    ss >> tempProduct.name;
                    ss >> tempProduct.price; 
                    product.push_back(tempProduct);
                }
                file.close();
            }
            else {
                std::cout << "Cannot open file..." << std::endl;
            }
        }

    public:
        Category(std::string catFile):category(catFile) {
            refresh();
        }
        void showProducts() {
            std::cout << "Available products in category " << category << ":" << std::endl;
            for (auto& temp : product) {
            std::cout << temp.name << "..... $" << temp.price << std::endl;
            }
        }
        std::string& getName() {
            return category;
        }
        Product& getProduct(unsigned int productNo) {
            if(productNo < product.size())
                return product[productNo];

            std::cout << "Invalid index." <<std::endl;
            
        }


};

class Supermarket
{
    private:
        std::vector<Category> supermarket;
        std::vector<Product>  cart;
        double receipt;

        void refresh()
        {
            std::fstream file;
            std::string  line;
            
            file.open("Supermarket.txt", std::ios::in);
            if(file.is_open()) {
                while(getline(file, line)) {
                    Category cat(line);
                    supermarket.push_back(cat);
                }
                file.close();
            }
        }

    public:
        Supermarket(){refresh();}
        void showCategories() {
            std::cout << "Available categories in supermarket: ";
            for(auto& category: supermarket) {
                std::cout << category.getName() << ", ";
            }
            std::cout << '\n';
        }
        Category* getCategory(std::string categoryName) {
            for(auto& category: supermarket) {
                if(category.getName() == categoryName)
                    return &category;
            }
            return nullptr;
        }
        void addToCart(std::string categoryName, int index) {
            for(auto& category: supermarket) {
                if(category.getName() == categoryName) {
                    cart.push_back(category.getProduct(index-1));
                }
            }
            std::cout << "Added " << cart.back().name << " to cart." << std::endl;
        }

        void printReceipt() {
            double totalCost = 0.0;
            
            for (const auto& item : cart) {
                std::cout << item.name << "..... $" << item.price << std::endl;
                totalCost += item.price;
            }
            std::cout << "Total Cost: $" << totalCost << std::endl;
        }
};



int main() {
    Supermarket supermarket;
    supermarket.showCategories();

    while (true) {
        std::string category;
        std::cout << "Enter a category or 'done' to finish: ";
        std::cin >> category;

        if (category == "done") {
            break;
        }
    
        if (supermarket.getCategory(category)) {
            supermarket.getCategory(category)->showProducts();
            int choice;
            std::cout << "Enter the index of the product to add to cart: ";
            std::cin >> choice;
            supermarket.addToCart(category, choice);
        } else {
            std::cout << "Invalid category. Please try again." << std::endl;
        }
    }

    supermarket.printReceipt();

    return 0;
}