# 개요

이 리포지토리는 다음 번 프로젝트 세팅을 빠르게 하기 위해 만들었으며, 환경은 아래와 같습니다.  

> 1. Windows 11 OS
> 2. MinGW-w64 (x86_64 posix-seh-ucrt-rt_v11 13.2.0-rev1)
> 3. CMake 3.28.3

빌드 수행 전, CMakeLists.txt 파일에서 MinGW-w64 컴파일러의 bin 폴더 경로와 프로젝트 이름을 설정해야 합니다.  
빌드는 builder.bat 파일이 수행하며, 결과 바이너리는 CMakeLists.txt 파일과 동일한 곳에 생성됩니다.  

사용된 외부 라이브러리는 CMakeLists.txt 파일의 최상단에 나열되어 있습니다.