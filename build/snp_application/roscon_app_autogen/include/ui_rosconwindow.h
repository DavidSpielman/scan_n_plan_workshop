/********************************************************************************
** Form generated from reading UI file 'rosconwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROSCONWINDOW_H
#define UI_ROSCONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ROSConWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QProgressBar *progress_bar;
    QGroupBox *button_box;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *calibration_group_box;
    QGridLayout *gridLayout_2;
    QPushButton *run_calibration_button;
    QPushButton *install_calibration_button;
    QPushButton *observe_button;
    QPushButton *get_correlation_button;
    QPushButton *reset_calibration_button;
    QPushButton *scan_button;
    QPushButton *tpp_button;
    QPushButton *motion_plan_button;
    QPushButton *motion_execution_button;
    QPushButton *reset_button;
    QTextEdit *text_edit_log;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *ROSConWindow)
    {
        if (ROSConWindow->objectName().isEmpty())
            ROSConWindow->setObjectName(QString::fromUtf8("ROSConWindow"));
        ROSConWindow->resize(600, 600);
        centralWidget = new QWidget(ROSConWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        progress_bar = new QProgressBar(centralWidget);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setValue(0);

        gridLayout->addWidget(progress_bar, 3, 0, 1, 2);

        button_box = new QGroupBox(centralWidget);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(button_box);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calibration_group_box = new QGroupBox(button_box);
        calibration_group_box->setObjectName(QString::fromUtf8("calibration_group_box"));
        calibration_group_box->setEnabled(true);
        calibration_group_box->setCheckable(true);
        calibration_group_box->setChecked(false);
        gridLayout_2 = new QGridLayout(calibration_group_box);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        run_calibration_button = new QPushButton(calibration_group_box);
        run_calibration_button->setObjectName(QString::fromUtf8("run_calibration_button"));
        run_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(run_calibration_button, 0, 1, 1, 1);

        install_calibration_button = new QPushButton(calibration_group_box);
        install_calibration_button->setObjectName(QString::fromUtf8("install_calibration_button"));
        install_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(install_calibration_button, 0, 2, 1, 1);

        observe_button = new QPushButton(calibration_group_box);
        observe_button->setObjectName(QString::fromUtf8("observe_button"));

        gridLayout_2->addWidget(observe_button, 0, 0, 1, 1);

        get_correlation_button = new QPushButton(calibration_group_box);
        get_correlation_button->setObjectName(QString::fromUtf8("get_correlation_button"));
        get_correlation_button->setEnabled(false);

        gridLayout_2->addWidget(get_correlation_button, 2, 1, 1, 1);

        reset_calibration_button = new QPushButton(calibration_group_box);
        reset_calibration_button->setObjectName(QString::fromUtf8("reset_calibration_button"));
        reset_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(reset_calibration_button, 2, 2, 1, 1);


        verticalLayout_2->addWidget(calibration_group_box);

        scan_button = new QPushButton(button_box);
        scan_button->setObjectName(QString::fromUtf8("scan_button"));
        scan_button->setEnabled(true);

        verticalLayout_2->addWidget(scan_button);

        tpp_button = new QPushButton(button_box);
        tpp_button->setObjectName(QString::fromUtf8("tpp_button"));
        tpp_button->setEnabled(true);

        verticalLayout_2->addWidget(tpp_button);

        motion_plan_button = new QPushButton(button_box);
        motion_plan_button->setObjectName(QString::fromUtf8("motion_plan_button"));
        motion_plan_button->setEnabled(true);

        verticalLayout_2->addWidget(motion_plan_button);

        motion_execution_button = new QPushButton(button_box);
        motion_execution_button->setObjectName(QString::fromUtf8("motion_execution_button"));
        motion_execution_button->setEnabled(true);

        verticalLayout_2->addWidget(motion_execution_button);

        reset_button = new QPushButton(button_box);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));

        verticalLayout_2->addWidget(reset_button);

        text_edit_log = new QTextEdit(button_box);
        text_edit_log->setObjectName(QString::fromUtf8("text_edit_log"));

        verticalLayout_2->addWidget(text_edit_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addWidget(button_box, 1, 1, 1, 1);

        ROSConWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ROSConWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setSizeGripEnabled(true);
        ROSConWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(ROSConWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        ROSConWindow->setMenuBar(menuBar);

        retranslateUi(ROSConWindow);

        QMetaObject::connectSlotsByName(ROSConWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ROSConWindow)
    {
        ROSConWindow->setWindowTitle(QApplication::translate("ROSConWindow", "Scan-N-Plan", nullptr));
        progress_bar->setFormat(QString());
        button_box->setTitle(QString());
        calibration_group_box->setTitle(QApplication::translate("ROSConWindow", "Camera Calibration", nullptr));
        run_calibration_button->setText(QApplication::translate("ROSConWindow", "Run", nullptr));
        install_calibration_button->setText(QApplication::translate("ROSConWindow", "Install", nullptr));
        observe_button->setText(QApplication::translate("ROSConWindow", "Observe", nullptr));
        get_correlation_button->setText(QApplication::translate("ROSConWindow", "Get Correlation", nullptr));
        reset_calibration_button->setText(QApplication::translate("ROSConWindow", "Reset", nullptr));
        scan_button->setText(QApplication::translate("ROSConWindow", "Get Detailed Scan", nullptr));
        tpp_button->setText(QApplication::translate("ROSConWindow", "Generate Tool Path Plan", nullptr));
        motion_plan_button->setText(QApplication::translate("ROSConWindow", "Generate Motion Plan", nullptr));
        motion_execution_button->setText(QApplication::translate("ROSConWindow", "Execute Motion Plan", nullptr));
        reset_button->setText(QApplication::translate("ROSConWindow", "Reset", nullptr));
        text_edit_log->setHtml(QApplication::translate("ROSConWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Waiting to calibrate...</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ROSConWindow: public Ui_ROSConWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROSCONWINDOW_H
