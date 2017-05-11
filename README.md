# esrtool v0.25.1

A simple esr (un)patching tool.

Fork from 0.24a esr-disc-patcher-cli v0.24

Original thread: http://psx-scene.com/forums/f164/esr-disc-patcher-linux-mac-qt4-port-60096/

Mirror: https://web.archive.org/web/20150919031500/http://psx-scene.com/forums/f164/esr-disc-patcher-linux-mac-qt4-port-60096/

### Binaries

Statically linked binaries in /bin/

Tested on windows 10 WSL.

### Running

To apply ESR patch

```
$ ./esrtool p path_to_iso
```

To remove ESR patch

```
$ ./esrtool u patch_to_patched_iso
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

* 2017-05-11 Rewrite of interface code in c. Now esrtool.
* 2017-05-11 Added static make rules
* 2017-05-01 defines.h uses <csting> type includes
* 2017-04-30 forked from https://github.com/antipatico/esr-disc-patcher-cli
