// Move constructors
// You are tasked with developing an inventory management system for a retail store. 
// Implement a class Product representing individual products, and a class Inventory representing the collection of products in the store. 
// The Inventory class should have a move constructor to efficiently transfer product data between inventory objects.
// hint: use noexcept for move constructor

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class Product {
public:
    string name;
    double price;

    Product(const string& name, double price) : name(name), price(price) {}

    // Display product details
    void display() const {
        cout << "Product: " << name << ", Price: " << price << " RON" << endl;
    }
};

class Inventory {
private:
    vector<Product> products;

public:
    // Default constructor
    Inventory() {}

    // Move constructor - marked noexcept
    Inventory(Inventory&& other) noexcept : products(move(other.products)) {}

    // Method to add a product to the inventory
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    // Method to display all products in the inventory
    void displayAllProducts() const {
        for (const auto& product : products) {
            product.display();
        }
    }
};


int main() {
    Inventory originalInventory;
    originalInventory.addProduct(Product("Laptop", 1200.00));
    originalInventory.addProduct(Product("Smartphone", 800.00));

    cout << "Original Inventory:\n";
    originalInventory.displayAllProducts();

    // Move constructor is used here
    Inventory movedInventory = move(originalInventory);

    cout << "\nMoved Inventory:\n";
    movedInventory.displayAllProducts();

    // originalInventory is left in a valid but unspecified state
    cout << "\nOriginal Inventory after move:\n";
    originalInventory.displayAllProducts(); // This may not print anything meaningful

    return 0;
}