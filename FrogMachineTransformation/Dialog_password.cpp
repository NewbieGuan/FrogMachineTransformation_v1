#include "Dialog_password.h"
#include "ui_Dialog_password.h"

Dialog_password::Dialog_password(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::Dialog_password();
	ui->setupUi(this);
}

Dialog_password::~Dialog_password()
{
	delete ui;
}

QString Dialog_password::get_password()
{
	return ui->lineEdit_password->text();
}
