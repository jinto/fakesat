[QtSDK 설치](http://chanik.egloos.com/3817935) 는 한번 읽어보고, 실제로 Qt다운로드는
* 리눅스: http://qt.nokia.com/downloads/linux-x11-cpp
* 맥: http://qt.nokia.com/downloads/sdk-mac-os-cpp-offline
* 윈도우: http://qt.nokia.com/downloads/windows-cpp (요기에 mingw 컴파일러를 먼저 적당한 곳에 압축풀어줘야함ㅎㅁ)


[맥에서 설치하기](http://kofmania.tistory.com/201)

파이썬 바인딩을 사용하는 경우에는 [pySide](http://www.pyside.org/)를 사용.

참고
===
* 디렉토리를 만들고, 
* hello world 따위의 [소스](http://stackoverflow.com/questions/5280952/how-to-compile-qt-code-in-command-line-on-mac-os) 를 만든다음, 
* qmake -project;qmake (맥의 경우는 quake -project;qmake -spec macx-g++)라고 하면 Makefile이 생긴다. 그자리에서 make를 실행하면, 컴파일이 시작된다.
* 완료되면, 서브 디렉터리 (debug, release 또는 맥의 경우에는 name.app폴더 아래) 에 실행파일이 생성되어있을 것이다.
* 튜토리얼 : http://doc.trolltech.com/4.3/tutorial-t1.html, http://qt-project.org/doc/qt-4.8/tutorials.html

주의 QT버그! (경로명에 한글있으면 곤란)
