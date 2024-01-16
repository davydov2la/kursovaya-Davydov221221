#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace Collections::Generic;
namespace курсовая {
	public ref class Product {
	public:
		Product();
		Product(String^ category, String^ name, double price, int quantity);
		property String^ Category {
			String^ get();
		}
		property String^ Name {
			String^ get();
		}
		property double Price {
			double get();
		}
		property int Quantity {
			int get();
		}
	private:
		String^ category;
		String^ name;
		double price;
		int quantity;
	};
}