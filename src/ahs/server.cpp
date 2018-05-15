#include "ahs/async_acceptor.hpp"

int main()
{
    boost::asio::io_service service;

    auto acceptor = async_acceptor(service);
    acceptor.async_run();

    service.run();
}