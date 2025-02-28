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
	m_central_widget->setLayout(m_lay);
	setCentralWidget(m_central_widget);

	auto inputLay = new QHBoxLayout;
	m_lay->addLayout(inputLay);
	inputLay->setContentsMargins(10,5,10,5);

	connect(
		m_solve_button, &QPushButton::pressed,
		this, &MainWindow::solve
	);
}

void MainWindow::solve() {

}
