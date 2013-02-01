#include <QGraphicsLinearLayout>
#include <MButton>
#include <MLayout>
#include <MToolBar>
#include <MAction>
#include <MTextEdit>
#include <MSceneWindow>
#include <QDebug>
#include <MApplication>
#include <MOnDisplayChangeEvent>
#include <MApplicationWindow>
#include <MTheme>
#include <QGraphicsGridLayout>
#include <MGridLayoutPolicy>
#include <MImageWidget>
#include <MPannableViewport>
#include <MSeparator>
#include <QGraphicsItem>
#include <MMessageBox>
#include <math.h>
#include <MAbstractCellCreator>
#include <MList>
#include <MBasicListItem>
#include <QFile>
#include <MSceneManager>

#include "mainpage.h"
#include "mtexteditfilter.h"
#include "ViewHeader.h"

MainPage::MainPage(QGraphicsItem *parent)
    : MApplicationPage(parent)
{

}

MainPage::~MainPage()

{

}

void MainPage::createContent()
{
    MTheme *theme = MTheme::instance();
    theme->addPixmapDirectory("/opt/texteditfilteringdemo/data/");
    theme->loadCSS("/opt/texteditfilteringdemo/style/texteditfilteringdemo.css");
    applicationWindow()->setStyleName("CommonApplicationWindow");
    setStyleName("CommonApplicationPage");
    MWidget *centralWidget = new MWidget;
    MLayout *layout = new MLayout(centralWidget);
    layout->setContentsMargins(0, 0, 0, 0);

    /////////////////////////////////////////////////// HEADER VIEW

    MLinearLayoutPolicy *portraitPolicy = new MLinearLayoutPolicy(layout, Qt::Vertical);
    portraitPolicy->setContentsMargins(0, 0, 0, 0);
    portraitPolicy->setSpacing(0);
    portraitPolicy->setNotifyWidgetsOfLayoutPositionEnabled(true);

    ViewHeader *header = new ViewHeader();
    header->setTitle("texteditfilteringdemo");
    portraitPolicy->addItem(header);

    MTextEditFilter *editorFilter = new MTextEditFilter();
    portraitPolicy->addItem(editorFilter);
    centralWidget->setLayout(layout);
    this->setCentralWidget(centralWidget);

    /////////////////////////////////////////////////// SETTINGS SINGLETON


    /////////////////////////////////////////////////// CONTENT



    /////////////////////////////////////////////////// ACTIONS


    /////////////////////////////////////////////////// OBJECT MENU


    /////////////////////////////////////////////////// SIGNALS


    /////////////////////////////////////////////////// OTHER

}
