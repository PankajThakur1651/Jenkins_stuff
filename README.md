#### jenkins_tutorial
This plugin will show the most frequent failing test on Jenkins 
#### install docker
    sudo apt  install docker.io
#### launch Docker container
    docker run -p 8080:8080 -p 50000:50000 --volume /home/$USER/jenkins/:/home/docker/jenkins/  --name jenkins_machine jenkins/jenkins:lts
#### Launch Jenkins in browser using below URL, Jenkins initial setup is required. A password for user admin  can be found when docker run command was used above
    http://localhost:8080/
#### Go inside the container using below command
    docker exec -it  -u root jenkins_machine /bin/bash
#### install cmake, g++ and other tools if required in container 
    apt-get update
    apt-get upgrade
    apt-get install cmake
    apt-get install g++
##### install gtest and gmock
    cd ~
    git clone https://github.com/google/googletest.git
    cd googletest
    mkdir build && cd build
    cmake .. -DBUILD_SHARED_LIBS=ON -DINSTALL_GTEST=ON -DCMAKE_INSTALL_PREFIX:PATH=/usr
    make -j8
    make install
    ldconfig

#### Install Test Result Analyzer plugin from the jenkins

#### stop container using below command
    docker stop jenkins_machine
#### start container using below command
    docker start jenkins_machine
#### to see all global Variable Reference
http://localhost:8080/pipeline-syntax/globals

#### Jenkins CLI
_http://localhost:8080/cli/_

#### To build using conan 
https://github.com/PankajThakur1651/cpp_with_conan_and_cmake/tree/main


## Types of Jenkins project
#### Free Style: 
    Simple Single task
#### pipeline: 
    Whole Delivery cycle, like build, test, deploy for a single branch
#### Multibranch Pipeline
    Whole Delivery cycle, like build, test, deploy for a multiple branch of same repository