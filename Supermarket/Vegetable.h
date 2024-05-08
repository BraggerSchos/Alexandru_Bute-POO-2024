#pragma once
#include "pch.h"

using namespace System;

ref class Vegetable {
private:
    String^ name;
    double price;
    int quantity;

public:
    Vegetable(String^ name, double price, int quantity);
    ~Vegetable();
    void DisplayDetails();
    void UpdateQuantity(int newQuantity);
    double CalculateTotalValue();
};