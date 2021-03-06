
//          Copyright Dean Michael Berris 2007, 2008.
// Copyright 2012 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef __NETWORK_PROTOCOL_HTTP_ERRORS_20080516_HPP__
#define __NETWORK_PROTOCOL_HTTP_ERRORS_20080516_HPP__

#include <exception>

namespace boost { namespace network { namespace http { namespace errors {

struct connection_timeout_exception : std::runtime_error
{};

typedef connection_timeout_exception connection_timeout;

} // namespace errors

} // namespace http

} // namespace network

} // namespace boost

#endif // __NETWORK_PROTOCOL_HTTP_20080516_HPP__

