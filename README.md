# libpulse-wine
This repo can be used to build a libpulse-0.dll for use in Wine with the foo_out_pulse foobar2000 component, that will allow foobar to use the system libpulse client library directly, communicating with Pulseaudio via the Unix socket like a native application.
Only the APIs used by the component are implemented, but you could extend this to expose the whole of libpulse.

## Building
Make sure the Wine repo has the same version checked out as your own machine and build using build.sh
