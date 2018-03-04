#include "mailsender.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MailSender w;
    w.show();

    return a.exec();
}
