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
    ui->pushButton->setText("Wyjscie");
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
    ui->pushButton_11->setText("odświerz statystyki postaci");
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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked() //las
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
s1 = (std::rand() % 9 + 5*lvl + 1);
hp1 = (std::rand() % 9 + 20*lvl +1);
z1 = (std::rand() % 9 + 5*lvl +1);
p1 = (std::rand() % 17 + 10*lvl +1);
c1 = (std::rand() % 29 + 5*lvl + 1);
if (c1 >= 80)
{
c1=75;
}
ui->textBrowser_2->setText("podróżowanie do lasu"
                           "<br/>napotkanie dużego pająka"
                           "<br/>generowanie statystyk dużego pająka"
                           "<br/><br/>Siła dużego pająka:  " + QString::number(s1) +
                           "<br/>życie dużego pająka:  " + QString::number(hp1) +
                           "<br/>zręczność dużego pająka:  " + QString::number(z1) +
                           "<br/>prędkość dużego pająka:  " + QString::number(p1) +
                           "<br/>Celność dużego pająka:  " + QString::number(c1) + "%"
                           "<br/><br/>Czy chcesz rozpocząć starcie?");
}


void MainWindow::on_pushButton_3_clicked() //jaskinie
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
s1 = (std::rand() % 15 + 7*lvl + 1);
hp1 = (std::rand() % 15 + 22*lvl +1);
z1 = (std::rand() % 15 + 7*lvl +1);
p1 = (std::rand() % 5 + 12*lvl +1);
c1 = (std::rand() % 25 + 7*lvl + 1);
if (c1 >= 60)
{
c1=60;
}
ui->textBrowser_2->setText("podróżowanie do jaskini"
                           "<br/>napotkanie trola"
                           "<br/>generowanie statystyk trola"
                           "<br/><br/>Siła trola:  " + QString::number(s1) +
                           "<br/>życie trola:  " + QString::number(hp1) +
                           "<br/>zręczność trola:  " + QString::number(z1) +
                           "<br/>prędkość trola:  " + QString::number(p1) +
                           "<br/>Celność trola:  " + QString::number(c1) + "%"
                           "<br/><br/>Czy chcesz rozpocząć starcie?");
}


void MainWindow::on_pushButton_4_clicked() //labirynt
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
s1 = (std::rand() % 20 + 7*lvl + 1);
hp1 = (std::rand() % 30 + 22*lvl +1);
z1 = (std::rand() % 20 + 7*lvl +1);
p1 = (std::rand() % 20 + 12*lvl +1);
c1 = (std::rand() % 39 + 7*lvl + 1);
if (c1 >= 90)
{
c1=90;
}
ui->textBrowser_2->setText("podróżowanie do labiryntu"
                           "<br/>napotkanie vapira"
                           "<br/>generowanie statystyk vampira"
                           "<br/><br/>Siła vampira:  " + QString::number(s1) +
                           "<br/>życie vampira:  " + QString::number(hp1) +
                           "<br/>zręczność vampira:  " + QString::number(z1) +
                           "<br/>prędkość vampira:  " + QString::number(p1) +
                           "<br/>Celność vampira:  " + QString::number(c1) + "%"
                           "<br/><br/>Czy chcesz rozpocząć starcie?");
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
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
            }
                if (hp1 <= 0)
            {
               ui->textBrowser_2->setText("Wygrane starcie w Lokacji<br/>Stracono w trakcie wyprawy: " + QString::number(hpr-hp) + "życia");

               xp=xp+20;

               if(xp == 100)
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
                }
               ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
               ui->progressBar->setValue(xp);
            }
                if (hp<=0)
                {
                ui->textBrowser_2->setText("Porażka skończyłeś z: " + QString::number(hp) + "punktami życia<br/>Zerownie statystyk bohatera...");
                s = 20;
                hp = 30;
                hpr = 30;
                z = 10;
                p = 10;
                c = 50;
                xp = 0;
                pxp = 0;
                lvl = 0;
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
                ui->progressBar->setValue(xp);
                }
    }
    if (p1 > p && hp1 > 0 && hp > 0)
    {
    hp=hp-s1;
                if(hp1 > 0 && hp > 0)
            {
                hp1=hp1-s;
                ui->textBrowser_2->setText("Przeciwnikowi pozostało" + QString::number(hp1) + "życia <br/>Kontynuować starcie?");
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
            }
                if (hp1 <= 0)
            {
                ui->textBrowser_2->setText("Wygrane starcie w Lokacji<br/>Stracono w trakcie wyprawy: " + QString::number(hpr-hp) + "życia");

                   xp=xp+20;

                    pxp=pxp+1;
                    lvl=lvl+1;
                    s = s+5;
                    hpr = hpr + 20;
                    z = z + 5;
                    p =p + 10;
                    c =c + 5;
                    xp=xp-100;
                    hp=hpr;
                }
                ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) + "<br/>punkty życia:" + QString::number(hp) + "/" + QString::number(hpr) + "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) + "<br/>punkty prędkości:" + QString::number(p) + "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" + "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) + "<br/>Poziom postaci i potworów:" + QString::number(lvl));
                ui->progressBar->setValue(xp);
            }
                if (hp<=0)
            {
                ui->textBrowser_2->setText("Porażka skończyłeś z: " + QString::number(hp) + "punktami życia<br/>Zerownie statystyk bohatera...");
                s = 20;
                hp = 30;
                hpr = 30;
                z = 10;
                p = 10;
                c = 50;
                xp = 0;
                pxp = 0;
                lvl = 0;
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
    }
}


void MainWindow::on_pushButton_6_clicked() //życie+20
{
    if(pxp>0)
    {
    hpr=hpr+20;
    hp=hpr;
    pxp=pxp-1;
    }
}


void MainWindow::on_pushButton_7_clicked() //zręczność+5 nie posiada jeszcze funkcji
{
    if(pxp>0)
    {
    //z=z+5;
    //pxp=pxp-1;
    }
}


void MainWindow::on_pushButton_8_clicked() //prędkość+10
{
    if(pxp>0)
    {
    p=p+10;
    pxp=pxp-1;
    }
}


void MainWindow::on_pushButton_9_clicked() //celność+ nie posiada jeszcze funkcji
{
    //pxp=pxp-1;
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->textBrowser->setText( "Statystyki Postaci:<br/>siła:" + QString::number(s) +
                           "<br/>punkty życia:" + QString::number(hp) +
                           "/" + QString::number(hpr) +
                           "<br/>punkty zręczności(nie posiadają jeszcze funkcji):" + QString::number(z) +
                           "<br/>punkty prędkości:" + QString::number(p) +
                           "<br/>celność (nie posiada jeszcze funkcji):" + QString::number(c) + "%" +
                           "<br/>Liczba punktów doświadczenia:" + QString::number(pxp) +
                           "<br/>Poziom postaci i potworów:" + QString::number(lvl));
}
