rm -rf prebuild
mkdir prebuild
pushd prebuild
curl -O -L https://github.com/atom/atom/releases/download/v1.37.0/atom.x86_64.rpm
rpm2cpio atom.x86_64.rpm | cpio -i -d -u
rm atom.x86_64.rpm
rm ./usr/share/atom/libffmpeg.so
gcc --shared -fPIC -Wl,-soname,libffmpeg.so ../stub.c -o ./usr/share/atom/libffmpeg.so
tar -zcf ../atom-prebuilt-1.37.0.tar.gz usr
rm -rf usr

