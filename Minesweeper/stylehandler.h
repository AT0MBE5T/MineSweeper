#ifndef STYLEHANDLER_H
#define STYLEHANDLER_H

#include <QString>
#include <QPixmap>
#include "QIcon"

class StyleHandler
{
public:
    StyleHandler();
    static QString getDefaultCellStyle();
    static QString getZeroMinesStyle();
    static QPixmap getOneMineStyle();
    static QPixmap getTwoMinesStyle();
    static QPixmap getThreeMinesStyle();
    static QPixmap getFourMinesStyle();
    static QPixmap getFiveMinesStyle();
    static QPixmap getSixMinesStyle();
    static QPixmap getSevenMinesStyle();
    static QPixmap getEightMinesStyle();
    static QPixmap getNineMinesStyle();
    static QPixmap getMineStyle();
    static QPixmap getFlagStyle();

    static QString getSmileStyle();
    static QString getLoseSmileStyle();
    static QString getTimerStyle();

    static QString getButtonStyle();
    static QString getTextStyle();
    static QString getComboBoxStyle();
    static QString getCreateFieldActiveStyle();
    static QString getCreateFieldPassiveStyle();
    static QString getInputStyle();
    static QString getBGStyle();

    static void setFonts();

};

#endif // STYLEHANDLER_H
