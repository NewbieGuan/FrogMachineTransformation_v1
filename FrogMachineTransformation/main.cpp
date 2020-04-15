#include "FrogMachineTransformation.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FrogMachineTransformation w;
	w.show();
	return a.exec();
}
