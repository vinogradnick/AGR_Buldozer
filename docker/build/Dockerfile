
FROM gcc:latest as build
WORKDIR /gtest_build

RUN apt-get update && \
    apt-get install -y \
      libboost-dev libboost-program-options-dev \
      libgtest-dev \
      cmake \
    && \
    cmake -DCMAKE_BUILD_TYPE=Release /usr/src/gtest && \
    cmake --build . && \
    mv lib*.a /usr/lib

ADD ./buldozer /app

WORKDIR /app/build

RUN cmake ../buldozer && \
    cmake --build . && \
    CTEST_OUTPUT_ON_FAILURE=TRUE cmake --build . --target test




FROM ubuntu:latest
RUN groupadd -r sample && useradd -r -g buldozer buldozer
USER  buldozer
WORKDIR /app

COPY --from=build /app/build/buldozer .

ENTRYPOINT ["./buldozer"]