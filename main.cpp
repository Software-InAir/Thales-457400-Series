#include <QApplication>
#include <QWidget>
#include <QStackedWidget>
#include <QTimer>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>


QWidget* CreateWelcomePage(QStackedWidget *pages);
QWidget* CreateStep1Page(QStackedWidget *pages);
QWidget* CreateStep2Page(QStackedWidget *pages);


void PowerConsumptionTimer(QWidget *page);

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

    layout->addStretch(6);
    layout->addWidget(title);
    layout->addStretch(2);
    layout->addWidget(instruction);
    layout->addStretch(1);
    layout->addWidget(beginButton, 0, Qt::AlignCenter);
    layout->addStretch(6);

    QObject::connect(beginButton, &QPushButton::clicked, [pages]() {
        //PowerConsumptionTimer(pages);
        pages->setCurrentIndex(2);
    });

    return page;
}

void PowerConsumptionTimer(QWidget *page) {
    QTimer::singleShot(10, [&page]() {
      page->setWindowTitle("10 seconds passed");
    });
}





