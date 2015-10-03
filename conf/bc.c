
<?xml version='1.0' encoding='UTF-8'?>
<hudson>
  <version>1.619</version>
  <numExecutors>5</numExecutors>
  <mode>NORMAL</mode>
  <useSecurity>true</useSecurity>
  <authorizationStrategy class="hudson.security.GlobalMatrixAuthorizationStrategy">
    <permission>hudson.model.Computer.Configure:admin</permission>
    <permission>hudson.model.Computer.Configure:system_builder</permission>
    <permission>hudson.model.Computer.Delete:admin</permission>
    <permission>hudson.model.Hudson.Administer:admin</permission>
    <permission>hudson.model.Hudson.Administer:system_builder</permission>
    <permission>hudson.model.Hudson.Read:admin</permission>
    <permission>hudson.model.Hudson.Read:system_builder</permission>
    <permission>hudson.model.Item.Build:admin</permission>
    <permission>hudson.model.Item.Configure:admin</permission>
    <permission>hudson.model.Item.Create:admin</permission>
    <permission>hudson.model.Item.Delete:admin</permission>
    <permission>hudson.model.Item.Read:admin</permission>
    <permission>hudson.model.Item.Workspace:admin</permission>
    <permission>hudson.model.Run.Delete:admin</permission>
    <permission>hudson.model.Run.Update:admin</permission>
    <permission>hudson.model.View.Configure:admin</permission>
    <permission>hudson.model.View.Create:admin</permission>
    <permission>hudson.model.View.Delete:admin</permission>
    <permission>hudson.scm.SCM.Tag:admin</permission>
  </authorizationStrategy>
  <securityRealm class="hudson.security.HudsonPrivateSecurityRealm">
    <disableSignup>true</disableSignup>
  </securityRealm>
  <markupFormatter class="hudson.markup.RawHtmlMarkupFormatter"/>
  <jdks/>
  <viewsTabBar class="hudson.views.DefaultViewsTabBar"/>
  <myViewsTabBar class="hudson.views.DefaultMyViewsTabBar"/>
  <slaves/>
  <quietPeriod>1</quietPeriod>
  <scmCheckoutRetryCount>0</scmCheckoutRetryCount>
  <views>
    <hudson.model.AllView>
      <owner class="hudson" reference="../../.."/>
      <name>All</name>
      <filterExecutors>false</filterExecutors>
      <filterQueue>false</filterQueue>
      <properties class="hudson.model.View$PropertyList"/>
    </hudson.model.AllView>
    <se.diabol.jenkins.pipeline.DeliveryPipelineView plugin="delivery-pipeline-plugin@0.9.7">
      <owner class="hudson" reference="../../.."/>
      <name>Delivery Pipeline</name>
      <filterExecutors>false</filterExecutors>
      <filterQueue>false</filterQueue>
      <properties class="hudson.model.View$PropertyList"/>
      <componentSpecs>
        <se.diabol.jenkins.pipeline.DeliveryPipelineView_-ComponentSpec>
          <name>Ticket Monster</name>
          <firstJob>ticket-monster-build</firstJob>
        </se.diabol.jenkins.pipeline.DeliveryPipelineView_-ComponentSpec>
      </componentSpecs>
      <noOfPipelines>3</noOfPipelines>
      <showAggregatedPipeline>false</showAggregatedPipeline>
      <noOfColumns>3</noOfColumns>
      <sorting>none</sorting>
      <showAvatars>false</showAvatars>
      <updateInterval>2</updateInterval>
      <showChanges>false</showChanges>
      <allowManualTriggers>true</allowManualTriggers>
      <regexpFirstJobs/>
    </se.diabol.jenkins.pipeline.DeliveryPipelineView>
    <au.com.centrumsystems.hudson.plugin.buildpipeline.BuildPipelineView plugin="build-pipeline-plugin@1.4.8">
      <owner class="hudson" reference="../../.."/>
      <name>Build Pipeline</name>
      <filterExecutors>false</filterExecutors>
      <filterQueue>false</filterQueue>
      <properties class="hudson.model.View$PropertyList"/>
      <gridBuilder class="au.com.centrumsystems.hudson.plugin.buildpipeline.DownstreamProjectGridBuilder">
        <firstJob>ticket-monster-build</firstJob>
      </gridBuilder>
      <noOfDisplayedBuilds>3</noOfDisplayedBuilds>
      <buildViewTitle></buildViewTitle>
      <consoleOutputLinkStyle>Lightbox</consoleOutputLinkStyle>
      <cssUrl></cssUrl>
      <triggerOnlyLatestJob>false</triggerOnlyLatestJob>
      <alwaysAllowManualTrigger>false</alwaysAllowManualTrigger>
      <showPipelineParameters>false</showPipelineParameters>
      <showPipelineParametersInHeaders>false</showPipelineParametersInHeaders>
      <startsWithParameters>false</startsWithParameters>
      <refreshFrequency>3</refreshFrequency>
      <showPipelineDefinitionHeader>false</showPipelineDefinitionHeader>
    </au.com.centrumsystems.hudson.plugin.buildpipeline.BuildPipelineView>
  </views>
  <primaryView>All</primaryView>
  <slaveAgentPort>-1</slaveAgentPort>
  <label></label>
  <nodeProperties/>
  <globalNodeProperties/>
  <disabledAdministrativeMonitors/>
  <noUsageStatistics>true</noUsageStatistics>
</hudson>
