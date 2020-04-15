#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FrogMachineTransformation.h"
#include <math.h>
#include <armadillo>
#include <qfile.h>
#include <qmessagebox.h>
#include <qtextstream.h>
#include <qvariant.h>
#include <qcombobox.h>
#include <qdir.h>
#include <qfiledialog.h>
#include <qsettings.h>
#include <qpixmap.h>
#include "Dialog_add.h"
#include "Dialog_amend.h"
#include "Dialog_password.h"
#include "Dialog_change_password.h"

#pragma execution_character_set("utf-8")

extern QString keypath;

struct Machine_data
{
	double l1;
	double l2;
	double l3;
	double l4;
};
Q_DECLARE_METATYPE(Machine_data)

class FrogMachineTransformation : public QMainWindow
{
	Q_OBJECT

public:
	FrogMachineTransformation(QWidget *parent = Q_NULLPTR);
	~FrogMachineTransformation();

public slots:
	void on_pB_cout_clicked();
	void on_cB_head_clicked(bool checked);
	void on_cbB_Machine_activated(const QString &arg1);
	void on_pB_add_clicked();
	void on_pB_amend_clicked();
	void on_pB_remove_clicked();
	void on_pB_password_clicked();
	void on_pB_openfile_clicked();
	void on_pB_convert_clicked();

private:
	Ui::FrogMachineTransformationClass *ui;
	QMap<QString, Machine_data> machines;
	QString dirpath;
	QLabel *information;
	QLabel *parameter_1, *parameter_2, *parameter_3, *parameter_4, *parameter_5;

	/*
	L1�����������������ת���ĵ���ת��C��X������롣
	L2�������������ת��A����ת��C��Y������롣�����Ի�����A����C�����ֵΪ�����Ҳ�ֵΪ�������������ֵΪ0��
	L3������������������ߵ�A���Y������롣�����Ի���������������A�����ֵΪ�����Ҳ�ֵΪ�������������ֵΪ0��
	L4�����������������浽��ת��A��Z������롣
	Xw����������ϵԭ������ڻ�������ϵ��X����ƫ�á�
	Yw����������ϵԭ������ڻ�������ϵ��Y����ƫ�á�
	Zw����������ϵԭ������ڻ�������ϵ��Z����ƫ�á�
	Xm���������ڹ�������ϵ���ʱ��X����ƫ�á�
	Ym���������ڹ�������ϵ���ʱ��X����ƫ�á�
	Zm���������ڹ�������ϵ���ʱ��X����ƫ�á�
	La1��ֱ��ϳͷ��Z���򳤶ȡ�
	La2��ֱ��ϳͷ��Y���򳤶ȡ�
	Lc�����߳��ȡ�
	R��������ϵ��ʹ�õĵ��߰뾶��
	A��A����ת�Ƕȡ�
	C��C����ת�Ƕȡ�
	x1����������ϵ�µ�X������ֵ��������
	y1����������ϵ�µ�Y������ֵ��������
	z1����������ϵ�µ�Z������ֵ��������
	x2��������ϵ�µ�X������ֵ��������
	y2��������ϵ�µ�Y������ֵ��������
	z2��������ϵ�µ�Z������ֵ��������
	*/

	double L1, L2, L3, L4, Xw, Yw, Zw, Xm, Ym, Zm, La1, La2, Lc, R, A, C, x1, y1, z1;
	bool angle_head, direction, command_mode;
	QVector<double> calculate(double L1, double L2, double L3, double L4, double Xw, double Yw, double Zw,
		double Xm, double Ym, double Zm, double La1, double La2, double Lc, double R, double A, double C,
		double x1, double y1, double z1, bool angle_head, bool direction, bool command_mode);

	int str_start_error;//�ַ�����ʼλ����
	int direction_error;//���������������
	int angle_head_error;//����ֱ��ϳͷ�������
	int parameter_lack_error;//ȱ�ٲ�������
	int AC_error;//A/C���������
	int G_workpiece;//��������ϵ

	//���ֲ���״̬λ
	int state_A, state_C, state_Lc, state_R, state_direction, state_angle_head, state_La1, state_La2,
		state_x1, state_y1, state_z1, state_workpiece;

	//�������ݳ�ʼ��
	void iniShared();
	//��ʼ������
	void iniUI();
	//��ʼ��comboBox����ʾ��һ��
	void get_machine_data();
	//�ź���۵�����
	void iniSignalSlots();
	//��ʼ��ToolButton˵��
	void iniParameter();
	//��ȡ��������·��
	void get_data_path();
	//�������ļ���ʼ��comboBox
	void inicomboBox();
	//���»��������ļ�����
	void update_data();
	//����������ж������Ƿ���ȷ 0������ 1����ȷ 2��ȡ��
	int is_pw_correct();
	//�����־������״̬λ��ʼ��
	void ini_state();
	//�����ַ���
	QString get_pure_str(QString str);
	//����ַ�����ʽ
	void check_str(QString str);
	//�ַ����ֿ�
	QStringList get_QStringList(QString str);
	//��ȡ����Ϣ
	void get_block_info(QString &str);
	//�����ַ���������ַ���
	QString str_transform(QString str);
	//����XYZ�ַ���
	QString get_G90_G91_str(QString str);
	//����CS_�ַ���
	QString get_CS_str(QString str);
	//��д������
	bool eventFilter(QObject *watched, QEvent *event);
};

