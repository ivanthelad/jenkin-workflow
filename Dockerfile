FROM openshift/jenkins-1-centos7
MAINTAINER imk@redhat.com

LABEL io.k8s.description=“jenkins” \
      io.k8s.display-name=“jenkins flow“ \
      io.openshift.expose-services="8080:http" \
      io.openshift.tags=“jenkins"
COPY plugins.txt /opt/openshift/configuration/plugins.txt
RUN /usr/local/bin/plugins.sh /opt/openshift/configuration/plugins.txt
