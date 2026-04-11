.PHONY: build

name?=default

sketch:
	arduino-cli sketch new $(name) \
		&& cp ./templates/Makefile.tpl ./$(name)/Makefile \
		&& tree ./$(name)
