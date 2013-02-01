#ifndef MTEXTEDITFILTER_H
#define MTEXTEDITFILTER_H

#include <MWidgetController>
#include <MTextEdit>
#include <MButton>

class MTextEditFilter : public MWidgetController
{
    Q_OBJECT

public:
    MTextEditFilter();

private slots:
    void select(Qt::FocusReason);
    void deselect(Qt::FocusReason);

    void searchButtonClicked();
    void changeSearchButtonIcon();

signals:

private:
    MTextEdit *editor;
    MButton *searchButton;
};

#endif // MTEXTEDITFILTER_H
