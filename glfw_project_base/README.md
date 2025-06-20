# 개요

이 리포지토리는 C++ OpenGL 프로젝트 세팅을 빠르게 하기 위해 만들었으며, 테스트 환경은 아래와 같습니다.  

> 1. Windows 11 OS
> 2. MinGW-w64 (x86_64 posix-seh-ucrt-rt_v11 13.2.0-rev1)
> 3. CMake 3.28.3
> 4. Visual Studio Code

static library 및 DLL 바이너리가 MinGW-w64 기준으로 되어 있으므로, 반드시 동일한 컴파일러를 사용하여 빌드해야 합니다.  
빌드 결과 바이너리는 CMakeLists.txt 파일과 동일한 곳에 생성됩니다.  
___
# 외부 라이브러리

> - glfw: 3.4.0
> - glew: 2.1.0
