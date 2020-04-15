#pragma once

#include <QDialog>
namespace Ui { class Dialog_password; };

class Dialog_password : public QDialog
{
	Q_OBJECT

public:
	Dialog_password(QWidget *parent = Q_NULLPTR);
	~Dialog_password();
	QString get_password();

private:
	Ui::Dialog_password *ui;
};
