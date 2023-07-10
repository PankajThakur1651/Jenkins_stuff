pipeline
{
    agent any 
    environment {
    PATH = "/opt/maven/bin:${env.PATH}"
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
                        sh "cd build"
                        sh "cmake.."
                        sh "make"
                    }
                }
            }
            stage("Test")
            {
                steps{
                    dir("Jenkins_stuff/build"){
                        sh "runTests"
                    }
                }
            }
        }
    
}