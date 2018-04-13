/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAbout_Musix_Player;
    QAction *actionOpen_File;
    QAction *actionOpen_Directory;
    QAction *actionNothing_To_Show_Here;
    QAction *actionOpen;
    QAction *actionUndo_Action;
    QAction *actionRedo_Action;
    QAction *actionAppearance;
    QAction *actionAudio_Settings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollBar *horizontalScrollBar;
    QWidget *tab_4;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecent;
    QMenu *menuEdit;
    QMenu *menuPreferences;
    QMenu *menuAbout;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1005, 461);
        QIcon icon;
        icon.addFile(QStringLiteral("../Pictures/959798516.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Musix_Player = new QAction(MainWindow);
        actionAbout_Musix_Player->setObjectName(QStringLiteral("actionAbout_Musix_Player"));
        actionAbout_Musix_Player->setMenuRole(QAction::AboutQtRole);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName(QStringLiteral("actionOpen_Directory"));
        actionNothing_To_Show_Here = new QAction(MainWindow);
        actionNothing_To_Show_Here->setObjectName(QStringLiteral("actionNothing_To_Show_Here"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Open_file_document_paper_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionUndo_Action = new QAction(MainWindow);
        actionUndo_Action->setObjectName(QStringLiteral("actionUndo_Action"));
        actionRedo_Action = new QAction(MainWindow);
        actionRedo_Action->setObjectName(QStringLiteral("actionRedo_Action"));
        actionAppearance = new QAction(MainWindow);
        actionAppearance->setObjectName(QStringLiteral("actionAppearance"));
        actionAudio_Settings = new QAction(MainWindow);
        actionAudio_Settings->setObjectName(QStringLiteral("actionAudio_Settings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 261, 911, 20));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalScrollBar = new QScrollBar(verticalLayoutWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget, 0, Qt::AlignLeft);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedControls(false);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/white-rewind-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/white-play-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/white-fast-forward-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1005, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRecent = new QMenu(menuFile);
        menuRecent->setObjectName(QStringLiteral("menuRecent"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuPreferences = new QMenu(menuEdit);
        menuPreferences->setObjectName(QStringLiteral("menuPreferences"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionOpen_Directory);
        menuFile->addAction(menuRecent->menuAction());
        menuRecent->addAction(actionNothing_To_Show_Here);
        menuEdit->addAction(actionUndo_Action);
        menuEdit->addAction(actionRedo_Action);
        menuEdit->addSeparator();
        menuEdit->addAction(menuPreferences->menuAction());
        menuPreferences->addAction(actionAppearance);
        menuPreferences->addAction(actionAudio_Settings);
        menuAbout->addSeparator();
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout_Musix_Player);
        toolBar->addAction(actionOpen);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Musix Player", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Musix_Player->setText(QApplication::translate("MainWindow", "About Musix Player", nullptr));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File ", nullptr));
        actionOpen_Directory->setText(QApplication::translate("MainWindow", "Open Directory", nullptr));
        actionNothing_To_Show_Here->setText(QApplication::translate("MainWindow", "Nothing To Show Here", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open...", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo_Action->setText(QApplication::translate("MainWindow", "Undo 'Action'", nullptr));
        actionRedo_Action->setText(QApplication::translate("MainWindow", "Redo 'Action'", nullptr));
        actionAppearance->setText(QApplication::translate("MainWindow", "Appearance", nullptr));
        actionAudio_Settings->setText(QApplication::translate("MainWindow", "Audio Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Library", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Music Library", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Recently Played....", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "rewind", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Play", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "forward", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuRecent->setTitle(QApplication::translate("MainWindow", "Recent....", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuPreferences->setTitle(QApplication::translate("MainWindow", "Preferences", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
