//Made by Bassam



#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Calculator Function
int Calc() {

    float Total, num1, num2, option;

    char op;
    cout << "What do you want to calculate ?\n Choose a number " << endl;
    cout << "1. Normal Calculating\n2. sequare root Calculating\n3. Exponent Calculating\n4. Area Calculating\n5. Volume Calculating" << endl;


    cin >> option;
    if (option == 1) {
        cout << "Enter expression: "; cin >> num1 >> op >> num2;
        switch (op) {

        case '+':
            Total = num1 + num2;
            cout << Total << endl;
            break;
        case '-':
            Total = num1 - num2;
            cout << Total << endl;
            break;
        case '*':
            Total = num1 * num2;
            cout << Total << endl;
            break;
        case '/':
            Total = num1 / num2;
            cout << Total << endl;
            break;
        case '%':
            Total = num1 / num2;
            cout << Total << endl;
            break;

        default:
            cout << "invalid operator" << endl;


        };

    }

    if (option == 2) {

        float num;
        cout << "Enter any number:";
        cin >> num;
        Total = sqrt(num);

        cout << Total << endl;
    }

    if (option == 3) {





        float base{};
        float exponent{};
        cout << "Enter number:\n";
        cin >> base; cout << endl << "Enter exponent:\n"; cin >> exponent;
        Total = pow(base, exponent);



        cout << Total << endl;


    }

    if (option == 4) {

        int shape;
        float len1, len2;

        cout << "Choose shape" << endl;
        cout << "1. Square\n2. Rectangle\n3. Circle\n4. Triangle" << endl;
        cin >> shape;
        if (shape == 1) {

            cout << "Enter one side length" << endl;
            cin >> len1;
            Total = len1 * len1;
            cout << Total << "cm^2" << endl;
        }
        if (shape == 2) {

            cout << "Enter width" << endl;
            cin >> len1;
            cout << "Enter length" << endl;
            cin >> len2;
            Total = len1 * len2;

            cout << Total << "cm^2" << endl;


        }
        if (shape == 3) {
            float radius;


            cout << "Enter the radius of circle: ";
            cin >> radius;

            Total = 3.14 * radius * radius;
            cout << Total << "cm^2" << endl;



        }
        if (shape == 4) {

            float height, base;

            cout << "Enter height:" << endl;
            cin >> height;
            cout << "Enter base: " << endl;
            cin >> base;
            Total = (0.5) * height * base;

            cout << Total << endl;


        }






    }
    if (option == 5) {
        float shape;
        cout << "Choose shape" << endl;
        cout << "1. Cube\n2. Cylinder\n3. sphere" << endl;
        cin >> shape;

        if (shape == 1) {

            float side;
            cout << " Input the side of a cube: " << endl;
            cin >> side;
            Total = (side * side * side);

            cout << Total << endl;





        }

        if (shape == 2) {

            float rad, hight;

            cout << " Input the radius of the cylinder : " << endl;
            cin >> rad;
            cout << " Input the height of the cylinder : " << endl;
            cin >> hight;
            Total = (3.14 * rad * rad * hight);

            cout << Total << endl;







        }

        if (shape == 3) {

            float rad;

            cout << " Input the radius of a sphere : ";
            cin >> rad;
            Total = (4 * 3.14 * rad * rad * rad) / 3;

            cout << Total << endl;





        }



    }





    return 0;






     }

     // Element informations funcion 
     void Eleinfo() {
         string Sym; // The symbol that the user gonna input
         
         // Symbols Data
         string H = "Name : Hydrogen\nElectrons = 1 \nProtons = 1 \nAtomic Number = 1\nAtomic Mass = 2\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 1\n Period = 1\n";
         string Li = "Name : Lithium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n" ;
         string Na = "Name : Sodium	\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string K = "Name : Potassium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Rb = "Name : Rubidium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cs = "Name : Cesium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Fr = "Name : Francium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Be = "Name : Beryllium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Mg = "Name : Magnesium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ca = "Name : Calcium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sr = "Name : Strontium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ba = "Name : Barium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ra = "Name : Radium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sc = "Name : Scandium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Y = "Name : Yttrium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ti = "Name : Titanium\nElectrons = 0\nProtons = 0\n Atomic Number = 22\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Zr = "Name : Zirconium\nElectrons = 0\nProtons = 0\n Atomic Number = 40\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Hf = "Name : Hafnium\nElectrons = 0\nProtons = 0\n Atomic Number = 72\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Rf = "Name : Rutherfordium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string V = "Name : Vanadium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Nb = "Name : Niobium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ta = "Name : Tantalum\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Db = "Name : Dubnium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cr = "Name : Chromium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Mo = "Name : Molybdenum\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string W = "Name : Tungsten\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sg = "Name : Seaborgium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Mn = "Name : Manganese\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Tc = "Name : Technetium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Re = "Name : Rhenium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Bh = "Name : Bohrium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Fe = "Name : Iron\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ru = "Name : Ruthenium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Os = "Name : Osmium\nElectrons = 0\nProtons = 0\n Atomic Number = 76\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Hs = "Name : Hassium\nElectrons = 0\nProtons = 0\n Atomic Number = 108\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Co = "Name : Cobalt\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Rh = "Name : Rhodium\nElectrons = 0\nProtons = 0\n Atomic Number = 45\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ir = "Name : Iridium\nElectrons = 0\nProtons = 0\n Atomic Number = 77\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Mt = "Name : Meitnerium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ni = "Name : Nickel\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pd = "Name : Palladium\nElectrons = 0\nProtons = 0\n Atomic Number = 46\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pt = "Name : Platinum\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ds = "Name : Darmstadtium\nElectrons = 0\nProtons = 0\n Atomic Number = 110\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cu = "Name : Copper\nElectrons = 0\nProtons = 0\n Atomic Number = 29\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ag = "Name : Silver\nElectrons = 0\nProtons = 0\n Atomic Number = 47\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Au = "Name : Gold\nElectrons = 0\nProtons = 0\n Atomic Number = 79\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Rg = "Name : Roentgenium\nElectrons = 0\nProtons = 0\n Atomic Number = 111\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Zn = "Name : Zinc\nElectrons = 0\nProtons = 0\n Atomic Number = 30\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cd = "Name : Cadmium\nElectrons = 0\nProtons = 0\n Atomic Number = 0\n Atomic Mass = 48\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Hg = "Name : Mercury\nElectrons = 0\nProtons = 0\n Atomic Number = 80\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cn = "Name : Copernicium\nElectrons = 0\nProtons = 0\n Atomic Number = 112\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string B = "Name : Boron\nElectrons = 0\nProtons = 0\n Atomic Number = 5\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Al = "Name : Aluminium\nElectrons = 0\nProtons = 0\n Atomic Number = 13\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ga = "Name : Gallium\nElectrons = 0\nProtons = 0\n Atomic Number = 31\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string In = "Name : Indium\nElectrons = 0\nProtons = 0\n Atomic Number = 49\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Tl = "Name : Thallium\nElectrons = 0\nProtons = 0\n Atomic Number = 81\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Nh = "Name : Nihonium\nElectrons = 0\nProtons = 0\n Atomic Number = 113\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string C = "Name : Carbon\nElectrons = 0\nProtons = 0\n Atomic Number = 6\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Si = "Name : Silicon\nElectrons = 0\nProtons = 0\n Atomic Number = 14\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ge = "Name : Germanium\nElectrons = 0\nProtons = 0\n Atomic Number = 32\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sn = "Name : Tin\nElectrons = 0\nProtons = 0\n Atomic Number = 50\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pb = "Name : Lead\nElectrons = 0\nProtons = 0\n Atomic Number = 82\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Fl = "Name : Flerovium\nElectrons = 0\nProtons = 0\n Atomic Number = 114\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string N = "Name : Nitrogen\nElectrons = 0\nProtons = 0\n Atomic Number = 7\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string P = "Name : Phosphorus\nElectrons = 0\nProtons = 0\n Atomic Number = 15\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string As = "Name : Arsenic\nElectrons = 0\nProtons = 0\n Atomic Number = 33\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sb = "Name : Antimony\nElectrons = 0\nProtons = 0\n Atomic Number = 51\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Bi = "Name : Bismuth\nElectrons = 0\nProtons = 0\n Atomic Number = 33\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Mc = "Name : Moscovium\nElectrons = 0\nProtons = 0\n Atomic Number = 115\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string O = "Name : Oxygen\nElectrons = 0\nProtons = 0\n Atomic Number = 8\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string S = "Name : Sulfur\nElectrons = 0\nProtons = 0\n Atomic Number = 16\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Se = "Name : Selenium\nElectrons = 0\nProtons = 0\n Atomic Number = 34\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Te = "Name : Tellurium\nElectrons = 0\nProtons = 0\n Atomic Number = 52\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Po = "Name : Polonium\nElectrons = 0\nProtons = 0\n Atomic Number = 84\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Lv = "Name : Livermorium\nElectrons = 0\nProtons = 0\n Atomic Number = 116\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string F = "Name : Fluorine\nElectrons = 0\nProtons = 0\n Atomic Number = 9\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cl = "Name : Chlorine\nElectrons = 0\nProtons = 0\n Atomic Number = 17\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Br = "Name : Bromine\nElectrons = 0\nProtons = 0\n Atomic Number = 35\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string I = "Name : Iodine\nElectrons = 0\nProtons = 0\n Atomic Number = 53\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string At = "Name : Astatine\nElectrons = 0\nProtons = 0\n Atomic Number = 85\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ts = "Name : Tennessine\nElectrons = 0\nProtons = 0\n Atomic Number = 117\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string He = "Name : Helium\nElectrons = 0\nProtons = 0\n Atomic Number = 2\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ne = "Name : Neon\nElectrons = 0\nProtons = 0\n Atomic Number = 10\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ar = "Name : Argon\nElectrons = 0\nProtons = 0\n Atomic Number = 18\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Kr = "Name : Krypton\nElectrons = 0\nProtons = 0\n Atomic Number = 36\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Xe = "Name : Xenon\nElectrons = 0\nProtons = 0\n Atomic Number = 54\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Rn = "Name : Radon\nElectrons = 0\nProtons = 0\n Atomic Number = 86\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Og = "Name : Oganesson\nElectrons = 0\nProtons = 0\n Atomic Number = 118\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string La = "Name : Lanthanum\nElectrons = 0\nProtons = 0\n Atomic Number = 57\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ac = "Name : Actinium\nElectrons = 0\nProtons = 0\n Atomic Number = 89\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ce = "Name : Cerium\nElectrons = 0\nProtons = 0\n Atomic Number = 58\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Th = "Name : Thorium\nElectrons = 0\nProtons = 0\n Atomic Number = 90\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pr = "Name : Praseodymium\nElectrons = 0\nProtons = 0\n Atomic Number = 59\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pa = "Name : Protactinium\nElectrons = 0\nProtons = 0\n Atomic Number = 91\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Nd = "Name : Neodymium\nElectrons = 0\nProtons = 0\n Atomic Number = 60\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string U = "Name : Uranium\nElectrons = 0\nProtons = 0\n Atomic Number = 92\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pm = "Name : Promethium\nElectrons = 0\nProtons = 0\n Atomic Number = 61\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Np = "Name : Neptunium\nElectrons = 0\nProtons = 0\n Atomic Number = 93\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Sm = "Name : Samarium\nElectrons = 0\nProtons = 0\n Atomic Number = 62\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Pu = "Name : Plutonium\nElectrons = 0\nProtons = 0\n Atomic Number = 94\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Eu = "Name : Europium\nElectrons = 0\nProtons = 0\n Atomic Number = 63\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Am = "Name : Americium\nElectrons = 0\nProtons = 0\n Atomic Number = 95\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Gd = "Name : Gadolinium\nElectrons = 0\nProtons = 0\n Atomic Number = 64\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cm = "Name : Curium\nElectrons = 0\nProtons = 0\n Atomic Number = 96\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Tb = "Name : Terbium\nElectrons = 0\nProtons = 0\n Atomic Number = 65\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Bk = "Name : Berkelium\nElectrons = 0\nProtons = 0\n Atomic Number = 97\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Dy = "Name : Dysprosium\nElectrons = 0\nProtons = 0\n Atomic Number = 66\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Cf = "Name : Californium\nElectrons = 0\nProtons = 0\n Atomic Number = 98\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Ho = "Name : Holmium\nElectrons = 0\nProtons = 0\n Atomic Number = 67\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Es = "Name : Einsteinium\nElectrons = 0\nProtons = 0\n Atomic Number = 99\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Er = "Name : Erbium\nElectrons = 0\nProtons = 0\n Atomic Number = 68\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Fm = "Name : Fermium\nElectrons = 0\nProtons = 0\n Atomic Number = 100\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Tm = "Name : Thulium\nElectrons = 0\nProtons = 0\n Atomic Number = 69\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Md = "Name : Mendelevium\nElectrons = 0\nProtons = 0\n Atomic Number = 101\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Yb = "Name : Ytterbium\nElectrons = 0\nProtons = 0\n Atomic Number = 70\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string No = "Name : Nobelium\nElectrons = 0\nProtons = 0\n Atomic Number = 102\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Lu = "Name : Lutetium\nElectrons = 0\nProtons = 0\n Atomic Number = 71\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";
         string Lr = "Name : Lawrencium\nElectrons = 0\nProtons = 0\n Atomic Number = 103\n Atomic Mass = 0\nElectronegativity = 0\nOuter Shell Electrons = 0\nGroup = 0\nPeriod = 0\n";

           
            

             
             
           
             

             
            


             

             cout << "Enter element symbol" << endl;
             cin >> Sym;
             
             if (Sym.compare("H") == 0)
             {
                 cout << H << std::endl;
             }
             if (Sym.compare("He") == 0)
             {
                 cout << He << std::endl;
             }
             if (Sym.compare("Li") == 0)
             {
                 cout << Li << std::endl;
             }
             if (Sym.compare("Be") == 0)
             {
                 cout << Be << std::endl;
             }
             if (Sym.compare("B") == 0)
             {
                 cout << B << std::endl;
             }
             if (Sym.compare("C") == 0)
             {
                 cout << C << std::endl;
             }
             if (Sym.compare("N") == 0)
             {
                 cout << N << std::endl;
             }
             if (Sym.compare("O") == 0)
             {
                 cout << O << std::endl;
             }
             if (Sym.compare("F") == 0)
             {
                 cout << F << std::endl;
             }
             if (Sym.compare("Ne") == 0)
             {
                 cout << Ne << std::endl;
             }
             if (Sym.compare("Na") == 0)
             {
                 cout << Na << std::endl;
             }
             if (Sym.compare("Mg") == 0)
             {
                 cout << Mg << std::endl;
             }
             if (Sym.compare("Al") == 0)
             {
                 cout << Al << std::endl;
             }
             if (Sym.compare("Si") == 0)
             {
                 cout << Si << std::endl;
             }
             if (Sym.compare("P") == 0)
             {
                 cout << P << std::endl;
             }
             if (Sym.compare("S") == 0)
             {
                 cout << S << std::endl;
             }
             if (Sym.compare("Cl") == 0)
             {
                 cout << Cl << std::endl;
             }
             if (Sym.compare("Ar") == 0)
             {
                 cout << Ar << std::endl;
             }
             if (Sym.compare("K") == 0)
             {
                 cout << K << std::endl;
             }
             if (Sym.compare("Ca") == 0)
             {
                 cout << Ca << std::endl;
             }
             if (Sym.compare("Sc") == 0)
             {
                 cout << Sc << std::endl;
             }
             if (Sym.compare("Ti") == 0)
             {
                 cout << Ti << std::endl;
             }
             if (Sym.compare("V") == 0)
             {
                 cout << V << std::endl;
             }
             if (Sym.compare("Cr") == 0)
             {
                 cout << Cr << std::endl;
             }
             if (Sym.compare("Mn") == 0)
             {
                 cout << Mn << std::endl;
             }
             if (Sym.compare("Fe") == 0)
             {
                 cout << Fe << std::endl;
             }
             if (Sym.compare("Co") == 0)
             {
                 cout << Co << std::endl;
             }
             if (Sym.compare("Ni") == 0)
             {
                 cout << Ni << std::endl;
             }
             if (Sym.compare("Cu") == 0)
             {
                 cout << Cu << std::endl;
             }
             if (Sym.compare("Zn") == 0)
             {
                 cout << Zn << std::endl;
             }
             if (Sym.compare("Ga") == 0)
             {
                 cout << Ga << std::endl;
             }
             if (Sym.compare("Ge") == 0)
             {
                 cout << Ge << std::endl;
             }
             if (Sym.compare("As") == 0)
             {
                 cout << As << std::endl;
             }
             if (Sym.compare("Se") == 0)
             {
                 cout << Se << std::endl;
             }
             if (Sym.compare("Br") == 0)
             {
                 cout << Br << std::endl;
             }
             if (Sym.compare("Kr") == 0)
             {
                 cout << Kr << std::endl;
             }
             if (Sym.compare("Rb") == 0)
             {
                 cout << Rb << std::endl;
             }
             if (Sym.compare("Sr") == 0)
             {
                 cout << Sr << std::endl;
             }
             if (Sym.compare("Y") == 0)
             {
                 cout << Y << std::endl;
             }
             if (Sym.compare("Zr") == 0)
             {
                 cout << Zr << std::endl;
             }
             if (Sym.compare("Nb") == 0)
             {
                 cout << Nb << std::endl;

             }
             if (Sym.compare("Mo") == 0)
             {
                 cout << Mo << std::endl;
             }
             if (Sym.compare("Tc") == 0)
             {
                 cout << Tc << std::endl;
             }
             if (Sym.compare("Ru") == 0)
             {
                 cout << Ru << std::endl;
             }
             if (Sym.compare("Rh") == 0)
             {
                 cout << Rh << std::endl;
             }
             if (Sym.compare("Pd") == 0)
             {
                 cout << Pd << std::endl;
             }
             if (Sym.compare("Ag") == 0)
             {
                 cout << Ag << std::endl;
             }
             if (Sym.compare("Cd") == 0)
             {
                 cout << Cd << std::endl;
             }
             if (Sym.compare("In") == 0)
             {
                 cout << In << std::endl;
             }
             if (Sym.compare("Sn") == 0)
             {
                 cout << Sn << std::endl;
             }
             if (Sym.compare("Sb") == 0)
             {
                 cout << Sb << std::endl;
             }
             if (Sym.compare("Te") == 0)
             {
                 cout << Te << std::endl;
             }
             if (Sym.compare("I") == 0)
             {
                 cout << I << std::endl;
             }
             if (Sym.compare("Xe") == 0)
             {
                 cout << Xe << std::endl;
             }
             if (Sym.compare("Cs") == 0)
             {
                 cout << Cs << std::endl;
             }
             if (Sym.compare("Ba") == 0)
             {
                 cout << Ba << std::endl;
             }
             if (Sym.compare("La") == 0)
             {
                 cout << La << std::endl;
             }
             if (Sym.compare("Ce") == 0)
             {
                 cout << Ce << std::endl;
             }
             if (Sym.compare("Pr") == 0)
             {
                 cout << Pr << std::endl;
             }
             if (Sym.compare("Nd") == 0)
             {
                 cout << Nd << std::endl;
             }
             if (Sym.compare("Pm") == 0)
             {
                 cout << Pm << std::endl;
             }
             if (Sym.compare("Sm") == 0)
             {
                 cout << Sm << std::endl;
             }
             if (Sym.compare("Eu") == 0)
             {
                 cout << Eu << std::endl;
             }
             if (Sym.compare("Gd") == 0)
             {
                 cout << Gd << std::endl;
             }
             if (Sym.compare("Tb") == 0)
             {
                 cout << Tb << std::endl;
             }
             if (Sym.compare("Dy") == 0)
             {
                 cout << Dy << std::endl;
             }
             if (Sym.compare("Ho") == 0)
             {
                 cout << Ho << std::endl;
             }
             if (Sym.compare("Er") == 0)
             {
                 cout << Er << std::endl;
             }
             if (Sym.compare("Tm") == 0)
             {
                 cout << Tm << std::endl;
             }
             if (Sym.compare("Yb") == 0)
             {
                 cout << Yb << std::endl;
             }
             if (Sym.compare("Lu") == 0)
             {
                 cout << Lu << std::endl;
             }
             if (Sym.compare("Hf") == 0)
             {
                 cout << Hf << std::endl;
             }
             if (Sym.compare("Ta") == 0)
             {
                 cout << Ta << std::endl;
             }
             if (Sym.compare("W") == 0)
             {
                 cout << W << std::endl;
             }
             if (Sym.compare("Re") == 0)
             {
                 cout << Re << std::endl;
             }
             if (Sym.compare("Os") == 0)
             {
                 cout << Os << std::endl;
             }
             if (Sym.compare("Ir") == 0)
             {
                 cout << Ir << std::endl;
             }
             if (Sym.compare("Pt") == 0)
             {
                 cout << Pt << std::endl;
             }
             if (Sym.compare("Au") == 0)
             {
                 cout << Au << std::endl;
             }
             if (Sym.compare("Hg") == 0)
             {
                 cout << Hg << std::endl;
             }
             if (Sym.compare("Ti") == 0)
             {
                 cout << Ti << std::endl;
             }
             if (Sym.compare("Pb") == 0)
             {
                 cout << Pb << std::endl;
             }
             if (Sym.compare("Bi") == 0)
             {
                 cout << Bi << std::endl;
             }
             if (Sym.compare("Po") == 0)
             {
                 cout << Po << std::endl;
             }
             if (Sym.compare("Rn") == 0)
             {
                 cout << Rn << std::endl;
             }
             if (Sym.compare("Fr") == 0)
             {
                 cout << Fr << std::endl;
             }
             if (Sym.compare("Ra") == 0)
             {
                 cout << Ra << std::endl;
             }
             if (Sym.compare("Ac") == 0)
             {
                 cout << Ac << std::endl;
             }
             if (Sym.compare("Th") == 0)
             {
                 cout << Th << std::endl;
             }
             if (Sym.compare("Pa") == 0)
             {
                 cout << Pa << std::endl;
             }
             if (Sym.compare("U") == 0)
             {
                 cout << U << std::endl;
             }
             if (Sym.compare("Np") == 0)
             {
                 cout << Np << std::endl;
             }
             if (Sym.compare("Pu") == 0)
             {
                 cout << Pu << std::endl;
             }
             if (Sym.compare("Am") == 0)
             {
                 cout << Am << std::endl;
             }
             if (Sym.compare("Cm") == 0)
             {
                 cout << Cm << std::endl;
             }
             if (Sym.compare("Bk") == 0)
             {
                 cout << Bk << std::endl;
             }
             if (Sym.compare("Cf") == 0)
             {
                 cout << Cf << std::endl;
             }
             if (Sym.compare("Es") == 0)
             {
                 cout << Es << std::endl;
             }
             if (Sym.compare("Fm") == 0)
             {
                 cout << Fm << std::endl;
             }
             if (Sym.compare("Md") == 0)
             {
                 cout << Md << std::endl;
             }
             if (Sym.compare("No") == 0)
             {
                 cout << No << std::endl;
             }
             if (Sym.compare("Lr") == 0)
             {
                 cout << Lr << std::endl;
             }
             if (Sym.compare("Rf") == 0)
             {
                 cout << Rf << std::endl;
             }
             if (Sym.compare("Db") == 0)
             {
                 cout << Db << std::endl;
             }
             if (Sym.compare("Sg") == 0)
             {
                 cout << Sg << std::endl;
             }
             if (Sym.compare("Bh") == 0)
             {
                 cout << Bh << std::endl;
             }
             if (Sym.compare("Hs") == 0)
             {
                 cout << Hs << std::endl;
             }
             if (Sym.compare("Mt") == 0)
             {
                 cout << Mt << std::endl;
             }
             if (Sym.compare("Ds") == 0)
             {
                 cout << Ds << std::endl;
             }
             if (Sym.compare("Rg") == 0)
             {
                 cout << Rg << std::endl;
             }
             if (Sym.compare("Cn") == 0)
             {
                 cout << Cn << std::endl;
             }
             if (Sym.compare("Nh") == 0)
             {
                 cout << Nh << std::endl;
             }
             if (Sym.compare("Fl") == 0)
             {
                 cout << Fl << std::endl;
             }
             if (Sym.compare("Mc") == 0)
             {
                 cout << Mc << std::endl;
             }
             if (Sym.compare("Lv") == 0)
             {
                 cout << Lv << std::endl;
             }
             if (Sym.compare("Ts") == 0)
             {
                 cout << Ts << std::endl;
             }
             if (Sym.compare("Og") == 0)
             {
                 cout << Og << std::endl;
             }


         
     }
int main() {
    int option;
    cout << "Choose an option from below" << endl;
    cout << "1. Calculator\n2. Element info" << endl;
    cin >> option;

    if (option == 1) {
    
        Calc();
    
    
    
    
    }

    else if (option == 2) {
    
    
        Eleinfo();


    }
    else {
    
    
        cout << "Invalid Operator" << endl;
    
    
    
    
    }

    system("pause");


    return 0;
}