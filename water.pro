#-------------------------------------------------
#
# Project created by QtCreator 2012-09-26T18:34:17
#
#-------------------------------------------------

QT       += core gui

TARGET = water
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    coding.h \
    qcustomplot.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/release/ -lqwt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/debug/ -lqwt
else:symbian: LIBS += -lqwt
else:unix: LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/ -lqwt

INCLUDEPATH += $$PWD/../../Downloads/qwt-6.0.1
DEPENDPATH += $$PWD/../../Downloads/qwt-6.0.1

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/release/ -lqwt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/debug/ -lqwt
else:symbian: LIBS += -lqwt
else:unix: LIBS += -L$$PWD/../../Downloads/qwt-6.0.1/lib/ -lqwt

INCLUDEPATH += $$PWD/../../Downloads/qwt-6.0.1/src
DEPENDPATH += $$PWD/../../Downloads/qwt-6.0.1/src
