QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ai.cpp \
    ai_android.cpp \
    ai_linux.cpp \
    ai_mac.cpp \
    ai_windows.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ai.h \
    ai_android.h \
    ai_linux.h \
    ai_mac.h \
    ai_windows.h \
    mainwindow.h
Windows{

SOURCES +=ai_windows.cpp
HEADERS +=ai_windows.h
}
Mac{

SOURCES +=ai_mac.cpp
HEADERS +=ai_mac.h
}
Linux{

SOURCES +=ai_linux.cpp
HEADERS +=ai_linux.h
}
Android{

SOURCES +=ai_android.cpp
HEADERS +=ai_android.h
}


FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS = ICON.ico
