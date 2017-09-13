REPO := dsu-cs-3005-examples-2017-40
WEB_REPO := dsu-cs-3005-cplusplus

all:

commit-push:
	x=`git status | grep 'nothing to commit' | wc -l`; \
	if [ "$$x" = "0" ]; then \
		EDITOR="emacs -nw -q" git commit -a; \
	fi;
	git push;

update-web:
	git add .
	x=`git status | grep 'nothing to commit' | wc -l`; \
	if [ "$$x" = "0" ]; then \
		git commit -A -m 'automated daily commit'; \
	fi;
	git push;
	ssh cgl@helios "cd courses/$(REPO)/; git pull; make install-on-helios"

install-on-helios:
	( cd ../$(WEB_REPO); make install-examples )


