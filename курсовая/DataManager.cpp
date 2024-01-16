#include "DataManager.h"

DataManager::DataManager(ListBox^ prod_name, ListBox^ prod_price, ListBox^ prod_quantity) {
	ProductNames = gcnew List<String^>();
	for each (String ^ ProductName in prod_name->Items) {
		ProductNames->Add(ProductName);
	}
	ProductPrices = gcnew List<double>();
	for each (double ProductPrice in prod_price->Items) {
		ProductPrices->Add(ProductPrice);
	}
	ProductQuantities = gcnew List<int>();
	for each (int ProductQuantity in prod_quantity->Items) {
		ProductQuantities->Add(ProductQuantity);
	}
}

void DataManager::SaveData(StreamWriter^ writer) {
	for (int i = 0; i < ProductNames->Count; i++) {
		writer->WriteLine(ProductNames[i]);
		writer->WriteLine(ProductPrices[i].ToString());
		writer->WriteLine(ProductQuantities[i].ToString());
	}
}

void DataManager::LoadData(StreamReader^ reader) {
	while (!reader->EndOfStream) {
		ProductNames->Add(reader->ReadLine());
		ProductPrices->Add(Convert::ToDouble(reader->ReadLine()));
		ProductQuantities->Add(Convert::ToInt32(reader->ReadLine()));
	}
}