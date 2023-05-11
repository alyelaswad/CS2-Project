QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LinkedList.cpp \
    airplanewaitingqueue.cpp \
    deque.cpp \
    main.cpp \
    plane.cpp \
    welcome.cpp

HEADERS += \
    ../../CSCE 1101/Project S23/AirplaneWaitingQueue.h \
    ../../CSCE 1101/Project S23/AirplaneWaitingQueue.h \
    ../../CSCE 1101/Project S23/Airport.h \
    ../../CSCE 1101/Project S23/Airport.h \
    ../Airport.h \
    LinkedList.h \
    airplanewaitingqueue.h \
    deque.h \
    node.h \
    plane.h \
    welcome.h

FORMS += \
    plane.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
