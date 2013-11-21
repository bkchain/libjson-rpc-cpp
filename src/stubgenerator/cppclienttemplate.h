#ifndef JSONRPC_CPP_CLIENTTEMPLATE_CLIENT_H_
#define JSONRPC_CPP_CLIENTTEMPLATE_CLIENT_H_

#define TEMPLATE_CLIENT_METHOD "\
        <return_type> <methodname>(<parameters>) throw (jsonrpc::JsonRpcException)\n\
        {\n\
            Json::Value p;\n\
            <parameter_assign>\n\
            <return_statement>\n\
        }\n\
"

#define TEMPLATE_CLIENT_STUB "\
/**\n\
 * THIS FILE IS GENERATED BY jsonrpcstub, DO NOT CHANGE IT!!!!!\n\
 */\n\
\n\
#ifndef _<STUBNAME>_H_\n\
#define _<STUBNAME>_H_\n\
\n\
#include <jsonrpc/client.h>\n\
\n\
class <stubname> : public jsonrpc::Client\n\
{\n\
    public:\n\
        <stubname>(jsonrpc::AbstractClientConnector &conn) : \n\
            jsonrpc::Client(conn)\n\
        {\n\
        }\n\n\
<methods>\
};\n\
#endif //_<STUBNAME>_H_\n\
"

#endif //JSONRPC_CPP_CLIENTTEMPLATE_CLIENT_H_