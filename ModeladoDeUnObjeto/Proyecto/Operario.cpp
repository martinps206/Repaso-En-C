#include "Operario.hpp"

Operario::Operario(int identificador, bool disponible){
    identificador_ = identificador;
    disponible_ = disponible;
}

bool Operario::estaDisponible() const {
    return disponible_;
}