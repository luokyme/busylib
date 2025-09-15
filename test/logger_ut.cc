#include <busylib/base/logger.h>
#include <busylib/util/unit_test.h>

using namespace busylib;

TEST_CASE("logger prints formatted messages", "[logger]")
{
  Logger::setLevel(Logger::LOG_INFO);
  logInfo("Test format string: 5 = %d", 5);
  logInfo("Test append string: 5 = ") << 5;

  Logger::setLevel(Logger::LOG_DEBUG);
  REQUIRE(Logger::level() == Logger::LOG_DEBUG);
  Logger::setLevel(Logger::LOG_INFO);
}
