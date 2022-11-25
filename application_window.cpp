#include <QGroupBox>
#include <QLayout>
#include <QPushButton>
#include <QFileDialog>
#include <QPixmap>
#include <QLabel>

#include "application_window.h"

ApplicationWindow::ApplicationWindow(QObject */*parent*/)
{
    const int windowWidth = 1280;
    const int windowHeight = 720;

    const int menuWidth = 100;

    const int buttonWidth = 80;

    setWindowTitle(QObject::tr("Squres"));
    resize(windowWidth, windowHeight);

    const auto applicationGroupBox = new QGroupBox;
    setCentralWidget(applicationGroupBox);

    const auto applicationLayout = new QHBoxLayout;
    applicationGroupBox->setLayout(applicationLayout);

    /// ******************************************************* menu ///

    const auto menuGroupBox = new QGroupBox;
    menuGroupBox->setTitle(tr("Menu"));
    menuGroupBox->setFixedWidth(menuWidth);
    applicationLayout->addWidget(menuGroupBox);

    const auto menuLayout = new QVBoxLayout;
    menuGroupBox->setLayout(menuLayout);

    menuLayout->addStretch();

    const auto openImageButton = new QPushButton;
    openImageButton->setText(tr("Open"));
    openImageButton->setFixedWidth(buttonWidth);
    menuLayout->addWidget(openImageButton);

    connect(openImageButton, &QPushButton::pressed, this, &ApplicationWindow::getImage);

    const auto processImageButton = new QPushButton;
    processImageButton->setText(tr("Process"));
    processImageButton->setFixedWidth(buttonWidth);
    menuLayout->addWidget(processImageButton);

    menuLayout->addStretch();

    /// ******************************************************* image ///

    const auto imageGroupBox = new QGroupBox;
    imageGroupBox->setTitle(tr("Menu"));
    applicationLayout->addWidget(imageGroupBox);

    const auto imageLayout = new QVBoxLayout;
    imageGroupBox->setLayout(imageLayout);

    _imageLabel = new QLabel;
    imageLayout->addWidget(_imageLabel);
}

ApplicationWindow::~ApplicationWindow()
{

}

void ApplicationWindow::getImage()
{
    _imageName = QFileDialog::getOpenFileName(this, tr("Open image"), QDir::currentPath(), "*.jpg *.png");

    QPixmap pixmap(_imageName);

    _imageLabel->setPixmap(pixmap);
}
