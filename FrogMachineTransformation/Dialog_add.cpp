#include "Dialog_add.h"
#include "ui_Dialog_add.h"

Dialog_add::Dialog_add(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::Dialog_add();
	ui->setupUi(this);
}

Dialog_add::~Dialog_add()
{
	delete ui;
}

QString Dialog_add::get_name()
{
	return ui->lineEdit_name->text();
}

double Dialog_add::get_L1()
{
	return ui->dSB_L1->value();
}

double Dialog_add::get_L2()
{
	return ui->dSB_L2->value();
}

double Dialog_add::get_L3()
{
	return ui->dSB_L3->value();
}

double Dialog_add::get_L4()
{
	return ui->dSB_L4->value();
}
