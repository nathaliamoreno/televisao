#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    private:
            int volume, canal;

        public:
            Televisao();
            Televisao(int canal, int volume);
            void addCanal();
            void addVolume();
            int getCanal();
            int getVolume();
            void setCanal(int canal);
            void setVolume(int volume);
            void subCanal();
            void subVolume();

};

#endif // TELEVISAO_H
