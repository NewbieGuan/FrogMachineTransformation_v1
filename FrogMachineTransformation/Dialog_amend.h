#pragma once

#include <QDialog>
namespace Ui { class Dialog_amend; };

class Dialog_amend : public QDialog
{
	Q_OBJECT

public:
	Dialog_amend(QWidget *parent = Q_NULLPTR);
	~Dialog_amend();
	void setItem(QString name, double L1, double L2, double L3, double L4);
	QString get_name();
	double get_L1();
	double get_L2();
	double get_L3();
	double get_L4();

private:
	Ui::Dialog_amend *ui;
};