/**
 *
 *  @file CouchBaseClient.h
 *  An Tao
 *
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#pragma once
#include <drogon/nosql/CouchBaseResult.h>
#include <functional>
#include <memory>
namespace drogon
{
namespace nosql
{
using NosqlCallback = std::function<void(const CouchBaseResult &)>;
class CouchBaseClient
{
  public:
    static std::shared_ptr<CouchBaseClient> newClient(
        const std::string &connStr,
        size_t connNum);
};
}  // namespace nosql
}  // namespace drogon