
// Copyright 2010 Dean Michael Berris. 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#define BOOST_TEST_MODULE HTTP Client Get Timeout Test
#include <boost/network/include/http/client.hpp>
#include <boost/test/unit_test.hpp>

namespace http = boost::network::http;

BOOST_AUTO_TEST_CASE(http_get_test_timeout_1_0) {
    http::client::request request("http://localhost:12121/");
    http::client::response response_;
    http::client client_;
    boost::uint16_t port_ = port(request);
    std::string temp;
    BOOST_CHECK_EQUAL ( 12121, port_ );
    BOOST_CHECK_THROW ( response_ = client_.get(request); temp = body(response_); , std::exception );
}

