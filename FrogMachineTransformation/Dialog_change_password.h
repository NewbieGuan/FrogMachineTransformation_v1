#pragma once

#include <QDialog>
#include <qfile.h>
#include <qtextstream.h>
#include <qmessagebox.h>
#include <FrogMachineTransformation.h>

#pragma execution_character_set("utf-8")

namespace Ui { class Dialog_change_password; };

class Dialog_change_password : public QDialog
{
	Q_OBJECT

public:
	Dialog_change_password(QWidget *parent = Q_NULLPTR);
	~Dialog_change_password();
	QString get_old_password();
	QString get_new_password1();
	QString get_new_password2();

public slots:
	void on_btn_ok_clicked();

private:
	Ui::Dialog_change_password *ui;
};
