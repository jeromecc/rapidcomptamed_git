#ifndef PAGE1_H
#define PAGE1_H

#include <QtGui>
#include <QtCore>

#include "ui_page1.h"

class page1 : public QWizardPage , public Ui::WizardPage1
{
    Q_OBJECT
    public :
        page1(QObject * parent = 0);
        ~page1();
};

class page2 : public QWizardPage , public Ui::WizardPage1
{
  Q_OBJECT
  public :
  page2();
  ~page2();
  void installCompta();
};

class pageFin : public QWizardPage , public Ui::WizardPage1
{
  Q_OBJECT
  public :
  pageFin();
  ~pageFin();
  
};

#endif
