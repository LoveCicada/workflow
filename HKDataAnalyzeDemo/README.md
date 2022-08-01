
### 代码结构

- 代码结构
```
.
├── app
│   └── main
├── lib
│   ├── DataAnalyze
│   │   ├── algorithm
│   │   ├── analyze
│   │   ├── model
│   │   └── process
│   ├── DataInterface
│   ├── DataManage
│   │   ├── data
│   │   └── ui
│   ├── DataPlugin
│   ├── DataReportTool
│   └── DataReview
│       ├── data
│       └── ui
└── out
```

- 代码详细结构
```
.
├── CMakeLists.txt
├── README.md
├── app
│   ├── CMakeLists.txt
│   └── main
│       └── main.cpp
├── format.bat
├── lib
│   ├── CMakeLists.txt
│   ├── DataAnalyze
│   │   ├── algorithm
│   │   │   ├── CXAlgorithmDebug.h
│   │   │   ├── CXAlgorithmDetail.h
│   │   │   └── CXAlgorithmEdit.h
│   │   ├── analyze
│   │   │   ├── CXAnalyzeTaskEdit.h
│   │   │   └── CXAnalyzeTaskRun.h
│   │   ├── model
│   │   │   ├── CXChooseParseData.h
│   │   │   ├── CXDataModel.h
│   │   │   └── CXOperateDataModel.h
│   │   └── process
│   │       ├── CXOperator.h
│   │       ├── CXProcessOerator.h
│   │       └── CXResultData.h
│   ├── DataInterface
│   │   ├── CXDataBase.h
│   │   └── CXDataInterface.h
│   ├── DataManage
│   │   ├── data
│   │   │   ├── CXFlightDataManage.h
│   │   │   ├── CXFlightLog.h
│   │   │   └── CXFlightParamsManage.h
│   │   └── ui
│   │       └── CXDataNavigationWnd.h
│   ├── DataPlugin
│   │   ├── CXFlightData.h
│   │   ├── CXFlightParamsData.h
│   │   ├── CXFlightSarImgData.h
│   │   └── CXFlightVideoData.h
│   ├── DataReportTool
│   │   ├── CXReportEdit.h
│   │   ├── CXReportResult.h
│   │   ├── CXReportSetting.h
│   │   └── CXReportTemplateManage.h
│   └── DataReview
│       ├── data
│       └── ui
│           ├── CXLayout.h
│           ├── CXNormalLayout.h
│           ├── CXRandomLayout.h
│           └── CXVisualControlSet.h
└── out

```