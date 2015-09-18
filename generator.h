#ifndef GENERATOR_H
#define GENERATOR_H

#include <QMap>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QStringList>
#include <QDebug>

void generate(QString target,QMap<QString, QString> pairs);
QString generateIoBlocks(QMap<QString, QString> io, QString targetKey);

QString readAndReplace(QString filePath, QMap<QString,QString> pairs);


#endif // GENERATOR_H

