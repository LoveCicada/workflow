
# workflow
workflow soft develop study

### study resource
[工作流系统之三十二 设计模式在工作流系统开发中的运用](http://t.zoukankan.com/webreport-p-1943409.html)

[Workflow设计模式](https://blog.csdn.net/JackLi31742/article/details/98068358)

[浅谈简单工作流设计——责任链模式配合策略与命令模式的实现](https://blog.csdn.net/iteye_353/article/details/82242836?spm=1001.2101.3001.6650.1&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1-82242836-blog-98068358.pc_relevant_multi_platform_whitelistv3&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7Edefault-1-82242836-blog-98068358.pc_relevant_multi_platform_whitelistv3&utm_relevant_index=2)

[Flowable工作流引擎概要](https://zhuanlan.zhihu.com/p/417014073)

[Camunda入门（一） - 选型及核心概念](https://blog.csdn.net/luo15242208310/article/details/122648136)

[Windows Workflow Foundation之旅（六）——框架组成、工作流创作模式](https://www.cnblogs.com/wayne-ivan/archive/2007/09/06/883699.html)



***

### 无人机机载数据分析应用工作流设计
1. 定义任务Task设计
   Task参考数据库增删改查设计
2. 工作流各流程中交互以Task进行交互
   解析Task，然后按照各自的算子进行处理
3. 构建抽象算子对象设计
   实例化各类型算子实现，例如C++，Java，Python，Mysql。(策略模式)

4. 如何实现工作流中各子流程数据处理完毕，通知下一阶段流程？
   各算子执行是执行对应脚本，或者运行某进程程序。
   跨进程通知如何优雅设计？
   
5. 各算子脚本或者可执行程序的命名与算子名称相同。
   
6. 使用QProcess启动外部程序，并监听程序完成状态，及杀死外部程序
   
7. 



***

- doc

[从零实现一个 http 服务器](https://zhuanlan.zhihu.com/p/411152110)

[一文彻底弄懂REST API](https://zhuanlan.zhihu.com/p/536437382)

[开源项目推荐：C++ Web/Http Server/Rest开发框架（请重点关注Oat++和搜狗workflow）](https://developer.aliyun.com/article/804257)

[wfrest是基于当前最火最简洁好用的c++异步网络库workflow](https://www.zhihu.com/question/332778359?utm_source=com.evernote)

[wfrest: C++ Web Framework REST API](https://github.com/wfrest/wfrest/blob/main/README_cn.md)

[wfrest: C++ Web Framework REST API](https://gitee.com/MonkeyKingX/wfrest)

[详解Linux监控重要进程的实现方法](https://cloud.tencent.com/developer/article/1722336)

[c++调用python](https://blog.csdn.net/lc_MVP/article/details/121430286?spm=1001.2101.3001.6650.11&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7EESLANDING%7Edefault-11-121430286-blog-55194714.pc_relevant_multi_platform_whitelistv4eslandingctr2&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7EESLANDING%7Edefault-11-121430286-blog-55194714.pc_relevant_multi_platform_whitelistv4eslandingctr2&utm_relevant_index=14)

[【Linux】进程控制（wait 和 waitpid）的理解和使用](https://zhuanlan.zhihu.com/p/484949219)

[linux下基于boost/process库实现多进程管理，基于c++开发](https://copyfuture.com/blogs-details/202208312028571728)

[cpp-subprocess](https://github.com/tsaarni/cpp-subprocess)

***

- sougou workflow编译
```bash
sudo apt-get install libssl-dev

mkdir build
cd build
cmake ..
make 
sudo make install

```

- wfrest编译
```bash
mkdir build
cd build
cmake ..
make 
sudo make install
```

