	#include<iostream>
	#include<conio.h>
	#include<stdlib.h>
	#include<process.h>
	#include<dos.h>
	#include<string.h>
	#include<windows.h>
	using namespace std;

	
	void element(int,int);

	void gotoxy(int x, int y);

	


	int i, j, g;


	void frame() {


    for (i = 19; i <= 60; i++) {
		gotoxy(i, 9);
		cout << "-";
	    }
	    cout << "-";

	    for (i = 19; i <= 60; i++) {
		gotoxy(i, 16);
		cout << "-";
	    }
	    cout << "-";
	    for (i = 10; i <= 15; i++) {
		gotoxy(19, i);
		cout << "|";
	    }
	    for (i = 10; i <= 15; i++) {
		gotoxy(61, i);
		cout << "|";
	    }
	    gotoxy(5, 24);
	    cout << "Press Esc to Exit";
	}


	void display() {
	system("cls");
	    gotoxy(33, 2);
	    cout << "PERIODIC TABLE";
	    gotoxy(1, 1);
	    cout << "-";
	    for (i = 2; i <= 79; i++) {
		gotoxy(i, 1);
		cout << "-";
	    }
	    cout << "-";
	    for (i = 2; i <= 23; i++) {
		gotoxy(80, i);
		cout << "|";
	    }
	    gotoxy(80, 24);
	    cout << "-";
	    for (i = 2; i <= 79; i++) {
		gotoxy(i, 24);
		cout << "-";
	    }
	    gotoxy(1, 24);
	    cout << "-";
	    for (i = 2; i <= 23; i++) {
		gotoxy(1, i);
		cout << "|";
	    }
	    gotoxy(12, 4);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(63, 4);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(12, 5);
	    cout << "|";
	    gotoxy(15, 5);
	    cout << "|";
	    gotoxy(15,7);
	    cout<<"|";
	    gotoxy(63, 5);
	    cout << "|";
	    gotoxy(66, 5);
	    cout << "|";
	    gotoxy(12, 6);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(48, 6);
	    cout << "-";
	    for (i = 49; i <= 66; i++)
	{
	gotoxy(i,6);
		    cout << "-";
		}


	    gotoxy(63, 6);
	    cout << "-";
	    for (i = 48; i <= 66; i++)
		if (i % 3 == 0) {
		    gotoxy(i, 7);
		    cout << "|";
		}
	    gotoxy(12, 7);
	    cout << "|";
	    gotoxy(12, 8);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(12, 9);
	    cout << "|";
	    gotoxy(15, 9);
	    cout << "|";
	    gotoxy(15, 6);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(15, 8);
	    cout << "-" << "-" << "-" << "-";
	    gotoxy(18, 7);
	    cout << "|";
	    gotoxy(18, 9);
	    cout << "|";
	    gotoxy(48, 8);
	    cout << "-";
	    for (i = 49; i <= 66;i++)
	{
	gotoxy(i,8);
		    cout << "-";
		}

	    for (i = 48; i <= 66; i++)
		if (i % 3 == 0) {
	            gotoxy(i, 9);
	            cout << "|";
	        }
	    gotoxy(12, 10);
	    cout << "-";
	    gotoxy(15, 10);
	    cout << "-";
	    for (i = 13; i <= 66; i++)
		{
		    gotoxy(i, 10);
		    cout << "-";
		}

	    
	    for(i=12;i<=66;i++)
		{if (i % 3 == 0)
		    {for (j = 10; j <= 17; j++)
			{if (j % 2 != 0) {
			    gotoxy(i, j);
			    cout << "|";
			}}}}


	    for (i = 12; i <= 66; i++)
		{
		    for (j = 12; j <= 18; j++)
			if (j % 2 == 0) {
			    gotoxy(i, j);
			    cout << "-";
			}}




	    for (i = 12; i <= 66; i++)
		{
		    gotoxy(i, 20);
		    cout << "-";
		}

		    gotoxy(12, 21);
		    cout << "|";

	    for (i = 24; i <= 66; i++) {
		if (i % 3 == 0) {
		    gotoxy(i, 21);

		    cout << "|";
		}
	    }

		for (i = 12; i <= 66; i++)
		{gotoxy(i, 22);
		cout << "-";}

		gotoxy(12, 23);
		cout << "|";

	    for (i = 24; i <= 66; i++)
		if (i % 3 == 0) {
		    gotoxy(i, 23);
		    cout << "|";
		}

	    gotoxy(15, 25);
	    cout << "ARROWS TO SCROLL.ENTER TO SELECT.ESC TO EXIT.";
	    gotoxy(13, 5);
	    cout << "H";
	    gotoxy(13, 7);
	    cout << "Li";
	    gotoxy(13, 9);
	    cout << "Na";
	    gotoxy(13, 11);
	    cout << "K";
	    gotoxy(12, 22);
	    cout << "-";
	    gotoxy(66, 20);
	    cout << "- ";
	    gotoxy(12, 24);
	    cout << "-";
	    gotoxy(80, 24);
	    cout << "-";
	    gotoxy(59, 9);
	    cout << " ";
	    gotoxy(56, 9);
	    cout << " ";


	    gotoxy(13, 13);
	    cout << "Rb";
	    gotoxy(13, 15);
	    cout << "Cs";
	    gotoxy(13, 17);
	    cout << "Fr";
	    gotoxy(16, 7);
	    cout << "Be";
	    gotoxy(16, 9);
	    cout << "Mg";
	    gotoxy(16, 11);
	    cout << "Ca";
	    gotoxy(16, 13);
	    cout << "Sr";
	    gotoxy(16, 15);
	    cout << "Ba";
	    gotoxy(16, 17);
	    cout << "Ra";
	    gotoxy(19, 11);
	    cout << "Sc";
	    gotoxy(19, 13);
	    cout << "Y";
	    gotoxy(19, 15);
	    cout << "La";
	    gotoxy(19, 17);
	    cout << "Ac";
	    gotoxy(22, 11);
	    cout << "Ti";
	    gotoxy(22, 13);
	    cout << "Zr";
	    gotoxy(22, 15);
	    cout << "Hf";
	    gotoxy(22, 17);
	    cout << "Rf";
	    gotoxy(25, 11);
	    cout << "V";
	    gotoxy(25, 13);
	    cout << "Nb";
	    gotoxy(25, 15);
	    cout << "Ta";
	    gotoxy(25, 17);
	    cout << "Ha";
	    gotoxy(28, 11);
	    cout << "Cr";
	    gotoxy(28, 13);
	    cout << "Mo";
	    gotoxy(28, 15);
	    cout << "W";
	    gotoxy(28, 17);
	    cout << "Un";
	    gotoxy(31, 11);
	    cout << "Mn";
	    gotoxy(31, 13);
	    cout << "Tc";
	    gotoxy(31, 15);
	    cout << "Re";
	    gotoxy(31, 17);
	    cout << "Ns";
	    gotoxy(34, 11);
	    cout << "Fe";
	    gotoxy(34, 13);
	    cout << "Ru";
	    gotoxy(34, 15);
	    cout << "Os";
	    gotoxy(34, 17);
	    cout << "Hs";
	    gotoxy(37, 11);
	    cout << "Co";
	    gotoxy(37, 13);
	    cout << "Rh";
	    gotoxy(37, 15);
	    cout << "Ir";
	    gotoxy(37, 17);
	    cout << "Mt";
	    gotoxy(40, 11);
	    cout << "Ni";
	    gotoxy(40, 13);
	    cout << "Pd";
	    gotoxy(40, 15);
	    cout << "Pt";
	    gotoxy(40, 17);
	    cout << "Ds";
	    gotoxy(43, 11);
	    cout << "Cu";
	    gotoxy(43, 13);
	    cout << "Ag";
	    gotoxy(43, 15);
	    cout << "Au";
	    gotoxy(46, 11);
	    cout << "Zn";
	    gotoxy(46, 13);
	    cout << "Cd";
	    gotoxy(46, 15);
	    cout << "Hg";
	    gotoxy(49, 7);
	    cout << "B";
	    gotoxy(49, 9);
	    cout << "Al";
	    gotoxy(49, 11);
	    cout << "Ga";
	    gotoxy(49, 13);
	    cout << "In";
	    gotoxy(49, 15);
	    cout << "Tl";
	    gotoxy(52, 7);
	    cout << "C";
	    gotoxy(52, 9);
	    cout << "Si";
	    gotoxy(52, 11);
	    cout << "Ge";
	    gotoxy(52, 13);
	    cout << "Sn";
	    gotoxy(52, 15);
	    cout << "Pb";
	    gotoxy(55, 7);
	    cout << "N";
	    gotoxy(55, 9);
	    cout << "P";
	    gotoxy(55, 11);
	    cout << "As";
	    gotoxy(55, 13);
	    cout << "Sb";
	    gotoxy(55, 15);
	    cout << "Bi";
	    gotoxy(58, 7);
	    cout << "O";
	    gotoxy(58, 9);
	    cout << "S";
	    gotoxy(58, 11);
	    cout << "Se";
	    gotoxy(58, 13);
	    cout << "Te";
	    gotoxy(58, 15);
	    cout << "Po";
	    gotoxy(61, 7);
	    cout << "F";
	    gotoxy(61, 9);
	    cout << "Cl";
	    gotoxy(61, 11);
	    cout << "Br";
	    gotoxy(61, 13);
	    cout << "I";
	    gotoxy(61, 15);
	    cout << "At";
	    gotoxy(64, 5);
	    cout << "He";
	    gotoxy(64, 7);
	    cout << "Ne";
	    gotoxy(64, 9);
	    cout << "Ar";
	    gotoxy(64, 11);
	    cout << "Kr";
	    gotoxy(64, 13);
	    cout << "Xe";
	    gotoxy(64, 15);
	    cout << "Rn";
	    gotoxy(13, 21);
	    cout << "Lanthanides";
	    gotoxy(25, 21);
	    cout << "Ce";
	    gotoxy(28, 21);
	    cout << "Pr";
	    gotoxy(31, 21);
	    cout << "Nd";
	    gotoxy(34, 21);
	    cout << "Pm";
	    gotoxy(37, 21);
	    cout << "Sm";
	    gotoxy(40, 21);
	    cout << "Eu";
	    gotoxy(43, 21);
	    cout << "Gd";
	    gotoxy(46, 21);
	    cout << "Tb";
	    gotoxy(49, 21);
	    cout << "Dy";
	    gotoxy(52, 21);
	    cout << "Ho";
	    gotoxy(55, 21);
	    cout << "Er";
	    gotoxy(58, 21);
	    cout << "Tm";
	    gotoxy(61, 21);
	    cout << "Yb";
	    gotoxy(64, 21);
	    cout << "Lu";
	    gotoxy(13, 23);
	    cout << "Actinides";
	    gotoxy(25, 23);
	    cout << "Th";
	    gotoxy(28, 23);
	    cout << "Pa";
	    gotoxy(31, 23);
	    cout << "U";
	    gotoxy(34, 23);
	    cout << "Np";
	    gotoxy(37, 23);
	    cout << "Pu";
	    gotoxy(40, 23);
	    cout << "Am";
	    gotoxy(43, 23);
	    cout << "Cm";
	    gotoxy(46, 23);
	    cout << "Bk";
	    gotoxy(49, 23);
	    cout << "Cf";
	    gotoxy(52, 23);
	    cout << "Ea";
	    gotoxy(55, 23);
	    cout << "Fm";
	    gotoxy(58, 23);
	    cout << "Md";
	    gotoxy(61, 23);
	    cout << "No";
	    gotoxy(64, 23);
	    cout << "Lr";
	    gotoxy(43,17);
	    cout<<"Rg";
	    gotoxy(46,17);
	    cout<<"Cn";
	    gotoxy(49,17);
	    cout<<"-";
	    gotoxy(52,17);
	    cout<<"Fl";
	    gotoxy(55,17) ;
	    cout<<"-";
	    gotoxy(58,17);
	    cout<<"Lv";
	    gotoxy(61,17);
	    cout<<"-";
	    gotoxy(64,17);
	    cout<<"-";


	    gotoxy(2, 2);
	    i = 2;
	    j = 2;
	    gotoxy(i, j);


	    do {
		g = getch();
		if (g == 80) {
		    if (j == 23) j = 1;
		    gotoxy(i, ++j);
		} else if (g == 77) {
		    if (i == 79) i = 1;
		    gotoxy(++i, j);
		} else if (g == 75) {
		    if (i == 2) i = 80;
		    gotoxy(--i, j);
		} else if (g == 72) {
		    if (j == 2)
			j = 24;
		    gotoxy(i, --j);
		}
		if (g == 13)
		    element(i, j);
	    } while (g != 27);
	}


	int main() {
	    system("cls");
		frame();
		display();
		return 0;
	}
	    

	void element(int i, int j)
	 {  
		if (((i == 13) || (i == 14)) && (j == 5)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No                :"<<"1";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"H"  ;
		gotoxy(21, 12);
		cout << "Name                     :"<<"Hydrogen";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"38 pm";
		gotoxy(21,14);
		cout << "Ionization Energy        :"<<"13.5 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :"<<"2.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....";
	    } else if (((i == 64) || (i == 65)) && (j == 5)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :"<<"2";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"He";
		gotoxy(21, 12);
		cout << "Name                     :"<<"Helium";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"32 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :"<<"24.58 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 13) || (i == 14)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :"<<"3";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"Li" ;
		gotoxy(21, 12);
		cout << "Name                     :"<<"Lithium";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"134 pm";
		gotoxy(21, 14);
		cout<<"1st ionisation potential	  :"<<"5.39 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :"<<"0.98";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 16) || (i == 17)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                :"<<"4";
		gotoxy(21, 11);
		cout << "Symbol                    :"<<"Be" ;
		gotoxy(21, 12);
		cout << "Name                      :"<<"Berylium";
		gotoxy(21, 13);
		cout << "Atomic Radius             :"<<"90 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation Enthalpy   :"<<"9.32 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity         :"<<"1.57";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 49) || (i == 50)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :"<<"5";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"B" ;
		gotoxy(21, 12);
		cout << "Name                     :"<<"Boron";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"82 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :"<<"9.29 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :"<<"2.04";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 52) || (i == 53)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :"<<"6";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"C" ;
		gotoxy(21, 12);
		cout << "Name                     :"<<"Carbon";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"77 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :"<<"11.26 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :"<<"2.55";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 55) || (i == 56)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :"<<"7";
		gotoxy(21, 11);
		cout << "Symbol                   :"<<"N" ;
		gotoxy(21, 12);
		cout << "Name                     :"<<"Nitrogen";
		gotoxy(21, 13);
		cout << "Atomic Radius            :"<<"75 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :"<<"14.5 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :"<<"3.04";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 58) || (i == 59)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                :"<<"8";
		gotoxy(21, 11);
		cout << "Symbol                    :"<<"O" ;
		gotoxy(21, 12);
		cout << "Name                      :"<<"Oxygen";
		gotoxy(21, 13);
		cout << "Atomic Radius             :"<<"73 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential  :"<<"13.6 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity         :"<<"3.44";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 61) || (i == 62)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                :"<<"9";
		gotoxy(21, 11);
		cout << "Symbol                    :"<<"F" ;
		gotoxy(21, 12);
		cout << "Name                      :"<<"Fluorine";
		gotoxy(21, 13);
		cout << "Atomic Radius             :"<<"71 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential  :"<<"17.42 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity         :"<<"3.98";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 64) || (i == 65)) && (j == 7)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                :"<<"10";
		gotoxy(21, 11);
		cout << "Symbol                    :"<<"Ne" ;
		gotoxy(21, 12);
		cout << "Name                      :"<<"Neon";
		gotoxy(21, 13);
		cout << "Atomic Radius             :"<<"69 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential  :"<<"21.5 ev"; ;
		gotoxy(21, 15);
		cout << "Electronegativity         :-" <<"no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 13) || (i == 14)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                 :"<<"11";
		gotoxy(21, 11);
		cout << "Symbol                     :" << "Na";
		gotoxy(21, 12);
		cout << "Name                       :" << "Sodium";
		gotoxy(21, 13);
		cout << "Atomic Radius              :" << "154 pm";
		gotoxy(21, 14);
		cout<<"1st ionisation energy        :"<<"5.13 ev";
		gotoxy(21, 15);
		cout << "Electronegativity          :" << "0.93";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 16) || (i == 17)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:                :" << "12";
		gotoxy(21, 11);
		cout << "Symbol                    :" << "Mg";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Magnesium";
		gotoxy(21, 13);
		cout << "Atomic Radius             :" << "130 pm";
		gotoxy(21, 14);
		cout<<"1st Ionisation Enthalpy     : 7.64 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity         " << "1.31";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    } else if (((i == 49) || (i == 50)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               " <<"13";
		gotoxy(21, 11);
		cout << "Symbol                   " << "Al";
		gotoxy(21, 12);
		cout << "Name                     " << "Aluminium";
		gotoxy(21, 13);
		cout << "Atomic Radius            " << "111 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "5.98 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "1.61";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 52) || (i == 53)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "14";
		gotoxy(21, 11);
		cout << "Symbol                   :" << "Si";
		gotoxy(21, 12);
		cout << "Name                     :" << "Silicon";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "102 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "8.15 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "1.90";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 55) || (i == 56)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "15";
		gotoxy(21, 11);
		cout << "Symbol                   :P" << "P";
		gotoxy(21, 12);
		cout << "Name                     :Phosphorus";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "94 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "10.48 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "2.19";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 58) || (i == 59)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "16";
		gotoxy(21, 11);
		cout << "Symbol                   :" << "S";
		gotoxy(21, 12);
		cout << "Name                     :" << "Sulfur";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "95 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "10.36 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "2.58";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 61) || (i == 62)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "17";
		gotoxy(21, 11);
		cout << "Symbol                   :" << "Cl";
		gotoxy(21, 12);
		cout << "Name                     :" << "Chlorine";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "93 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "12.96 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "3.16";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 64) || (i == 65)) && (j == 9)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "18";
		gotoxy(21, 11);
		cout << "Symbol                   :" << "Ar";
		gotoxy(21, 12);
		cout << "Name                     :" << "Argon";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "96 pm";
		gotoxy(21, 14);
		cout << "1st Ionisation potential :" << "15.75 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :-" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 13) || (i == 14)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No:               :" << "19";
		gotoxy(21, 11);
		cout << "Symbol                   :" << "K";
		gotoxy(21, 12);
		cout << "Name                     :" << "Potassium";
		gotoxy(21, 13);
		cout << "Atomic Radius            :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy  :"<<"4.34 ev";;
		gotoxy(21, 15);
		cout << "Electronegativity        :" << "0.82";
		gotoxy(30, 20);
		cout << "Press Any Key To Return......";
	    } else if (((i == 16) || (i == 17)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "20";
		gotoxy(21, 11);
		cout << "Symbol                  :" << "Ca";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Calcium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "133 pm";
		gotoxy(21, 14);
		cout<<"1st ionisation enhtalpy   :"<<"6.11 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.00";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 19) || (i == 20)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "21";
		gotoxy(21, 11);
		cout << "Symbol                  :" << "Sc";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Scandium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "114 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.56 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.00";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 22) || (i == 23)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "22";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ti";
		gotoxy(21, 12);
		cout << "Name       	     :" << "titanium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "108 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.82 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.54";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "23";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"V";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Vanadium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "106 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.74 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.63";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "24";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Chromium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "103 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.76 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.66";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "25";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Mn";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Manganese";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "103 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.43 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.55";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "26";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Fe";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Iron";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "102 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.9 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.83";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "27";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Co";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Cobalt";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "96 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.9 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.88";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "28";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ni";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Nickel";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "101 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.63 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.63";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "29";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cu";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Copper";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "120 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.72 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.90";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "30";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Zn";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Zinc";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.39 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.65";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "31";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ga";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Gallium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "121 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.99 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.81";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "32";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ge";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Germanium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "114 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.89 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.01";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "33";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"As";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Arsenic";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "106 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.78 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.18";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "34";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Se";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Selenium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "107 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.75 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.55";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "35";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Br";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Bromine";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "110 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.75 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.96";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j == 11)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "36";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Kr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Krypton";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "108 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"13.99 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "3.00";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 13) || (i == 14)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "37";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Rb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Rubidium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"4.17 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.82";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 16) || (i == 17)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "38";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Sr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Strontium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "139 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.69 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.95";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 19) || (i == 20)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "39";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Y";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Yttrium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "124 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.217 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.22";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 22) || (i == 23)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "40";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Zr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Zirconium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "121 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.63 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.33";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "41";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Nb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Niobium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "116 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.75 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.6";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "42";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Mo";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Molybdenum";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "113 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.09 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.16";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "43";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Tc";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Technetium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "110 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.28 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.9";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "44";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ru";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Ruthenium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "103 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.36 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j ==13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "45";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Rh";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Rhodium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "106 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.45 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.28";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "46";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pd";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Palladium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "112 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.33 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.20";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j ==13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "47";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ag";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Silver";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "137 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.57 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.93";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "48";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cd";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Cadmium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.99 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.69";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "49";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"In";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Indium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "146 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.78 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.78";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "50";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Sn";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Tin";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "132 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.34 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.96";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "51";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Sb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Antimony";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "127 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.604 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.05";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "52";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Te";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Tellurium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "121 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.00 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.1";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "53";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"I";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Iodine";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "125 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"10.45 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.66";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j == 13)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "54";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Xe";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Xenon";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "122 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"12.12 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.6";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 13) || (i == 14)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "55";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cs";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Cesium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "No data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"3.89 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.79";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 16) || (i == 17)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "56";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ba";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Barium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "149 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.211 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.89";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 19) || (i == 20)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "57";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"La";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Lanthanum";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "139 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.57 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.10";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 22) || (i == 23)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "72";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Hf";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Hafnium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "122 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.82 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "73";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ta";
		gotoxy(21, 12);
		cout << "Name       	     :" << "tantalum";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "119 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.54 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.5";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "74";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"W";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Tungsten";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "115 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.86 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.36";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "75";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Re";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Rhenium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "110";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.83 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.9";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "76";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Os";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Osmium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "109 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.43 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "77";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ir";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Iridium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "107 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.96 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "78";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pt";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Platinum";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "110 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"8.95 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.28";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "79";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Au";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Gold";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "123 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"9.225 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.54";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "80";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Hg";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Mercury";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"10.43 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.00";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "81";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Tl";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Thallium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "150 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.10 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.62";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "82";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Lead";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "137 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.41 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.33";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "83";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Bi";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Bismuth";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "135 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"7.28 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.02";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j ==15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "84";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Po";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Polonium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "129 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.52 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "8.41 ev";;
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "85";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"At";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Astatine";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "138 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "2.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j ==15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "86";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Rn";
		gotoxy(21, 12);
		cout << "Name           	      " << "Radon";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "133 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"10.74 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 13) || (i == 14)) && (j == 15)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "87";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Fr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Francium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "No data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"4.07 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.7";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 16) || (i == 17)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "88";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ra";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Radium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "159 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.27 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "0.89";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 19) || (i == 20)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "89";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ac";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Actinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "140 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.17 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.1";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 22) || (i == 23)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "104";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Rf";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Rutherfordium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "131 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.0 ev";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "105";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Db";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Dubinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "126 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "106";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Sg";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Seaborgium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "121 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "107";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Bh";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Bohrium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "119 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "108";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Hs";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Hassium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "118 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "109";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Mt";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Meitnerium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "113 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "110";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ds";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Darmstadtium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "112 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "111";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Rg";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Roentgenium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "118 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "112";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cn";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Copernicium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "130 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "113";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Nh";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Nihonium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "114";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Fl";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Flerovium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "115";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Mc";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Moscovium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "116";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Lv";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Livermorium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "117";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ts";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Tennessine";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "118";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Og";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Oganesson";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 26) || (i == 27)) && (j == 17)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "91";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Db";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Dubinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "126 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"no data";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "58";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ce";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Cerium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "131 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.53 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "112";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "59";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Praseodymium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "128 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.47 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.13";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "60";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Nd";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Neodymium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.52 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.14";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "61";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pm";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Promethium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.58 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.13";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "62";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Sm";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Samarium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.64 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.17";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "63";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Eu";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Europium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.67 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "64";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Gd";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Gadolinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "132 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.15 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.2";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "65";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Tb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Terbium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.86 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.22";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "66";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Dy";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Dysprosium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.93 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.23";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "67";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Ho";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Holmium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.02 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.24";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "68";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Er";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Erbium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "No data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.10 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.24";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "69";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Tm";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Thulium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.18 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.25";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "70";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Yb";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Ytterbium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.25 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.1";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j == 21)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "71";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Lu";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Lutetium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "131 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.42 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.27";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 25) || (i == 26)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "90";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Th";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Thorium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "136 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.306 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.1";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 28) || (i == 29)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "91";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pa";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Proactinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "129 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.89 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.5";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 31) || (i == 32)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "92";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"U";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Uranium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "118 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.19 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.38";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 34) || (i == 35)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "93";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Np";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Neptunium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "116 pm";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.26 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.36";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 37) || (i == 38)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "94";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Pu";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Plutonium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.26 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.28";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 40) || (i == 41)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "95";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Am";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Americium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.02 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 43) || (i == 44)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "96";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cm";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Curium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"5.99 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 46) || (i == 47)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "97";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Bk";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Berkelium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.19 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 49) || (i == 50)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "98";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Cf";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Californium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.28 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 52) || (i == 53)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "99";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Es";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Einsteinium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.42 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 55) || (i == 56)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "100";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Fm";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Fermium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.50 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 58) || (i == 59)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "101";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Md";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Mendelivium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.58";
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 61) || (i == 62)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "102";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"No";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Nobelium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"6.65 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "1.3";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		else if (((i == 64) || (i == 65)) && (j == 23)) {
		system("cls");
		frame();
		gotoxy(21, 10);
		cout << "Atomic No               :" << "103";
		gotoxy(21, 11);
		cout << "Symbol                  :" <<"Lr";
		gotoxy(21, 12);
		cout << "Name       	     :" << "Lawrencium";
		gotoxy(21, 13);
		cout << "Covalent Radius         :" << "no data";
		gotoxy(21, 14);
		cout<<  "1st ionisation enthalpy :"<<"4.9 ev";;
		gotoxy(21, 15);
		cout << "Electonegativity        :" << "no data";
		gotoxy(30, 20);
		cout << "Press Any Key To Return.....   ";
	    }
		char key;
	    key = getch();
	    if (key == 27) exit(0);
	    else display();
	
	}

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}
