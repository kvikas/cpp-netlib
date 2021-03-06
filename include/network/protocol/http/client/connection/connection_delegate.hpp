#ifndef BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_CONNECTION_DELEGATE_HPP_
#define BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_CONNECTION_DELEGATE_HPP_

// Copyright 2011 Dean Michael Berris (dberris@google.com).
// Copyright 2011 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/streambuf.hpp>
#include <boost/function.hpp>

namespace boost { namespace network { namespace http {

struct connection_delegate {
  virtual void connect(asio::ip::tcp::endpoint & endpoint,
                       std::string const & host,
                       function<void(system::error_code const &)> handler) = 0;
  virtual void write(asio::streambuf & command_streambuf,
                     function<void(system::error_code const &, size_t)> handler) = 0;
  virtual void read_some(asio::mutable_buffers_1 const & read_buffer,
                         function<void(system::error_code const &, size_t)> handler) = 0;
  virtual ~connection_delegate() {}
};

} /* http */

} /* network */

} /* boost */

#endif /* BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_CONNECTION_DELEGATE_HPP_ */
