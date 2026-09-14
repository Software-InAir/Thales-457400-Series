#include <QApplication>
#include <QWidget>
#include <QStackedWidget>
#include <QTimer>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>


QWidget* CreateWelcomePage(QStackedWidget *pages);
QWidget* InitialConditionsPage(QStackedWidget *pages);
QWidget* PowerConsumptionPage(QStackedWidget *pages);
QWidget* SubtestAPage(QStackedWidget *pages);
QWidget* CreateStep4Page(QStackedWidget *pages);
QWidget* CreateStep5Page(QStackedWidget *pages);
QWidget* CreateStep6Page(QStackedWidget *pages);
QWidget* CreateStep7Page(QStackedWidget *pages);
QWidget* CreateStep8Page(QStackedWidget *pages);
QWidget* CreateStep9Page(QStackedWidget *pages);
QWidget* CreateStep10Page(QStackedWidget *pages);
QWidget* CreateStep11Page(QStackedWidget *pages);
QWidget* CreateStep12Page(QStackedWidget *pages);
QWidget* CreateStep13Page(QStackedWidget *pages);
QWidget* CreateStep14Page(QStackedWidget *pages);
QWidget* CreateStep15Page(QStackedWidget *pages);
QWidget* CreateStep16Page(QStackedWidget *pages);
QWidget* CreateStep17Page(QStackedWidget *pages);
QWidget* CreateStep18Page(QStackedWidget *pages);
QWidget* CreateStep19Page(QStackedWidget *pages);
QWidget* CreateStep20Page(QStackedWidget *pages);
QWidget* CreateStep21Page(QStackedWidget *pages);
QWidget* CreateStep22Page(QStackedWidget *pages);
QWidget* CreateStep23Page(QStackedWidget *pages);
QWidget* CreateStep24Page(QStackedWidget *pages);
QWidget* CreateStep25Page(QStackedWidget *pages);
QWidget* CreateStep26Page(QStackedWidget *pages);
QWidget* CreateStep27Page(QStackedWidget *pages);
QWidget* CreateStep28Page(QStackedWidget *pages);
QWidget* CreateStep29Page(QStackedWidget *pages);
QWidget* CreateStep30Page(QStackedWidget *pages);




void PowerConsumptionTimer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl1ATimer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl1BTimer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl2ATimer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl2BTimer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl3Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl4Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl5Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl6Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl7Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl8Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl9Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl10Timer(QStackedWidget *pages, QProgressBar *bar);



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Thales");
    window.resize(1200, 800);
    window.setStyleSheet("background-color: #FFFFFF;");

    // Set Hour long timer for equipment warm-up
    //QTimer::singleShot(10, [&window]() {
      //  window.setWindowTitle("10 seconds passed");
    //});

    QVBoxLayout *mainLayout = new QVBoxLayout(&window);

    QStackedWidget *pages = new QStackedWidget;

    pages->addWidget(CreateWelcomePage(pages));
    pages->addWidget(InitialConditionsPage(pages));
    pages->addWidget(PowerConsumptionPage(pages));
    pages->addWidget(SubtestAPage(pages));
    pages->addWidget(CreateStep4Page(pages));
    pages->addWidget(CreateStep5Page(pages));
    pages->addWidget(CreateStep6Page(pages));
    pages->addWidget(CreateStep7Page(pages));
    pages->addWidget(CreateStep8Page(pages));
    pages->addWidget(CreateStep9Page(pages));
    pages->addWidget(CreateStep10Page(pages));
    pages->addWidget(CreateStep11Page(pages));
    pages->addWidget(CreateStep12Page(pages));
    pages->addWidget(CreateStep13Page(pages));
    pages->addWidget(CreateStep14Page(pages));
    pages->addWidget(CreateStep15Page(pages));
    pages->addWidget(CreateStep16Page(pages));
    pages->addWidget(CreateStep17Page(pages));
    pages->addWidget(CreateStep18Page(pages));
    pages->addWidget(CreateStep19Page(pages));
    pages->addWidget(CreateStep20Page(pages));
    pages->addWidget(CreateStep21Page(pages));
    pages->addWidget(CreateStep22Page(pages));
    pages->addWidget(CreateStep23Page(pages));
    pages->addWidget(CreateStep24Page(pages));
    pages->addWidget(CreateStep25Page(pages));
    pages->addWidget(CreateStep26Page(pages));
    pages->addWidget(CreateStep27Page(pages));
    pages->addWidget(CreateStep28Page(pages));
    pages->addWidget(CreateStep29Page(pages));
    pages->addWidget(CreateStep30Page(pages));


    mainLayout->addWidget(pages);

    window.show();
    return app.exec();
}

QWidget* CreateWelcomePage(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QHBoxLayout *logolayout = new QHBoxLayout();


    QLabel *inairlogoLabel = new QLabel;
    QPixmap inairlogo("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\inair-logo.png");

    inairlogoLabel->setPixmap(inairlogo);
    inairlogoLabel->setScaledContents(true);
    inairlogoLabel->setStyleSheet("background-color: #FFFFFF;");

    QLabel *thaleslogoLabel = new QLabel;
    QPixmap thaleslogo("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\thales_logo.png");

    thaleslogoLabel->setPixmap(thaleslogo);
    thaleslogoLabel->setFixedSize(300, 300);
    thaleslogoLabel->setScaledContents(true);
    thaleslogoLabel->setStyleSheet("background-color: #FFFFFF;");


    logolayout->addWidget(inairlogoLabel, 0, Qt::AlignCenter);
    logolayout->addWidget(thaleslogoLabel, 0, Qt::AlignCenter);
    layout->addLayout(logolayout);

    QLabel *title =
        new QLabel("Welcome to the Thales VSI & TCAS Test Procedure");
    title->setStyleSheet("background-color: #ffffff;"
                                 "font-size: 24px;");
    title->setAlignment(Qt::AlignCenter);



    QPushButton *beginButton =
        new QPushButton("Begin Procedure");
    beginButton->setFixedWidth(200);
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    layout->addStretch();
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(beginButton, 0, Qt::AlignCenter);
    layout->addStretch(4);

    QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(1);
    });

    return page;
}



QWidget* InitialConditionsPage(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QLabel *title =
        new QLabel("Initial Wiring Configuration");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");
    title->setAlignment(Qt::AlignCenter);

    QLabel *instructionHeader =
        new QLabel("Steps");
    instructionHeader->setStyleSheet("font-size: 18px;"
                                     "  font-weight: bold;");
    instructionHeader->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("1. Flip toggle switches 32, 33, 34, and 35 to the Connect position. ");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
      new QLabel("2. Flip toggle switches 17, 28, 31, and 37 to the Open position. ");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *notesHeader =
        new QLabel("Initial Condition Checks");
    notesHeader->setStyleSheet("font-size: 18px;"
                                     "  font-weight: bold;");

    notesHeader->setAlignment(Qt::AlignCenter);

    QLabel *notes1 =
        new QLabel("Ensure that the 115Vac In HI and LO jacks are connected to a 115V +/- 5V 400 Hz source.");

    notes1->setAlignment(Qt::AlignCenter);

    QLabel *notes2 =
        new QLabel("Ensure that the 28vdc IN HI and LO jacks are connected to a 28V DC source.");

    notes2->setAlignment(Qt::AlignCenter);

    QLabel *notes3 =
        new QLabel("Ensure that the 5Vac IN Hi and LO jacks are connected to a 5V 400 Hz source.");

    notes3->setAlignment(Qt::AlignCenter);

    QLabel *notes4 =
        new QLabel("Ensure that the 26Vac IN Hi and LO jacks are connected to a 26V 400 Hz source.");

    notes4->setAlignment(Qt::AlignCenter);

    QLabel *notes5 =
        new QLabel("Ensure that the 115Vac IN, 28vdc IN, 5Vac IN, and 26Vac IN on/off toggle switches remain in the off position.");

    notes5->setAlignment(Qt::AlignCenter);


    QPushButton *nextButton =
        new QPushButton("Next");

    nextButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    layout->addStretch();
    layout->addWidget(title);
    layout->addStretch();
    layout->addWidget(notesHeader);
    layout->addWidget(notes1);
    layout->addWidget(notes2);
    layout->addWidget(notes3);
    layout->addWidget(notes4);
    layout->addWidget(notes5);
    layout->addStretch();
    layout->addWidget(instructionHeader);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addStretch();
    layout->addWidget(nextButton, 0, Qt::AlignCenter);
    layout->addStretch();

    QObject::connect(nextButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(2);
    });

    return page;
}

QWidget* PowerConsumptionPage(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QLabel *title =
        new QLabel("Subtest A: Power Consumption");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *instruction =
        new QLabel("When ready, flip the 115Vac IN and 5Vac IN on/off toggle switches into the on position and press the Begin Timer button. ");

    instruction->setAlignment(Qt::AlignCenter);

    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);

    layout->addWidget(progressBar);

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(2);
    layout->addWidget(instruction);
    layout->addStretch(1);
    layout->addWidget(beginButton, 0, Qt::AlignCenter);
    layout->addWidget(progressBar);
    layout->addStretch(6);


    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        PowerConsumptionTimer(pages, progressBar);
    });

    return page;
}

//--------------------------------------------------- Subtest A -----------------------------------------

QWidget* SubtestAPage(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest A");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Picture Display");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Confirm that the picture displayed on UUT is of a VSI in normal operation with the pointer indicating zero.");

    instruction1->setAlignment(Qt::AlignCenter);



    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(4);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(4);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
//});

    return page;
}

//--------------------------------------------------- Subtest B -----------------------------------------

QWidget* SubtestB1Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest B");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Self Test Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("1. Flip toggle switch 41 to the upwards (39) position to connect Self Test to ground.");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Confirm that the test pattern is as follows: ");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *selfTestLabel = new QLabel;
    QPixmap selfTestImage("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\Subtest2SelfTestConfirmation.png");

    selfTestLabel->setPixmap(selfTestImage);
    //selfTestLabel->setScaledContents(true);
    selfTestLabel->setStyleSheet("background-color: #FFFFFF;");
    selfTestLabel->setAlignment(Qt::AlignCenter);



    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(5);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(5);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addStretch(1);
    layout->addWidget(selfTestLabel);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
//});

    return page;
}

QWidget* SubtestB2Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest B");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2020");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N Software Suffix");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Ensure that the P/N Software Suffix displayed corresponds to that of the indicator as shown on the identification label and that the self test result (if displayed) is indicated to be OK.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(6);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(6);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
//});

    return page;
}

QWidget* SubtestB3Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest B");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("2030");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("VSI Screen");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Flip the Self Test toggle switch to the downward (41) position and check that the original picture is displayed again.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(7);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(7);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
//});

    return page;
}

//--------------------------------------------------- Subtest C -----------------------------------------

QWidget* SubtestC1Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest C");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Self Test Push-Button");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Depress the test flush push button located on the front face of the indicator and check that the test pattern returns to the following: ");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *selfTestLabel = new QLabel;
    QPixmap selfTestImage("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\Subtest2SelfTestConfirmation.png");

    selfTestLabel->setPixmap(selfTestImage);
    //selfTestLabel->setScaledContents(true);
    selfTestLabel->setStyleSheet("background-color: #FFFFFF;");
    selfTestLabel->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(8);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(8);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addWidget(selfTestLabel);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
//});

    return page;
}

QWidget* SubtestC2Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest C");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2050");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Self Test Push-Button Release");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Release the push button and check that the original picture is displayed again.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(9);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(9);
    });

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

//--------------------------------------------------- Subtest D -----------------------------------------

QWidget* SubtestD1Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2060");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Operating Mode Check");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Remove Input Power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(continueButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(10);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestD2Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2070");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("SHOP TEST");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("1. Flip toggle switches 17 and 35 to the upwards position (15).");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Apply normal input power.");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *instruction3 =
        new QLabel("3. Check that the test pattern display is as follows.");

    instruction3->setAlignment(Qt::AlignCenter);

    QLabel *shopTestLabel = new QLabel;
    QPixmap shopTestImage("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\SubtestDShopTest.png");

    shopTestLabel->setPixmap(shopTestImage);
    //selfTestLabel->setScaledContents(true);
    shopTestLabel->setStyleSheet("background-color: #FFFFFF;");
    shopTestLabel->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(11);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(11);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addWidget(instruction3);
    layout->addStretch(1);
    layout->addWidget(shopTestLabel);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestD3Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2072");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("Shop Test Value");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("1. Flip toggle switch 28 to the upwards position (15).");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Remove and reapply power input.");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *instruction3 =
        new QLabel("3. Verify the three digit value displayed is: 000.");

    instruction3->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(12);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(12);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addWidget(instruction3);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestD4Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2074");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Is the current UUT a member of the 11xx, 15xx, 190x, or 2000 family?");

    instruction1->setAlignment(Qt::AlignCenter);



    QPushButton *yesButton =
        new QPushButton("Yes");
    yesButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(yesButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(13);
    });

    QPushButton *noButton =
        new QPushButton("No");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(noButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(15);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(yesButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(noButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestD5Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2074");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Flip toggle switches 28, 31, 32, 33, and 34 to the downward position (Open).");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("Remove and reapply power input.");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *instruction3 =
        new QLabel("Verify that the three digit value displayed is: 029.");

    instruction3->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(passButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(14);
    });

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(failButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(14);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addWidget(instruction3);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestD6Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest D");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 2080");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Return to the normal wiring configuration (toggle switches 32, 33, 34, and 35 in the upward position (Connect) and toggle switches 31 and 37 in the downward position (Open). Remove and reapply power input.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(continueButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(15);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

//--------------------------------------------------- Subtest E -----------------------------------------

QWidget* SubtestE1Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Lighting Controls Operation Check");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("These checks are performed with the indicator displaying the test pattern. Ensure that toggle switch 41 is flipped to the upwards position (39).");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("All brightness tests must be performed in dark ambient condition of less than 1 lux to be sure no unwanted light sources influence the measurements and adjustments.");

    instruction2->setAlignment(Qt::AlignCenter);

    QLabel *instruction3 =
        new QLabel("Integrated Light Sensor (ILS) Control Illuminate the front cell with a 200 lux (+ 10%) level with a Shott KL 1500 light source with a 3000 K color temperature or equivalent. "
                   "Put a MF - millipore membrane in front fo the cell to verify the illumination level.");

    instruction3->setAlignment(Qt::AlignCenter);

    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(continueButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(15);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addWidget(instruction3);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestE2Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("UUT PN");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Is the current UUT a member of the 457400PB190x family?");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *yesButton =
        new QPushButton("Yes");
    yesButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(yesButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(16);
    });

    QPushButton *noButton =
        new QPushButton("No");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(noButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(17);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(yesButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(noButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestE3Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("UUT PN");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Is the current UUT a member of the 457400PB190x family?");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *yesButton =
        new QPushButton("Yes");
    yesButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(yesButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(19);
    });

    QPushButton *noButton =
        new QPushButton("No");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );
    QObject::connect(noButton, &QPushButton::clicked, [pages]() {
        pages->setCurrentIndex(16);
    });


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    buttonlayout->addStretch();
    buttonlayout->addWidget(yesButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(noButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
    //PowerConsumptionTimer(pages);
    //pages->setCurrentIndex(2);
    //});

    return page;
}

QWidget* SubtestE4Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Dimming Control Voltage");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("With the initial Dimming Control Voltage at 5V and 400 Hz, measure on the "
                   "display with the integrated light sensor in front of the middle of the white band of the test pattern"
                   "and press the Begin Timer button. After a minute has elapsed, the measurement must be greater than X1 fL.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl1Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE5Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Dimming Control Voltage");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("With the initial Dimming Control Voltage at 5V and 400 Hz, measure on the "
                   "display with the integrated light sensor in front of the middle of the white band of the test pattern"
                   "and press the Begin Timer button. After two minutes have elapsed, the measurement must be greater than X1 fL.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(33);
    });

    return page;
}

QWidget* SubtestE6Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3005");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Luminosity");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("Mask the front ILS so that the brightness on the front ILS is less than 1 lux."
                   "Verify that the luminosity level decreases and that after one minute it is less than X2 fL"
                   "and greater than Y2 fL. It must be between X2 Fp and Y2 FP.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl2ATimer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE7Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3005");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Luminosity");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("Mask the front ILS so that the brightness on the front ILS is less than 1 lux."
                   "Verify that the luminosity level decreases and that after two minutes it is less than X2 fL"
                   "and greater than Y2 fL. It must be between X2 Fp and Y2 FP.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl2BTimer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE8Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
       new QLabel("Remote Light Sensor (RLS) Control");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("Apply a positive voltage of 12V DC on the RLS input"
                   "and verify that the brightness level is between X3 fL and Y3 fL"
                   "and that it is greater than the previous measurement.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl3Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE9Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3020");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove the applied voltage (RLS) and press the Begin Timer button. "
                   "Verify that the brightness level is between X4fL and Y4fL.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl4Timer(pages, progressBar);
    });

    return page;
}

QWidget* CreateStep24Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3030");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
       new QLabel("Dimming Bus 0-5V 400 Hz Control");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Set the dimming control voltage to 0V. Illuminate the front cell with a 10 lux (+/- 10%) level (with a Shott KL 1500 light source or equivalent)."
                   "Press Begin Timer. The level must be between X5fL and Y5fL.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl5Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE10Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3035");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Mask the front ILS so that the brightness on the front ILS is less than 1 lux. "
                   "Press Begin Timer. The level must be between X6fL and Y6fL.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl6Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE11Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply 5 VAC at the dimming bus and"
                   "illuminate the front ILS with a light"
                   "greater than 1000 lux. Press the Begin Timer button.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl7Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestE12Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest E");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 3045");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("1. Mask the front ILS so that the brightness on the front ILS"
                   "is less than 1 lux.");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Set the dimming control voltage to 2.8V + 0.1V "
                   "(or 1.8V + 0.1 V for PB version only). Press the Begin Timer button."
                   "The level must be between X8fL and Y8fL.");

    instruction2->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl8Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF1Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 LS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("With the unit in its initial wiring configuration, "
                   "generate a value of +1500 ft/mn "
                   "(rounded off to 1504 ft/mn given the resolution of the message "
                   "equal to 16 ft/mn). Press Begin Timer button."
                   "Ensure that it positions itself opposite the +1500 ft/mn graduation with a tolerance"
                   "of +/- 30 ft/mn.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl9Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF2Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 LS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("With the unit in its initial wiring configuration, "
                   "generate a value of +1500 ft/mn "
                   "(rounded off to 1504 ft/mn given the resolution of the message "
                   "equal to 16 ft/mn). Press Begin Timer button.");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Set the dimming control voltage to 2.8V + 0.1V "
                   "(or 1.8V + 0.1 V for PB version only). Press the Begin Timer button."
                   "The level must be between X8fL and Y8fL.");

    instruction2->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl9Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF3Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 429 LS Input (Port 2)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("1. Select the secondary input by flipping toggle switch 37 to 28VDC"
                   "with toggle switch 31 remaining in the Open position.");

    instruction1->setAlignment(Qt::AlignCenter);

    QLabel *instruction2 =
        new QLabel("2. Generate messages on label 212 for a value of"
                   "1500 ft/mn (approached at 1504 ft/mn). "
                   "Press the Begin Timer Button."
                   "Ensure that it positions itself opposite the -1500 ft/mn graduation "
                   "with a tolerance of +/- 30 ft/mn.");

    instruction2->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addWidget(instruction2);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl10Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF4Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4020");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 HS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked,
    //[pages, progressBar]() {
    //    DimmingControl10Timer(pages, progressBar);
    //});

    return page;
}

QWidget* SubtestF5Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4030");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 HS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("1. Select the primary bus and the ARINC 429"
                   "HS type vertical speed input by flipping toggle switches"
                   "31, 32, 33, and 37 to the OPEN position and toggle switch 34 to the upward position (15).");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    //QObject::connect(beginButton, &QPushButton::clicked,
    //[pages, progressBar]() {
    //    DimmingControl10Timer(pages, progressBar);
    //});

    return page;
}

QWidget* SubtestF6Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 HS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(32);
    });

    return page;
}

QWidget* SubtestF7Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 HS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(33);
    });

    return page;
}

QWidget* SubtestF8Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4050");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 429 HS Input (Port 1)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Generate ARINC 429 HS messages on label 365 with a value of +1476 ft/mn on the primary input only."
                   "Press Begin Timer Button."
                   "Ensure that it positions itself opposite the +7.5m/s graduation with a tolerance of +/-0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QPushButton *noButton =
        new QPushButton("Pass");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(34);
    });
    QObject::connect(noButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(34);
    });

    return page;
}

QWidget* SubtestF9Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4060");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 429 HS Input (Port 2)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Modify the previous configuration of the toggle switches by flipping toggle switch 31 in the upwards position (39)."
                   "Generate messages on label 365 for a value of -1476 ft/mn on this input only. "
                   "Press Begin Timer Button."
                   "Ensure that it positions itself opposite the -7.5 m/s graduation with a tolerance of +/- 0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QPushButton *noButton =
        new QPushButton("Pass");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(35);
    });
    QObject::connect(noButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(35);
    });

    return page;
}


QWidget* SubtestF10Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4060");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 429 HS Input (Port 2)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Modify the previous configuration of the toggle switches by flipping toggle switch 31 in the upwards position (39)."
                   "Generate messages on label 365 for a value of -1476 ft/mn on this input only. "
                   "Press Begin Timer Button."
                   "Ensure that it positions itself opposite the -7.5 m/s graduation with a tolerance of +/- 0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QPushButton *noButton =
        new QPushButton("Pass");
    noButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(35);
    });
    QObject::connect(noButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(35);
    });

    return page;
}

QWidget* SubtestF11Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4070");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove input power..");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(36);
    });


    return page;
}

QWidget* SubtestF12Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4080");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Modify the configuration of the toggle switches so that pins 32 and 33 are toggled upwards (15) "
                   "and that pins 31, 34 and 37 are flipped to the Open position.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(37);
    });


    return page;
}

QWidget* SubtestF13Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4090");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power and generate ARINC 429 HS messages on label 365 with a value of +1476 ft/mn.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(38);
    });


    return page;
}

QWidget* SubtestF14Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4100");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Press the Begin Timer Button."
                   "Ensure that it positions itself opposite the +7.5 m/s graduation with a tolerance of +/- 0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl1ATimer(pages, progressBar);
    });


    return page;
}

QWidget* SubtestF15Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4110");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Stop the transmission of messages on the Port 3 input and transmit an ARINC 429 LS messsage on label 212"
                   "with a value of -1476 ft/mn(approached at -1472 ft/mn on the primary input.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(40);
    });


    return page;
}

QWidget* SubtestF16Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4120");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Tertiary ARINC 429 HS priority Input (Port 3)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the indicator processes this new data from the primary bus."
                   "Press the Begin Timer Button."
                   "Ensure that the pointer is stabilized and opposite the -7.5 m/s graduation with a tolerance of +/-0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl1BTimer(pages, progressBar);
    });


    return page;
}

QWidget* SubtestF17Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4130");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(43);
    });


    return page;
}

QWidget* SubtestF18Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4140");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Select ARINC 565 vertical speed input by flipping toggle switch 32 to the Open position and toggle switches 33 and 34 towards the upwards position (15)");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(44);
    });


    return page;
}

QWidget* SubtestF19Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4150");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Flip toggle switch 8 (Validity Input) to +28VDC.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(45);
    });


    return page;
}

QWidget* SubtestF20Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4160");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(46);
    });


    return page;
}

QWidget* SubtestF21Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4170");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply Vref, the reference voltage (26 +/- 2.5VAC 400 Hz), to (5) and (16).");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(47);
    });


    return page;
}

QWidget* SubtestF22Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 41800");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply a 2884 X 10-6 x Vref signal in phase with the reference on pins 4 (high signal) and 6 (low signal) (ARINC 565 primary analog AC).");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Continue");
    continueButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(48);
    });


    return page;
}

QWidget* SubtestF23Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4190");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Press Begin Timer Button."
                   "Ensure that the pointer is stabilized opposite the +1.5 m/s ggraduation with a tolerance of +/- 0.15 m/s.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *beginButton =
        new QPushButton("Begin Timer");
    beginButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl13Timer(pages, progressBar);
    });


    return page;
}

QWidget* SubtestF24Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4200");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Press Begin Timer Button."
                   "Ensure that the output voltage measured between (19) and (20) is 2884 x 10-6 x Vref +/- 3 mV "
                   "and that it is in phase with the bootstrap output reference voltage (13) and (39) at +/0 10 degrees.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *passButton =
        new QPushButton("Pass");
    passButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );

    QPushButton *failButton =
        new QPushButton("Fail");
    failButton->setStyleSheet("QPushButton {"
                               "background-color: #15326A;"
                               "color: #FFFFFF;"
                               "}"
                               "QPushButton:pressed {"
                               "background-color: #FFFFFF;"
                               "color: #15326A;"
                               "}"
                               );


    QProgressBar *progressBar = new QProgressBar;
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setTextVisible(true);


    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(1);
    layout->addWidget(title2);
    layout->addWidget(title3);
    layout->addStretch(1);
    layout->addWidget(instruction1);
    layout->addStretch(2);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(50);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(50);
    });




    return page;
}
// Pick up back here at Subtest E Part 3000

void PowerConsumptionTimer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(3);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl1ATimer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(17);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl1BTimer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 120)
        {
            timer->stop();

            pages->setCurrentIndex(20);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl2ATimer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(21);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl2BTimer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 120)
        {
            timer->stop();

            pages->setCurrentIndex(22);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl3Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 1)
        {
            timer->stop();

            pages->setCurrentIndex(23);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl4Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(24);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl5Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(25);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl6Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(26);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl7Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(27);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl8Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 60)
        {
            timer->stop();

            pages->setCurrentIndex(28);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl9Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 20)
        {
            timer->stop();

            pages->setCurrentIndex(29);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl10Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 20)
        {
            timer->stop();

            pages->setCurrentIndex(30);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl11Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 2)
        {
            timer->stop();

            pages->setCurrentIndex(39);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl12Timer(QStackedWidget *pages, QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 20)
        {
            timer->stop();

            pages->setCurrentIndex(42);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl13Timer(QStackedWidget *pages, QProgressBar *progressBar) {
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    float *seconds = new float(0.0);
    float *percentage = new float(0.0);


    QObject::connect(timer, &QTimer::timeout, [timer, pages, seconds, percentage, progressBar]() {


        (*seconds)++;
        *percentage = (*seconds/60.0f)*100.0f;
        progressBar->setValue(*percentage);

        if (*seconds >= 20)
        {
            timer->stop();

            pages->setCurrentIndex(49);

            delete seconds;
            timer->deleteLater();
            progressBar->deleteLater();
        }
    });

    timer->start(1000);
}







