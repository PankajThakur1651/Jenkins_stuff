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
                        sh "rm -rf *"
                        sh "cmake .."
                        sh "make"
                    }
                }
            }
            stage("Test")
            {
                steps{
                    dir("Jenkins_stuff/build"){
                        sh "./runTests --gtest_output=xml:testing-results.xml"
                        echo "print xml contents now "
                        sh "cat testing-results.xml"
                    }
                }
            }
         
        }
}

