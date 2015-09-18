#include "generator.h"

void generate(QString target, QMap<QString,QString> pairs)
{
    QDir dirIn(":/templates/templates/"+target);
    QDir dirOut=QDir::currentPath();
    dirOut.mkdir(target);
    dirOut.cd(target);
    qDebug()<<dirIn;
    QStringList files=dirIn.entryList(QDir::Files);
    for(QString file:files)
    {
        QString inFilePath=dirIn.absoluteFilePath(file);
        QString fileOutPath=file.replace("class",pairs["${CLASS_NAME}"]);
        QFile fileOut(fileOutPath);
        if (!fileOut.open(QIODevice::WriteOnly | QIODevice::Text))
               return;

        QTextStream out(&fileOut);
        qDebug()<<inFilePath;
        qDebug()<<readAndReplace(inFilePath,pairs)<<"\n";
        out << readAndReplace(inFilePath,pairs);
    }
}

QString readAndReplace(QString filePath, QMap<QString,QString> pairs)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QString();

    QTextStream in(&file);
    QString content=in.readAll();
    for(QString key:pairs.keys())
        content=content.replace(key,pairs[key]);

    return content;
}

QString generateIoBlocks(QMap<QString, QString> io, QString targetKey)
{
    QString generated;
    for(QString type:io.keys())
    {
        QMap<QString,QString> pairs;
        pairs["${TYPE}"]=type;
        pairs["${NAME}"]=io[type];
        pairs["${_NAME}"]=io[type].at(0).toUpper()+io[type].mid(1);
        generated+=readAndReplace(":/templates/templates/stubs/"+targetKey,pairs)+"\n";
    }
    return generated;
}
