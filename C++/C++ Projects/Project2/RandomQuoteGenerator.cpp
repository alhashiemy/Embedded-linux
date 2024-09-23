#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

class Quote {
    private:
        std::string sourceFile ;
        std::vector<std::string> quote;
    public:
        Quote(std::string cp_source): sourceFile(cp_source){refresh();}
        void refresh() {
            std::fstream file;
            std::string  line;
            file.open(sourceFile, std::ios::in);
            if(file.is_open())
            {
                while(getline(file, line))
                {
                    quote.push_back(line);
                }
                file.close();
            }
            else 
            {
                std::cout << "Cannot open file..." << std::endl;
            }
        }

        void print() {
            srand((time(nullptr)));
            int randomNum = rand() % 10;
            std::cout << quote[randomNum] << std::endl;
        }

};


class QuoteFactory {
public:
    static Quote* createQuote(std::string emotion) {
        if (emotion == "Happy") {
            return new Quote("happyQuotes.txt");
        } else if (emotion == "Sad") {
            return new Quote("sadQuotes.txt");
        } else if (emotion == "Angry") {
            return new Quote("angryQuotes.txt");
        } else if (emotion == "Confused") {
            return new Quote("confusedQuotes.txt");
        }
        return nullptr;
    }
};

int main() {
    std::string emotion;
    std::cout << "Enter your current emotion (Happy/Sad/Angry/Confused): ";
    std::cin >> emotion;

    Quote* quote = QuoteFactory::createQuote(emotion);
    if (quote) {
        quote->print();
        delete quote;
        
    } else {
        std::cout << "Invalid emotion entered!" << std::endl;
    }

    return 0;
}