Name     : atom
Version  : 1.32.1
Release  : 4
URL      : https://github.com/atom/atom/archive/v1.32.1.tar.gz
Source0  : https://github.com/atom/atom/archive/v1.32.1.tar.gz
Source10 : http://localhost/atom/atom-prebuilt-1.32.1.tar.gz
Source20 : prebuild.sh
Source30 : stub.c
Summary  : Atom Editor
Group    : Development/Tools
License  : AFL-2.1 BSD-3-Clause ISC MIT
BuildRequires : git
BuildRequires : libX11-dev
BuildRequires : libsecret-dev
BuildRequires : libxkbfile-dev
BuildRequires : make
BuildRequires : nodejs

Provides: libcrypto.so.1.0.0(OPENSSL_1.0.0)(64bit)
Provides: libssl.so.1.0.0(OPENSSL_1.0.0)(64bit)
%description
Atom Editor

%prep
%setup -q -n atom-1.32.1


%build

%install
rm -rf %{buildroot}
mkdir -p %{buildroot}/
pushd %{buildroot}
tar -axf %{SOURCE10}
popd

%files
%defattr(-,root,root,-)
/usr/bin/*
/usr/share/*
