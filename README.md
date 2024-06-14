#### Jenkins_stuff
This plugin will show the most frequent failing test on Jenkins 
#### install docker
    sudo apt  install docker.io
#### launch Docker container
    docker run -p 8080:8080 -p 50000:50000 --volume /home/$USER/jenkins/:/home/docker/jenkins/  --name jenkins_machine jenkins/jenkins:lts
#### Launch Jenkins in browser using below URL, initial password can be found when docker run command in used above
    http://localhost:8080/
#### Go inside the container using below command
    docker exec -it  -u root jenkins_machine /bin/bash
####
    install cmake, g++ , gtest and other required tool
#### stop container using below command
    docker stop jenkins_machine
#### start container using below command
    docker start jenkins_machine
#### to see all global Variable Reference
http://localhost:8080/pipeline-syntax/globals

#### Jenkins CLI
_http://localhost:8080/cli/_

