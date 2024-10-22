#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "Article.h"
#include "Storehouse.h"
#include "City.h"

void displayMenu() {
    std::cout << "1. Add Article\n";
    std::cout << "2. Remove Article\n";
    std::cout << "3. Increase Stock\n";
    std::cout << "4. Decrease Stock\n";
    std::cout << "5. Change Price\n";
    std::cout << "6. Display Warehouse\n";
    std::cout << "7. Calculate Total Value\n";
    std::cout << "8. Quit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Storehouse storehouse(10);
    bool running = true;

    while (running) {
        displayMenu();
        int choice;
        std::cin >> choice;

        try {
            switch (choice) {
                case 1: {
                    int articleNumber, stock;
                    double price;
                    std::string description;

                    std::cout << "Enter article number: ";
                    std::cin >> articleNumber;
                    std::cout << "Enter description: ";
                    std::cin.ignore();
                    std::getline(std::cin, description);
                    std::cout << "Enter price: ";
                    std::cin >> price;
                    std::cout << "Enter stock: ";
                    std::cin >> stock;

                    Article* article = new Article(articleNumber, description, price, stock);
                    storehouse.addArticle(article);
                    std::cout << "Article added successfully!\n";
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 2: {
                    int articleNumber;
                    std::cout << "Enter article number to remove: ";
                    std::cin >> articleNumber;

                    storehouse.removeArticle(articleNumber);
                    std::cout << "Article removed successfully!\n";
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 3: {
                    int articleNumber, amount;
                    std::cout << "Enter article number: ";
                    std::cin >> articleNumber;
                    std::cout << "Enter amount to increase: ";
                    std::cin >> amount;

                    storehouse.increaseStock(articleNumber, amount);
                    std::cout << "Stock increased successfully!\n";
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 4: {
                    int articleNumber, amount;
                    std::cout << "Enter article number: ";
                    std::cin >> articleNumber;
                    std::cout << "Enter amount to decrease: ";
                    std::cin >> amount;

                    storehouse.reduceStock(articleNumber, amount);
                    std::cout << "Stock decreased successfully!\n";
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 5: {
                    int articleNumber, percent;
                    std::cout << "Enter article number: ";
                    std::cin >> articleNumber;
                    std::cout << "Enter percent to change price: ";
                    std::cin >> percent;

                    storehouse.changePrice(articleNumber, percent);
                    std::cout << "Price changed successfully!\n";
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 6: {
                    std::cout << storehouse.toString();
                    break;
                }
                case 7: {
                    double totalValue = storehouse.calculateTotalValue();
                    std::cout << "Total value of warehouse: $" << std::fixed << std::setprecision(2) << totalValue << '\n';
                    cout << "-------------------------------------------------\n";
                    break;
                }
                case 8: {
                    running = false;
                    break;
                }
                default:
                    std::cerr << "Invalid choice. Please try again.\n";
                cout << "-------------------------------------------------\n";
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << '\n';
        } catch (const std::runtime_error& e) {
            std::cerr << "Error: " << e.what() << '\n';
        } catch (...) {
            std::cerr << "An unexpected error occurred.\n";
            cout << "-------------------------------------------------\n";
        }
    }

    return 0;