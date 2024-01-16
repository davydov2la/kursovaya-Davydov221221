#pragma once

#include "Product.h"
namespace �������� {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::ListBox^ order_info;
private: System::Windows::Forms::Button^ prod_add;
private: System::Windows::Forms::Label^ storage;
private: System::Windows::Forms::TextBox^ enter_prod_name;
private: System::Windows::Forms::TextBox^ enter_prod_price;
private: System::Windows::Forms::TextBox^ enter_prod_quantity;
private: System::Windows::Forms::Label^ prod_name_lab;
private: System::Windows::Forms::Label^ prod_price_lab;
private: System::Windows::Forms::Label^ prod_quantity_lab;
private: System::Windows::Forms::ComboBox^ available_products;
private: System::Windows::Forms::TextBox^ customer_name_textbox;
private: System::Windows::Forms::TextBox^ order_prod_quantity_textbox;
private: System::Windows::Forms::Label^ customer_name;
private: System::Windows::Forms::Button^ btn_add_order;
private: System::Windows::Forms::Label^ order_prod_name;
private: System::Windows::Forms::Label^ order_prod_quantity;
private: System::Windows::Forms::Splitter^ splitter1;
private: System::Windows::Forms::MenuStrip^ menuStrip1;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::Label^ product_label;
private: System::Windows::Forms::Label^ orders_label;
private: System::Windows::Forms::Label^ orders;
private: System::Windows::Forms::TreeView^ prod_tree;
private: System::Windows::Forms::ContextMenuStrip^ menu_category;
private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
private: System::Windows::Forms::ContextMenuStrip^ menu_product;
private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
private: System::Windows::Forms::ComboBox^ enter_prod_category;
private: System::Windows::Forms::ListBox^ prod_info;
private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem2;
private: System::Windows::Forms::ComboBox^ available_categories;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem4;
private: System::Windows::Forms::TreeView^ order_tree;
private: System::Windows::Forms::ComboBox^ order_status;
private: System::Windows::Forms::ContextMenuStrip^ menu_customer;
private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
private: System::Windows::Forms::Label^ prod_category_lab;
private: System::Windows::Forms::Label^ order_status_lab;
private: System::Windows::Forms::Label^ order_prod_category;
private: System::Windows::Forms::ToolStripMenuItem^ btn_info;
private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->order_info = (gcnew System::Windows::Forms::ListBox());
			this->prod_add = (gcnew System::Windows::Forms::Button());
			this->storage = (gcnew System::Windows::Forms::Label());
			this->enter_prod_name = (gcnew System::Windows::Forms::TextBox());
			this->enter_prod_price = (gcnew System::Windows::Forms::TextBox());
			this->enter_prod_quantity = (gcnew System::Windows::Forms::TextBox());
			this->prod_name_lab = (gcnew System::Windows::Forms::Label());
			this->prod_price_lab = (gcnew System::Windows::Forms::Label());
			this->prod_quantity_lab = (gcnew System::Windows::Forms::Label());
			this->available_products = (gcnew System::Windows::Forms::ComboBox());
			this->customer_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->order_prod_quantity_textbox = (gcnew System::Windows::Forms::TextBox());
			this->customer_name = (gcnew System::Windows::Forms::Label());
			this->btn_add_order = (gcnew System::Windows::Forms::Button());
			this->order_prod_name = (gcnew System::Windows::Forms::Label());
			this->order_prod_quantity = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->btn_info = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->product_label = (gcnew System::Windows::Forms::Label());
			this->orders_label = (gcnew System::Windows::Forms::Label());
			this->orders = (gcnew System::Windows::Forms::Label());
			this->prod_tree = (gcnew System::Windows::Forms::TreeView());
			this->menu_category = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_product = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enter_prod_category = (gcnew System::Windows::Forms::ComboBox());
			this->prod_info = (gcnew System::Windows::Forms::ListBox());
			this->available_categories = (gcnew System::Windows::Forms::ComboBox());
			this->order_tree = (gcnew System::Windows::Forms::TreeView());
			this->order_status = (gcnew System::Windows::Forms::ComboBox());
			this->menu_customer = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->prod_category_lab = (gcnew System::Windows::Forms::Label());
			this->order_status_lab = (gcnew System::Windows::Forms::Label());
			this->order_prod_category = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->menu_category->SuspendLayout();
			this->menu_product->SuspendLayout();
			this->menu_customer->SuspendLayout();
			this->SuspendLayout();
			// 
			// order_info
			// 
			this->order_info->FormattingEnabled = true;
			this->order_info->ItemHeight = 16;
			this->order_info->Location = System::Drawing::Point(109, 266);
			this->order_info->Name = L"order_info";
			this->order_info->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->order_info->Size = System::Drawing::Size(250, 100);
			this->order_info->TabIndex = 0;
			// 
			// prod_add
			// 
			this->prod_add->Location = System::Drawing::Point(602, 506);
			this->prod_add->Name = L"prod_add";
			this->prod_add->Size = System::Drawing::Size(120, 48);
			this->prod_add->TabIndex = 3;
			this->prod_add->Text = L"�������� �����";
			this->prod_add->UseVisualStyleBackColor = true;
			this->prod_add->Click += gcnew System::EventHandler(this, &MyForm::prod_add_Click);
			// 
			// storage
			// 
			this->storage->AutoSize = true;
			this->storage->Cursor = System::Windows::Forms::Cursors::Default;
			this->storage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->storage->Location = System::Drawing::Point(551, 38);
			this->storage->Name = L"storage";
			this->storage->Size = System::Drawing::Size(231, 29);
			this->storage->TabIndex = 4;
			this->storage->Text = L"������ �� ������";
			// 
			// enter_prod_name
			// 
			this->enter_prod_name->Location = System::Drawing::Point(602, 422);
			this->enter_prod_name->Name = L"enter_prod_name";
			this->enter_prod_name->Size = System::Drawing::Size(120, 22);
			this->enter_prod_name->TabIndex = 5;
			// 
			// enter_prod_price
			// 
			this->enter_prod_price->Location = System::Drawing::Point(602, 450);
			this->enter_prod_price->Name = L"enter_prod_price";
			this->enter_prod_price->Size = System::Drawing::Size(120, 22);
			this->enter_prod_price->TabIndex = 6;
			// 
			// enter_prod_quantity
			// 
			this->enter_prod_quantity->Location = System::Drawing::Point(602, 478);
			this->enter_prod_quantity->Name = L"enter_prod_quantity";
			this->enter_prod_quantity->Size = System::Drawing::Size(120, 22);
			this->enter_prod_quantity->TabIndex = 7;
			// 
			// prod_name_lab
			// 
			this->prod_name_lab->AutoSize = true;
			this->prod_name_lab->Location = System::Drawing::Point(520, 425);
			this->prod_name_lab->Name = L"prod_name_lab";
			this->prod_name_lab->Size = System::Drawing::Size(73, 16);
			this->prod_name_lab->TabIndex = 8;
			this->prod_name_lab->Text = L"��������";
			// 
			// prod_price_lab
			// 
			this->prod_price_lab->AutoSize = true;
			this->prod_price_lab->Location = System::Drawing::Point(553, 453);
			this->prod_price_lab->Name = L"prod_price_lab";
			this->prod_price_lab->Size = System::Drawing::Size(40, 16);
			this->prod_price_lab->TabIndex = 9;
			this->prod_price_lab->Text = L"����";
			// 
			// prod_quantity_lab
			// 
			this->prod_quantity_lab->AutoSize = true;
			this->prod_quantity_lab->Location = System::Drawing::Point(508, 481);
			this->prod_quantity_lab->Name = L"prod_quantity_lab";
			this->prod_quantity_lab->Size = System::Drawing::Size(85, 16);
			this->prod_quantity_lab->TabIndex = 10;
			this->prod_quantity_lab->Text = L"����������";
			// 
			// available_products
			// 
			this->available_products->BackColor = System::Drawing::SystemColors::Window;
			this->available_products->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->available_products->FormattingEnabled = true;
			this->available_products->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->available_products->Location = System::Drawing::Point(169, 480);
			this->available_products->Name = L"available_products";
			this->available_products->Size = System::Drawing::Size(120, 24);
			this->available_products->TabIndex = 11;
			// 
			// customer_name_textbox
			// 
			this->customer_name_textbox->Location = System::Drawing::Point(169, 422);
			this->customer_name_textbox->Name = L"customer_name_textbox";
			this->customer_name_textbox->Size = System::Drawing::Size(120, 22);
			this->customer_name_textbox->TabIndex = 12;
			// 
			// order_prod_quantity_textbox
			// 
			this->order_prod_quantity_textbox->Location = System::Drawing::Point(169, 510);
			this->order_prod_quantity_textbox->Name = L"order_prod_quantity_textbox";
			this->order_prod_quantity_textbox->Size = System::Drawing::Size(120, 22);
			this->order_prod_quantity_textbox->TabIndex = 13;
			// 
			// customer_name
			// 
			this->customer_name->AutoSize = true;
			this->customer_name->Location = System::Drawing::Point(53, 425);
			this->customer_name->Name = L"customer_name";
			this->customer_name->Size = System::Drawing::Size(106, 16);
			this->customer_name->TabIndex = 14;
			this->customer_name->Text = L"��� ���������";
			// 
			// btn_add_order
			// 
			this->btn_add_order->Location = System::Drawing::Point(169, 538);
			this->btn_add_order->Name = L"btn_add_order";
			this->btn_add_order->Size = System::Drawing::Size(120, 48);
			this->btn_add_order->TabIndex = 16;
			this->btn_add_order->Text = L"�������� ������";
			this->btn_add_order->UseVisualStyleBackColor = true;
			this->btn_add_order->Click += gcnew System::EventHandler(this, &MyForm::btn_add_order_Click);
			// 
			// order_prod_name
			// 
			this->order_prod_name->AutoSize = true;
			this->order_prod_name->Location = System::Drawing::Point(36, 483);
			this->order_prod_name->Name = L"order_prod_name";
			this->order_prod_name->Size = System::Drawing::Size(123, 16);
			this->order_prod_name->TabIndex = 18;
			this->order_prod_name->Text = L"�������� ������";
			// 
			// order_prod_quantity
			// 
			this->order_prod_quantity->AutoSize = true;
			this->order_prod_quantity->Location = System::Drawing::Point(74, 513);
			this->order_prod_quantity->Name = L"order_prod_quantity";
			this->order_prod_quantity->Size = System::Drawing::Size(85, 16);
			this->order_prod_quantity->TabIndex = 19;
			this->order_prod_quantity->Text = L"����������";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 30);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 563);
			this->splitter1->TabIndex = 23;
			this->splitter1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->btn_info, this->��������������������ToolStripMenuItem,
					this->�����������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 30);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// btn_info
			// 
			this->btn_info->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_info.Image")));
			this->btn_info->Name = L"btn_info";
			this->btn_info->Size = System::Drawing::Size(34, 26);
			this->btn_info->Click += gcnew System::EventHandler(this, &MyForm::btn_info_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem1,
					this->�������������������ToolStripMenuItem
			});
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(188, 24);
			this->��������������������ToolStripMenuItem->Text = L"����������� ���������";
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem3,
					this->����������ToolStripMenuItem3
			});
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(254, 26);
			this->����������ToolStripMenuItem1->Text = L"�� ��������";
			// 
			// �������������ToolStripMenuItem3
			// 
			this->�������������ToolStripMenuItem3->Name = L"�������������ToolStripMenuItem3";
			this->�������������ToolStripMenuItem3->Size = System::Drawing::Size(208, 26);
			this->�������������ToolStripMenuItem3->Text = L"�� �����������";
			this->�������������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem3_Click);
			// 
			// ����������ToolStripMenuItem3
			// 
			this->����������ToolStripMenuItem3->Name = L"����������ToolStripMenuItem3";
			this->����������ToolStripMenuItem3->Size = System::Drawing::Size(208, 26);
			this->����������ToolStripMenuItem3->Text = L"�� ��������";
			this->����������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem3_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem4,
					this->����������ToolStripMenuItem4
			});
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(254, 26);
			this->�������������������ToolStripMenuItem->Text = L"�� ���������� �������";
			// 
			// �������������ToolStripMenuItem4
			// 
			this->�������������ToolStripMenuItem4->Name = L"�������������ToolStripMenuItem4";
			this->�������������ToolStripMenuItem4->Size = System::Drawing::Size(208, 26);
			this->�������������ToolStripMenuItem4->Text = L"�� �����������";
			this->�������������ToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem4_Click);
			// 
			// ����������ToolStripMenuItem4
			// 
			this->����������ToolStripMenuItem4->Name = L"����������ToolStripMenuItem4";
			this->����������ToolStripMenuItem4->Size = System::Drawing::Size(208, 26);
			this->����������ToolStripMenuItem4->Text = L"�� ��������";
			this->����������ToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem4_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->������������ToolStripMenuItem
			});
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(168, 24);
			this->�����������������ToolStripMenuItem->Text = L"����������� ������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->����������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->����������ToolStripMenuItem->Text = L"�� ��������";
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			this->�������������ToolStripMenuItem->Text = L"�� �����������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(208, 26);
			this->����������ToolStripMenuItem->Text = L"�� ��������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem1,
					this->����������ToolStripMenuItem1
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->������ToolStripMenuItem->Text = L"�� ����";
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(208, 26);
			this->�������������ToolStripMenuItem1->Text = L"�� �����������";
			this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem1_Click);
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(208, 26);
			this->����������ToolStripMenuItem1->Text = L"�� ��������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem1_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem2,
					this->����������ToolStripMenuItem2
			});
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->������������ToolStripMenuItem->Text = L"�� ����������";
			// 
			// �������������ToolStripMenuItem2
			// 
			this->�������������ToolStripMenuItem2->Name = L"�������������ToolStripMenuItem2";
			this->�������������ToolStripMenuItem2->Size = System::Drawing::Size(208, 26);
			this->�������������ToolStripMenuItem2->Text = L"�� �����������";
			this->�������������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem2_Click);
			// 
			// ����������ToolStripMenuItem2
			// 
			this->����������ToolStripMenuItem2->Name = L"����������ToolStripMenuItem2";
			this->����������ToolStripMenuItem2->Size = System::Drawing::Size(208, 26);
			this->����������ToolStripMenuItem2->Text = L"�� ��������";
			this->����������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem2_Click);
			// 
			// product_label
			// 
			this->product_label->AutoSize = true;
			this->product_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->product_label->Location = System::Drawing::Point(631, 369);
			this->product_label->Name = L"product_label";
			this->product_label->Size = System::Drawing::Size(59, 20);
			this->product_label->TabIndex = 33;
			this->product_label->Text = L"�����";
			// 
			// orders_label
			// 
			this->orders_label->AutoSize = true;
			this->orders_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->orders_label->Location = System::Drawing::Point(188, 38);
			this->orders_label->Name = L"orders_label";
			this->orders_label->Size = System::Drawing::Size(101, 29);
			this->orders_label->TabIndex = 34;
			this->orders_label->Text = L"������";
			// 
			// orders
			// 
			this->orders->AutoSize = true;
			this->orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->orders->Location = System::Drawing::Point(158, 369);
			this->orders->Name = L"orders";
			this->orders->Size = System::Drawing::Size(155, 20);
			this->orders->TabIndex = 38;
			this->orders->Text = L"�������� ������";
			// 
			// prod_tree
			// 
			this->prod_tree->Location = System::Drawing::Point(535, 70);
			this->prod_tree->Name = L"prod_tree";
			this->prod_tree->Size = System::Drawing::Size(250, 190);
			this->prod_tree->TabIndex = 39;
			this->prod_tree->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::prod_tree_AfterSelect);
			this->prod_tree->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::prod_tree_MouseClick);
			// 
			// menu_category
			// 
			this->menu_category->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu_category->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������������ToolStripMenuItem,
					this->�����������������ToolStripMenuItem
			});
			this->menu_category->Name = L"menu_category";
			this->menu_category->Size = System::Drawing::Size(226, 52);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(225, 24);
			this->����������������ToolStripMenuItem->Text = L"������� ���������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(225, 24);
			this->�����������������ToolStripMenuItem->Text = L"�������� ���������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click);
			// 
			// menu_product
			// 
			this->menu_product->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu_product->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������������ToolStripMenuItem,
					this->�������������ToolStripMenuItem
			});
			this->menu_product->Name = L"menu_product";
			this->menu_product->Size = System::Drawing::Size(192, 52);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(191, 24);
			this->������������ToolStripMenuItem->Text = L"������� �����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(191, 24);
			this->�������������ToolStripMenuItem->Text = L"�������� �����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// enter_prod_category
			// 
			this->enter_prod_category->FormattingEnabled = true;
			this->enter_prod_category->Location = System::Drawing::Point(601, 392);
			this->enter_prod_category->Name = L"enter_prod_category";
			this->enter_prod_category->Size = System::Drawing::Size(121, 24);
			this->enter_prod_category->TabIndex = 43;
			// 
			// prod_info
			// 
			this->prod_info->FormattingEnabled = true;
			this->prod_info->ItemHeight = 16;
			this->prod_info->Location = System::Drawing::Point(535, 266);
			this->prod_info->Name = L"prod_info";
			this->prod_info->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->prod_info->Size = System::Drawing::Size(250, 100);
			this->prod_info->TabIndex = 44;
			// 
			// available_categories
			// 
			this->available_categories->BackColor = System::Drawing::SystemColors::Window;
			this->available_categories->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->available_categories->FormattingEnabled = true;
			this->available_categories->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->available_categories->Location = System::Drawing::Point(169, 450);
			this->available_categories->Name = L"available_categories";
			this->available_categories->Size = System::Drawing::Size(120, 24);
			this->available_categories->TabIndex = 45;
			this->available_categories->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::available_categories_SelectedIndexChanged);
			// 
			// order_tree
			// 
			this->order_tree->Location = System::Drawing::Point(109, 70);
			this->order_tree->Name = L"order_tree";
			this->order_tree->Size = System::Drawing::Size(250, 190);
			this->order_tree->TabIndex = 46;
			this->order_tree->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::order_tree_AfterSelect);
			this->order_tree->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::order_tree_MouseClick);
			// 
			// order_status
			// 
			this->order_status->BackColor = System::Drawing::SystemColors::Window;
			this->order_status->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->order_status->FormattingEnabled = true;
			this->order_status->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->order_status->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"�������", L"��������������", L"����������",
					L"���������"
			});
			this->order_status->Location = System::Drawing::Point(169, 392);
			this->order_status->Name = L"order_status";
			this->order_status->Size = System::Drawing::Size(120, 24);
			this->order_status->TabIndex = 47;
			// 
			// menu_customer
			// 
			this->menu_customer->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menu_customer->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->menu_customer->Name = L"menu_customer";
			this->menu_customer->Size = System::Drawing::Size(193, 52);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(192, 24);
			this->�������������ToolStripMenuItem->Text = L"������� ������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(192, 24);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// prod_category_lab
			// 
			this->prod_category_lab->AutoSize = true;
			this->prod_category_lab->Location = System::Drawing::Point(518, 395);
			this->prod_category_lab->Name = L"prod_category_lab";
			this->prod_category_lab->Size = System::Drawing::Size(75, 16);
			this->prod_category_lab->TabIndex = 48;
			this->prod_category_lab->Text = L"���������";
			// 
			// order_status_lab
			// 
			this->order_status_lab->AutoSize = true;
			this->order_status_lab->Location = System::Drawing::Point(57, 395);
			this->order_status_lab->Name = L"order_status_lab";
			this->order_status_lab->Size = System::Drawing::Size(102, 16);
			this->order_status_lab->TabIndex = 49;
			this->order_status_lab->Text = L"������ ������";
			// 
			// order_prod_category
			// 
			this->order_prod_category->AutoSize = true;
			this->order_prod_category->Location = System::Drawing::Point(34, 453);
			this->order_prod_category->Name = L"order_prod_category";
			this->order_prod_category->Size = System::Drawing::Size(125, 16);
			this->order_prod_category->TabIndex = 50;
			this->order_prod_category->Text = L"��������� ������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(857, 593);
			this->Controls->Add(this->order_prod_category);
			this->Controls->Add(this->order_status_lab);
			this->Controls->Add(this->prod_category_lab);
			this->Controls->Add(this->order_status);
			this->Controls->Add(this->order_tree);
			this->Controls->Add(this->available_categories);
			this->Controls->Add(this->prod_info);
			this->Controls->Add(this->enter_prod_category);
			this->Controls->Add(this->prod_tree);
			this->Controls->Add(this->orders);
			this->Controls->Add(this->orders_label);
			this->Controls->Add(this->product_label);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->order_prod_quantity);
			this->Controls->Add(this->order_prod_name);
			this->Controls->Add(this->btn_add_order);
			this->Controls->Add(this->customer_name);
			this->Controls->Add(this->order_prod_quantity_textbox);
			this->Controls->Add(this->customer_name_textbox);
			this->Controls->Add(this->available_products);
			this->Controls->Add(this->prod_quantity_lab);
			this->Controls->Add(this->prod_price_lab);
			this->Controls->Add(this->prod_name_lab);
			this->Controls->Add(this->enter_prod_quantity);
			this->Controls->Add(this->enter_prod_price);
			this->Controls->Add(this->enter_prod_name);
			this->Controls->Add(this->storage);
			this->Controls->Add(this->prod_add);
			this->Controls->Add(this->order_info);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� ������� ��������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menu_category->ResumeLayout(false);
			this->menu_product->ResumeLayout(false);
			this->menu_customer->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	Product^ prod;
	String^ category;
	String^ name;
	double price;
	int quantity;
	int index;
	List<Product^>^ AvailableProductsList;
	private: List<Product^>^ loadAllProductsToList(TreeView^ treeView) {
	String^ category;
	String^ name;
	double price;
	int quantity;
	List<Product^>^ available_products;
	if (available_products == nullptr) {
		available_products = gcnew List<Product^>;
	}
	for each (TreeNode^ categoryNode in treeView->Nodes) {
		category = categoryNode->Text;
		for each (TreeNode^ nameNode in categoryNode->Nodes) {
			name = nameNode->Text;
			array<String^>^ elementsPrice = nameNode->Nodes[0]->Text->Split(' ');
			price = Convert::ToDouble(elementsPrice[1]);
			array<String^>^ elementsQuantity = nameNode->Nodes[1]->Text->Split(' ');
			quantity = Convert::ToInt32(elementsQuantity[1]);
			Product^ prod = gcnew Product(category, name, price, quantity);
			available_products->Add(prod);
		}
	}
	return available_products;
}
private: System::Void UpdateComboBox(ComboBox^ comboBox, TreeNodeCollection^ nodes) {
	comboBox->Items->Clear();
	for each (TreeNode ^ node in nodes) {
		comboBox->Items->Add(node->Text);
	}
}
	   //����� ���� ��������� � ������
private: TreeNode^ FindCategoryNode(String^ category) {
	for each (TreeNode ^ node in prod_tree->Nodes) { //��� ������� �� ����� ������
		if (node->Text == category) return node; //���� �������� ���� ��������� � �������� ��������� ���������, ������� ���� ����
	}
	return nullptr; // ����� ������� ������ ���������
}
	   //����� ���� ������ � ���� ���������
private: TreeNode^ FindProductNode(TreeNode^ categoryNode, String^ name) {
	for each (TreeNode ^ productNode in categoryNode->Nodes) { //��� ������� �� �������� ����� ���� ���������
		if (productNode->Text == name) return productNode; //���� �������� ���� ��������� � �������� ��������� ������, ������� ���� ����
	}
	return nullptr; //����� ������� ������ ���������
}
	   //���������� ������ ������ � ������
private: Void AddProduct(TreeView^ treeView, String^ category, String^ name, double price, int quantity) {
	TreeNode^ categoryNode = FindCategoryNode(category); //����� ���� ��������� � �������� ��������� � ������
	if (categoryNode == nullptr) { //���� ���� � ����� ��������� �� ������
		categoryNode = gcnew TreeNode(category); //������� ����� ���� ��������� � ���� ��������� � �������� ��� � ���� ������
		treeView->Nodes->Add(categoryNode); 
	}
	TreeNode^ productNode = FindProductNode(categoryNode, name); //����� ���� ������ � �������� ��������� � ���� ���������
	if (productNode == nullptr) { //���� ���� � ����� ��������� �� ������
		productNode = gcnew TreeNode(name); //������� ����� ���� ������ � ���� ��������� � �������� ��� � ���� ���������
		categoryNode->Nodes->Add(productNode);
	}
	else { //����� ������� �������� ���� ���� � ���������� � ������������� ���� ������
		System::Windows::Forms::DialogResult result = MessageBox::Show("��� ����������. ��������?", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			productNode->Nodes->Clear();
		}
	}
	productNode->Nodes->Add("����: " + price); //�������� � ����� ������ ��������� ���� � ����������
	productNode->Nodes->Add("����������: " + quantity);
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		categoryNode->Expand();
	}
}
private: Void deleteCategoryCustomer(TreeView^ treeView) {
	TreeNode^ selectedNode = treeView->SelectedNode;
	if (selectedNode != nullptr && selectedNode->Level == 0) {
		treeView->Nodes->Remove(selectedNode);
	}
}
private: Void deleteProduct(TreeView^ treeView) {
	TreeNode^ selectedNode = treeView->SelectedNode;
	if (selectedNode != nullptr) {
		if (selectedNode->Level == 1) {
			TreeNode^ parent = selectedNode->Parent;
			treeView->Nodes->Remove(selectedNode);
			if (parent->Nodes->Count == 0) {
				parent->Remove();
			}
		}
	}
}
private: Void ChangeProduct(TreeView^ treeView, String^ category, String^ name, double price, int quantity) {
	TreeNode^ selectedNode = treeView->SelectedNode;
	TreeNodeCollection^ nodes = treeView->Nodes;
	if (selectedNode != nullptr) {
		TreeNode^ parentNode = selectedNode->Parent;
		int found_category_index = -1;
		for (int i = 0; i < nodes->Count; i++) {
			if (nodes[i]->Text == category->ToString()) {
				found_category_index = i;
				break;
			}
		}
		if (found_category_index == -1) {
			TreeNode^ newCategoryNode = gcnew TreeNode(category);
			newCategoryNode->Nodes->Add(gcnew TreeNode(name));
			newCategoryNode->Nodes[0]->Nodes->Add(gcnew TreeNode("����: " + price));
			newCategoryNode->Nodes[0]->Nodes->Add(gcnew TreeNode("����������: " + quantity));
			parentNode->Nodes->Remove(selectedNode);
			if (parentNode->Nodes->Count == 0) {
				parentNode->Remove();
			}
			treeView->Nodes->Add(newCategoryNode);
		}
		else {
			TreeNode^ Name = gcnew TreeNode(name);
			Name->Nodes->Add("����: " + price);
			Name->Nodes->Add("����������: " + quantity);
			prod_tree->Nodes[found_category_index]->Nodes->Add(Name);
			parentNode->Nodes->Remove(selectedNode);
			if (parentNode->Nodes->Count == 0) {
				parentNode->Remove();
			}
		}
	}
	selectedNode->Text = name;
	selectedNode->Nodes[0]->Text = "����: " + price;
	selectedNode->Nodes[1]->Text = "����������: " + quantity;
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		categoryNode->Expand();
	}
}
private: Void changeCategory(TreeView^ treeView) {
	String^ category = this->enter_prod_category->Text;
	if (treeView->SelectedNode != nullptr) {
		treeView->SelectedNode->Text = category;
		this->enter_prod_category->SelectedIndex = -1;
		this->enter_prod_category->Text = "";
	}
}
private: static int CompareByNameAsc(TreeNode^ node1, TreeNode^ node2) {
	String^ name1 = node1->Text;
	String^ name2 = node2->Text;
	return String::Compare(name1, name2, StringComparison::OrdinalIgnoreCase);
}
private: static int CompareByNameDesc(TreeNode^ node1, TreeNode^ node2) {
	String^ name1 = node1->Text;
	String^ name2 = node2->Text;
	return String::Compare(name2, name1, StringComparison::OrdinalIgnoreCase);
}
private: static int CompareByPriceAsc(TreeNode^ node1, TreeNode^ node2) {
	array<String^>^ sprice1 = node1->Nodes[0]->Text->Split(' ');
	array<String^>^ sprice2 = node2->Nodes[0]->Text->Split(' ');
	double price1 = Convert::ToDouble(sprice1[1]);
	double price2 = Convert::ToDouble(sprice2[1]);
	if (price1 < price2) return -1;
	else if (price1 > price2) return 1;
	else return 0;
}
private: static int CompareByPriceDesc(TreeNode^ node1, TreeNode^ node2) {
	array<String^>^ sprice1 = node1->Nodes[0]->Text->Split(' ');
	array<String^>^ sprice2 = node2->Nodes[0]->Text->Split(' ');
	double price1 = Convert::ToDouble(sprice1[1]);
	double price2 = Convert::ToDouble(sprice2[1]);
	if (price1 < price2) return 1;
	else if (price1 > price2) return -1;
	else return 0;
}
private: static int CompareByQuantityAsc(TreeNode^ node1, TreeNode^ node2) {
	array<String^>^ squantity1 = node1->Nodes[1]->Text->Split(' ');
	array<String^>^ squantity2 = node2->Nodes[1]->Text->Split(' ');
	int quantity1 = Convert::ToDouble(squantity1[1]);
	int quantity2 = Convert::ToDouble(squantity2[1]);
	if (quantity1 < quantity2) return -1;
	else if (quantity1 > quantity2) return 1;
	else return 0;
}
private: static int CompareByQuantityDesc(TreeNode^ node1, TreeNode^ node2) {
	array<String^>^ squantity1 = node1->Nodes[1]->Text->Split(' ');
	array<String^>^ squantity2 = node2->Nodes[1]->Text->Split(' ');
	int quantity1 = Convert::ToDouble(squantity1[1]);
	int quantity2 = Convert::ToDouble(squantity2[1]);
	if (quantity1 < quantity2) return 1;
	else if (quantity1 > quantity2) return -1;
	else return 0;
}
private: static int CompareByCountAsc(TreeNode^ node1, TreeNode^ node2) {
	int count1 = node1->Nodes->Count;
	int count2 = node2->Nodes->Count;
	if (count1 < count2) return -1;
	else if (count1 > count2) return 1;
	else return 0;
}
private: static int CompareByCountDesc(TreeNode^ node1, TreeNode^ node2) {
	int count1 = node1->Nodes->Count;
	int count2 = node2->Nodes->Count;
	if (count1 < count2) return 1;
	else if (count1 > count2) return -1;
	else return 0;
}
private: void SortProducts(int a) {
	for each (TreeNode^ categoryNode in prod_tree->Nodes) {
		if (categoryNode != nullptr) {
			List<TreeNode^>^ products = gcnew List<TreeNode^>();
			for each (TreeNode^ productNode in categoryNode->Nodes) {
				products->Add(productNode);
			}
			categoryNode->Nodes->Clear();
			switch (a) {
			case 1: products->Sort(gcnew Comparison<TreeNode^>(CompareByNameAsc)); break; 
			case 2: products->Sort(gcnew Comparison<TreeNode^>(CompareByNameDesc)); break;
			case 3: products->Sort(gcnew Comparison<TreeNode^>(CompareByPriceAsc)); break;
			case 4: products->Sort(gcnew Comparison<TreeNode^>(CompareByPriceDesc)); break;
			case 5: products->Sort(gcnew Comparison<TreeNode^>(CompareByQuantityAsc)); break;
			case 6: products->Sort(gcnew Comparison<TreeNode^>(CompareByQuantityDesc)); break;
			}
			categoryNode->Nodes->AddRange(products->ToArray());
		}
	}
}
private: void SortCategories(int a) {
	List<TreeNode^>^ categories = gcnew List<TreeNode^>;
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		categories->Add(categoryNode);
	}
	prod_tree->Nodes->Clear();
	switch (a) {
	case 1: categories->Sort(gcnew Comparison<TreeNode^>(CompareByNameAsc)); break;
	case 2: categories->Sort(gcnew Comparison<TreeNode^>(CompareByNameDesc)); break;
	case 3: categories->Sort(gcnew Comparison<TreeNode^>(CompareByCountAsc)); break;
	case 4: categories->Sort(gcnew Comparison<TreeNode^>(CompareByCountDesc)); break;
	}
	prod_tree->Nodes->AddRange(categories->ToArray());
}
private: String^ CreateProductString(Product^ prod) {
	String^ productString = prod->Name + " - " + prod->Price.ToString() + "�, " + prod->Quantity.ToString() + "��";
	return productString;
}
private: TreeNode^ FindNode(TreeNodeCollection^ nodes, String^ text) {
	for each (TreeNode ^ node in nodes) {
		if (node->Text == text) {
			return node;
		}
	}
	return nullptr;
}
private: int GetProductQuantity(TreeNode^ productNode) {
	for each (TreeNode ^ node in productNode->Nodes) {
		if (node->Text->StartsWith("����������: ")) {
			return Convert::ToInt32(node->Text->Substring(12));
		}
	}
	return 0;
}
private: Void UpdateProductQuantity(TreeView^ treeView, TreeNode^ productNode, int quantity) {
	for each (TreeNode ^ node in productNode->Nodes) {
		if (node->Text->StartsWith("����������: ")) {
			int currentQuantity = Convert::ToInt32(node->Text->Substring(12));
			int newQuantity = currentQuantity + quantity;
			node->Text = "����������: " + newQuantity;
			if (newQuantity == 0) {
				treeView->SelectedNode = productNode;
				deleteProduct(treeView);
			}
			return;
		}
	}
}
private: TreeNode^ FindOrCreateNode(TreeNodeCollection^ nodes, String^ name) {
	for each (TreeNode ^ node in nodes) {
		if (node->Text->StartsWith(name)) {
			return node;
		}
	}
	TreeNode^ newNode = gcnew TreeNode(name);
	nodes->Add(newNode);
	return newNode;
}
private: Void AddOrder(TreeView^ treeView1, TreeView^ treeView2, String^ customer, String^ category, String^ name, String^ status, int quantity) {
	for each (Product ^ prod in AvailableProductsList) {
		if (prod->Name == name) {
			price = prod->Price;
		}
	}
	TreeNode^ customerNode = FindOrCreateNode(treeView1->Nodes, customer + " - " + status);
	TreeNode^ categoryNode = FindOrCreateNode(customerNode->Nodes, category);
	TreeNode^ productNode = FindOrCreateNode(categoryNode->Nodes, name);
	TreeNode^ prodCategoryNode = FindNode(treeView2->Nodes, category);
	TreeNode^ prodNameNode = FindNode(prodCategoryNode->Nodes, name);
	if (prodNameNode != nullptr) {
		int availableQuantity = GetProductQuantity(prodNameNode);
		if (quantity <= availableQuantity) {
			UpdateProductQuantity(treeView2, prodNameNode, -quantity);
			if (productNode->Nodes->Count == 0) {
				productNode->Nodes->Add("����������: " + quantity);
			}
			else {
				UpdateProductQuantity(treeView1, productNode, quantity);
			}
		}
		else {
			MessageBox::Show("������ � ����� ���������� ��� �� ������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("����� �� ������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: Void changeStatus(TreeView^ treeView) {
	String^ customer = treeView->SelectedNode->Text->Split('-')[0]->Trim();
	String^ status = order_status->SelectedItem->ToString();
	if (treeView->SelectedNode != nullptr) {
		treeView->SelectedNode->Text = customer + " - " + status;
		this->order_status->SelectedIndex = -1;
	}
	if (treeView->SelectedNode->Text == customer + " - " + "���������") {
		MessageBox::Show("����� ��������", "Done", MessageBoxButtons::OK, MessageBoxIcon::Information);
		deleteCategoryCustomer(treeView);
	}
}
private: Void SaveNode(TreeNode^ node, StreamWriter^ writer, int indent) {
	for (int i = 0; i < indent; ++i) {
		writer->Write("\t");
	}
	writer->WriteLine(node->Text);
	for each (TreeNode ^ childNode in node->Nodes) {
		SaveNode(childNode, writer, indent + 1);
	}
}
private: Void SaveTreeView(TreeView^ treeView, String^ file) {
	StreamWriter^ writer = gcnew StreamWriter(file);
	for each (TreeNode ^ node in treeView->Nodes) {
		SaveNode(node, writer, 0);
	}
	writer->Close();
}
private: Void LoadTreeView(TreeView^ treeView, String^ file) {
	StreamReader^ reader = gcnew StreamReader(file);
	treeView->Nodes->Clear();
	Collections::Generic::Stack<TreeNode^>^ parentStack = gcnew Collections::Generic::Stack<TreeNode^>();
	while (!reader->EndOfStream) {
		String^ line = reader->ReadLine();
		int indent = line->Length - line->TrimStart('\t')->Length;
		line = line->TrimStart('\t');
		TreeNode^ newNode = gcnew TreeNode(line);
		while (parentStack->Count > indent) {
			parentStack->Pop();
		}
		if (parentStack->Count > 0) {
			parentStack->Peek()->Nodes->Add(newNode);
		}
		else {
			treeView->Nodes->Add(newNode);
		}
		parentStack->Push(newNode);
	}
	reader->Close();
	File::WriteAllText(file, "");
}

//	����������� �������
private: System::Void prod_add_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (AvailableProductsList == nullptr) {
			AvailableProductsList = gcnew List<Product^>();
		}
		String^ category = this->enter_prod_category->Text;
		String^ name = this->enter_prod_name->Text;
		double price = System::Convert::ToDouble(this->enter_prod_price->Text);
		int quantity = System::Convert::ToInt32(this->enter_prod_quantity->Text);
		System::Windows::Forms::DialogResult result = MessageBox::Show("�� �������, ��� ������ �������� " + name + " ��������� " + category + "?", "����������", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			AddProduct(prod_tree, category, name, price, quantity);
			AvailableProductsList->Clear();
			AvailableProductsList = loadAllProductsToList(this->prod_tree);
			UpdateComboBox(enter_prod_category, prod_tree->Nodes);
			UpdateComboBox(available_categories, prod_tree->Nodes);
			this->enter_prod_category->SelectedIndex = -1;
			this->enter_prod_category->Text = "";
			this->enter_prod_name->Clear();
			this->enter_prod_price->Clear();
			this->enter_prod_quantity->Clear();
		}
	}
	catch (FormatException^ ex) {
		MessageBox::Show(this, "����������� ��������� ���� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->enter_prod_category->SelectedIndex = -1;
		this->enter_prod_category->Text = "";
		this->enter_prod_name->Clear();
		this->enter_prod_price->Clear();
		this->enter_prod_quantity->Clear();
	}
}
private: System::Void prod_tree_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Right) {
		Point mousePos = prod_tree->PointToClient(Control::MousePosition);
		TreeNode^ node = prod_tree->GetNodeAt(mousePos);
		if (node != nullptr) {
			prod_tree->SelectedNode = node;
			if (node->Nodes->Count > 0 && node->Nodes[0]->Nodes->Count == 0) {
				menu_product->Show(prod_tree, mousePos);
			}
			if (node->Parent == nullptr) {
				menu_category->Show(prod_tree, mousePos);
			}
		}
	}
}
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	deleteCategoryCustomer(prod_tree);
	AvailableProductsList->Clear();
	AvailableProductsList = loadAllProductsToList(prod_tree);
	UpdateComboBox(enter_prod_category, prod_tree->Nodes);
	UpdateComboBox(available_categories, prod_tree->Nodes);
}
private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	deleteProduct(prod_tree);
	AvailableProductsList->Clear();
	AvailableProductsList = loadAllProductsToList(prod_tree);
	UpdateComboBox(enter_prod_category, prod_tree->Nodes);
	UpdateComboBox(available_categories, prod_tree->Nodes);
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ category = enter_prod_category->Text;
		String^ name = enter_prod_name->Text;
		double price = Convert::ToDouble(enter_prod_price->Text);
		int quantity = Convert::ToInt32(enter_prod_quantity->Text);
		ChangeProduct(prod_tree, category, name, price, quantity);
		this->enter_prod_category->SelectedIndex = -1;
		this->enter_prod_category->Text = "";
		this->enter_prod_name->Clear();
		this->enter_prod_price->Clear();
		this->enter_prod_quantity->Clear();
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
		UpdateComboBox(enter_prod_category, prod_tree->Nodes);
		UpdateComboBox(available_categories, prod_tree->Nodes);
	}
	catch (FormatException^ ex) {
		MessageBox::Show(this, "����������� ��������� ���� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		this->enter_prod_category->SelectedIndex = -1;
		this->enter_prod_category->Text = "";
		this->enter_prod_name->Clear();
		this->enter_prod_price->Clear();
		this->enter_prod_quantity->Clear();
	}
}
private: System::Void �����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	changeCategory(prod_tree);
	AvailableProductsList->Clear();
	AvailableProductsList = loadAllProductsToList(prod_tree);
	UpdateComboBox(enter_prod_category, prod_tree->Nodes);
	UpdateComboBox(available_categories, prod_tree->Nodes);
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(1);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(2);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void �������������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(3);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}

private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(4);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}

private: System::Void �������������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(5);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}

private: System::Void ����������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProducts(6);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void �������������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	SortCategories(1);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void ����������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	SortCategories(2);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void �������������ToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	SortCategories(3);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void ����������ToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	SortCategories(4);
	if (AvailableProductsList != nullptr) {
		AvailableProductsList->Clear();
		AvailableProductsList = loadAllProductsToList(this->prod_tree);
	}
}
private: System::Void available_categories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		if (categoryNode->Text == available_categories->SelectedItem) {
			UpdateComboBox(available_products, categoryNode->Nodes);
		}
	}
}
private: System::Void prod_tree_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	prod_info->Items->Clear();
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		if (categoryNode == prod_tree->SelectedNode) {
			prod_info->Items->Add(categoryNode->Text);
			for each (Product ^ prod in AvailableProductsList) {
				if (prod->Category == categoryNode->Text) {
					prod_info->Items->Add(CreateProductString(prod));
				}
			}
		}
	}
	for each (Product ^ prod in AvailableProductsList) {
		if (prod->Name == prod_tree->SelectedNode->Text) {
			prod_info->Items->Add(CreateProductString(prod));
		}
	}
}
private: System::Void btn_add_order_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ customer = customer_name_textbox->Text;
		String^ category;
		String^ name;
		String^ status;
		int quantity = Convert::ToInt32(order_prod_quantity_textbox->Text);
		if (available_categories->SelectedItem != nullptr && available_products != nullptr && order_status != nullptr) {
			category = available_categories->SelectedItem->ToString();
			name = available_products->SelectedItem->ToString();
			status = order_status->SelectedItem->ToString();
		}
		if (status != "�������") {
			MessageBox::Show("�������� ������ �������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			order_status->SelectedIndex = 0;
		}
		else {
			AddOrder(order_tree, prod_tree, customer, category, name, status, quantity);
			customer_name_textbox->Clear();
			order_prod_quantity_textbox->Clear();
			available_categories->SelectedIndex = -1;
			available_products->SelectedIndex = -1;
			AvailableProductsList->Clear();
			AvailableProductsList = loadAllProductsToList(this->prod_tree);
		}
	}
	catch (FormatException^ ex) {
		MessageBox::Show(this, "����������� ��������� ���� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		customer_name_textbox->Clear();
		order_prod_quantity_textbox->Clear();
		order_status->SelectedIndex = -1;
		available_categories->SelectedIndex = -1;
		available_products->SelectedIndex = -1;
	}
}
private: System::Void order_tree_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Right) {
		Point mousePos = order_tree->PointToClient(Control::MousePosition);
		TreeNode^ node = order_tree->GetNodeAt(mousePos);
		if (node != nullptr) {
			order_tree->SelectedNode = node;
			if (node->Parent == nullptr) {
				menu_customer->Show(order_tree, mousePos);
			}
		}
	}
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	deleteCategoryCustomer(order_tree);
}
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	changeStatus(order_tree);
}
private: System::Void order_tree_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	order_info->Items->Clear();
	if (e->Node->Parent == nullptr) {
		String^ customer = e->Node->Text->Split('-')[0]->Trim();
		order_info->Items->Add(customer);
		for each (TreeNode ^ categoryNode in e->Node->Nodes) {
			String^ category = categoryNode->Text;
			order_info->Items->Add(category);
			for each (TreeNode ^ nameNode in categoryNode->Nodes) {
				String^ name = nameNode->Text;
				int quantity = Convert::ToInt32(nameNode->Nodes[0]->Text->Substring(12));
				String^ orderInfo = String::Format("{0} - {1}", name, quantity) + "��";
				order_info->Items->Add(orderInfo);
			}
		}
	}
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	SaveTreeView(prod_tree, "prod_tree.txt");
	SaveTreeView(order_tree, "order_tree.txt");
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadTreeView(prod_tree, "prod_tree.txt");
	for each (TreeNode ^ categoryNode in prod_tree->Nodes) {
		categoryNode->Expand();
	}
	LoadTreeView(order_tree, "order_tree.txt");
	AvailableProductsList = loadAllProductsToList(this->prod_tree);
	UpdateComboBox(enter_prod_category, prod_tree->Nodes);
	UpdateComboBox(available_categories, prod_tree->Nodes);
}
private: System::Void btn_info_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ reader = gcnew StreamReader("info.txt");
	String^ line = reader->ReadToEnd();
	MessageBox::Show(line, "�������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
