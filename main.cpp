#include <QApplication>
#include <QWidget>
#include <QStackedWidget>
#include <QTimer>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>
#include <QComboBox>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>


QWidget* CreateWelcomePage(QStackedWidget *pages);
QWidget* InitialConditionsPage(QStackedWidget *pages);
QWidget* PowerConsumptionPage(QStackedWidget *pages);
QWidget* SubtestAPage(QStackedWidget *pages);
QWidget* SubtestB1Page(QStackedWidget *pages);
QWidget* SubtestB2Page(QStackedWidget *pages);
QWidget* SubtestB3Page(QStackedWidget *pages);
QWidget* SubtestC1Page(QStackedWidget *pages);
QWidget* SubtestC2Page(QStackedWidget *pages);
QWidget* SubtestD1Page(QStackedWidget *pages);
QWidget* SubtestD2Page(QStackedWidget *pages);
QWidget* SubtestD3Page(QStackedWidget *pages);
QWidget* SubtestD4Page(QStackedWidget *pages);
QWidget* SubtestD5Page(QStackedWidget *pages);
QWidget* SubtestD6Page(QStackedWidget *pages);
QWidget* SubtestE1Page(QStackedWidget *pages);
QWidget* SubtestE2Page(QStackedWidget *pages);
QWidget* SubtestE4Page(QStackedWidget *pages);
QWidget* SubtestE5Page(QStackedWidget *pages);
QWidget* SubtestE6Page(QStackedWidget *pages);
QWidget* SubtestE7Page(QStackedWidget *pages);
QWidget* SubtestE8Page(QStackedWidget *pages);
QWidget* SubtestE9Page(QStackedWidget *pages);
QWidget* SubtestE10Page(QStackedWidget *pages);
QWidget* SubtestE11Page(QStackedWidget *pages);
QWidget* SubtestE12Page(QStackedWidget *pages);
QWidget* SubtestE13Page(QStackedWidget *pages);
QWidget* SubtestF1Page(QStackedWidget *pages);
QWidget* SubtestF2Page(QStackedWidget *pages);
QWidget* SubtestF3Page(QStackedWidget *pages);
QWidget* SubtestF4Page(QStackedWidget *pages);
QWidget* SubtestF5Page(QStackedWidget *pages);
QWidget* SubtestF6Page(QStackedWidget *pages);
QWidget* SubtestF7Page(QStackedWidget *pages);
QWidget* SubtestF8Page(QStackedWidget *pages);
QWidget* SubtestF9Page(QStackedWidget *pages);
QWidget* SubtestF10Page(QStackedWidget *pages);
QWidget* SubtestF11Page(QStackedWidget *pages);
QWidget* SubtestF12Page(QStackedWidget *pages);
QWidget* SubtestF13Page(QStackedWidget *pages);
QWidget* SubtestF14Page(QStackedWidget *pages);
QWidget* SubtestF15Page(QStackedWidget *pages);
QWidget* SubtestF16Page(QStackedWidget *pages);
QWidget* SubtestF17Page(QStackedWidget *pages);
QWidget* SubtestF18Page(QStackedWidget *pages);
QWidget* SubtestF19Page(QStackedWidget *pages);
QWidget* SubtestF20Page(QStackedWidget *pages);
QWidget* SubtestF21Page(QStackedWidget *pages);
QWidget* SubtestF22Page(QStackedWidget *pages);
QWidget* SubtestF23Page(QStackedWidget *pages);
QWidget* SubtestF24Page(QStackedWidget *pages);
QWidget* SubtestF25Page(QStackedWidget *pages);
QWidget* SubtestF26Page(QStackedWidget *pages);
QWidget* SubtestF27Page(QStackedWidget *pages);
QWidget* SubtestF28Page(QStackedWidget *pages);
QWidget* SubtestF29Page(QStackedWidget *pages);
QWidget* SubtestF30Page(QStackedWidget *pages);
QWidget* SubtestF31Page(QStackedWidget *pages);
QWidget* SubtestF32Page(QStackedWidget *pages);
QWidget* SubtestF33Page(QStackedWidget *pages);
QWidget* SubtestF34Page(QStackedWidget *pages);
QWidget* SubtestF35Page(QStackedWidget *pages);
QWidget* SubtestF36Page(QStackedWidget *pages);
QWidget* SubtestF37Page(QStackedWidget *pages);
QWidget* SubtestF38Page(QStackedWidget *pages);
QWidget* SubtestF39Page(QStackedWidget *pages);
QWidget* SubtestF40Page(QStackedWidget *pages);
QWidget* SubtestF41Page(QStackedWidget *pages);
QWidget* SubtestF42Page(QStackedWidget *pages);
QWidget* SubtestF43Page(QStackedWidget *pages);
QWidget* SubtestF44Page(QStackedWidget *pages);
QWidget* SubtestF45Page(QStackedWidget *pages);
QWidget* SubtestF46Page(QStackedWidget *pages);
QWidget* SubtestF47Page(QStackedWidget *pages);
QWidget* SubtestF48Page(QStackedWidget *pages);
QWidget* SubtestF49Page(QStackedWidget *pages);
QWidget* SubtestF50Page(QStackedWidget *pages);
QWidget* SubtestF51Page(QStackedWidget *pages);
QWidget* SubtestF52Page(QStackedWidget *pages);
QWidget* SubtestF53Page(QStackedWidget *pages);
QWidget* SubtestF54Page(QStackedWidget *pages);
QWidget* SubtestF55Page(QStackedWidget *pages);
QWidget* SubtestF56Page(QStackedWidget *pages);
QWidget* SubtestF57Page(QStackedWidget *pages);
QWidget* SubtestF58Page(QStackedWidget *pages);
QWidget* SubtestF59Page(QStackedWidget *pages);
QWidget* SubtestF60Page(QStackedWidget *pages);
QWidget* SubtestF61Page(QStackedWidget *pages);
QWidget* SubtestF62Page(QStackedWidget *pages);
QWidget* SubtestF63Page(QStackedWidget *pages);
QWidget* SubtestF64Page(QStackedWidget *pages);
QWidget* SubtestF65Page(QStackedWidget *pages);
QWidget* SubtestF66Page(QStackedWidget *pages);
QWidget* SubtestF67Page(QStackedWidget *pages);
QWidget* SubtestF68Page(QStackedWidget *pages);
QWidget* SubtestF69Page(QStackedWidget *pages);
QWidget* SubtestF70Page(QStackedWidget *pages);
QWidget* SubtestF71Page(QStackedWidget *pages);
QWidget* SubtestF72Page(QStackedWidget *pages);
QWidget* SubtestF73Page(QStackedWidget *pages);
QWidget* SubtestF74Page(QStackedWidget *pages);
QWidget* SubtestF75Page(QStackedWidget *pages);
QWidget* SubtestF76Page(QStackedWidget *pages);


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
void DimmingControl11Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl12Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl13Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl14Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl15Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl16Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl17Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl18Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl19Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl20Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl21Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl22Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl23Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl24Timer(QStackedWidget *pages, QProgressBar *bar);
void DimmingControl25Timer(QStackedWidget *pages, QProgressBar *bar);



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
    pages->addWidget(SubtestB1Page(pages));
    pages->addWidget(SubtestB2Page(pages));
    pages->addWidget(SubtestB3Page(pages));
    pages->addWidget(SubtestC1Page(pages));
    pages->addWidget(SubtestC2Page(pages));
    pages->addWidget(SubtestD1Page(pages));
    pages->addWidget(SubtestD2Page(pages));
    pages->addWidget(SubtestD3Page(pages));
    pages->addWidget(SubtestD4Page(pages));
    pages->addWidget(SubtestD5Page(pages));
    pages->addWidget(SubtestD6Page(pages));
    pages->addWidget(SubtestE1Page(pages));
    pages->addWidget(SubtestE2Page(pages));
    pages->addWidget(SubtestE4Page(pages));
    pages->addWidget(SubtestE5Page(pages));
    pages->addWidget(SubtestE6Page(pages));
    pages->addWidget(SubtestE7Page(pages));
    pages->addWidget(SubtestE8Page(pages));
    pages->addWidget(SubtestE9Page(pages));
    pages->addWidget(SubtestE10Page(pages));
    pages->addWidget(SubtestE11Page(pages));
    pages->addWidget(SubtestE12Page(pages));
    pages->addWidget(SubtestE13Page(pages));
    pages->addWidget(SubtestF1Page(pages));
    pages->addWidget(SubtestF2Page(pages));
    pages->addWidget(SubtestF3Page(pages));
    pages->addWidget(SubtestF4Page(pages));
    pages->addWidget(SubtestF5Page(pages));
    pages->addWidget(SubtestF6Page(pages));
    pages->addWidget(SubtestF7Page(pages));
    pages->addWidget(SubtestF8Page(pages));
    pages->addWidget(SubtestF9Page(pages));
    pages->addWidget(SubtestF10Page(pages));
    pages->addWidget(SubtestF11Page(pages));
    pages->addWidget(SubtestF12Page(pages));
    pages->addWidget(SubtestF13Page(pages));
    pages->addWidget(SubtestF14Page(pages));
    pages->addWidget(SubtestF15Page(pages));
    pages->addWidget(SubtestF16Page(pages));
    pages->addWidget(SubtestF17Page(pages));
    pages->addWidget(SubtestF18Page(pages));
    pages->addWidget(SubtestF19Page(pages));
    pages->addWidget(SubtestF20Page(pages));
    pages->addWidget(SubtestF21Page(pages));
    pages->addWidget(SubtestF22Page(pages));
    pages->addWidget(SubtestF23Page(pages));
    pages->addWidget(SubtestF24Page(pages));
    pages->addWidget(SubtestF25Page(pages));
    pages->addWidget(SubtestF26Page(pages));
    pages->addWidget(SubtestF27Page(pages));
    pages->addWidget(SubtestF28Page(pages));
    pages->addWidget(SubtestF29Page(pages));
    pages->addWidget(SubtestF30Page(pages));
    pages->addWidget(SubtestF31Page(pages));
    pages->addWidget(SubtestF32Page(pages));
    pages->addWidget(SubtestF33Page(pages));
    pages->addWidget(SubtestF34Page(pages));
    pages->addWidget(SubtestF35Page(pages));
    pages->addWidget(SubtestF36Page(pages));
    pages->addWidget(SubtestF37Page(pages));
    pages->addWidget(SubtestF38Page(pages));
    pages->addWidget(SubtestF39Page(pages));
    pages->addWidget(SubtestF40Page(pages));
    pages->addWidget(SubtestF41Page(pages));
    pages->addWidget(SubtestF42Page(pages));
    pages->addWidget(SubtestF43Page(pages));
    pages->addWidget(SubtestF44Page(pages));
    pages->addWidget(SubtestF45Page(pages));
    pages->addWidget(SubtestF46Page(pages));
    pages->addWidget(SubtestF47Page(pages));
    pages->addWidget(SubtestF48Page(pages));
    pages->addWidget(SubtestF49Page(pages));
    pages->addWidget(SubtestF50Page(pages));
    pages->addWidget(SubtestF51Page(pages));
    pages->addWidget(SubtestF52Page(pages));
    pages->addWidget(SubtestF53Page(pages));
    pages->addWidget(SubtestF54Page(pages));
    pages->addWidget(SubtestF55Page(pages));
    pages->addWidget(SubtestF56Page(pages));
    pages->addWidget(SubtestF57Page(pages));
    pages->addWidget(SubtestF58Page(pages));
    pages->addWidget(SubtestF59Page(pages));
    pages->addWidget(SubtestF60Page(pages));
    pages->addWidget(SubtestF61Page(pages));
    pages->addWidget(SubtestF62Page(pages));
    pages->addWidget(SubtestF63Page(pages));
    pages->addWidget(SubtestF64Page(pages));
    pages->addWidget(SubtestF65Page(pages));
    pages->addWidget(SubtestF66Page(pages));
    pages->addWidget(SubtestF67Page(pages));
    pages->addWidget(SubtestF68Page(pages));
    pages->addWidget(SubtestF69Page(pages));
    pages->addWidget(SubtestF70Page(pages));
    pages->addWidget(SubtestF71Page(pages));
    pages->addWidget(SubtestF72Page(pages));
    pages->addWidget(SubtestF73Page(pages));
    pages->addWidget(SubtestF74Page(pages));
    pages->addWidget(SubtestF75Page(pages));
    pages->addWidget(SubtestF76Page(pages));



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
    QPixmap inairlogo("C:\\Users\\c.stanley\\Desktop\\Thales-457400-Series-0914sod\\images\\inair-logo.png");

    inairlogoLabel->setPixmap(inairlogo);
    inairlogoLabel->setScaledContents(true);
    inairlogoLabel->setStyleSheet("background-color: #FFFFFF;");

    QLabel *thaleslogoLabel = new QLabel;
    QPixmap thaleslogo("C:\\Users\\c.stanley\\Desktop\\Thales-457400-Series-0914sod\\images\\thales_logo.png");

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
    QPixmap selfTestImage("C:\\Users\\c.stanley\\Desktop\\Thales-457400-Series-0914sod\\images\\Subtest2SelfTestConfirmation.png");

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
    QPixmap selfTestImage("C:\\Users\\c.stanley\\Desktop\\Thales-457400-Series-0914sod\\images\\SubtestDShopTest.png");

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
        new QLabel("Part 2074 A");
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
        new QLabel("Part 2074 B");
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
        pages->setCurrentIndex(16);
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
        pages->setCurrentIndex(17);
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
        pages->setCurrentIndex(18);
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
        DimmingControl1ATimer(pages, progressBar);
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
        DimmingControl1BTimer(pages, progressBar);
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

QWidget* SubtestE13Page(QStackedWidget *pages) {
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

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(31);
    });

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

    QObject::connect(continueButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(32);
    });

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
        pages->setCurrentIndex(33);
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
        pages->setCurrentIndex(34);
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
        DimmingControl11Timer(pages, progressBar);
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
    buttonlayout->addWidget(beginButton,0, Qt::AlignCenter);
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(36);
    });
    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(36);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
   [pages, progressBar]() {
       DimmingControl12Timer(pages, progressBar);
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
        pages->setCurrentIndex(37);
    });
    QObject::connect(noButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(37);
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
        pages->setCurrentIndex(38);
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
        pages->setCurrentIndex(39);
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
        pages->setCurrentIndex(40);
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
        DimmingControl12Timer(pages, progressBar);
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
        pages->setCurrentIndex(42);
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
        DimmingControl13Timer(pages, progressBar);
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
        pages->setCurrentIndex(44);
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
        pages->setCurrentIndex(45);
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
        pages->setCurrentIndex(46);
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
        pages->setCurrentIndex(47);
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
        pages->setCurrentIndex(48);
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
        new QLabel("Part 4180");
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
        pages->setCurrentIndex(49);
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
        DimmingControl14Timer(pages, progressBar);
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
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(51);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(50);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
   [pages, progressBar]() {
       DimmingControl15Timer(pages, progressBar);
    });



    return page;
}

QWidget* SubtestF25Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4210");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply 14.19 x 10-3 x Vref in phase with the reference on the ARINC 565 primary input."
                        "Press Begin Timer"
                        "After stabilization of the pointer (less than 20 sec.) check that it positions itself opposite"
                        "the +7,5 m/s graduation with an accuracy of ±0,15 m/s.");

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
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(52);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(52);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl15Timer(pages, progressBar);
    });




    return page;
}

QWidget* SubtestF26Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4220");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the bootstrap output voltage is 14.19 x 10-3 x Vref ±3 mV in"
                        "phase with the reference voltage ±10 degrees.");

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
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(53);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(53);
    });

    return page;
}

QWidget* SubtestF27Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4230");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Primary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply 14.19 x 10-3 x Vref in phase opposition to the reference on the ARINC 565"
                        "primary input. "
                        "Press Begin Time button."
                        "After stabilization of the pointer check that it positions"
                        "itself opposite the -7,5 m/s graduation with an accuracy of ±0,15 m/s.");

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
    buttonlayout->addWidget(beginButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(passButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(54);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(54);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl16Timer(pages, progressBar);
    });




    return page;
}

QWidget* SubtestF28Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4240");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check as in step 4200 that the bootstrap output voltage is 14.19 x 10-3 x Vref ±3 mV in"
                    "phase opposition to the reference voltage ±10 degrees.");

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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);

    QObject::connect(passButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(55);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(55);
    });

    return page;
}

QWidget* SubtestF29Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4250");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Flip toggle switch 37 to the upwards position (+28VDC) so as to select the secondary input and pin 18"
                        "(secondary vertical speed validity input).");

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
        pages->setCurrentIndex(56);
    });

    return page;
}

QWidget* SubtestF30Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4260");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply Vref the reference voltage to pin 1 (hot V ref.) and pin 3 (cold V ref.).");

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
        pages->setCurrentIndex(57);
    });

    return page;
}

QWidget* SubtestF31Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4270");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Send a 2884 x 10-6 x Vref signal in phase with the reference voltage on pin 2 (high)"
                        "and pin 36 (low).");

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
        pages->setCurrentIndex(58);
    });

    return page;
}

QWidget* SubtestF32Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4280 A");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Press Begin Timer button."
                   "Check that the pointer stabilizes opposite the +1,5 m/s graduation"
                   "with a tolerance of ±0,15 m/s.");

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
        pages->setCurrentIndex(59);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(59);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl17Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF33Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4280 B");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply 14.19 x 10-3 x Vref in phase with the reference on the ARINC 565 secondary input."
            "Press Begin Timer button."
            "After stabilization of the pointer check that it positions itself opposite"
            "the +7,5 m/s graduation with an accuracy of ±0,15 m/s.");

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
        pages->setCurrentIndex(60);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(60);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl18Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF34Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4280 C");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Secondary ARINC 565 Input (Analog AC)");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply 14.19 x 10-3 x Vref in phase opposition to the reference on the ARINC 565"
                            "secondary input. "
                            "Press Begin Timer button."
                            "After stabilization of the pointer check that it positions"
                            "itself opposite the -7,5 m/s graduation with an accuracy of ±0,15 m/s.");

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
        pages->setCurrentIndex(61);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(61);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl19Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF35Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4290");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
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
        pages->setCurrentIndex(62);
    });


    return page;
}

QWidget* SubtestF36Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4300");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Modify the toggle switch configuration so as to select the ARINC 575 type vertical"
                        "speed input (analog DC):"
                        "Toggle Switch 31 is flipped to 39 (DC common)."
                        "Toggle Switches 32 and 34 are flipped to pin 15 (strap common)."
                        "Toggle Switch 33 is flipped to Open.");

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
        pages->setCurrentIndex(63);
    });


    return page;
}

QWidget* SubtestF37Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4310");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power. The following reference voltages are then applied to the"
                    "inputs:"
                    "+12 VDC ±1.2 V on pin 1 (+ Ref.),"
                    "-12 VDC ±1.2 V on pin 3 (- Ref.).");

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
        pages->setCurrentIndex(64);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(64);
    });




    return page;
}

QWidget* SubtestF38Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4320 & 4330");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC inpu");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply a +28 VDC signal to input 8 ( vertical speed validity input). "
                   "Apply to the signal input (input 2) a positive V rate equal to: ‖ VRef. + ‖ + ‖ VRef. - ‖ Volt (about +147,5 mV) "
                   "Press Begin Timer button."
                   "After stabilization of the pointer, check that it positions itself"
                    "opposite the +1, 5 m/s graduation with a tolerance of ±0,15 m/s.");

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
        pages->setCurrentIndex(65);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(65);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl20Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF39Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4340");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply to the signal input (pin 2) a positive V rate equal to: ‖ VRef. + ‖ + ‖ VRef. - ‖ Volt"
                            "(about +738 mV)"
                            "Press Begin Timer button."
                            "After stabilization of the pointer, check that it positions itself"
                            "opposite the +7, 5 m/s graduation with a tolerance of ±0,15 m/s.");


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
        pages->setCurrentIndex(66);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(66);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl21Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF40Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4350");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply to the signal input (input 2) a positive V rate equal to: ‖ VRef. + ‖ + ‖ VRef. - ‖ Volt"
                        "(about +738 mV)"
                        "Press Begin Timer button."
                        "After stabilization of the pointer, check that it positions itself"
                            "opposite the +7, 5 m/s graduation with a tolerance of ±0,15 m/s.");

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
        pages->setCurrentIndex(67);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(67);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl22Timer(pages, progressBar);
    });

    return page;
}


QWidget* SubtestF41Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4350 & 4360");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("ARINC 575 Analog DC input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply to the signal input (pin 2) a negative V rate equal to: ‖ VRef. + ‖ + ‖ VRef. - ‖"
                            "Volt (about -738 mV)"
                            "Press Begin Timer button."
                            "After stabilization of the pointer, check that it positions itself"
                            "opposite the - 7, 5 m/s graduation with a tolerance of ±0,15 m/s.");

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
        pages->setCurrentIndex(68);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(68);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl23Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF42Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4370");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
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
        pages->setCurrentIndex(69);
    });

    return page;
}

QWidget* SubtestF43Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4380");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("To select the pneumatic input, set toggle switches as follows:"
                        "Toggle Switch 31 and 33 open."
                        "Toggle Switches 32 and 34 connected to Toggle Switch 15 (strap common).");

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
        pages->setCurrentIndex(70);
    });

    return page;
}


QWidget* SubtestF44Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4390");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power (pointer may appear after around 2 seconds).");

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
        pages->setCurrentIndex(71);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(71);
    });

    return page;
}

QWidget* SubtestF45Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4400");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Connect the pressure input to a variable pressure source.");

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
        pages->setCurrentIndex(73);
    });

    return page;
}

QWidget* SubtestF46Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4410");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that for a constant pressure input (for example ambient pressure) the pointer is"
                        "opposite the zero graduation with a tolerance of ±0,5 m/s");

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
        pages->setCurrentIndex(74);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(74);
    });

    return page;
}

QWidget* SubtestF47Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 2500 ft at +2.5 m/s."
                        "V/S shall remain within +/- 0.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(75);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(75);
    });

    return page;
}

QWidget* SubtestF48Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 2500 ft to 2000 ft at -2.5 m/s."
                        "V/S shall remain within +/- 0.5 m/s during descent. "
                        );

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
        pages->setCurrentIndex(76);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(76);
    });

    return page;
}

QWidget* SubtestF49Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 3000 ft at +5 m/s."
                        "V/S shall remain within +/- 1 m/s during climb. "
                        );

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
        pages->setCurrentIndex(77);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(77);
    });

    return page;
}

QWidget* SubtestF50Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 3000 ft to 2000 ft at -5 m/s."
                        "V/S shall remain within +/- 1 m/s during climb. "
                        );

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
        pages->setCurrentIndex(78);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(78);
    });

    return page;
}

QWidget* SubtestF51Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 4000 ft at +10 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(79);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(79);
    });

    return page;
}

QWidget* SubtestF52Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 4000 ft to 2000 ft at -10 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(80);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(80);
    });

    return page;
}

QWidget* SubtestF53Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 5000 ft at +15 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(81);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(81);
    });

    return page;
}

QWidget* SubtestF54Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 5000 ft to 2000 ft at -15 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(82);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(82);
    });

    return page;
}

QWidget* SubtestF55Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 6000 ft at +20 m/s."
                        "V/S shall remain within +/- 2 m/s during climb. "
                        );

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
        pages->setCurrentIndex(83);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(83);
    });

    return page;
}

QWidget* SubtestF56Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 5000 ft to 2000 ft at -20 m/s."
                        "V/S shall remain within +/- 2 m/s during descent. "
                        );

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
        pages->setCurrentIndex(84);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(84);
    });

    return page;
}

QWidget* SubtestF57Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 2000 ft to 7000 ft at +25 m/s."
                        "V/S shall remain within +/- 2.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(85);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(85);
    });

    return page;
}

QWidget* SubtestF58Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 7000 ft to 2000 ft at -25 m/s."
                        "V/S shall remain within +/- 2.5 m/s during descent. "
                        );

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
        pages->setCurrentIndex(86);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(86);
    });

    return page;
}

QWidget* SubtestF59Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 15000 ft to 17000 ft at +10 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(87);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(87);
    });

    return page;
}

QWidget* SubtestF60Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 17000 ft to 15000 ft at -10 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(88);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(88);
    });

    return page;
}

QWidget* SubtestF61Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 15000 ft to 19000 ft at +20 m/s."
                        "V/S shall remain within +/- 2 m/s during climb. "
                        );

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
        pages->setCurrentIndex(89);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(89);
    });

    return page;
}

QWidget* SubtestF62Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 19000 ft to 15000 ft at -20 m/s."
                        "V/S shall remain within +/- 2 m/s during descent. "
                        );

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
        pages->setCurrentIndex(90);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(90);
    });

    return page;
}

QWidget* SubtestF63Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 28000 ft to 30000 ft at +10 m/s."
                        "V/S shall remain within +/- 1.5 m/s during climb. "
                        );

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
        pages->setCurrentIndex(91);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(91);
    });

    return page;
}

QWidget* SubtestF64Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 30000 ft to 28000 ft at -10 m/s."
                        "V/S shall remain within +/- 1 m/s during descent. "
                        );

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
        pages->setCurrentIndex(92);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(92);
    });

    return page;
}

QWidget* SubtestF65Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Increase altitude on Laversab from 28000 ft to 32000 ft at +20 m/s."
                        "V/S shall remain within +/- 2 m/s during climb. "
                        );

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
        pages->setCurrentIndex(93);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(93);
    });

    return page;
}

QWidget* SubtestF66Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4420");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Ensure that pointer is stabilized."
                        "Decrease altitude on Laversab from 32000 ft to 28000 ft at -20 m/s."
                        "V/S shall remain within +/- 2 m/s during climb. "
                        );

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
        pages->setCurrentIndex(94);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(94);
    });

    return page;
}

QWidget* SubtestF67Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4430");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the pointer damping, on climb and descent, is between 3 and 12 seconds,"
                        "timed over the 10 - 0,1 m/s interval, pointer approaching zero, when slight pressure or"
                        "vacuum is applied and instantaneously released. "
                        );

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
        pages->setCurrentIndex(95);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(95);
    });

    return page;
}

QWidget* SubtestF68Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4440 A");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel(""
                   "Press Begin Timer Button."
                   "Check that, with a total static pressure system volume equal to 1.6 Liter ±0.16 and a"
                        "pressure of 50.7 kPa applied to the static pressure connection, the leakage"
                        "does not cause more than a 0.17 kPa pressure drop during a one minute period.");

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
        pages->setCurrentIndex(96);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(96);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl24Timer(pages, progressBar);
    });


    return page;
}

QWidget* SubtestF69Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest F: Vertical Speed Inputs Accuracy");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 4440 B");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("Pneumatic Input");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel(""
                   "Press Begin Timer Button."
                   "Check that, with a total static pressure system volume equal to 1.6 Liter ±0.16 and a"
                   " pressure of 33.8 kPa applied to the static pressure connection, the leakage"
                    "does not cause more than a 0.17 kPa pressure drop during a one minute period.");

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
        pages->setCurrentIndex(97);
    });

    QObject::connect(failButton, &QPushButton::clicked,
    [pages, progressBar]() {
        pages->setCurrentIndex(97);
    });

    QObject::connect(beginButton, &QPushButton::clicked,
    [pages, progressBar]() {
        DimmingControl25Timer(pages, progressBar);
    });

    return page;
}

QWidget* SubtestF70Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("");
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
        pages->setCurrentIndex(98);
    });

    return page;
}

QWidget* SubtestF71Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Configure the indicator operating mode to TA/RA VSI by setting Toggle Switches 17 and 35 to the Open position.");

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
        pages->setCurrentIndex(99);
    });

    return page;
}

QWidget* SubtestF72Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5020");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Select the pneumatic input (Toggle Switches 31 and 33 to the Open position and Switches 32 and 34 to position"
                        "15 (strap common)) and leave this input at ambient pressure.");

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
        pages->setCurrentIndex(100);
    });

    return page;
}

QWidget* SubtestF73Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5030");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("");
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
        pages->setCurrentIndex(101);
    });

    return page;
}

QWidget* SubtestF74Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("UUT P/N");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);


    QLabel *instruction1 =
        new QLabel("Please select current UUT family from the drop down menu and press Continue.");

    instruction1->setAlignment(Qt::AlignCenter);

    QComboBox *uutSelector =
        new QComboBox();

    uutSelector->addItem("457400EB/FB");
    uutSelector->addItem("457400GB/KB/MB/PB/UB");
    uutSelector->addItem("457400RB/SB");
    uutSelector->addItem("457400TC/WB");

    /*
    if(uutSelector->currentIndex == 0) {
        pages->setCurrentIndex(102);
    }
    else if(uutSelector->currentIndex == 1) {
        pages->setCurrentIndex(103);
    }
    else if(uutSelector->currentIndex == 2) {
        pages->setCurrentIndex(104);
    }
    else if(uutSelector->currentIndex == 3) {
        pages->setCurrentIndex(105);
    }

    */

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

    /*
    QObject::connect(continueButton, &QPushButton::clicked, [pages]() {
        if(uutSelector->currentIndex == 0) {
            pages->setCurrentIndex(102);
        }
        else if(uutSelector->currentIndex == 1) {
            pages->setCurrentIndex(111);
        }
        else if(uutSelector->currentIndex == 2) {
            pages->setCurrentIndex(113);
        }
        else if(uutSelector->currentIndex == 3) {
            pages->setCurrentIndex(120);
        }

    });*/



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
    layout->addWidget(uutSelector);
    layout->addLayout(buttonlayout);
    layout->addStretch(1);
    layout->addWidget(progressBar);
    buttonlayout->addStretch();
    buttonlayout->addWidget(continueButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);



    return page;
}

QWidget* SubtestF75Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);
//---------------------------------------------------------------------------------------------------TODO
    QLabel *instruction1 =
        new QLabel("Include Message Tests with Excalibur Serial Comm Card");

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
        pages->setCurrentIndex(104);
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
        pages->setCurrentIndex(104);
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

QWidget* SubtestF76Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5050");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("");
    title3->setStyleSheet("P/N 457400EB/FB"
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the lower right hand push-button on the front face and verify that the same"
                        "symbology is displayed with the scale corresponding to 12 NM (with an additional"
                        "range ring at 6 NM and the value 12 MN indicated in the upper right hand corner of the"
                        "display).");

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
        pages->setCurrentIndex(105);
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
        pages->setCurrentIndex(105);
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

QWidget* SubtestF77Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5060");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push the button a second time and verify that the display corresponds to the initial picture");

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
        pages->setCurrentIndex(106);
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
        pages->setCurrentIndex(106);
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

QWidget* SubtestF78Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5070");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("To test the correct operation of the lower left hand push-button on the front face, delete"
                "the intruder #1 (RA) and #2 (TA) from the intruder file transmitted by the TCAS bus and"
                "verfy that the intruders, the own aircraft symbol, the range ring and the selected range"
                "are no longer displayed and replaced by the markings 'VERTICAL SPEED' and 'x' 1000 FT/MN.");

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
        pages->setCurrentIndex(107);
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
        pages->setCurrentIndex(107);
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

QWidget* SubtestF79Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5080");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the button and verify that the intruders #3 and #4 only are displayed.");

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
        pages->setCurrentIndex(108);
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
        pages->setCurrentIndex(108);
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

QWidget* SubtestF80Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5090");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push a second time and verify that the display returns to the previous configuration.");

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
        pages->setCurrentIndex(109);
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
        pages->setCurrentIndex(109);
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

QWidget* SubtestF81Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5100");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400EB/FB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Restore normal configuration of TCAS messages by reincluding intruder and #1 and #2"
                    "and verify that the picture displayed corresponds to the initial picture");

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
        pages->setCurrentIndex(110);
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
        pages->setCurrentIndex(110);
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

QWidget* SubtestF82Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5110");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400GB/KB/MB/PB/UB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Generate the messages corresponding to the configuration given in step 5040 (except"
                        "Intruders #5 and #6 and steps 5050 to 5100) and check that the picture displayed"
                        "corresponds to that given");

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
        pages->setCurrentIndex(112);
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
        pages->setCurrentIndex(112);
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

QWidget* SubtestF83Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5120");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Generate the messages corresponding to the configuration given in step 5040 (except"
                    "Intruders #5 and #6 which are optional) and check that the picture displayed"
                    "corresponds to that given");

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
        pages->setCurrentIndex(114);
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
        pages->setCurrentIndex(114);
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

QWidget* SubtestF84Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5130");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the lower right hand push-button on the front face * and verify that the same"
                    "symbology is displayed with the scale corresponding to 16 NM (with an additional"
                    "range ring at 6 NM and the value 16 NM indicated in the upper right hand corner of the"
                    "display).");

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
        pages->setCurrentIndex(115);
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
        pages->setCurrentIndex(115);
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

QWidget* SubtestF85Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5140");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Check that, with the 16 NM range selected, any further action on this push-button does"
                        "not modify the selected range.");

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
        pages->setCurrentIndex(116);
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
        pages->setCurrentIndex(116);
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

QWidget* SubtestF86Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5150");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the lower left hand push-button on the front face * and verify that:"
                        "the display switches from previous displayed range (16 NM) to the next lower"
                        "selectable range (8 NM).");

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
        pages->setCurrentIndex(117);
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
        pages->setCurrentIndex(117);
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

QWidget* SubtestF87Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5160");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push the button again (second time) and verify that the display switches from actual"
                        "range to the next lower range (8 NM to 4 NM).");

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
        pages->setCurrentIndex(118);
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
        pages->setCurrentIndex(118);
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

QWidget* SubtestF88Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5170");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N  457400RB/SB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("With the 4 NM range selected, any further action on this button does not modify the"
                        "selected range.");

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
        pages->setCurrentIndex(119);
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
        pages->setCurrentIndex(119);
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

QWidget* SubtestF89Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5180");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Generate the messages corresponding to the configuration given in step 5040 and"
                    "check that the picture displayed corresponds to that given");

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
        pages->setCurrentIndex(121);
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
        pages->setCurrentIndex(121);
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

QWidget* SubtestF90Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5190");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the lower right hand push-button on the front face and verify that the same"
                    "symbology is displayed with the scale corresponding to 12 NM (with an additional"
                    "range ring at 6 NM and the value 12 NM indicated in the upper right hand corner of the"
                    "display).");

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
        pages->setCurrentIndex(121);
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
        pages->setCurrentIndex(121);
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

QWidget* SubtestF91Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5200");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push the button a second time and verify that the display corresponds to the initial picture");

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
        pages->setCurrentIndex(122);
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
        pages->setCurrentIndex(122);
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

QWidget* SubtestF92Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5300");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push once the lower left hand push-button on the front face and verify that:"
                    "the intruder #5 is displayed in addition to the intial picture (same symbol as for"
                    "intruder #4 with '32' above the symbol),"
                    "the selected mode is annunciated in the lower left hand corner of the display"
                    "('Above' mode).");

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
        pages->setCurrentIndex(123);
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
        pages->setCurrentIndex(123);
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

QWidget* SubtestF93Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5310");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push the button again (second time) and verify that:"
                    "the intruder #5 is blanked and the intruder #6 is displayed (same symbol as for"
                    "intruder #4 with '-32' below the symbol),"
                    "the selected mode is annunciated in the lower left hand corner of the display"
                    "('Below' mode).");

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
        pages->setCurrentIndex(124);
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
        pages->setCurrentIndex(124);
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

QWidget* SubtestF94Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5320");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("Push the button again (third time) and verify that the initial picture is displayed again.");

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
        pages->setCurrentIndex(125);
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
        pages->setCurrentIndex(125);
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

QWidget* SubtestF95Page(QStackedWidget *pages)
{
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest G: ARINC 429 HS TCAS DIGITAL INPUT");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 5330");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);


    QLabel *title3 =
        new QLabel("P/N 457400TC/WB");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);

    QLabel *instruction1 =
        new QLabel("With the 4NM range selected, any further action on this button does not modify the"
                            "selected range (For versions WB only).");

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
        pages->setCurrentIndex(126);
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
        pages->setCurrentIndex(126);
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

QWidget* SubtestF96Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6000");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
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
        pages->setCurrentIndex(127);
    });

    return page;
}


QWidget* SubtestF97Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Is the current UUT a member of the GB '15xx' or MB '15xx' families?");

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
        pages->setCurrentIndex(128);
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
        pages->setCurrentIndex(130);
    });


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
    buttonlayout->addWidget(yesButton, 0, Qt::AlignCenter);
    buttonlayout->addWidget(noButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF98Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6010");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Configure the operating mode of the indicator in TA/VSI (Toggle Switch 17 in the upwards position (15)"
                "and Toggle Switch 35 in the downwards position (Open)");

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
        pages->setCurrentIndex(131);
    });

    return page;
}

QWidget* SubtestF99Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6020");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Using the configuration described in para. “VERTICAL SPEED INPUT ACCURACY “:"
                        "Primary ARINC 565 Input (Analog AC) or Primary ARINC 565 Input (Analog AC) for"
                        "GB2100. Select the primary vertical speed analog input (ARINC 565).");

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
        pages->setCurrentIndex(132);
    });

    return page;
}

QWidget* SubtestF100Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6030");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
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
        pages->setCurrentIndex(133);
    });

    return page;
}

QWidget* SubtestF101Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6040");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Generate the sequence described in para. 'ARINC 429 HS TCAS DIGITAL INPUT” on the TCAS input.'");

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
        pages->setCurrentIndex(134);
    });

    return page;
}

QWidget* SubtestF102Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6050");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the validity output is grounded.");

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
        pages->setCurrentIndex(135);
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
        pages->setCurrentIndex(135);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF103Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6060");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Modify the label 270 in the TCAS messages so as to return to the configuration"
                        "described in para. “ARINC 429 HS TCAS DIGITAL INPUT” except label 270 SSM ="
                        "TEST [bit (30,31) = (0,1)].");

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
        pages->setCurrentIndex(136);
    });

    return page;
}

QWidget* SubtestF104Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6070");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the validity output (pin 29) goes into OPEN state within 3 seconds following"
                        "the modification of label 270 and returns to the GROUND state between the 4th and"
                        "5th second.");

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
        pages->setCurrentIndex(137);
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
        pages->setCurrentIndex(137);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF105Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6080");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Cut off the 28V DC applied to pin 8. Check that the output goes into OPEN state (not"
                    "applicable to versions GB '15xx' and MB '15xx').");

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
        pages->setCurrentIndex(138);
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
        pages->setCurrentIndex(138);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF106Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6090");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("TCAS Display Status Output");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Restore the 28V DC and check that the output returns to GROUND state. (not"
                    "applicable to versions GB '15xx' and MB '15xx').");

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
        pages->setCurrentIndex(139);
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
        pages->setCurrentIndex(139);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF107Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6100");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove input power");

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
        pages->setCurrentIndex(140);
    });

    return page;
}

QWidget* SubtestF108Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6110");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Configure the indicator as described in para. para. 'VERTICAL SPEED INPUT'"
                        "ACCURACY “: Primary ARINC 565 Input (Analog AC) or Primary ARINC 565 Input"
                        "(Analog AC) for GB210x.");

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
        pages->setCurrentIndex(141);
    });

    return page;
}

QWidget* SubtestF109Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6120");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
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
        pages->setCurrentIndex(142);
    });

    return page;
}

QWidget* SubtestF110Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6130");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that the voltage measured on pin 38 is between 18.5 and 32 VDC.");

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
        pages->setCurrentIndex(143);
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
        pages->setCurrentIndex(143);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF111Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6140");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Cut off the 28 VDC applied to pin 8 and check that the validity output is open.");

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
        pages->setCurrentIndex(144);
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
        pages->setCurrentIndex(144);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF112Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6150");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Restore the 28 VDC to pin 8 and check that the output voltage is in the state checked in step 6130. ");

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
        pages->setCurrentIndex(145);
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
        pages->setCurrentIndex(145);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF113Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6160");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Remove input power.");

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
        pages->setCurrentIndex(146);
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
        pages->setCurrentIndex(146);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF114Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6170");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Configure the indicator as described in para. para. 'VERTICAL SPEED INPUT'"
                        "'ACCURACY' : Primary ARINC 429 HS Input (Port 1) or Primary ARINC 429 HS Input"
                        "(Port 1) for GB2100.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Pass");
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
        pages->setCurrentIndex(147);
    });




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


    return page;
}

QWidget* SubtestF115Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6180");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Apply normal input power.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Pass");
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
        pages->setCurrentIndex(148);
    });




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


    return page;
}

QWidget* SubtestF116Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6190");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Check that pin 38 is in GROUND state.");

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
        pages->setCurrentIndex(149);
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
        pages->setCurrentIndex(149);
    });


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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF117Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6200");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Generate a 'Failure Warning' vertical speed message and check that the validity output is OPEN.");

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
        pages->setCurrentIndex(150);
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
        pages->setCurrentIndex(150);
    });





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
    buttonlayout->addWidget(failButton, 0, Qt::AlignCenter);
    buttonlayout->addStretch();
    layout->addStretch(6);


    return page;
}

QWidget* SubtestF118Page(QStackedWidget *pages) {
    QWidget *page = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(page);
    QHBoxLayout *buttonlayout = new QHBoxLayout();

    QLabel *title =
        new QLabel("Subtest H: DISCRETE OUTPUTS");
    title->setStyleSheet("font-size: 24px;"
                        "   font-weight: bold;");

    title->setAlignment(Qt::AlignCenter);

    QLabel *title2 =
        new QLabel("Part 6210");
    title2->setStyleSheet(""
                          "font-weight: bold;");
    title2->setAlignment(Qt::AlignCenter);

    QLabel *title3 =
        new QLabel("+28VDC/OPEN Output Logic");
    title3->setStyleSheet(""
                          "font-size: 18px;");
    title3->setAlignment(Qt::AlignCenter);



    QLabel *instruction1 =
        new QLabel("Reconfigure the vertical speed message to normal operation.");

    instruction1->setAlignment(Qt::AlignCenter);


    QPushButton *continueButton =
        new QPushButton("Pass");
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
        pages->setCurrentIndex(151);
    });




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


    return page;
}

// Pick up back here at Subtest E Part 3000



void PowerConsumptionTimer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(3);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl1ATimer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(19);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl1BTimer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(20);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl2ATimer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(21);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl2BTimer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(22);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl3Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(23);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl4Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(24);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl5Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(25);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl6Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(26);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl7Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(27);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl8Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(28);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl9Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(29);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl10Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(30);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl11Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(35);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl12Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(41);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl13Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(43);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl14Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(50);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl15Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(52);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl16Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(54);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl17Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(59);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl18Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(60);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl19Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(61);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl20Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(65);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl21Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(66);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl22Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(67);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}


void DimmingControl23Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(68);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl24Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(96);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}

void DimmingControl25Timer(QStackedWidget *pages,
                           QProgressBar *progressBar)
{
    QTimer *timer = new QTimer(pages);

    progressBar->setValue(0);

    int seconds = 0;

    QObject::connect(timer, &QTimer::timeout,
        [timer, pages, progressBar, seconds]() mutable {

        seconds++;

        float percentage =
            (seconds / 3.0f) * 100.0f;

        progressBar->setValue(
            static_cast<int>(percentage));

        if (seconds >= 3)
        {
            timer->stop();

            pages->setCurrentIndex(97);

            timer->deleteLater();
        }
    });

    timer->start(1000);
}
