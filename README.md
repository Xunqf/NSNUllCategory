# NSNUllCategory
相信不少开发者，都被NSNull坑过，最常见的是服务器返回的json里面，说好的字典、数组、数字，结果返回的是空值。
 
这个时候，NSJSONSerialization 会自动把他们换成 NSNull。当我们再去用dict[@“hello”]的时候，就会出触发exception，导致程序崩溃。

