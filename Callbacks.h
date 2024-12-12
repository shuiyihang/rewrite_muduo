#pragma once
#include <functional>
#include <memory>

class Timestamp;
class Buffer;
class TcpConnection;

using TcpConnectionPtr = std::shared_ptr<TcpConnection>;

using ConnectionCallback = std::function<void(const TcpConnectionPtr &)>;

using MessageCallback = std::function<void(const TcpConnectionPtr &, Buffer *, Timestamp)>;
using WriteCompleteCallback = std::function<void(const TcpConnectionPtr &)>;
using CloseCallback = std::function<void(const TcpConnectionPtr &)>;

using HighWaterMarkCallback = std::function<void(const TcpConnectionPtr &, size_t)>;