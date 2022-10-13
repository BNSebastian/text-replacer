#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>

#include <iostream>
#include <fstream> // file handling
#include <string> // for getline

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ----------------------------------------------------
// replace function
// ----------------------------------------------------
void replacer (string input_path, QString q_replace, QString q_with)
{
    // ----------------------------------------------------
    // open the file and store the contents in a buffer
    // ----------------------------------------------------

    // opening a file using the specified path
    fstream input_file;
    // reading from a file
    input_file.open(input_path, ios::in);

    // store the contents into a buffer string
    string buffer;
    if (input_file.is_open())
    {
        string line;
        while (getline(input_file, line))
        {
            buffer += line + "\n";
        }
    }

    // close the input file
    input_file.close();

    // ----------------------------------------------------
    // replace the buffer content
    // ----------------------------------------------------
    string replace = q_replace.toStdString();
    string with = q_with.toStdString();
    string temp, final;

    for (char current : buffer)
    {
        if (temp == replace) temp = with;

        if (current == ' ' || current == '.' || current == ',' || current == '(' || current == ')')
        {
            final += temp + current;
            temp = "";
        }
        else temp += current;
    }

    // ----------------------------------------------------
    // store the modified buffer in a new file
    // ----------------------------------------------------

    // opening a file
    fstream output_file;
    // redefining the path
    string output_path;
    for (char current : input_path)
    {
        if (current == '.')
        {
            output_path += "-output";
            output_path += current;
        }
        else output_path += current;
    }
    // write to a new file
    output_file.open(output_path, ios::out);

    if (output_file.is_open())
    {
        output_file << final;
        QTextStream(stdout) << QString::fromStdString(buffer);
        QTextStream(stdout) << QString::fromStdString(final);
    }

    // close the output file
    output_file.close();
}

// ----------------------------------------------------
// replace button
// ----------------------------------------------------
void MainWindow::on_pushButton_clicked()
{
    // entry 1
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_1->text(),
                     ui->text_current_1->text());
    }
    // entry 2
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_2->text(),
                     ui->text_current_2->text());
    }
    // entry 3
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_3->text(),
                     ui->text_current_3->text());
    }
    // entry 4
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_4->text(),
                     ui->text_current_4->text());
    }
    // entry 5
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_5->text(),
                     ui->text_current_5->text());
    }
    // entry 6
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_6->text(),
                     ui->text_current_6->text());
    }
    // entry 7
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_7->text(),
                     ui->text_current_7->text());
    }
    // entry 8
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_8->text(),
                     ui->text_current_8->text());
    }
    // entry 9
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_9->text(),
                     ui->text_current_9->text());
    }
    // entry 10
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_10->text(),
                     ui->text_current_10->text());
    }
    // entry 11
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_11->text(),
                     ui->text_current_11->text());
    }
    // entry 12
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_12->text(),
                     ui->text_current_12->text());
    }
    // entry 13
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_13->text(),
                     ui->text_current_13->text());
    }
    // entry 14
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_14->text(),
                     ui->text_current_14->text());
    }
    // entry 15
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_15->text(),
                     ui->text_current_15->text());
    }
    // entry 16
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_16->text(),
                     ui->text_current_16->text());
    }
    // entry 17
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_17->text(),
                     ui->text_current_17->text());
    }
    // entry 18
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_18->text(),
                     ui->text_current_18->text());
    }
    // entry 19
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_19->text(),
                     ui->text_current_19->text());
    }
    // entry 20
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_20->text(),
                     ui->text_current_20->text());
    }
    // entry 21
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_21->text(),
                     ui->text_current_21->text());
    }
    // entry 22
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_22->text(),
                     ui->text_current_22->text());
    }
    // entry 23
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_23->text(),
                     ui->text_current_23->text());
    }
    // entry 24
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_24->text(),
                     ui->text_current_24->text());
    }
    // entry 25
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_25->text(),
                     ui->text_current_25->text());
    }
    // entry 26
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_26->text(),
                     ui->text_current_26->text());
    }
    // entry 27
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_27->text(),
                     ui->text_current_27->text());
    }
    // entry 28
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_28->text(),
                     ui->text_current_28->text());
    }
    // entry 29
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_29->text(),
                     ui->text_current_29->text());
    }
    // entry 30
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_30->text(),
                     ui->text_current_30->text());
    }
    // entry 31
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_31->text(),
                     ui->text_current_31->text());
    }
    // entry 32
    for (string& current : input_paths_)
    {
        replacer (current,
                     ui->text_original_32->text(),
                     ui->text_current_32->text());
    }
}

// ----------------------------------------------------
// open multiple files
// ----------------------------------------------------
void MainWindow::on_pushButton_2_clicked()
{
    // select the files
    QStringList files = QFileDialog::getOpenFileNames(this, "open the file");
    // cast the QList to QVector
    QVector<QString> vect = files.toVector();
    // cast the QVector to vector and save it globally
    vector<string> temp;
    for (QString& current : vect)
        temp.push_back(current.toStdString());
    input_paths_ = temp;
}

