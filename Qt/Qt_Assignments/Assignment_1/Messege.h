#ifndef MESSEGE_H
#define MESSEGE_H

#include <QObject>
#include <Qstring>
#include <QDebug>

class Messege : public QObject
{
    Q_OBJECT
public:
    Messege(QObject *parent = nullptr);

public slots:
    void sendMessege(QString color);

};

#endif // MESSEGE_H
