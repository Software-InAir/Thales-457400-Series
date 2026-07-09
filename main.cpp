#include <QApplication>
#include <QWidget>
#include <QTimer>
#include <QPixmap>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Thales");
    window.resize(800, 600);
    window.show();
    window.setStyleSheet("background-color: #FFFFFF");

    QVBoxLayout *mainlayout = new QVBoxLayout(&window);
    QHBoxLayout *logolayout = new QHBoxLayout();

    // 1. Top Section (Stretch: 2)
    QLabel *topSection = new QLabel("");
    topSection->setStyleSheet("background-color: #FFFFFF;");
    mainlayout->addWidget(topSection, 4);

    // 2. Middle Section (60%) - Integrating your logo code
    QLabel inairlogoLabel;
    QPixmap inairlogo("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\inair-logo.png");

    inairlogoLabel.setPixmap(inairlogo);
    //logoLabel.setScaledContents(true); // Optional: Makes image resize with the layout
    inairlogoLabel.setStyleSheet("background-color: #FFFFFF;");

    QLabel thaleslogoLabel;
    QPixmap thaleslogo("C:\\Users\\c.stanley\\CLionProjects\\Thales\\images\\thales_logo.png");

    thaleslogoLabel.setPixmap(thaleslogo);
    //logoLabel.setScaledContents(true); // Optional: Makes image resize with the layout
    thaleslogoLabel.setStyleSheet("background-color: #FFFFFF;");

    // Pass the address of your stack variable to the layout
    logolayout->addWidget(&inairlogoLabel, 4, Qt::AlignCenter);
    logolayout->addWidget(&thaleslogoLabel, 4, Qt::AlignCenter);
    mainlayout->addLayout(logolayout);

    // 3. Bottom Section (Stretch: 2)
    QLabel *botSection = new QLabel("");
    botSection->setStyleSheet("background-color: #ffffff;");
    mainlayout->addWidget(botSection, 4);

    //QTimer::singleShot(10000, [&window]() {
    //    window.setWindowTitle("10 seconds passed");
    //});

    return app.exec();
}