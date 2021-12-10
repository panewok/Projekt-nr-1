#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <iostream>
#include <cstdlib>
#include <dos.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    ui->pushButton->setText("Wyjscie z gry");
    ui->pushButton_2->setText("las");
    ui->pushButton_3->setText("jaskinie");
    ui->pushButton_4->setText("labirynt");
    ui->pushButton_5->setText("siła +5");
    ui->pushButton_6->setText("życie +20");
    ui->pushButton_7->setText("zręczność +5");
    ui->progressBar->setTextVisible("xp postęp");
    ui->textBrowser_2->setText("tekstowe okno zdażeń w lokacji, pojawia się po odbyciu podróży");
    ui->pushButton_8->setText("prędkość +10");
    ui->pushButton_9->setText("celność +1%");
    ui->pushButton_10->setText("Walka");
    ui->pushButton_11->setText("odświerz statystyki postaci i podróży");
}
    int s = 10;
    int hp = 30;
    int hpr = 30;
    int z = 10;
    int p = 10;
    int c = 50;
    int s1;
    int hp1;
    int z1;
    int p1;
    int c1;
    int xp = 0;
    int pxp = 0;
    int lvl = 0;
    int t;
    int r1, r2, r3, r4, r5;
    int r11, r22, r33, r44, r55;


    int generowanie_besti()
    {
        if (t==1)
        {
            r1=5;
            r2=20;
            r3=5;
            r4=10;
            r5=5;

            r11=9;
            r22=9;
            r33=9;
            r44=17;
            r55=29;
        }
        if (t==2)
        {
            r1=7;
            r2=22;
            r3=7;
            r4=12;
            r5=7;

            r11=15;
            r22=15;
            r33=15;
            r44=5;
            r55=25;
        }
        if (t==3)
        {
            r1=7;
            r2=22;
            r3=7;
            r4=12;
            r5=7;

            r11=20;
            r22=30;
            r33=20;
            r44=20;
            r55=39;
        }
        s1 = (std::rand() % r11 + r1*lvl + 1);
        hp1 = (std::rand() % r22 + r2*lvl +1);
        z1 = (std::rand() % r33 + r3*lvl +1);
        p1 = (std::rand() % r44 + r4*lvl +1);
        c1 = (std::rand() % r55 + r5*lvl + 1);
        if (c1 >= 76 && t==1)
        {
            c1=75;
        }
        if (c1 >= 61 && t==2)
        {
            c1=60;
        }
        if (c1 >= 91 && t==3)
        {
            c1=90;
        }
        r1, r2, r3, r4, r5 = 0;
        return(s1, hp1, z1, p1, c1);
    }

    int wbijanie_poziomu()
    {
                           if(xp==100);
    {
                            pxp=pxp+1;
                            lvl=lvl+1;
                            s = s+5;
                            hpr = hpr + 20;
                            z = z + 5;
                            p =p + 10;
                            c =c + 5;
                            xp=xp-100;
                            hp=hpr;

                            return(pxp, lvl, s, hpr, z, p, c, xp, hp);
    }
    }

    int zerowanie_statystyk()
    {
        s = 20;
        hp = 30;
        hpr = 30;
        z = 10;
        p = 10;
        c = 50;
        xp = 0;
        pxp = 0;
        lvl = 0;
        return(pxp, lvl, s, hpr, z, p, c, xp, hp);
    }

//    void setText()
//    {
//        ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) +
//                               "<br/>punkty życia:" + QString::number(hp) +
//                               "/" + QString::number(hpr) +
//                               "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) +
//                               "<br/>punkty prędkości:" + QString::number(p) +
//                               "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" +
//                               "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) +
//                               "<br/>Poziom postaci i potworów:" + QString::number(lvl));
//    }


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked() //las
{

t=1;
s1, hp1, z1, p1, c1 = generowanie_besti();

}


void MainWindow::on_pushButton_3_clicked() //jaskinie
{

t=2;
s1, hp1, z1, p1, c1 = generowanie_besti();

}


void MainWindow::on_pushButton_4_clicked() //labirynt
{
    ui->progressBar->setValue(xp);

t=3;
s1, hp1, z1, p1, c1 = generowanie_besti();

}


void MainWindow::on_pushButton_10_clicked() // walka
{
    if(p >= p1 && hp1 > 0 && hp > 0)
    {
    hp1=hp1-s;
                if(hp1 > 0 && hp > 0)
            {
                hp=hp-s1;
                ui->textBrowser_2->setText("Przeciwnikowi pozostało" + QString::number(hp1) + "życia <br/>Kontynuować starcie?");
            }
                if (hp1 <= 0)
            {
               ui->textBrowser_2->setText("Wygrane starcie w Lokacji<br/>Stracono w trakcie wyprawy: " + QString::number(hpr-hp) + "życia");

               xp=xp+20;

               pxp, lvl, s, hpr, z, p, c, xp, hp = wbijanie_poziomu();
             }
               ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
               ui->progressBar->setValue(xp);
            }
                if (hp<=0)
            {
                ui->textBrowser_2->setText("Porażka skończyłeś z: " + QString::number(hp) + "punktami życia<br/>Zerownie statystyk bohatera...");
                pxp, lvl, s, hpr, z, p, c, xp, hp = zerowanie_statystyk();
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
                ui->progressBar->setValue(xp);
              }

    if (p1 > p && hp1 > 0 && hp > 0)
    {
    hp=hp-s1;
                if(hp1 > 0 && hp > 0)
            {
                hp1=hp1-s;
                ui->textBrowser_2->setText("Przeciwnikowi pozostało" + QString::number(hp1) + "życia <br/>Kontynuować starcie?");
            }
                if (hp1 <= 0)
            {
                ui->textBrowser_2->setText("Wygrane starcie w Lokacji<br/>Stracono w trakcie wyprawy: " + QString::number(hpr-hp) + "życia");

                   xp=xp+20;

                   pxp, lvl, s, hpr, z, p, c, xp, hp = wbijanie_poziomu();
                }
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
                ui->progressBar->setValue(xp);
            }
                if (hp<=0)
            {
                ui->textBrowser_2->setText("Porażka skończyłeś z: " + QString::number(hp) + "punktami życia<br/>Zerownie statystyk bohatera...");
               pxp, lvl, s, hpr, z, p, c, xp, hp = zerowanie_statystyk();
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
                ui->progressBar->setValue(xp);
            }
    }




void MainWindow::on_pushButton_5_clicked() //siła+5
{
    if(pxp>0)
    {
    s=s+5;
    pxp=pxp-1;
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
    }
}


void MainWindow::on_pushButton_6_clicked() //życie+20
{
    if(pxp>0)
    {
    hpr=hpr+20;
    hp=hpr;
    pxp=pxp-1;
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
    }
}


void MainWindow::on_pushButton_7_clicked() //zręczność+5 nie posiada jeszcze funkcji
{
    if(pxp>0)
    {
    //z=z+5;
    //pxp=pxp-1;
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
    }
}


void MainWindow::on_pushButton_8_clicked() //prędkość+10
{
    if(pxp>0)
    {
    p=p+10;
    pxp=pxp-1;
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
    }
}


void MainWindow::on_pushButton_9_clicked() //celność+ nie posiada jeszcze funkcji
{
    //pxp=pxp-1;
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->progressBar->setValue(xp);
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) +
                           "<br/>punkty życia:" + QString::number(hp) +
                           "/" + QString::number(hpr) +
                           "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) +
                           "<br/>punkty prędkości:" + QString::number(p) +
                           "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" +
                           "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) +
                           "<br/>Poziom postaci i potworów:" + QString::number(lvl));
    if (t==3)
    {
    ui->textBrowser_2->setText("podróżowanie do labiryntu"
                               "<br/>napotkanie vampira"
                               "<br/>generowanie statystyk vampira"
                               "<br/><br/>Siła vampira:  " + QString::number(s1) +
                               "<br/>życie vampira:  " + QString::number(hp1) +
                               "<br/>zręczność vampira:  " + QString::number(z1) +
                               "<br/>prędkość vampira:  " + QString::number(p1) +
                               "<br/>Celność vampira:  " + QString::number(c1) + "%"
                               );
    }
    if (t==2)
    {
    ui->textBrowser_2->setText("podróżowanie do jaskinie"
                               "<br/>napotkanie trola"
                               "<br/>generowanie statystyk trola"
                               "<br/><br/>Siła trola:  " + QString::number(s1) +
                               "<br/>życie trola:  " + QString::number(hp1) +
                               "<br/>zręczność trola:  " + QString::number(z1) +
                               "<br/>prędkość trola:  " + QString::number(p1) +
                               "<br/>Celność trola:  " + QString::number(c1) + "%"
                               );
    }
    if (t==1)
    {
    ui->textBrowser_2->setText("podróżowanie do lasu"
                               "<br/>napotkanie pająka"
                               "<br/>generowanie statystyk pająka"
                               "<br/><br/>Siła pająka:  " + QString::number(s1) +
                               "<br/>życie pająka:  " + QString::number(hp1) +
                               "<br/>zręczność pająka:  " + QString::number(z1) +
                               "<br/>prędkość pająka:  " + QString::number(p1) +
                               "<br/>Celność pająka:  " + QString::number(c1) + "%"
                               );
    }
}
