// Created by alman on 01/07/2024

#include "Article.h"

#include <iomanip>
#include <iostream>

    Article::Article(int articleNumber, const std::string& description, double price, int stock){
    if (articleNumber <= 0 || price < 0 || stock < 0|| description.empty()) {
        throw invalid_argument(wrongInputMessege);
    }
    this->articleNumber = articleNumber;
    this->price = price;
    this->stock = stock;
    this->description = description;
}



    Article::Article(int articleNumber, string &description, double price) {
        if (articleNumber <= 0 || price < 0 || description.empty()) {
            throw invalid_argument(wrongInputMessege);
        }
        this->articleNumber = articleNumber;
        this->price = price;
        this->stock = 0;
        this->description = description;
    }

int Article::getArticleNumber() const {
    return articleNumber;
}

std::string Article::getDescription() const {
    return description;
}

int Article::getStock() const {
    return stock;
}

double Article::getPrice() const {
    return price;
}
void Article::increaseStock(int newStock) {
    if (stock < 0 ) {
        throw invalid_argument(wrongInputMessege);
    }
    stock += newStock ;
}
void Article::reduceStock(int newStock) {
    if (stock < 0 || stock < newStock  ) {
        throw invalid_argument(wrongInputMessege);
    } if (stock < newStock  ) {
        throw invalid_argument("Stock can't be reduce.Stock Overlimit");
    }
    stock -= newStock ;
}
void Article::changePrice(double percent) {
    double tempPrice = price;
    price += price*(percent/100);

    if (price < 0) {
        this->price = tempPrice;
        throw invalid_argument("Price cannot be negative");
    }
}

void Article::setDescription(const string& newDescription) {
    description = newDescription;
}



string Article::toString() const {
        std::ostringstream oss;
        oss << "Article number: " << articleNumber
            << ", description: " << description
            << ", price: $" << std::fixed << std::setprecision(2) << price
            << ", stock: " << stock;
        return oss.str();
}
