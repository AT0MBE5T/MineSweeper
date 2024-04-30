QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cell.cpp \
    createfield.cpp \
    field.cpp \
    gamearea.cpp \
    language.cpp \
    main.cpp \
    mainarea.cpp \
    rules.cpp \
    stylehandler.cpp \
    times.cpp

HEADERS += \
    Coordinate.h \
    cell.h \
    createfield.h \
    field.h \
    gamearea.h \
    language.h \
    mainarea.h \
    rules.h \
    stylehandler.h \
    times.h

FORMS += \
    createfield.ui \
    gamearea.ui \
    mainarea.ui \
    rules.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
