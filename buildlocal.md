docker build -t sqljs-devcontainer -f .devcontainer/Dockerfile .
docker run --rm -it \
  -v "$(pwd)":/github/workspace \
  -w /github/workspace \
  --entrypoint /github/workspace/.github/actions/build-sqljs/entrypoint.sh \
  sqljs-devcontainer