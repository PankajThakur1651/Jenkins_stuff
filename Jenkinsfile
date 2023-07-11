pipeline
{
    agent any 
    environment {
    PATH = "/opt/maven/bin:/usr/bin/cmake/:${env.PATH}"
  }
        stages{
            
            stage("Clean up")
            {
                steps {
                    deleteDir()
                    
                }
            }
            stage("Clone Repo")
            {
                steps
                {
                    echo "PATH is: ${env.PATH}"
                    sh "git clone https://github.com/panthaku/Jenkins_stuff.git"
                }
            }
            stage("Build")
            {
                steps{
                    dir("Jenkins_stuff/build"){
                        sh "cmake .."
                        sh "make"
                    }
                }
            }
            stage("Test")
            {
                steps{
                    dir("Jenkins_stuff/build"){
                        sh "./runTests --gtest_output=xml:testng-results.xml"
                    }
                }
            }
             post {
    always {
      testNG(showFailedBuilds: true,
             unstableFails: 5, unstableSkips: 25,
             failedFails:  10, failedSkips:   50)
    }
  }
        }
}

