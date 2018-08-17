#include "Televisao.h"

Televisao::Televisao(){
    canal = 0;
    volume = 0;
}
Televisao::Televisao(int canal, int volume){
    setCanal(canal);
    setVolume(volume);

}
void Televisao::addCanal(){
    setCanal(getCanal()+1);
}
void Televisao::addVolume(){
    setVolume(getVolume()+1);
}
int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
void Televisao::setCanal(int canal){

     if((canal < 1) || (canal > 99)){
        this->canal = 1;
    }else{
        this->canal = canal;
    }
}
void Televisao::setVolume(int volume){

    if((volume >= 0) && (volume <= 99)){
      this->volume = volume;
    }else if(volume <0){
        this->volume = 0;
    }else if(volume >99){
        this->volume = 99;
    }
}
void Televisao::subCanal(){
    setCanal(getCanal()-1);
}
void Televisao::subVolume(){
    setVolume(getVolume()-1);
}







