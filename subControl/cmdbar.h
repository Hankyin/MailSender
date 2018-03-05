#ifndef CMDBAR_H
#define CMDBAR_H

#include <QWidget>
#include <QPushButton>
#include <QToolButton>
#include <QStringList>
#include "emojipicker.h"

class CmdBar : public QWidget
{
    Q_OBJECT
public:
    explicit CmdBar(QWidget *parent = nullptr);
    void setTranslateSupportLang(const QStringList &list);
signals:
    void sendMailClick();
    void translateClick(const QString language);
    void attachmentClick();
    void emojiClick(QString emoji);
public slots:

private slots:
    void selectTranslateLanguage();
    void showEmojiPicker();
private:
    QPushButton *btSend;
    QToolButton *btTranslate;
    QToolButton *btEmoji;
    QToolButton *btAttachment;
    EmojiPicker *emojiPicker;
};

#endif // CMDBAR_H
