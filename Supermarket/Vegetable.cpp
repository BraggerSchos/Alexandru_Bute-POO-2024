#include "pch.h"
#include "Vegetable.h"

Vegetable::Vegetable(String^ name, double price, int quantity) {
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    Console::WriteLine("Vegetable " + name + " added to stock.");
}

Vegetable::~Vegetable() {
    Console::WriteLine("Vegetable " + name + " removed from stock.");
}

void Vegetable::DisplayDetails() {
    Console::WriteLine("Name: " + name + ", Price: $" + price + ", Available Quantity: " + quantity);
}

void Vegetable::UpdateQuantity(int newQuantity) {
    quantity = newQuantity;
    Console::WriteLine("Quantity for vegetable " + name + " updated to " + quantity + ".");
}

double Vegetable::CalculateTotalValue() {
    return price * quantity;
}

