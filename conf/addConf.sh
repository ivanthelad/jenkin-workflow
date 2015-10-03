#sed -e '/<\/hudson.model.AllView>/ r jenkins-config.xml' -e 'x;$G' config.xml.bck
echo "updating views"
ls -l /opt/openshift/configuration/
#sed -e '/<\/views>/ r jenkins-config.xml' -e 'x;$G' /var/lib/jenkins/config.xml > /var/lib/jenkins/config.xml
echo "$(sed -e '/<\/views>/ r /tmp/conf/jenkins-config.xml' -e 'x;$G' /opt/openshift/configuration/config.xml)" > /opt/openshift/configuration/config.xml 
#echo "$(cat /opt/openshift/configuration/config.xml)"
echo "$(cat /tmp/bla.txt)"
#sed -e '/<\/views>/ r /tmp/conf/jenkins-config.xml' -e 'x;$G' /opt/openshift/configuration/config.xml 
