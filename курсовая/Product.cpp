#include "Product.h"

namespace курсовая {

	Product::Product() {
		this->category = "";
		this->name = "";
		this->price = 0.0;
		this->quantity = 0;
	}

	Product::Product(String^ category, String^ name, double price, int quantity) {
		this->category = category;
		this->name = name;
		this->price = price;
		this->quantity = quantity;
	}
	String^ Product::Category::get() {
		return category;
	}
	String^ Product::Name::get() {
		return name;
	}
	double Product::Price::get() {
		return price;
	}
	int Product::Quantity::get() {
		return quantity;
	}
}