# libpulse-wine
This repo can be used to build a libpulse-0.dll for use in Wine with the foo_out_pulse foobar2000 component, that will allow foobar to use the system libpulse client library directly, communicating with Pulseaudio via the Unix socket like a native application. It is not recommended.
Only the APIs used by the component are implemented, but you could extend this to expose the whole of libpulse. (now out of date, needs other functions adding)

## Building
Make sure the Wine repo has the same version checked out as your own machine and build using build.sh. You will need to rebuild every time you update Wine.
