#pragma once

#include <QDialog>
namespace Ui { class Dialog_add; };

class Dialog_add : public QDialog
{
	Q_OBJECT

public:
	Dialog_add(QWidget *parent = Q_NULLPTR);
	~Dialog_add();
	QString get_name();
	double get_L1();
	double get_L2();
	double get_L3();
	double get_L4();

private:
	Ui::Dialog_add *ui;
};
