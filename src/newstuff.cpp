#include "newstuff.h"

#include <qwidget.h>
#include <qpushbutton.h>

#include <kdebug.h>
#include <knewstuff/downloaddialog.h>
#include <knewstuff/knewstuff.h>
#include <klocale.h>

NewStuff::NewStuff(QWidget *parent) : NewStuffWidget(parent)
{
	connect(btnGetNew, SIGNAL(clicked()), this, SLOT(slotGetNewVocabs()));
}

NewStuff::~NewStuff()
{
}

void NewStuff::slotGetNewVocabs()
{
	KNS::DownloadDialog::open("kanagram/templates", i18n("Kanagram Vocab Updater"));
}
