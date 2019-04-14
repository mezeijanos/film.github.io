//
// Created by János on 2019. 04. 04..
//

#ifndef FILMTAR_FILM_H
#define FILMTAR_FILM_H


class Film{

    //cím
    //lejátszási idő
    //kiadási év

    string cim;
    int ido;        //percben
    int kiadasiev;

public:
    Film(string c, int i, int kiade) : cim(c), ido(i), kiadasiev(kiade) {}      //kostruktor
    ~ Film virtual () {}                                                        //destruktor


};



#endif //FILMTAR_FILM_H
