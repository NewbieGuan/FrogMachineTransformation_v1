#include "Dialog_amend.h"
#include "ui_Dialog_amend.h"

Dialog_amend::Dialog_amend(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::Dialog_amend();
	ui->setupUi(this);
}

Dialog_amend::~Dialog_amend()
{
	delete ui;
}

void Dialog_amend::setItem(QString name, double L1, double L2, double L3, double L4)
{
	ui->lineEdit_name->setText(name);
	ui->dSB_L1->setValue(L1);
	ui->dSB_L2->setValue(L2);
	ui->dSB_L3->setValue(L3);
	ui->dSB_L4->setValue(L4);
}

QString Dialog_amend::get_name()
{
	return ui->lineEdit_name->text();
}

double Dialog_amend::get_L1()
{
	return ui->dSB_L1->value();
}

double Dialog_amend::get_L2()
{
	return ui->dSB_L2->value();
}

double Dialog_amend::get_L3()
{
	return ui->dSB_L3->value();
}

double Dialog_amend::get_L4()
{
	return ui->dSB_L4->value();
}