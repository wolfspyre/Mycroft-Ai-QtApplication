/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp test.xml -i test.h -a ExampleAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef EXAMPLEADAPTOR_H
#define EXAMPLEADAPTOR_H

#include <QtCore/QObject>
#include <QDebug>
#include <QtDBus/QtDBus>
#include "test.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE
extern QString queryresult;
/*
 * Adaptor class for interface com.mycroftkde.KDEPlasmoid
 */
class KDEPlasmoidAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_PROPERTY(QString setTextFunctionSlot READ setTextFunctionSlot NOTIFY getquerychanged)
    Q_CLASSINFO("D-Bus Interface", "com.mycroftkde.KDEPlasmoid")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.mycroftkde.KDEPlasmoid\">\n"
"    <signal name=\"signalQueryReady\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"user\"/>\n"
"    </signal>\n"
"    <method name=\"sendQuery\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"text\"/>\n"
"    </method>\n"
"    <method name=\"setText\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"getvoiceQuery\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    KDEPlasmoidAdaptor(QObject *parent);
    virtual ~KDEPlasmoidAdaptor();

    inline KDEPlasmoidAdaptor *parent() const
        { return static_cast<KDEPlasmoidAdaptor *>(QObject::parent()); }

public: // PROPERTIES
    QString setTextFunctionSlot() const {
        qDebug() << "setTextFunctionSlot:" << getquery;
        return getquery;
    }

public Q_SLOTS: // METHODS
    void setText(const QString &in0);
    void getvoiceQuery(const QString &in0);
    QString sendQuery();
    void abc(QString a);
    void abc2(QString b);
    void emptyslot(const QString &in0);
    void sendQueryFunctionSlot(const QString &in0);
Q_SIGNALS: // SIGNALS
    void signalQueryReady(const QString &user);
signals:
    void getquerychanged();
private:
    QString myquery;
    QString getquery;
};

#endif