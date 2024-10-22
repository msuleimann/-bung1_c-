/**
*@author Mohamad Ata Suleiman
 *@version  02.07.2024
 **/

#ifndef STOREHOUSE_H
#define STOREHOUSE_H

#include <vector>
#include "Article.h"

class Storehouse {
private:
    vector<Article*> articles;
    int maxSize;
    int insertElment = 0;
public:
    Storehouse(int size);
    Storehouse();

void addArticle(Article* article);
void removeArticle(int articleNumber) ;
void increaseStock(int articleNumber, int amount) const;
void reduceStock(int articleNumber, int amount) const;
void changePrice(int articleNumber, int percent) const ;
void changePrice(int percent);
double calculateTotalValue() const;
Article* findArticle(int articleNumber) const;
bool isFull() const ;
bool isEmpty() const ;
int printArticleCount()const;
string toString() const;
    ~Storehouse();
};


#endif //STOREHOUSE_H
