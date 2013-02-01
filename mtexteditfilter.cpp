#include <QGraphicsLinearLayout>

#include "mtexteditfilter.h"

MTextEditFilter::MTextEditFilter()
{
    this->setObjectName("FilteringTextEditContainer");
    QGraphicsLinearLayout *mainLayout = new QGraphicsLinearLayout(Qt::Horizontal, this);
    mainLayout->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    editor = new MTextEdit();
    editor->setObjectName("CommonSingleInputField");
    editor->setPrompt("Search");
    editor->setAutoSelectionEnabled(false);
    editor->setInputMethodPredictionEnabled(false);
    editor->setErrorHighlight(false);
    mainLayout->addItem(editor);

    searchButton = new MButton("icon-m-common-search", "");
    searchButton->setViewType(MButton::iconType);
    searchButton->setObjectName("FilteringButton");
    mainLayout->addItem(searchButton);

    connect (editor, SIGNAL(gainedFocus(Qt::FocusReason)), this, SLOT(select(Qt::FocusReason)));
    connect (editor, SIGNAL(lostFocus(Qt::FocusReason)), this, SLOT(deselect(Qt::FocusReason)));
    connect (searchButton, SIGNAL(clicked()), this, SLOT(searchButtonClicked()));
    connect (editor, SIGNAL(textChanged()), this, SLOT(changeSearchButtonIcon()));
}

void MTextEditFilter::changeSearchButtonIcon()
{
    if (editor->text().length() > 0)
        searchButton->setIconID("icon-m-input-clear");
    else
        searchButton->setIconID("icon-m-common-search");
}

void MTextEditFilter::searchButtonClicked()
{
    if (editor->text().length() > 0)
        editor->setText("");
}

void MTextEditFilter::select(Qt::FocusReason)
{
    this->setSelected(true);
}

void MTextEditFilter::deselect(Qt::FocusReason)
{
    this->setSelected(false);
}
