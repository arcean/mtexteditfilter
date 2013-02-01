#-------------------------------------------------
#
# Project created by QtCreator 2011-09-08T15:25:41
#
#-------------------------------------------------

QT       += core gui

TARGET = texteditfilteringdemo
TEMPLATE = app

VERSION = 1.2.0
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

SOURCES += main.cpp \
    mainpage.cpp \
    mtexteditfilter.cpp

HEADERS  += \
    mainpage.h \
    mtexteditfilter.h \
    ViewHeader.h

FORMS    +=

CONFIG += meegotouch
CONFIG += meegotouch-boostable

symbian {
    TARGET.UID3 = 0xe8f85d27
    # TARGET.CAPABILITY +=
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}

contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/texteditfilteringdemo/bin
    INSTALLS += target


    style.path = /opt/texteditfilteringdemo/style
    style.files = data/texteditfilteringdemo.css

    INSTALLS += style

}

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog \
    data/texteditor.png \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/manifest.aegis \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog

RESOURCES +=
