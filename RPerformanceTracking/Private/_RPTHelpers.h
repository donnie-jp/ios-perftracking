#if DEBUG
#   define RPTLog(...) NSLog(@"[Performance Tracking] %@", ([NSString stringWithFormat:__VA_ARGS__]))

//#   define RPTLogVerbose(...) RPTLog(__VA_ARGS__)
#   define RPTLogVerbose(...) do { } while(0)
#else
#   define RPTLog(...) do { } while(0)

#   define RPTLogVerbose(...) do { } while(0)
#endif


