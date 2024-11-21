#!/usr/bin/env bash

# Sets up the query files of this repository to work with nvim-treesitter plugin of neovim

set -xe

mkdir -p "$HOME/.config/nvim/queries/fasm"
cp -r ./queries/ "$HOME/.config/nvim/queries/fasm"
