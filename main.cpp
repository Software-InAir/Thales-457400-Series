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
QWidget* CreateStep1Page(QStackedWidget *pages);
QWidget* CreateStep2Page(QStackedWidget *pages);
QWidget* CreateStep3Page(QStackedWidget *pages);
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



void PowerConsumptionTimer(QStackedWidget *pages, QProgressBar *bar);

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
    pages->addWidget(CreateStep1Page(pages));
    pages->addWidget(CreateStep2Page(pages));
    pages->addWidget(CreateStep3Page(pages));
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



QWidget* CreateStep1Page(QStackedWidget *pages)
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

QWidget* CreateStep2Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);

    QLabel *title =
        new QLabel("Subtest 1: Power Consumption");
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

QWidget* CreateStep3Page(QStackedWidget *pages)
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

QWidget* CreateStep4Page(QStackedWidget *pages)
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

QWidget* CreateStep5Page(QStackedWidget *pages)
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

QWidget* CreateStep6Page(QStackedWidget *pages)
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

QWidget* CreateStep7Page(QStackedWidget *pages)
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

QWidget* CreateStep8Page(QStackedWidget *pages) {
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

QWidget* CreateStep9Page(QStackedWidget *pages) {
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

QWidget* CreateStep10Page(QStackedWidget *pages) {
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

QWidget* CreateStep11Page(QStackedWidget *pages) {
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

QWidget* CreateStep12Page(QStackedWidget *pages) {
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

QWidget* CreateStep13Page(QStackedWidget *pages) {
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

QWidget* CreateStep14Page(QStackedWidget *pages) {
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

QWidget* CreateStep15Page(QStackedWidget *pages) {
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
        new QLabel("Integrated Light Sensor (ILS) Control Illuminate the front cell with a 200 lux (+ 10%) level with a Shott KL 1500 light source with a 3000 K color temperature or equivalent. Put a MF - millipore membrane in front fo the cell to verify the illumination level.");

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







