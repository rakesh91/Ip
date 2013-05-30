OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/manifest.aegis \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog

QT += network

SOURCES += \
    main.cpp \
    display.cpp

FORMS +=

HEADERS += \
    display.h









contains(MEEGO_EDITION,harmattan) {
    target.path = /opt/IP/bin
    INSTALLS += target
}
