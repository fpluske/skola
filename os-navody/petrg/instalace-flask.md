sudo apt update && sudo apt install git
# doinstalovat docker
git clone https://github.com/petrgru/Flask-OS
cd Flask-OS
docker docker build -t flask .
docker run flask