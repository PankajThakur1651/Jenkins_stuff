# Jenkins_stuff

docker run -p 8080:8080 -p 50000:50000 --volume /home/$USER/jenkins/:/home/docker/jenkins/  --name jenkins_machine jenkins/jenkins:lts

docker exec -it  -u root jenkins_machine /bin/bash

install cmake, g++ and other required tool

docker start jenkins_machine
docker stop jenkins_machine
