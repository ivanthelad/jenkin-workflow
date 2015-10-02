FROM openshift/jenkins-1-centos7
MAINTAINER imk@redhat.com

LABEL io.k8s.description="jenkins" \
      io.k8s.display-name="jenkins flow" \
      io.openshift.expose-services="8080:http" \
      io.openshift.tags="jenkins"
COPY plugins.txt /opt/openshift/configuration/plugins.txt
RUN /usr/local/bin/plugins.sh /opt/openshift/configuration/plugins.txt

RUN mkdir /opt/openshift/configuration/jobs/ticket-monster-{analysis,build,deploy-dev,func-test,release,test}
#ADD jobs/job-analysis.xml 		/var/lib/jenkins/jobs/ticket-monster-analysis/config.xml
#ADD jobs/job-build.xml 			/var/lib/jenkins/jobs/ticket-monster-build/config.xml
ADD jobs/job-release.xml                /opt/openshift/configuration/jobs/ticket-monster-release/config.xml
ADD jobs/job-deploy-dev.xml             /opt/openshift/configuration/jobs/ticket-monster-deploy-dev/config.xml
ADD jobs/job-deploy-systest.xml         /opt/openshift/configuration/jobs/ticket-monster-deploy-systest/config.xml
ADD jobs/job-deploy-perftest.xml        /opt/openshift/configuration/jobs/ticket-monster-deploy-perftest/config.xml
ADD jobs/job-deploy-preprod.xml         /opt/openshift/configuration/jobs/ticket-monster-deploy-preprod/config.xml
ADD jobs/job-test-func.xml              /opt/openshift/configuration/jobs/ticket-monster-test-func/config.xml
ADD jobs/job-test-int.xml               /opt/openshift/configuration/jobs/ticket-monster-test-int/config.xml
ADD jobs/job-test-sys.xml               /opt/openshift/configuration/jobs/ticket-monster-test-sys/config.xml
ADD jobs/job-test-perf.xml              /opt/openshift/configuration/jobs/ticket-monster-test-perf/config.xml
