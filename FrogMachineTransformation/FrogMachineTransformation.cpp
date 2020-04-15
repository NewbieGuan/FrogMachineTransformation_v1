#include "FrogMachineTransformation.h"
#include "ui_FrogMachineTransformation.h"
        
using namespace arma;
QString keypath;

constexpr double PI = 3.14159265359;

//���캯��
FrogMachineTransformation::FrogMachineTransformation(QWidget *parent)
	: QMainWindow(parent),ui(new Ui::FrogMachineTransformationClass)
{
	ui->setupUi(this);
	iniUI();
}


//��������
FrogMachineTransformation::~FrogMachineTransformation()
{
	delete ui;
}


//��ʼ������
void FrogMachineTransformation::iniUI()
{
	ui->dSB_La1->setEnabled(false);
	ui->dSB_La2->setEnabled(false);
	get_machine_data();
	iniSignalSlots();
	iniParameter();

	information = new QLabel;
	information->setText("���ȵ�λ:����(mm)   �Ƕȵ�λ:��(��)  ");
	ui->statusBar->addWidget(information);

	//��ʼ�������ļ���·��
	keypath = QCoreApplication::applicationDirPath();
	QString path_key = "/Setting/Key.ini";
	keypath = keypath + path_key;
}


//��ʼ��ToolButton˵��
void FrogMachineTransformation::iniParameter()
{
	parameter_1 = new QLabel(this);
	QPixmap image_1(qApp->applicationDirPath() + "/images/image_1.bmp");
	//QPixmap fit_image_1 = image_1.scaled(584, 446, Qt::KeepAspectRatioByExpanding);
	parameter_1->setPixmap(image_1);
	parameter_1->resize(584, 446);
	parameter_1->hide();
	ui->tB_1->installEventFilter(this);

	parameter_2 = new QLabel(this);
	QPixmap image_2(qApp->applicationDirPath() + "/images/image_2.bmp");
	//QPixmap fit_image_2 = image_2.scaled(548, 345, Qt::KeepAspectRatioByExpanding);
	parameter_2->setPixmap(image_2);
	parameter_2->resize(548, 345);
	parameter_2->hide();
	ui->tB_2->installEventFilter(this);

	parameter_3 = new QLabel(this);
	QPixmap image_3(qApp->applicationDirPath() + "/images/image_3.bmp");
	//QPixmap fit_image_3 = image_3.scaled(538, 506, Qt::KeepAspectRatioByExpanding);
	parameter_3->setPixmap(image_3);
	parameter_3->resize(538, 506);
	parameter_3->hide();
	ui->tB_3->installEventFilter(this);

	parameter_4 = new QLabel(this);
	QPixmap image_4(qApp->applicationDirPath() + "/images/image_4.bmp");
	//QPixmap fit_image_4 = image_4.scaled(399, 143, Qt::KeepAspectRatioByExpanding);
	parameter_4->setPixmap(image_4);
	parameter_4->resize(399, 143);
	parameter_4->hide();
	ui->tB_4->installEventFilter(this);

	parameter_5 = new QLabel(this);
	QPixmap image_5(qApp->applicationDirPath() + "/images/image_5.bmp");
	//QPixmap fit_image_5 = image_5.scaled(359, 77, Qt::KeepAspectRatioByExpanding);
	parameter_5->setPixmap(image_5);
	parameter_5->resize(373, 364);
	parameter_5->hide();
	ui->tB_5->installEventFilter(this);
}


//��д������
bool FrogMachineTransformation::eventFilter(QObject *object, QEvent *event)
{
	if (ui->tB_1 == object)
	{
		if (QEvent::Enter == event->type()) //������
		{
			if (parameter_1->isHidden()) //�Ѿ����ؾ���ʾ����
			{ 
				parameter_1->show();
				QPoint point1 = ui->tB_1->mapTo(ui->centralWidget, QPoint(0, 0));
				point1.rx() = point1.x() + ui->tB_1->width() + 15;
				point1.ry() = point1.y();
				parameter_1->move(point1);
				parameter_1->raise();//��ʾ���
				return true;
			}
		}
		else if (QEvent::Leave == event->type()) //����뿪
		{ 
			if (!parameter_1->isHidden()) 
			{
				parameter_1->hide();
				return true;
			}
		}
	}

	else if (ui->tB_2 == object)
	{
		if (QEvent::Enter == event->type()) //������
		{
			if (parameter_2->isHidden()) //�Ѿ����ؾ���ʾ����
			{
				parameter_2->show();
				QPoint point2 = ui->tB_2->mapTo(ui->centralWidget, QPoint(0, 0));
				point2.rx() = point2.x() + ui->tB_2->width() + 15;
				point2.ry() = point2.y() - 120;
				parameter_2->move(point2);
				parameter_2->raise();//��ʾ���
				return true;
			}
		}
		else if (QEvent::Leave == event->type()) //����뿪
		{
			if (!parameter_2->isHidden())
			{
				parameter_2->hide();
				return true;
			}
		}
	}

	else if (ui->tB_3 == object)
	{
		if (QEvent::Enter == event->type()) //������
		{
			if (parameter_3->isHidden()) //�Ѿ����ؾ���ʾ����
			{
				parameter_3->show();
				QPoint point3 = ui->tB_3->mapTo(ui->centralWidget, QPoint(0, 0));
				point3.rx() = point3.x() - parameter_3->width() - 15;
				point3.ry() = point3.y() - 50;
				parameter_3->move(point3);
				parameter_3->raise();//��ʾ���
				return true;
			}
		}
		else if (QEvent::Leave == event->type()) //����뿪
		{
			if (!parameter_3->isHidden())
			{
				parameter_3->hide();
				return true;
			}
		}
	}

	else if (ui->tB_4 == object)
	{
		if (QEvent::Enter == event->type()) //������
		{
			if (parameter_4->isHidden()) //�Ѿ����ؾ���ʾ����
			{
				parameter_4->show();
				QPoint point4 = ui->tB_4->mapTo(ui->centralWidget, QPoint(0, 0));
				point4.rx() = point4.x() - parameter_4->width() - 15;
				point4.ry() = point4.y();
				parameter_4->move(point4);
				parameter_4->raise();//��ʾ���
				return true;
			}
		}
		else if (QEvent::Leave == event->type()) //����뿪
		{
			if (!parameter_4->isHidden())
			{
				parameter_4->hide();
				return true;
			}
		}
	}

	else if (ui->tB_5 == object)
	{
		if (QEvent::Enter == event->type()) //������
		{
			if (parameter_5->isHidden()) //�Ѿ����ؾ���ʾ����
			{
				parameter_5->show();
				QPoint point5 = ui->tB_5->mapTo(ui->centralWidget, QPoint(0, 0));
				point5.rx() = point5.x() - parameter_5->width() - 15;
				point5.ry() = point5.y();
				parameter_5->move(point5);
				parameter_5->raise();//��ʾ���
				return true;
			}
		}
		else if (QEvent::Leave == event->type()) //����뿪
		{
			if (!parameter_5->isHidden())
			{
				parameter_5->hide();
				return true;
			}
		}
	}

	return QWidget::eventFilter(object, event);
}


//�ź���۵�����
void FrogMachineTransformation::iniSignalSlots()
{
	
}


//��ȡ��������·��
inline void FrogMachineTransformation::get_data_path()
{
	dirpath = QCoreApplication::applicationDirPath();
	QString filename = "machine_information.txt";
	QDir dir(dirpath);
	if (!dir.exists("data"))
	{
		dir.mkdir("data");
	}
	dir = dirpath.append("/data");
	dirpath = dir.filePath(filename);
}


//�������ļ���ʼ��comboBox
void FrogMachineTransformation::inicomboBox()
{
	QFile aFile(dirpath);
	aFile.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream aStream(&aFile);
	machines.clear();
	ui->cbB_Machine->clear();
	while (!aStream.atEnd())
	{
		QString str = aStream.readLine();
		QString str0 = str.section("#$#", 0, 0);
		QString str1 = str.section("#$#", 1, 1);
		QString str2 = str.section("#$#", 2, 2);
		QString str3 = str.section("#$#", 3, 3);
		QString str4 = str.section("#$#", 4, 4);
		double k1 = str1.toDouble();
		double k2 = str2.toDouble();
		double k3 = str3.toDouble();
		double k4 = str4.toDouble();
		Machine_data M1 = { k1,k2,k3,k4 };
		machines.insert(str0, M1);
	}
	aFile.close();
	foreach(const QString &str, machines.keys())
		ui->cbB_Machine->addItem(str, QVariant::fromValue<Machine_data>(machines.value(str)));
}


//��ʼ��comboBox����ʾ��һ��
void FrogMachineTransformation::get_machine_data()
{
	//��ȡ���������ļ�·��
	get_data_path();

	//��ʼ��comboBox
	inicomboBox();

	//��ʾcomboBox��һ������
	if (!machines.isEmpty())
	{
		Machine_data first_machine = machines.value(machines.firstKey());
		QString K1 = QString::number(first_machine.l1, 'f', 3);
		QString K2 = QString::number(first_machine.l2, 'f', 3);
		QString K3 = QString::number(first_machine.l3, 'f', 3);
		QString K4 = QString::number(first_machine.l4, 'f', 3);
		ui->lineEdit_L1->setText(K1);
		ui->lineEdit_L2->setText(K2);
		ui->lineEdit_L3->setText(K3);
		ui->lineEdit_L4->setText(K4);
	}
	else
	{
		ui->lineEdit_L1->setText(" ");
		ui->lineEdit_L2->setText(" ");
		ui->lineEdit_L3->setText(" ");
		ui->lineEdit_L4->setText(" ");
	}
}


//���»��������ļ�����
void FrogMachineTransformation::update_data()
{
	QFile aFile(dirpath);
	aFile.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream aStream(&aFile);
	ui->cbB_Machine->clear();
	QString str_all;
	foreach(const QString &str_name, machines.keys())
	{
		QString str_l1 = QString::number(machines.value(str_name).l1, 'f', 3);
		QString str_l2 = QString::number(machines.value(str_name).l2, 'f', 3);
		QString str_l3 = QString::number(machines.value(str_name).l3, 'f', 3);
		QString str_l4 = QString::number(machines.value(str_name).l4, 'f', 3);
		str_all = str_name + "#$#" + str_l1 + "#$#" + str_l2 + "#$#" + str_l3 + "#$#" + str_l4 + "\n";
		aStream << str_all;
	}
	aFile.close();
}


//����������ж������Ƿ���ȷ 0������ 1����ȷ 2��ȡ��
int FrogMachineTransformation::is_pw_correct()
{
	//������������Ի���
	Dialog_password *enter_pw = new Dialog_password(this);
	Qt::WindowFlags flags = enter_pw->windowFlags();
	enter_pw->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
	int ret = enter_pw->exec();

	//���ȡ������2
	if (ret == QDialog::Rejected)
		return 2;

	//�ж������Ƿ�������ȷ
	QFile aFile(keypath);
	aFile.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream aStream(&aFile);
	QString true_password = aStream.readLine();
	aFile.close();

	QString password = enter_pw->get_password();
	if (true_password == password.trimmed())
		return 1;
	else
		return 0;
}


//�����
void FrogMachineTransformation::on_pB_add_clicked()
{
	//����������ж������Ƿ���ȷ
	int parameter_pw = is_pw_correct();
	//0������
	if (parameter_pw == 0)
	{
		QString dlgTitle = "�������";
		QString strInfo = "������������ԣ�";
		QMessageBox::critical(this, dlgTitle, strInfo);
	}
	//1����ȷ
	else if (parameter_pw == 1)
	{
		//��õ�ǰ��
		QString current_Item = ui->cbB_Machine->currentText();

		//�����Ի���
		Dialog_add *addItem = new Dialog_add(this);
		Qt::WindowFlags flags = addItem->windowFlags();
		addItem->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
		int ret = addItem->exec();

		//����յ�ȷ���ź�
		if (ret == QDialog::Accepted)
		{
			//���ж���û������
			QString name = addItem->get_name();
			if (machines.contains(name))
			{
				QString dlgTitle = "����";
				QString strInfo = "����ͬ����";
				QMessageBox::warning(this, dlgTitle, strInfo);
			}
			else if (name.contains("#$#"))
			{
				QString dlgTitle = "����";
				QString strInfo = "�����в��ܰ���\"#$#\"�ַ�";
				QMessageBox::warning(this, dlgTitle, strInfo);
			}
			//��������ӵ������ĵ�
			else
			{
				//�������
				QString new_name = addItem->get_name();
				double k1 = addItem->get_L1();
				double k2 = addItem->get_L2();
				double k3 = addItem->get_L3();
				double k4 = addItem->get_L4();
				Machine_data M1 = { k1,k2,k3,k4 };
				machines.insert(new_name, M1);

				//���»��������ļ�����
				update_data();

				//��һ����ӷ�ʽ
				/*QString K1 = addItem->get_L1();
				QString K2 = addItem->get_L2();
				QString K3 = addItem->get_L3();
				QString K4 = addItem->get_L4();
				QString gather = name + "#$#" + K1 + "#$#" + K2 + "#$#" + K3 + "#$#" + K4 + "\n";
				get_data_path();
				QFile aFile(dirpath);
				aFile.open(QIODevice::Append | QIODevice::Text);
				QTextStream aStream(&aFile);
				aStream << gather;
				aFile.close();*/

				//�������ļ���ʼ��comboBox
				inicomboBox();

				//comboBox��ʾ���������
				Machine_data new_machine = machines.value(new_name);
				QString l1 = QString::number(new_machine.l1, 'f', 3);
				QString l2 = QString::number(new_machine.l2, 'f', 3);
				QString l3 = QString::number(new_machine.l3, 'f', 3);
				QString l4 = QString::number(new_machine.l4, 'f', 3);
				ui->cbB_Machine->setCurrentText(new_name);
				ui->lineEdit_L1->setText(l1);
				ui->lineEdit_L2->setText(l2);
				ui->lineEdit_L3->setText(l3);
				ui->lineEdit_L4->setText(l4);
			}
		}
		delete addItem;
	}
}


//�޸���
void FrogMachineTransformation::on_pB_amend_clicked()
{
	//����������ж������Ƿ���ȷ
	int parameter_pw = is_pw_correct();
	//0������
	if (parameter_pw == 0)
	{
		QString dlgTitle = "�������";
		QString strInfo = "������������ԣ�";
		QMessageBox::critical(this, dlgTitle, strInfo);
	}
	//1����ȷ
	else if (parameter_pw == 1)
	{
		//��õ�ǰ��
		QString current_Item = ui->cbB_Machine->currentText();
		Machine_data current_machine = machines.value(current_Item);
		double l1 = current_machine.l1;
		double l2 = current_machine.l2;
		double l3 = current_machine.l3;
		double l4 = current_machine.l4;

		//�����Ի���
		Dialog_amend *addItem = new Dialog_amend(this);
		Qt::WindowFlags flags = addItem->windowFlags();
		addItem->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
		addItem->setItem(current_Item, l1, l2, l3, l4);//��ʾ��ǰ��
		int ret = addItem->exec();

		//����յ�ȷ���ź�
		if (ret == QDialog::Accepted)
		{
			machines.remove(current_Item);//��ȥ����
			QString new_name = addItem->get_name();
			double k1 = addItem->get_L1();
			double k2 = addItem->get_L2();
			double k3 = addItem->get_L3();
			double k4 = addItem->get_L4();
			Machine_data M1 = { k1,k2,k3,k4 };
			machines.insert(new_name, M1);//�������

			//��ȡ��������·��
			get_data_path();

			//���»��������ļ�����
			update_data();

			//�������ļ���ʼ��comboBox
			inicomboBox();

			//������ʾcomboBox��ǰ������
			QString K1 = QString::number(machines.value(new_name).l1, 'f', 3);
			QString K2 = QString::number(machines.value(new_name).l2, 'f', 3);
			QString K3 = QString::number(machines.value(new_name).l3, 'f', 3);
			QString K4 = QString::number(machines.value(new_name).l4, 'f', 3);
			ui->cbB_Machine->setCurrentText(new_name);
			ui->lineEdit_L1->setText(K1);
			ui->lineEdit_L2->setText(K2);
			ui->lineEdit_L3->setText(K3);
			ui->lineEdit_L4->setText(K4);
		}
		delete addItem;
	}
}


//�Ƴ���
void FrogMachineTransformation::on_pB_remove_clicked()
{
	//����������ж������Ƿ���ȷ
	int parameter_pw = is_pw_correct();
	//0������
	if (parameter_pw == 0)
	{
		QString dlgTitle = "�������";
		QString strInfo = "������������ԣ�";
		QMessageBox::critical(this, dlgTitle, strInfo);
	}
	//1����ȷ
	else if (parameter_pw == 1)
	{
		QString dlgTitle = "ɾ����ʾ";
		QString strInfo = "ȷ��ɾ��������";
		QMessageBox::StandardButton defaultBtn = QMessageBox::No;
		QMessageBox::StandardButton result;
		result = QMessageBox::question(this, dlgTitle, strInfo,
			QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel, defaultBtn);
		if (result == QMessageBox::Yes)
		{
			//��õ�ǰ��
			QString current_Item = ui->cbB_Machine->currentText();

			//��ȥ��ǰ��
			machines.remove(current_Item);

			//�жϴ�ʱmachines�Ƿ�Ϊ��
			if (machines.isEmpty() == false)
			{
				//��ȡ��������·��
				get_data_path();

				//���»��������ļ�����
				update_data();

				//�������ļ���ʼ��comboBox
				inicomboBox();

				//��ʾcomboBox��һ������
				Machine_data first_machine = machines.value(machines.firstKey());
				QString K1 = QString::number(first_machine.l1, 'f', 3);
				QString K2 = QString::number(first_machine.l2, 'f', 3);
				QString K3 = QString::number(first_machine.l3, 'f', 3);
				QString K4 = QString::number(first_machine.l4, 'f', 3);
				ui->cbB_Machine->setEditText(machines.firstKey());
				ui->lineEdit_L1->setText(K1);
				ui->lineEdit_L2->setText(K2);
				ui->lineEdit_L3->setText(K3);
				ui->lineEdit_L4->setText(K4);
			}
			else
			{
				ui->cbB_Machine->clear();
				ui->lineEdit_L1->clear();
				ui->lineEdit_L2->clear();
				ui->lineEdit_L3->clear();
				ui->lineEdit_L4->clear();
			}
		}
	}
}


//�޸�����
void FrogMachineTransformation::on_pB_password_clicked()
{
	Dialog_change_password *change_pw = new Dialog_change_password(this);
	Qt::WindowFlags flags = change_pw->windowFlags();
	change_pw->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
	int ret = change_pw->exec();

	if (ret == QDialog::Accepted)
		delete change_pw;
}


//�����б��ı�ʱ
void FrogMachineTransformation::on_cbB_Machine_activated(const QString &arg1)
{
	Machine_data current_machine = machines.value(arg1);
	QString K1 = QString::number(current_machine.l1, 'f', 3);
	QString K2 = QString::number(current_machine.l2, 'f', 3);
	QString K3 = QString::number(current_machine.l3, 'f', 3);
	QString K4 = QString::number(current_machine.l4, 'f', 3);
	ui->lineEdit_L1->setText(K1);
	ui->lineEdit_L2->setText(K2);
	ui->lineEdit_L3->setText(K3);
	ui->lineEdit_L4->setText(K4);
}


//ֱ��ϳͷ��ѡ�򱻰���
void FrogMachineTransformation::on_cB_head_clicked(bool checked)
{
	ui->dSB_La1->setEnabled(checked);
	ui->dSB_La2->setEnabled(checked);
}


//�������ݳ�ʼ��
void FrogMachineTransformation::iniShared()
{
	QString str_L1 = ui->lineEdit_L1->text();
	QString str_L2 = ui->lineEdit_L2->text();
	QString str_L3 = ui->lineEdit_L3->text();
	QString str_L4 = ui->lineEdit_L4->text();
	L1 = str_L1.toDouble();
	L2 = str_L2.toDouble();
	L3 = str_L3.toDouble();
	L4 = str_L4.toDouble();
	Xw = ui->dSB_Xw->value();
	Yw = ui->dSB_Yw->value();
	Zw = ui->dSB_Zw->value();
	Xm = ui->dSB_Xm->value();
	Ym = ui->dSB_Ym->value();
	Zm = ui->dSB_Zm->value();
}


//����������ϵ������
QVector<double> FrogMachineTransformation::calculate(double L1, double L2, double L3, double L4, double Xw, double Yw, double Zw,
	double Xm, double Ym, double Zm, double La1, double La2, double Lc, double R, double A, double C,
	double x1, double y1, double z1, bool angle_head, bool direction, bool command_mode)
{
	A = A * PI / 180;
	C = C * PI / 180;
	//�������ݴ�������Ҫ�ľ���
	Mat<double> T_AB(4, 4);
	T_AB << 1 << 0 << 0 << Xw - Xm - L1 << endr
		<< 0 << 1 << 0 << Yw + L2 + L3 << endr
		<< 0 << 0 << 1 << Zw - L4 << endr
		<< 0 << 0 << 0 << 1 << endr;

	Mat<double> T_BB1(4, 4);
	T_BB1 << cos(C) << sin(C) << 0 << 0 << endr
		<< -sin(C) << cos(C) << 0 << 0 << endr
		<< 0 << 0 << 1 << 0 << endr
		<< 0 << 0 << 0 << 1 << endr;

	Mat<double> T_B1C(4, 4);
	if (angle_head)
	{
		T_B1C << 1 << 0 << 0 << L1 << endr
			<< 0 << 1 << 0 << -(Ym + L2 + L3/cos(A)) - (L4 + La1 - Zm - L3*tan(A))*sin(A) - (La2 + Lc)*cos(A) << endr
			<< 0 << 0 << 1 << (L4 + La1 - Zm - L3 * tan(A))*cos(A) - (La2 + Lc)*sin(A) << endr
			<< 0 << 0 << 0 << 1 << endr;
	}
	else
	{
		T_B1C << 1 << 0 << 0 << L1 << endr
			<< 0 << 1 << 0 << -(Ym + L2 + L3 / cos(A)) - (L4 + Lc - Zm - L3 * tan(A))*sin(A) << endr
			<< 0 << 0 << 1 << (L4 + Lc - Zm - L3 * tan(A))*cos(A) << endr
			<< 0 << 0 << 0 << 1 << endr;
	}

	Mat<double> T_CD(4, 4);
	if (angle_head)
	{
		if (direction)
		{
			T_CD << 1 << 0 << 0 << 0 << endr
				<< 0 << 1 << 0 << -R * sin(A) << endr
				<< 0 << 0 << 1 << R * cos(A) << endr
				<< 0 << 0 << 0 << 1 << endr;
		}
		else
		{
			T_CD << 1 << 0 << 0 << 0 << endr
				<< 0 << 1 << 0 << R * sin(A) << endr
				<< 0 << 0 << 1 << -R * cos(A) << endr
				<< 0 << 0 << 0 << 1 << endr;
		}
	}
	else
	{
		if (direction)
		{
			T_CD << 1 << 0 << 0 << 0 << endr
				<< 0 << 1 << 0 << R * cos(A) << endr
				<< 0 << 0 << 1 << R * sin(A) << endr
				<< 0 << 0 << 0 << 1 << endr;
		}
		else
		{
			T_CD << 1 << 0 << 0 << 0 << endr
				<< 0 << 1 << 0 << -R * cos(A) << endr
				<< 0 << 0 << 1 << -R * sin(A) << endr
				<< 0 << 0 << 0 << 1 << endr;
		}
	}

	Mat<double> T_ED(4, 4);
	T_ED << cos(C) << 0 << 0 << 0 << endr
		<< -sin(C) << 1 << -sin(A) << 0 << endr
		<< 0 << 0 << cos(A) << 0 << endr
		<< 0 << 0 << 0 << 1 << endr;

	Mat<double> T_DE(4, 4);
	T_DE = inv(T_ED);

	if (command_mode == false)//G90
	{
		//��������ϵ������
		Mat<double> P1(4, 1);
		P1 << x1 << endr
			<< y1 << endr
			<< z1 << endr
			<< 1 << endr;

		//������ϵ������
		mat P2;
		P2 = T_DE * T_CD * T_B1C * T_BB1 * T_AB * P1;
		double x2 = P2.at(0, 0);
		double y2 = P2.at(1, 0);
		double z2 = P2.at(2, 0);
		//double k2 = P2.at(3, 0);
		QVector<double> new_point;
		new_point << x2 << y2 << z2;
		return new_point;
	}
	else//G91
	{
		Mat<double> P_diff(4, 1);
		P_diff << x1 << endr
			<< y1 << endr
			<< z1 << endr
			<< 0 << endr;

		mat P0;
		P0 = T_DE * T_CD * T_B1C * T_BB1 * T_AB * P_diff;
		double x2 = P0.at(0, 0);
		double y2 = P0.at(1, 0);
		double z2 = P0.at(2, 0);
		//double k2 = P0.at(3, 0);
		QVector<double> diff_value;
		diff_value << x2 << y2 << z2;
		return diff_value;
	}
}


//���㰴ť������
void FrogMachineTransformation::on_pB_cout_clicked()
{
	//�ж�A/C����ת�Ƕ��Ƿ�Ϊ90���270��
	A = ui->dSB_A->value();
	C = ui->dSB_C->value();
	if (A == 90 || A == 270 || C == 90 || C == 270)
	{
		QString dlgTitle = "��������";
		QString strInfo = "A/C����ת�ǶȲ���Ϊ90���270�㣡";
		QMessageBox::critical(this, dlgTitle, strInfo);
	}
	else
	{
		//��ø�������
		iniShared();
		Lc = ui->dSB_Lc->value();
		R = ui->dSB_R->value();
		La1 = ui->dSB_La1->value();
		La2 = ui->dSB_La2->value();
		x1 = ui->dSB_x1->value();
		y1 = ui->dSB_y1->value();
		z1 = ui->dSB_z1->value();
		if (ui->cB_head->isChecked())
			angle_head = true;
		else
			angle_head = false;
		if (ui->rB_positive->isChecked())
			direction = true;
		else
			direction = false;
		if (ui->rB_G90->isChecked())
			command_mode = false;
		else
			command_mode = true;

		//�õ�������
		QVector<double> newPoint = calculate(L1, L2, L3, L4, Xw, Yw, Zw, Xm, Ym, Zm, La1, La2,
			Lc, R, A, C, x1, y1, z1, angle_head, direction, command_mode);

		//��ʾ������
		//QString str_x2 = QString::number(newPoint.at(0), 'f', 3);
		//QString str_y2 = QString::number(newPoint.at(1), 'f', 3);
		//QString str_z2 = QString::number(newPoint.at(2), 'f', 3);
		ui->dSB_x2->setValue(newPoint.at(0));
		ui->dSB_y2->setValue(newPoint.at(1));
		ui->dSB_z2->setValue(newPoint.at(2));
	}
}


//ѡ���ļ���ť������
void FrogMachineTransformation::on_pB_openfile_clicked()
{
	dirpath = QCoreApplication::applicationDirPath();
	QString path_setting = "/Setting/Setting_open.ini";
	path_setting = dirpath + path_setting;

	QSettings setting(path_setting, QSettings::IniFormat);//QSettings�ܼ�¼һЩ�����е���Ϣ���´��ٴ�ʱ���Զ�ȡ����
	QString lastPath = setting.value("LastFilePath_open").toString();//��ȡ�ϴεĴ�·��
	QString dlgTitle = "ѡ��һ���ļ�";
	QString filter = "Siemens�����ļ�(*.mpf *.spf);;�ı��ļ�(*.txt);;�����ļ�(*.*)";
	//��ȡ�ļ���·��
	QString filePath = QFileDialog::getOpenFileName(this, dlgTitle, lastPath, filter);//���ϴε�·������
	if (!filePath.isEmpty())
	{
		setting.setValue("LastFilePath_open", filePath);  //��¼·����QSetting�б���
		ui->lineEdit_filepath->setText(filePath);
	}
}


//�����ַ���
QString FrogMachineTransformation::get_pure_str(QString str)
{
	QString str_pure = str;
	//��ȡ
	if (str_pure.contains(";"))
	{
		str_pure = str_pure.section(";", 0, 0);
	}
	if (str_pure.contains("��"))
	{
		str_pure = str_pure.section("��", 0, 0);
	}
	if (str_pure.contains("#"))
	{
		str_pure = str_pure.section("#", 0, 0);
	}

	//ȥ�ո�
	str_pure = str_pure.remove(" ", Qt::CaseInsensitive);

	//���д
	str_pure = str_pure.toUpper();

	return str_pure;
}


//����ַ�����ʽ
void FrogMachineTransformation::check_str(QString str)
{
	//�ж����ַ��ǲ�����ĸ
	QString cstr = str.left(1);
	if (!(cstr >= 'A'&&cstr <= 'Z'))
	{
		str_start_error = 1;
	}

	//�ж�Ŀǰ����ģʽ
	if (str.contains("G91"))
	{
		command_mode = true;
	}
	if (str.contains("G90"))
	{
		command_mode = false;
	}
}


//�����־������״̬λ��ʼ��
inline void FrogMachineTransformation::ini_state()
{
	command_mode = false;
	str_start_error = 0;
	direction_error = 0;
	angle_head_error = 0;
	parameter_lack_error = 0;
	AC_error = 0;

	state_A = 0;
	state_C = 0;
	state_Lc = 0;
	state_R = 0;
	state_direction = 0;
	state_angle_head = 0;
	state_La1 = 0;
	state_La2 = 0;
	state_x1 = 0;
	state_y1 = 0;
	state_z1 = 0;
	state_workpiece = 0;
}


//�����ַ���������ַ���
QString FrogMachineTransformation::str_transform(QString str)
{
	QString str_out;
	if (str.contains("CS_"))
	{
		str_out = get_CS_str(str);
	}
	else if ((str.contains("X") || str.contains("Y") || str.contains("Z")) && (state_workpiece == 1))
	{
		str_out = get_G90_G91_str(str);
	}
	else
	{
		//�ֿ�õ�QStringList
		QStringList str_list = get_QStringList(str);
		//��ȡ����Ϣ
		for (int i = 0;i < str_list.size();i++)
		{
			QString str_block = str_list[i];
			get_block_info(str_block);

			if (i < str_list.size() - 1)
			{
				str_out.append(str_block);
				str_out.append(" ");
			}
			else
			{
				str_out.append(str_block);
			}
		}
	}
	return str_out;
}


//����XYZ�ַ���
QString FrogMachineTransformation::get_G90_G91_str(QString str)
{
	QString str_out;
	//�ֿ�õ�QStringList
	QStringList str_list = get_QStringList(str);
	//��ȡ����Ϣ
	for (int i = 0;i < str_list.size();i++)
	{
		QString str_block = str_list[i];
		if (str_block.startsWith("X"))
		{
			QString str_x1 = str_block.mid(1);
			x1 = str_x1.toDouble();
			state_x1 = 1;
		}
		else if (str_block.startsWith("Y"))
		{
			QString str_y1 = str_block.mid(1);
			y1 = str_y1.toDouble();
			state_y1 = 1;
		}
		else if (str_block.startsWith("Z"))
		{
			QString str_z1 = str_block.mid(1);
			z1 = str_z1.toDouble();
			state_z1 = 1;
		}
		else
		{
			str_out.append(str_block);
			str_out.append(" ");
		}
	}

	//�жϲ����Ƿ��㹻
	if (state_A == 1 && state_C == 1 && state_Lc == 1 && state_R == 1 && state_direction == 1 &&
		state_angle_head == 1 && state_x1 == 1 && state_y1 == 1 && state_z1 == 1)
	{
		if (angle_head == true)
		{
			if (!(state_La1 == 1 && state_La2 == 1))
				parameter_lack_error = 1;
		}
	}
	else
		parameter_lack_error = 1;

	//��������㹻
	if (parameter_lack_error == 0)
	{
		QVector<double> newPoint = calculate(L1, L2, L3, L4, Xw, Yw, Zw, Xm, Ym, Zm, La1, La2,
			Lc, R, A, C, x1, y1, z1, angle_head, direction, command_mode);
		QString str_x2 = QString::number(newPoint.at(0), 'f', 3);
		QString str_y2 = QString::number(newPoint.at(1), 'f', 3);
		QString str_z2 = QString::number(newPoint.at(2), 'f', 3);
		QString str_XYZ = "X" + str_x2 + " " + "Y" + str_y2 + " " + "Z" + str_z2;
		str_out.append(str_XYZ);
	}
	return str_out;
}


//����CS_�ַ�������ȡ��Ϣ
QString FrogMachineTransformation::get_CS_str(QString str)
{
	QString str_out;
	if (str.startsWith("CS_BJ="))//���߰뾶
	{
		QString str_R = str.mid(6);
		R = str_R.toDouble();
		state_R = 1;
	}
	else if (str.startsWith("CS_CD="))//���߳���
	{
		QString str_Lc = str.mid(6);
		Lc = str_Lc.toDouble();
		state_Lc = 1;
	}
	else if (str.startsWith("CS_FX="))//��������
	{
		QString str_direction = str.mid(6);
		int value_direction = str_direction.toInt();
		switch (value_direction)
		{
		case 1:direction = true;break;
		case -1:direction = false;break;
		default:direction_error = 1;break;
		}
		state_direction = 1;
	}
	else if (str.startsWith("CS_JXT="))//��ϳͷ
	{
		QString str_angle_head_2 = str.mid(7);
		int value_angle_head_2 = str_angle_head_2.toInt();
		switch (value_angle_head_2)
		{
		case 1:angle_head = true;break;
		case 0:angle_head = false;break;
		default:angle_head_error = 1;break;
		}
		state_angle_head = 1;
	}
	else if (str.startsWith("CS_JXTZ="))//��ϳͷZ���򳤶�
	{
		QString str_La1 = str.mid(8);
		La1 = str_La1.toDouble();
		state_La1 = 1;
	}
	else if (str.startsWith("CS_JXTY="))//��ϳͷY���򳤶�
	{
		QString str_La2 = str.mid(8);
		La2 = str_La2.toDouble();
		state_La2 = 1;
	}

	str_out = ";" + str;
	return str_out;
}


//�ַ����ֿ�
QStringList FrogMachineTransformation::get_QStringList(QString str)
{
	//�����ַ����õ���ĸ���
	QVector<int> serial_number;
	for (int i = 0;i < str.length();i++)
	{
		if (str.at(i) >= 'A' && str.at(i) <= 'Z')
		{
			serial_number.append(i);
		}
	}
	//�������ַ�����ȡ��Ϣ
	QStringList str_list;
	int number = serial_number.length();
	for (int j = 0;j < number;j++)
	{
		QString str_part;
		int begin_posision = serial_number.at(j);
		if (j < number - 1)
		{
			int part_length = serial_number.at(j + 1) - serial_number.at(j);
			str_part = str.mid(begin_posision, part_length);
			str_list.append(str_part);
		}
		else
		{
			str_part = str.mid(begin_posision);
			str_list.append(str_part);
		}
	}
	return str_list;
}


//��ȡ����Ϣ
void FrogMachineTransformation::get_block_info(QString &str)
{
	if (str.startsWith("G"))
	{
		QString str_G = str.mid(1);
		int G = str_G.toInt();
		if (G > 53 && G < 60)
		{
			if (G == G_workpiece)
				state_workpiece = 1;
			else
				state_workpiece = 0;
		}
	}
	else if (str.startsWith("A"))
	{
		QString str_A = str.mid(1);
		A = str_A.toDouble();
		state_A = 1;
		if (A == 90 || A == 270)
			AC_error = 1;
	}
	else if (str.startsWith("C"))
	{
		QString str_C = str.mid(1);
		C = str_C.toDouble();
		state_C = 1;
		if (C == 90 || C == 270)
			AC_error = 1;
	}
	else if (str.startsWith("M30") || str.startsWith("M02"))
	{
		//�����־������״̬λ��ʼ��
		ini_state();
	}
}


//�ĵ�ת����ť������
void FrogMachineTransformation::on_pB_convert_clicked()
{
	G_workpiece = ui->sB_workpiece->value();
	//�����־������״̬λ��ʼ��
	ini_state();

	//�ж��ļ��Ƿ����
	QString fileName = ui->lineEdit_filepath->text();
	QFileInfo sourceFile(fileName);
	if (!sourceFile.exists())
	{
		QString dlgTitle = "����";
		QString strInfo = "�ļ�������";
		QMessageBox::warning(this, dlgTitle, strInfo);
	}
	else
	{
		//���������ļ��Ի���
		dirpath = QCoreApplication::applicationDirPath();
		QString path_setting = "/Setting/Setting_save.ini";
		path_setting = dirpath + path_setting;

		QSettings setting(path_setting, QSettings::IniFormat);//QSettings�ܼ�¼һЩ�����е���Ϣ���´��ٴ�ʱ���Զ�ȡ����
		QString lastPath = setting.value("LastFilePath_save").toString();//��ȡ�ϴεĴ�·��
		QString dlgTitle = "ѡ��һ���ļ�";
		QString filter = "Siemens�����ļ�(*.mpf *.spf);;�ı��ļ�(*.txt);;�����ļ�(*.*)";
		//��ȡ�ļ���·��
		QString SaveFileName = QFileDialog::getSaveFileName(this, dlgTitle, lastPath, filter);//���ϴε�·������
		if (!SaveFileName.isEmpty())
		{
			setting.setValue("LastFilePath_save", SaveFileName);  //��¼·����QSetting�б���

			//�������ݳ�ʼ��
			iniShared();

			//�����ļ�����
			QString str_final;
			bool fail = 0;
			QFile aFile(fileName);
			aFile.open(QIODevice::ReadOnly | QIODevice::Text);
			QTextStream aStream(&aFile);
			while (!aStream.atEnd())
			{
				//�����ַ���
				QString str_line = aStream.readLine();
				QString str_pure = get_pure_str(str_line);
				if (str_pure.isEmpty())
					continue;

				//����ַ�����ʽ
				check_str(str_pure);
				if (str_start_error == 1)
				{
					QString dlgTitle = "�ļ���ʽ����";
					QString strInfo = "�����б�������ĸ��ͷ��";
					QMessageBox::critical(this, dlgTitle, strInfo);
					fail = 1;
					break;
				}

				//�õ����ַ���
				QString str_out = str_transform(str_pure);
				if (parameter_lack_error == 1)
				{
					QString dlgTitle = "��������";
					QString strInfo = "ȱ�ٱ�Ҫ������\n(��ע���������ģʽ�µ�һ�������Ƿ�дȫ)";
					QMessageBox::critical(this, dlgTitle, strInfo);
					fail = 1;
					break;
				}
				else if (AC_error == 1)
				{
					QString dlgTitle = "��������";
					QString strInfo = "A/C����ת�ǶȲ���Ϊ90���270�㣡";
					QMessageBox::critical(this, dlgTitle, strInfo);
					fail = 1;
					break;
				}
				else if (direction_error == 1)
				{
					QString dlgTitle = "�ļ���ʽ����";
					QString strInfo = "���������������Ϊ1��-1��";
					QMessageBox::critical(this, dlgTitle, strInfo);
					fail = 1;
					break;
				}
				else if (angle_head_error == 1)
				{
					QString dlgTitle = "�ļ���ʽ����";
					QString strInfo = "��ϳͷ�������Ϊ0��1��";
					QMessageBox::critical(this, dlgTitle, strInfo);
					fail = 1;
					break;
				}

				str_final.append(str_out);
				str_final.append('\n');
			}

			//�������ļ�����
			if (fail == 0)
			{
				QFile FinalFile(SaveFileName);
				if (FinalFile.exists())
				{
					FinalFile.remove();
				}
				FinalFile.open(QIODevice::WriteOnly | QIODevice::Text);
				QByteArray str_final_bytes = str_final.toUtf8();
				FinalFile.write(str_final_bytes, str_final_bytes.length());
				FinalFile.close();

				QString dlgTitle = "��Ϣ��ʾ";
				QString strInfo = "�ĵ�ת���ɹ���";
				QMessageBox::information(this, dlgTitle, strInfo);
			}
		}
	}
}

