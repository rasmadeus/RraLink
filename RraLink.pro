#-------------------------------------------------
#
# Project created by QtCreator 2013-08-13T08:37:15
#
#-------------------------------------------------

QT       -= core gui

TEMPLATE = lib

DEFINES += RRALINK_LIBRARY

SOURCES += \
    Derivative.cpp \
    Gain.cpp \
    Integrator.cpp \
    Link.cpp \
    TLink.cpp \
    TLink_p.cpp \
    TKsiLink_p.cpp \
    TKsiLink.cpp \
    ForcingLink.cpp \
    AperiodicLink.cpp \
    DerivativeTwoOrder.cpp \
    TKsiOperationLink_p.cpp \
    OscillatoryLink.cpp \
    TwoLink.cpp \
    TransportDelay.cpp

HEADERS += \
    global.h \
    Derivative.h \
    Derivative_p.h \
    Gain.h \
    Gain_p.h \
    Integrator.h \
    Integrator_p.h \
    Link.h \
    Link_p.h \
    TLink.h \
    TLink_p.h \
    TKsiLink_p.h \
    TKsiLink.h \
    ForcingLink.h \
    AperiodicLink.h \
    DerivativeTwoOrder.h \
    ForcingLink_p.h \
    AperiodicLink_p.h \
    TKsiOperationLink_p.h \
    OscillatoryLink.h \
    OscillatoryLink_p.h \
    TwoLink_p.h \
    TwoLink.h \
    TransportDelay.h \
    TransportDelay_p.h

OTHER_FILES += \
    RraLink.prf \
    RraLinkConfig.pri

CONFIG += debug_and_release

CONFIG(debug, debug|release) {
    TARGET = rralinkd
} else {
    TARGET = rralink
}


include (./RraLinkConfig.pri)

target.path = $${LIB_INSTALL_PATH}

header.files = global.h\
    Link.h\
    Integrator.h\
    Derivative.h\
    ForcingLink.h\
    Gain.h\
    TKsiLink.h\
    TLink.h\
    AperiodicLink.h\
    DerivativeTwoOrder.h\
    OscillatoryLink.h\
    TwoLink.h\
    TransportDelay.h

header.path = $${HEADER_INSTALL_PATH}

features.files = RraLinkConfig.pri RraLink.prf
features.path = $${INSTALL_PATH}/features

INSTALLS += target header features


