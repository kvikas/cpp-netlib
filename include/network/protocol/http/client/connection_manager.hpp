#ifndef BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_MANAGER_HPP_20110930
#define BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_MANAGER_HPP_20110930

// Copyright 2011 Dean Michael Berris (dberris@google.com).
// Copyright 2011 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/shared_ptr.hpp>

namespace boost { namespace asio {

class io_service;

}  // namespace asio

}  // namespace boost

namespace boost { namespace network { namespace http {

struct client_connection;
struct request_base;
class client_options;

struct connection_manager {
  virtual shared_ptr<client_connection> get_connection(
      asio::io_service & service,
      request_base const & request,
      client_options const & options) = 0;
  virtual void clear_resolved_cache() = 0;
  virtual void reset() = 0;
  virtual ~connection_manager() = 0;
};

} /* http */

} /* network */

} /* boost */

#ifdef BOOST_NETWORK_NO_LIB
#include <network/protocol/http/client/connection_manager.ipp>
#endif

#endif /* BOOST_NETWORK_PROTOCOL_HTTP_CLIENT_CONNECTION_MANAGER_HPP_20110930 */
