#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "redblacktreev1.cpp"
#include "hashtabl1.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->Ui_MainWindow::comboBox_3,SIGNAL(currentIndexChanged(int)),this, SLOT(indexChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    RedBlackTree tree;
    ifstream inFile("censusdata1.csv");
    if (inFile.is_open())
    {
        string line;
        getline(inFile, line);
        while (getline(inFile, line))
        {
            stringstream stream(line);
            string token;
            getline(stream, token, ',');
            unsigned int id = stoi(token);
            getline(stream, token, ',');
            unsigned int age = stoi(token);
            getline(stream, token, ',');
            unsigned int income = stoi(token);
            getline(stream, token, ',');
            string hispanic = token;
            getline(stream, token, ',');
            string state = token;
            tree.insert(tree.getHead(), id, age, income, state, hispanic);
        }
        inFile.close();
    }

    tree.sortTable(arg1.toStdString(),ui -> Ui_MainWindow::comboBox_3->currentIndex(), ui -> Ui_MainWindow::comboBox->currentIndex());
}



