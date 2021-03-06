    enum itemsEnum{
        CODE = 0,
        C_CODE,
        TEXT,
        ACTIVITY,
        PHASE,
        PRICE,
        REIMBURSMENT,
        AGREEMENT,
        EXEMPTION,
        REGROUPMENT,
        ITEMS_ENUM_MaxParam
        };

QString ParseCcam::sineCommaCsvFile(QString csvString)
{
    QString ccamExpr ="[A-Z][A-Z][A-Z][A-Z][0-9][0-9][0-9]";
    QRegExp codeCcam(ccamExpr,Qt::CaseSensitive,QRegExp::RegExp);
    QRegExp nonSeparatingCommas(QString("\"*,*\""));
    QFile file(csvString);
    if (file.isOpen())
    {
          file.close();
        }
    if (!file.open(QIODevice::ReadOnly))
    {
          qWarning() << __FILE__ << QString::number(__LINE__) << "unable to open "+csvString ;
        }
    QTextStream stream(&file);
    QByteArray codecarray = m_codec.toUtf8();
    const char * codecchar = codecarray.data();
    stream.setCodec(codecchar);
    QString newCsvString = csvString.replace(".csv","new.csv");
    QFile newFile(newCsvString);
    if (!newFile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
          qWarning() << __FILE__ << QString::number(__LINE__) << "unable to open "+newFile.fileName() ;
        }
    QTextStream newStream(&newFile);
    newStream.setCodec(codecchar);
    //QRegExp changeDoubleSeparator(QString(",(?:\\d\\d\")"));
    QRegExp changeDoubleCommaSeparator (",(?![a-z])");
    QRegExp commaExceptSentenceComma(QString(",(?!\\s\\w|\\d{1,2}\")"));
    QString finalline;
    while (!stream.atEnd())
    {
        QString line = stream.readLine();
        if (line.indexOf(codeCcam,0)<1) //ie O
        {
            qDebug() << __FILE__ << QString::number(__LINE__) << "indexOf(codeCcam,0) = " << line;
            }
        newStream << line+"\n";
        }//while
    return newFile.fileName();
} 
