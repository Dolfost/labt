#ifndef _MAIN_WINDOW_HPP_
#define _MAIN_WINDOW_HPP_

#include <QMainWindow>
#include <QLayout>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QSplitter>
#include <QCheckBox>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QLineEdit>

#include <qcustomplot.h>
#include <exprtk.hpp>

class MainWindow: public QMainWindow {
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

private slots:
	void solve();

private:
	QVBoxLayout* m_lay = new QVBoxLayout;
	QWidget* m_central_widget = new QWidget;

	exprtk::symbol_table<double> m_f_symbols;
	exprtk::expression<double> m_f_expression;
	double x, y;

	QPushButton* m_solve_button = new QPushButton("Розʼвязати");
	QTextEdit* m_text = new QTextEdit;
};

#endif // !_MAIN_WINDOW_HPP_
