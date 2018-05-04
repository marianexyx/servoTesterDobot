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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *pwmAdressLbl;
    QLineEdit *yPTPEdit;
    QLabel *label_18;
    QLabel *label_17;
    QLineEdit *xPTPEdit;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *sendBtn;
    QLineEdit *rPTPEdit;
    QLineEdit *zPTPEdit;
    QLabel *label_12;
    QLineEdit *pwmLineEdit;
    QPushButton *pwmBtn;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *pwmFrequencyLbl;
    QLabel *pwmDutyCycleLbl;
    QLabel *label_15;
    QPushButton *pinStateBtn;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *baseAngleAddBtn;
    QPushButton *longArmSubBtn;
    QPushButton *shortArmAddBtn;
    QPushButton *longArmAddBtn;
    QPushButton *baseAngleSubBtn;
    QPushButton *shortArmSubBtn;
    QPushButton *rHeadAddBtn;
    QPushButton *rHeadSubBtn;
    QComboBox *teachMode;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *joint1Label;
    QLabel *label;
    QLabel *joint4Label;
    QLabel *rLabel;
    QLabel *zLabel;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *joint3Label;
    QLabel *joint2Label;
    QLabel *yLabel;
    QLabel *label_5;
    QLabel *xLabel;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QPushButton *connectBtn;
    QLabel *label_9;
    QLabel *deviceSNLabel;
    QLabel *label_10;
    QLabel *DeviceNameLabel;
    QLabel *label_11;
    QLabel *DeviceInfoLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(410, 392);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pwmAdressLbl = new QLabel(groupBox_3);
        pwmAdressLbl->setObjectName(QStringLiteral("pwmAdressLbl"));

        gridLayout_2->addWidget(pwmAdressLbl, 2, 3, 1, 1);

        yPTPEdit = new QLineEdit(groupBox_3);
        yPTPEdit->setObjectName(QStringLiteral("yPTPEdit"));
        yPTPEdit->setEnabled(false);

        gridLayout_2->addWidget(yPTPEdit, 1, 1, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 1, 0, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 0, 0, 1, 1);

        xPTPEdit = new QLineEdit(groupBox_3);
        xPTPEdit->setObjectName(QStringLiteral("xPTPEdit"));
        xPTPEdit->setEnabled(false);

        gridLayout_2->addWidget(xPTPEdit, 0, 1, 1, 1);

        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 2, 0, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        sendBtn = new QPushButton(groupBox_3);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setEnabled(false);

        gridLayout_2->addWidget(sendBtn, 4, 1, 1, 1);

        rPTPEdit = new QLineEdit(groupBox_3);
        rPTPEdit->setObjectName(QStringLiteral("rPTPEdit"));
        rPTPEdit->setEnabled(false);

        gridLayout_2->addWidget(rPTPEdit, 3, 1, 1, 1);

        zPTPEdit = new QLineEdit(groupBox_3);
        zPTPEdit->setObjectName(QStringLiteral("zPTPEdit"));
        zPTPEdit->setEnabled(false);

        gridLayout_2->addWidget(zPTPEdit, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 0, 2, 1, 1);

        pwmLineEdit = new QLineEdit(groupBox_3);
        pwmLineEdit->setObjectName(QStringLiteral("pwmLineEdit"));
        pwmLineEdit->setEnabled(false);

        gridLayout_2->addWidget(pwmLineEdit, 0, 3, 1, 1);

        pwmBtn = new QPushButton(groupBox_3);
        pwmBtn->setObjectName(QStringLiteral("pwmBtn"));
        pwmBtn->setEnabled(false);

        gridLayout_2->addWidget(pwmBtn, 1, 2, 1, 2);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 2, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 3, 2, 1, 1);

        pwmFrequencyLbl = new QLabel(groupBox_3);
        pwmFrequencyLbl->setObjectName(QStringLiteral("pwmFrequencyLbl"));

        gridLayout_2->addWidget(pwmFrequencyLbl, 3, 3, 1, 1);

        pwmDutyCycleLbl = new QLabel(groupBox_3);
        pwmDutyCycleLbl->setObjectName(QStringLiteral("pwmDutyCycleLbl"));

        gridLayout_2->addWidget(pwmDutyCycleLbl, 4, 3, 1, 1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 4, 2, 1, 1);

        pinStateBtn = new QPushButton(groupBox_3);
        pinStateBtn->setObjectName(QStringLiteral("pinStateBtn"));
        pinStateBtn->setEnabled(false);

        gridLayout_2->addWidget(pinStateBtn, 5, 1, 1, 3);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 1, 2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        baseAngleAddBtn = new QPushButton(groupBox);
        baseAngleAddBtn->setObjectName(QStringLiteral("baseAngleAddBtn"));
        baseAngleAddBtn->setEnabled(false);

        gridLayout->addWidget(baseAngleAddBtn, 1, 0, 1, 1);

        longArmSubBtn = new QPushButton(groupBox);
        longArmSubBtn->setObjectName(QStringLiteral("longArmSubBtn"));
        longArmSubBtn->setEnabled(false);

        gridLayout->addWidget(longArmSubBtn, 2, 1, 1, 1);

        shortArmAddBtn = new QPushButton(groupBox);
        shortArmAddBtn->setObjectName(QStringLiteral("shortArmAddBtn"));
        shortArmAddBtn->setEnabled(false);

        gridLayout->addWidget(shortArmAddBtn, 3, 0, 1, 1);

        longArmAddBtn = new QPushButton(groupBox);
        longArmAddBtn->setObjectName(QStringLiteral("longArmAddBtn"));
        longArmAddBtn->setEnabled(false);

        gridLayout->addWidget(longArmAddBtn, 2, 0, 1, 1);

        baseAngleSubBtn = new QPushButton(groupBox);
        baseAngleSubBtn->setObjectName(QStringLiteral("baseAngleSubBtn"));
        baseAngleSubBtn->setEnabled(false);

        gridLayout->addWidget(baseAngleSubBtn, 1, 1, 1, 1);

        shortArmSubBtn = new QPushButton(groupBox);
        shortArmSubBtn->setObjectName(QStringLiteral("shortArmSubBtn"));
        shortArmSubBtn->setEnabled(false);

        gridLayout->addWidget(shortArmSubBtn, 3, 1, 1, 1);

        rHeadAddBtn = new QPushButton(groupBox);
        rHeadAddBtn->setObjectName(QStringLiteral("rHeadAddBtn"));
        rHeadAddBtn->setEnabled(false);

        gridLayout->addWidget(rHeadAddBtn, 4, 0, 1, 1);

        rHeadSubBtn = new QPushButton(groupBox);
        rHeadSubBtn->setObjectName(QStringLiteral("rHeadSubBtn"));
        rHeadSubBtn->setEnabled(false);

        gridLayout->addWidget(rHeadSubBtn, 4, 1, 1, 1);

        teachMode = new QComboBox(groupBox);
        teachMode->addItem(QString());
        teachMode->addItem(QString());
        teachMode->setObjectName(QStringLiteral("teachMode"));
        teachMode->setEnabled(false);

        gridLayout->addWidget(teachMode, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        joint1Label = new QLabel(groupBox_2);
        joint1Label->setObjectName(QStringLiteral("joint1Label"));
        joint1Label->setEnabled(true);

        gridLayout_5->addWidget(joint1Label, 0, 1, 1, 2);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        joint4Label = new QLabel(groupBox_2);
        joint4Label->setObjectName(QStringLiteral("joint4Label"));

        gridLayout_5->addWidget(joint4Label, 3, 1, 1, 1);

        rLabel = new QLabel(groupBox_2);
        rLabel->setObjectName(QStringLiteral("rLabel"));

        gridLayout_5->addWidget(rLabel, 3, 5, 1, 1);

        zLabel = new QLabel(groupBox_2);
        zLabel->setObjectName(QStringLiteral("zLabel"));

        gridLayout_5->addWidget(zLabel, 2, 5, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_5->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 1, 3, 1, 2);

        joint3Label = new QLabel(groupBox_2);
        joint3Label->setObjectName(QStringLiteral("joint3Label"));

        gridLayout_5->addWidget(joint3Label, 2, 1, 1, 1);

        joint2Label = new QLabel(groupBox_2);
        joint2Label->setObjectName(QStringLiteral("joint2Label"));

        gridLayout_5->addWidget(joint2Label, 1, 1, 1, 2);

        yLabel = new QLabel(groupBox_2);
        yLabel->setObjectName(QStringLiteral("yLabel"));

        gridLayout_5->addWidget(yLabel, 1, 5, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 3, 0, 1, 1);

        xLabel = new QLabel(groupBox_2);
        xLabel->setObjectName(QStringLiteral("xLabel"));
        xLabel->setEnabled(true);

        gridLayout_5->addWidget(xLabel, 0, 5, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_5->addWidget(label_2, 0, 3, 1, 2);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 2, 3, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 3, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        connectBtn = new QPushButton(groupBox_4);
        connectBtn->setObjectName(QStringLiteral("connectBtn"));

        gridLayout_3->addWidget(connectBtn, 0, 0, 1, 2);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        deviceSNLabel = new QLabel(groupBox_4);
        deviceSNLabel->setObjectName(QStringLiteral("deviceSNLabel"));
        deviceSNLabel->setFrameShape(QFrame::Panel);

        gridLayout_3->addWidget(deviceSNLabel, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        DeviceNameLabel = new QLabel(groupBox_4);
        DeviceNameLabel->setObjectName(QStringLiteral("DeviceNameLabel"));
        DeviceNameLabel->setFrameShape(QFrame::Panel);
        DeviceNameLabel->setTextFormat(Qt::AutoText);

        gridLayout_3->addWidget(DeviceNameLabel, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 3, 0, 1, 1);

        DeviceInfoLabel = new QLabel(groupBox_4);
        DeviceInfoLabel->setObjectName(QStringLiteral("DeviceInfoLabel"));
        DeviceInfoLabel->setFrameShape(QFrame::Panel);
        DeviceInfoLabel->setFrameShadow(QFrame::Plain);

        gridLayout_3->addWidget(DeviceInfoLabel, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 1, 1, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 410, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "PTP", nullptr));
        pwmAdressLbl->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Z", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "R", nullptr));
        sendBtn->setText(QApplication::translate("MainWindow", "SendPTP", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "pwm", nullptr));
        pwmBtn->setText(QApplication::translate("MainWindow", "setPWM", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "adress:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "freq.:", nullptr));
        pwmFrequencyLbl->setText(QApplication::translate("MainWindow", "-", nullptr));
        pwmDutyCycleLbl->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "dutyR:", nullptr));
        pinStateBtn->setText(QApplication::translate("MainWindow", "start changing pin state", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "JOG", nullptr));
        baseAngleAddBtn->setText(QApplication::translate("MainWindow", "J1+", nullptr));
        longArmSubBtn->setText(QApplication::translate("MainWindow", "J2-", nullptr));
        shortArmAddBtn->setText(QApplication::translate("MainWindow", "J3+", nullptr));
        longArmAddBtn->setText(QApplication::translate("MainWindow", "J2+", nullptr));
        baseAngleSubBtn->setText(QApplication::translate("MainWindow", "J1-", nullptr));
        shortArmSubBtn->setText(QApplication::translate("MainWindow", "J3-", nullptr));
        rHeadAddBtn->setText(QApplication::translate("MainWindow", "J4+", nullptr));
        rHeadSubBtn->setText(QApplication::translate("MainWindow", "J4-", nullptr));
        teachMode->setItemText(0, QApplication::translate("MainWindow", "Joint", nullptr));
        teachMode->setItemText(1, QApplication::translate("MainWindow", "Axis", nullptr));

        groupBox_2->setTitle(QApplication::translate("MainWindow", "Pose", nullptr));
        joint1Label->setText(QApplication::translate("MainWindow", "0", nullptr));
        label->setText(QApplication::translate("MainWindow", "J1", nullptr));
        joint4Label->setText(QApplication::translate("MainWindow", "0", nullptr));
        rLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        zLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "J2", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Y", nullptr));
        joint3Label->setText(QApplication::translate("MainWindow", "0", nullptr));
        joint2Label->setText(QApplication::translate("MainWindow", "0", nullptr));
        yLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "J4", nullptr));
        xLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "J3", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Z", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "R", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        connectBtn->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Device SN:", nullptr));
        deviceSNLabel->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Device Name:", nullptr));
        DeviceNameLabel->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Device information:", nullptr));
        DeviceInfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
