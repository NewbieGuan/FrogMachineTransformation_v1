#include "Dialog_change_password.h"
#include "ui_Dialog_change_password.h"

Dialog_change_password::Dialog_change_password(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::Dialog_change_password();
	ui->setupUi(this);
}

Dialog_change_password::~Dialog_change_password()
{
	delete ui;
}

QString Dialog_change_password::get_old_password()
{
	return ui->lineEdit_old_pw->text();
}

QString Dialog_change_password::get_new_password1()
{
	return ui->lineEdit_new_pw1->text();
}

QString Dialog_change_password::get_new_password2()
{
	return ui->lineEdit_new_pw2->text();
}

void Dialog_change_password::on_btn_ok_clicked()
{
	//读取文件中的密码
	QFile aFile(keypath);
	aFile.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream aStream(&aFile);
	QString true_password = aStream.readLine();
	aFile.close();

	//查看密码是否正确
	QString old_pw = get_old_password();
	QString new_pw1 = get_new_password1();
	QString new_pw2 = get_new_password2();
	if (old_pw.trimmed() != true_password)//密码错误
	{
		QString dlgTitle = "密码错误";
		QString strInfo = "原密码错误，请重试！";
		QMessageBox::critical(this, dlgTitle, strInfo);
	}
	else if (new_pw1.trimmed().isEmpty())
	{
		QString dlgTitle = "警告";
		QString strInfo = "新密码不能为空！";
		QMessageBox::warning(this, dlgTitle, strInfo);
	}
	else if (new_pw1.trimmed() != new_pw2.trimmed())//两个新密码不一致
	{
		QString dlgTitle = "警告";
		QString strInfo = "新密码两次输入不一致！";
		QMessageBox::warning(this, dlgTitle, strInfo);
	}
	else//正确情况
	{
		QFile aFile(keypath);
		aFile.open(QIODevice::WriteOnly | QIODevice::Text);
		QTextStream aStream(&aFile);
		aStream << new_pw1.trimmed();
		aFile.close();

		QString dlgTitle = "修改密码";
		QString strInfo = "密码修改成功！";
		QMessageBox::information(this, dlgTitle, strInfo);

		accept();
	}
}