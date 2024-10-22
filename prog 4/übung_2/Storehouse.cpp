//
// Created by alman on 01/07/2024.
//

#include "Storehouse.h"
#include "Article.h"
#include <vector>
#include <algorithm>
#include <stdexcept>




    Storehouse::Storehouse(int size) : maxSize(size) {
        if (size <= 0) {
            throw invalid_argument("he Number have to be bigger than 0 ");
        }
    }

    Storehouse::Storehouse() : Storehouse(10) {}

    void Storehouse::addArticle(Article* article) {
        if (isFull()) {
            throw  runtime_error("Warehouse is Full");
        }
        articles.push_back(article);
        insertElment++;
    }

    void Storehouse::removeArticle(int articleNumber) {

            auto it = std::find_if(articles.begin(), articles.end(),
                [articleNumber](const Article* a) { return a->getArticleNumber() == articleNumber; });
            if (it != articles.end()) {
                delete *it;
                articles.erase(it);

            }else {
                    throw invalid_argument("Article not found");
                }

            }




    void Storehouse::increaseStock(int articleNumber, int amount) const {
        Article* article = findArticle(articleNumber);
        if (article) {
            article->increaseStock(amount);
        }
    }

    void Storehouse::reduceStock(int articleNumber, int amount) const {
        Article* article = findArticle(articleNumber);
        if (article) {
            article->reduceStock(amount);
        }else {
            throw invalid_argument("Article not found");
        }
    }

    void Storehouse::changePrice(int articleNumber, int percent) const {
        Article* article = findArticle(articleNumber);
        if (article) {
            article->changePrice(percent);
        }
    }

    void Storehouse::changePrice(int percent) {
        for (Article* article : articles) {
            article->changePrice(percent);
        }
    }

    double Storehouse::calculateTotalValue() const {
        double total = 0;
        for (const Article* article : articles) {
            total += article->getPrice() * article->getStock();
        }
        return total;
    }

    Article* Storehouse::findArticle(int articleNumber) const{
        for (Article* article : articles) {
            if (article->getArticleNumber() == articleNumber) {
                return article;
            }
        }
        return nullptr;
    }

    bool Storehouse::isFull() const { return insertElment == maxSize; }
    bool Storehouse::isEmpty() const { return articles.empty(); }
    int Storehouse::printArticleCount() const { return insertElment; }

    string Storehouse::toString() const {
        string result = "Warehouse Status:\n";
        for (const Article* article : articles) {
            result += article->toString() + "\n";
        }
        return result;
    }


    Storehouse::~Storehouse() {
        for (Article* article : articles) {
            delete article;
        }
    }

