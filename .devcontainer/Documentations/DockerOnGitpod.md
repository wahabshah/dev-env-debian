* https://github.com/gitpod-io/gitpod/pull/4018 => 
```sh
gitpod /workspace $ /.supervisor/supervisor terminal list
ALIAS                                PID COMMAND            ANNOTATIONS
c67b36aa-2c81-43f1-ad8d-a05209b5316b 94  /bin/bash          
2afccc08-ad74-4d3e-8788-41d1e0c8a162 666 /usr/bin/docker-up gitpod.supervisor=true
```
* http://0pointer.de/blog/projects/socket-activation.html => 

```sh
root        1044  0.0  0.1 2416648 77216 pts/1   Ssl+ 02:31   0:00 /usr/bin/dockerd --data-root=/workspace/.docker-root --add-runtime gitpod=/usr/bin/runc-facade --default-runtime gitpod --mtu=1440 --network-control-plane-mtu=1440 -H fd://
root        1072  0.2  0.0 2095328 52472 ?       Ssl  02:31   0:01 containerd --config /var/run/docker/containerd/containerd.toml --log-level info
```
```sh
gitpod /workspace/template-x11-vnc (main) $ sudo cat /var/run/docker/containerd/containerd.toml
version = 0
root = "/workspace/.docker-root/containerd/daemon"
state = "/var/run/docker/containerd/daemon"
plugin_dir = ""
disabled_plugins = ["cri"]
oom_score = 0

[grpc]
  address = "/var/run/docker/containerd/containerd.sock"
  tcp_address = ""
  tcp_tls_cert = ""
  tcp_tls_key = ""
  uid = 0
  gid = 0
  max_recv_message_size = 16777216
  max_send_message_size = 16777216

[ttrpc]
  address = ""
  uid = 0
  gid = 0

[debug]
  address = "/var/run/docker/containerd/containerd-debug.sock"
  uid = 0
  gid = 0
  level = "info"

[metrics]
  address = ""
  grpc_histogram = false

[cgroup]
  path = ""

[plugins]
  [plugins.linux]
    shim = "containerd-shim"
    runtime = "runc"
    runtime_root = "/workspace/.docker-root/runc"
    no_shim = false
    shim_debug = false
```

```sh
gitpod /workspace/template-x11-vnc (main) $ sudo tree /workspace/.docker-root
/workspace/.docker-root
├── buildkit
│   ├── cache.db
│   ├── containerdmeta.db
│   ├── content
│   │   └── ingest
│   ├── executor
│   ├── metadata_v2.db
│   └── snapshots.db
├── containerd
│   └── daemon
│       ├── io.containerd.content.v1.content
│       │   └── ingest
│       ├── io.containerd.metadata.v1.bolt
│       │   └── meta.db
│       ├── io.containerd.runtime.v1.linux
│       ├── io.containerd.runtime.v2.task
│       ├── io.containerd.snapshotter.v1.btrfs
│       ├── io.containerd.snapshotter.v1.native
│       │   └── snapshots
│       ├── io.containerd.snapshotter.v1.overlayfs
│       │   └── snapshots
│       └── tmpmounts
├── containers
├── image
│   └── overlay2
│       ├── distribution
│       ├── imagedb
│       │   ├── content
│       │   │   └── sha256
│       │   └── metadata
│       │       └── sha256
│       ├── layerdb
│       └── repositories.json
├── network
│   └── files
│       └── local-kv.db
├── overlay2
│   └── l
├── plugins
│   ├── storage
│   │   └── ingest
│   └── tmp
├── runtimes
├── swarm
├── tmp
├── trust
└── volumes
    └── metadata.db

40 directories, 8 files
```


```sh
$ sudo ./.devcontainer/dockerd-install-script.sh 
$ sudo /usr/local/share/docker-init.sh
$ sudo docker run hello-world
$ sudo usermod -aG docker gitpod
$ newgrp docker
$ docker run hello-world
$ sudo chown $(whoami):$(whoami) /var/run/docker.sock
```