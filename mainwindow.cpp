#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 // setWindowFlags(Qt::Drawer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::on_btn_browse_clicked()
{
   //Browse button
    QString filename = QFileDialog::getOpenFileName(this,"Open Image","","Image Files(*.png, *.jpg, *.bmp, *.tif, *.gif, *.raw , *.ico , *.tga) , AllFiles (*.*)");
    ui->lineEdit->setText(filename);
}

 void MainWindow::on_btn_convert_clicked()
{
    //Convert Image
    QString fileName = ui->lineEdit->text();
    if(fileName != "")
    {
        QFileInfo fileinfo = QFile(fileName);
        QString newFileName = fileinfo.path()+ "/" +fileinfo.completeBaseName();
        QImage image = QImage (ui->lineEdit->text());

        //check image
        if(!image.isNull())
        {
            int format = ui->image_type->currentIndex();
            if(format ==0)
            {
                newFileName += ".png";
            }
            else if(format==1)
            {
                newFileName += ".jpg";
            }
            else if(format==2)
            {
                newFileName += ".bmp";
            }
            else if(format==3)
            {
                newFileName += ".tif";
            }
            else if(format==4)
            {
                newFileName += ".ico";
            }


            qDebug ()<< newFileName << format;
                if(image.save(newFileName, 0,-1))
                 {
                      QMessageBox::information(this,"Success","Image Converted Successfuly");
                  }
                else
                {
                     QMessageBox::warning(this,"Failed!","Image is Not Converted!");
                }
            }

            else {
            QMessageBox::warning(this,"Failed!","No File Is Selected!");

        }

    }

    else {
    QMessageBox::warning(this,"Failed!","No File Is Selected!");
    }
}

 /*All Supported Picture Files (*.pfd; *.PTimage; *.PTpage; *.bmp; *.dib; *.rle; *.gif; *.ico; *.heic; *.cur; *.jbg) ,
 Picosmos Files (*.PTimage,*.PTpage),
 PFD Files (*.pfd),
 WebP Files (*.webp),
 BMP Files (*.bmp, *.dib,*.rle),
 GIF Files (*.gif),
 HEIC Files (*.heic),
 ICO Files (*.ico,*.cur),
 JBG Files (*.jbg),
 JP2 Files (*.jp2,*.j2k),
 JPC Files (*.jpc,*.j2c),
 JPG Files (*.jpg,*.jpe,*.jpeg),
 MNG Files (*.mng,*.jng,*.png),
 PCX Files (*.pcx),
 PGX Files (*.pgx),
 PNM Files (*.pnm,*.pgm,*.ppm),
 PSD Files (*.psd),
 RAS Files (*.ras),
 RAW Files (*.nef,*.crw,*.cr2,*.mrw,*.raf,*.erf,*.3fr,*.dcr,*.raw,*.dng,*.pef,*.x3f,*.arw,*.sr2,*.mef,*.orf),
 SKA Files (*.ska),
 TGA Files (*.tga),
 TIF Files (*.tif,*.tiff),
 WBM Files (*.wbm,*.wbmp),
 WMF EMF filet (*.wit,*.emp),
 All Files(*.*)*/

