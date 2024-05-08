#include "pch.h"
#include "Vegetable.h"

using namespace System;

int main(array<System::String^>^ args) {
    Vegetable^ tomatoes = gcnew Vegetable("Tomatoes", 3.5, 50);
    Vegetable^ potatoes = gcnew Vegetable("Potatoes", 2.0, 100);
    Vegetable^ carrots = gcnew Vegetable("Carrots", 1.8, 75);
    Vegetable^ cabbages = gcnew Vegetable("Cabbages", 1.2, 150);
    Vegetable^ broccoli = gcnew Vegetable("Broccoli", 3.0, 0);

    Console::WriteLine("Available vegetable details:");
    tomatoes->DisplayDetails();
    potatoes->DisplayDetails();
    carrots->DisplayDetails();
    cabbages->DisplayDetails();
    broccoli->DisplayDetails();
    broccoli->~Vegetable();

    potatoes->UpdateQuantity(120);
    
    double totalValue = tomatoes->CalculateTotalValue() + potatoes->CalculateTotalValue() + carrots->CalculateTotalValue() + cabbages ->CalculateTotalValue();
    Console::WriteLine("Total value of vegetables in stock: $" + totalValue);

    return 0;
}


