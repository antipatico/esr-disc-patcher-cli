# esr-disc-patcher-cli v0.24.1
This git repo is used to host a clean version of esr-disc-patcher-cli

Fork from 0.24a

Original thread: http://psx-scene.com/forums/f164/esr-disc-patcher-linux-mac-qt4-port-60096/

Mirror: https://web.archive.org/web/20150919031500/http://psx-scene.com/forums/f164/esr-disc-patcher-linux-mac-qt4-port-60096/

### Binaries

0.24.1 release binaries in bin/ directory statically compiled for use on x86_64 Linux (compiled on Debian Jessie). Working Windows 10 WSL.

### Running

To apply ESR patch

```
$ ./esrpatch path_to_iso
```

To remove ESR patch

```
$ ./esrunpatch patch_to_patched_iso
```

### Compilation

```
$ make
```

```
$ make static
```

For the static binaries

### Changelog

* 2017-05-11 Added static make rules
* 2017-05-01 defines.h uses <csting> type includes
* 2017-4-30 forked from https://github.com/antipatico/esr-disc-patcher-cli
