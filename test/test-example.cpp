#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test1_suite)

BOOST_AUTO_TEST_CASE(my_test)
{
    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_SUITE_END()
