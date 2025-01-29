#include "mainWindow.hpp"

#include <QPixmap>
#include <QLabel>

#include <string>

MainWindow::MainWindow(
	QWidget* parent, 
	Qt::WindowFlags flags
): QMainWindow(parent, flags) {
	setWindowTitle("Title");

	m_lay->setContentsMargins(0,0,0,0);
	m_centralWidget->setLayout(m_lay);
	setCentralWidget(m_centralWidget);

	auto inputLay = new QHBoxLayout;
	m_lay->addLayout(inputLay);
	inputLay->setContentsMargins(10,5,10,5);
}
