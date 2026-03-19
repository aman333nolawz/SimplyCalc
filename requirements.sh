cd
echo "Downloading Requirements"
git clone https://github.com/CodeFromKerala/parse_func
echo "Installing..."
cd parse_func
make install
make clean

echo "Downloaded and Installed, enjoy SimplyCalc :P"
