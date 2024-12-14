#ifndef WEBLAND_BROWSECORE_HTML_HH
#define WEBLAND_BROWSECORE_HTML_HH

#include <sstream>

#include <browsecore_dom.hh>

namespace browsecore {
    DocumentObjectModel ParseHtmlFromStringStream(std::stringstream str_stream);
}

#endif