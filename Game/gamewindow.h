/*
创建人：神数不神
创建日期：2024-5-24
无修正
*/
#pragma once
#include <QtWidgets/QWidget>
#include <QFont>
#include <QMap>
#include "ui_game.h"
#include "Enum/enumtype.h"

namespace GameClient { 
    using namespace GameClient::GameEnum;
    struct WidgetInfo {
        quint32 type;
        QWidget** pwidgetPtr;
    };
    class GameWindow : public QWidget {
        Q_OBJECT

    public:
        GameWindow(QWidget *parent = nullptr);
        ~GameWindow();

    private:
        QMap<QObject*, WidgetInfo> widgetMap;
        Ui::GameClass ui;
        void SetDeckWinodw();
        void SetWidgetMap();
        void SetWidgetShadow(QWidget* widget, const QColor& color, bool inverted = false, qint32 size = 2);
        void SetWidgetFont(QWidget* widget,qint32 size);
        qint32 GetComboBoxTextCenterValue(QComboBox* comboBox);
        WidgetInfo GetWidgetInfo(QObject* widget);
        QFont LoadFont(LanguageType ltype,FontType fType);
        QString rootPath;//程序根目录
        FontType fType;//字体种类
        LanguageType lType;//语言种类
        QFont font;//当前程序使用的字体
    };
}