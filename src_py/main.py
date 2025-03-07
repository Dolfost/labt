#!/usr/bin/env python

from PySide6.QtWidgets import QApplication
import sys
import signal

from main_window import main_window


def main():
    app = QApplication(sys.argv)

    signal.signal(signal.SIGINT, signal.SIG_DFL)

    wnd = main_window()
    wnd.show()

    sys.exit(app.exec())

if __name__ == '__main__':
    main()
