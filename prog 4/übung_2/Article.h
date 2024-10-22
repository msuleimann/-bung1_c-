/**
 *@author Mohamad Ata Suleiman
 *@version  02.07.2024
 **/
#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
using namespace std;

class Article {
private:
    int articleNumber;
    std::string description;
    int stock;
    double price;
    string wrongInputMessege = "he Number have to be bigger than 0 ";

public:
    /**
     * Constructor that initializes an Article with a given article number, description, price, and stock.
     *
     * @param articleNumber The unique identifier for the article. Must be positive.
     * @param description The description of the article.
     * @param price The price of the article. Cannot be negative.
     * @param stock The initial stock quantity of the article. Cannot be negative.
     * @throws invalid_argument If any of the arguments are invalid.
     */
    Article(int articleNumber, const string& description, double price, int stock);
    /**
      * Constructor that initializes an Article with a given article number, description, and price.
      * The stock is initialized to 0.
      *
      * @param articleNumber The unique identifier for the article. Must be positive.
      * @param description The description of the article.
      * @param price The price of the article. Cannot be negative.
      * @throws invalid_argument If any of the arguments are invalid.
      */
    Article(int articleNumber, string& description, double price);
    /**
     * Returns the article number.
     *
     * @return The article number.
     */
    int getArticleNumber() const;
    /**
    * Returns the description of the article.
    *
    * @return The description of the article.
    */
    string getDescription() const;
    /**
     * Returns the current stock of the article.
     *
     * @return The current stock of the article.
     */
    int getStock() const;
    /**
   * Returns the current price of the article.
   *
   * @return The current price of the article.
   */
    double getPrice() const;

    /**
     * Sets the description of the article.
     *
     * @param newDescription The new description of the article.
     */
    void setDescription(const string& newDescription);
    /**
        * Increases the stock of the article by a specified amount.
        *
        * @param amount The amount to increase the stock by. Must be positive.
        * @throws invalid_argument If the amount is negative.
        */
    void increaseStock(int amount);
    /**
     * Reduces the stock of the article by a specified amount.
     *
     * @param amount The amount to reduce the stock by. Must be positive and not greater than current stock.
     * @throws invalid_argument If the amount is negative or greater than current stock.
     */
    void reduceStock(int amount);
    /**
     * Changes the price of the article by a specified percentage.
     *
     * @param percent The percentage to change the price by. Can be positive (increase) or negative (decrease).
     * @throws invalid_argument If the resulting price is negative.
     */
    void changePrice(double percent);

   /**
  * Returns a string representation of the article.
  *
  * @return A string representation of the article.
  */
   string toString() const;


};

#endif //ARTICLE_H
