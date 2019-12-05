//
// Created by itznukeey on 20.11.19.
//

#include "Lobby.h"

void Lobby::addClient(shared_ptr<Client>& client) {
    if (this->clients.size() < this->limit) {
        clients.push_back(client);
    }
}

Lobby::Lobby(int limit, int id) : limit(limit), id(id) {}

int Lobby::getId() const {
    return id;
}
