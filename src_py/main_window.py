from PySide6.QtWidgets import (
    QMainWindow, 
    QWidget, QLayout, QHBoxLayout, QVBoxLayout,
    QLabel, QTextEdit, QSpinBox,
    QPushButton
)

class main_window(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)
        self.main_widget = QWidget()
        self.main_layout = QVBoxLayout() 
        self.main_widget.setLayout(self.main_layout)
        self.setCentralWidget(self.main_widget)

        self.solve_button = QPushButton()
        self.solve_button.clicked.connect(self.solve)

        self.main_layout.addWidget(QLabel("Hello, world!"))

    def solve(self):
        pass
