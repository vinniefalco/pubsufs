//
// Copyright (c) 2024 Vinnie Falco (vinnie.falco@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/cppalliance/pubsufs
//

#ifndef BOOST_PUBSUFS_DETAIL_EXCEPT_HPP
#define BOOST_PUBSUFS_DETAIL_EXCEPT_HPP

#include <boost/assert/source_location.hpp>
#include <boost/system/error_code.hpp>

namespace boost {
namespace pubsufs {
namespace detail {

BOOST_PUBSUFS_DECL void BOOST_NORETURN
throw_system_error(
    system::error_code const& ec,
    source_location const& loc =
        BOOST_PUBSUFS_POS);

BOOST_PUBSUFS_DECL void BOOST_NORETURN
throw_errc(
    boost::system::errc::errc_t ev,
    source_location const& loc =
        BOOST_PUBSUFS_POS);

//-----

BOOST_PUBSUFS_DECL void BOOST_NORETURN
throw_invalid_argument(
    source_location const& loc =
        BOOST_PUBSUFS_POS);

BOOST_PUBSUFS_DECL void BOOST_NORETURN
throw_length_error(
    source_location const& loc =
        BOOST_PUBSUFS_POS);

} // detail
} // pubsufs
} // boost

#endif
