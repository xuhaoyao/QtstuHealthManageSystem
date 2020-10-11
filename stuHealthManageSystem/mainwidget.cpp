#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget)
{
    ui->setupUi(this);
    this->setFixedSize(788,400);

    MenuWidget = new menuWidget;
    NewWidget = new newWidget;
    InsertWidget = new insertWidget;
    DeleteWidget = new deleteWidget;
    FindWidget = new findWidget;
    PrintWidget = new printWidget;

    stackLayout = new QStackedLayout;

    stackLayout->addWidget(MenuWidget);
    stackLayout->addWidget(NewWidget);
    stackLayout->addWidget(InsertWidget);
    stackLayout->addWidget(DeleteWidget);
    stackLayout->addWidget(FindWidget);
    stackLayout->addWidget(PrintWidget);

    setLayout(stackLayout);

    connect(MenuWidget,&menuWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(NewWidget,&newWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(InsertWidget,&insertWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(DeleteWidget,&deleteWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(FindWidget,&findWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);
    connect(PrintWidget,&printWidget::display,stackLayout,&QStackedLayout::setCurrentIndex);

}

mainWidget::~mainWidget()
{
    delete ui;
}
