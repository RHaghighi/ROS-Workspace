(cl:defpackage vrep_common-srv
  (:use )
  (:export
   "SIMROSSETJOINTSTATE"
   "<SIMROSSETJOINTSTATE-REQUEST>"
   "SIMROSSETJOINTSTATE-REQUEST"
   "<SIMROSSETJOINTSTATE-RESPONSE>"
   "SIMROSSETJOINTSTATE-RESPONSE"
   "SIMROSCOPYPASTEOBJECTS"
   "<SIMROSCOPYPASTEOBJECTS-REQUEST>"
   "SIMROSCOPYPASTEOBJECTS-REQUEST"
   "<SIMROSCOPYPASTEOBJECTS-RESPONSE>"
   "SIMROSCOPYPASTEOBJECTS-RESPONSE"
   "SIMROSGETSTRINGPARAMETER"
   "<SIMROSGETSTRINGPARAMETER-REQUEST>"
   "SIMROSGETSTRINGPARAMETER-REQUEST"
   "<SIMROSGETSTRINGPARAMETER-RESPONSE>"
   "SIMROSGETSTRINGPARAMETER-RESPONSE"
   "SIMROSDISABLEPUBLISHER"
   "<SIMROSDISABLEPUBLISHER-REQUEST>"
   "SIMROSDISABLEPUBLISHER-REQUEST"
   "<SIMROSDISABLEPUBLISHER-RESPONSE>"
   "SIMROSDISABLEPUBLISHER-RESPONSE"
   "SIMROSGETANDCLEARSTRINGSIGNAL"
   "<SIMROSGETANDCLEARSTRINGSIGNAL-REQUEST>"
   "SIMROSGETANDCLEARSTRINGSIGNAL-REQUEST"
   "<SIMROSGETANDCLEARSTRINGSIGNAL-RESPONSE>"
   "SIMROSGETANDCLEARSTRINGSIGNAL-RESPONSE"
   "SIMROSGETOBJECTGROUPDATA"
   "<SIMROSGETOBJECTGROUPDATA-REQUEST>"
   "SIMROSGETOBJECTGROUPDATA-REQUEST"
   "<SIMROSGETOBJECTGROUPDATA-RESPONSE>"
   "SIMROSGETOBJECTGROUPDATA-RESPONSE"
   "SIMROSGETOBJECTPOSE"
   "<SIMROSGETOBJECTPOSE-REQUEST>"
   "SIMROSGETOBJECTPOSE-REQUEST"
   "<SIMROSGETOBJECTPOSE-RESPONSE>"
   "SIMROSGETOBJECTPOSE-RESPONSE"
   "SIMROSSETFLOATINGPARAMETER"
   "<SIMROSSETFLOATINGPARAMETER-REQUEST>"
   "SIMROSSETFLOATINGPARAMETER-REQUEST"
   "<SIMROSSETFLOATINGPARAMETER-RESPONSE>"
   "SIMROSSETFLOATINGPARAMETER-RESPONSE"
   "SIMROSLOADSCENE"
   "<SIMROSLOADSCENE-REQUEST>"
   "SIMROSLOADSCENE-REQUEST"
   "<SIMROSLOADSCENE-RESPONSE>"
   "SIMROSLOADSCENE-RESPONSE"
   "SIMROSGETCOLLISIONHANDLE"
   "<SIMROSGETCOLLISIONHANDLE-REQUEST>"
   "SIMROSGETCOLLISIONHANDLE-REQUEST"
   "<SIMROSGETCOLLISIONHANDLE-RESPONSE>"
   "SIMROSGETCOLLISIONHANDLE-RESPONSE"
   "SIMROSSETMODELPROPERTY"
   "<SIMROSSETMODELPROPERTY-REQUEST>"
   "SIMROSSETMODELPROPERTY-REQUEST"
   "<SIMROSSETMODELPROPERTY-RESPONSE>"
   "SIMROSSETMODELPROPERTY-RESPONSE"
   "SIMROSGETINTEGERPARAMETER"
   "<SIMROSGETINTEGERPARAMETER-REQUEST>"
   "SIMROSGETINTEGERPARAMETER-REQUEST"
   "<SIMROSGETINTEGERPARAMETER-RESPONSE>"
   "SIMROSGETINTEGERPARAMETER-RESPONSE"
   "SIMROSSTOPSIMULATION"
   "<SIMROSSTOPSIMULATION-REQUEST>"
   "SIMROSSTOPSIMULATION-REQUEST"
   "<SIMROSSTOPSIMULATION-RESPONSE>"
   "SIMROSSTOPSIMULATION-RESPONSE"
   "SIMROSADDSTATUSBARMESSAGE"
   "<SIMROSADDSTATUSBARMESSAGE-REQUEST>"
   "SIMROSADDSTATUSBARMESSAGE-REQUEST"
   "<SIMROSADDSTATUSBARMESSAGE-RESPONSE>"
   "SIMROSADDSTATUSBARMESSAGE-RESPONSE"
   "SIMROSSETOBJECTPOSITION"
   "<SIMROSSETOBJECTPOSITION-REQUEST>"
   "SIMROSSETOBJECTPOSITION-REQUEST"
   "<SIMROSSETOBJECTPOSITION-RESPONSE>"
   "SIMROSSETOBJECTPOSITION-RESPONSE"
   "SIMROSSYNCHRONOUS"
   "<SIMROSSYNCHRONOUS-REQUEST>"
   "SIMROSSYNCHRONOUS-REQUEST"
   "<SIMROSSYNCHRONOUS-RESPONSE>"
   "SIMROSSYNCHRONOUS-RESPONSE"
   "SIMROSAUXILIARYCONSOLEPRINT"
   "<SIMROSAUXILIARYCONSOLEPRINT-REQUEST>"
   "SIMROSAUXILIARYCONSOLEPRINT-REQUEST"
   "<SIMROSAUXILIARYCONSOLEPRINT-RESPONSE>"
   "SIMROSAUXILIARYCONSOLEPRINT-RESPONSE"
   "SIMROSGETOBJECTPARENT"
   "<SIMROSGETOBJECTPARENT-REQUEST>"
   "SIMROSGETOBJECTPARENT-REQUEST"
   "<SIMROSGETOBJECTPARENT-RESPONSE>"
   "SIMROSGETOBJECTPARENT-RESPONSE"
   "SIMROSGETOBJECTSELECTION"
   "<SIMROSGETOBJECTSELECTION-REQUEST>"
   "SIMROSGETOBJECTSELECTION-REQUEST"
   "<SIMROSGETOBJECTSELECTION-RESPONSE>"
   "SIMROSGETOBJECTSELECTION-RESPONSE"
   "SIMROSTRANSFERFILE"
   "<SIMROSTRANSFERFILE-REQUEST>"
   "SIMROSTRANSFERFILE-REQUEST"
   "<SIMROSTRANSFERFILE-RESPONSE>"
   "SIMROSTRANSFERFILE-RESPONSE"
   "SIMROSCLEARSTRINGSIGNAL"
   "<SIMROSCLEARSTRINGSIGNAL-REQUEST>"
   "SIMROSCLEARSTRINGSIGNAL-REQUEST"
   "<SIMROSCLEARSTRINGSIGNAL-RESPONSE>"
   "SIMROSCLEARSTRINGSIGNAL-RESPONSE"
   "SIMROSREADVISIONSENSOR"
   "<SIMROSREADVISIONSENSOR-REQUEST>"
   "SIMROSREADVISIONSENSOR-REQUEST"
   "<SIMROSREADVISIONSENSOR-RESPONSE>"
   "SIMROSREADVISIONSENSOR-RESPONSE"
   "SIMROSSETOBJECTFLOATPARAMETER"
   "<SIMROSSETOBJECTFLOATPARAMETER-REQUEST>"
   "SIMROSSETOBJECTFLOATPARAMETER-REQUEST"
   "<SIMROSSETOBJECTFLOATPARAMETER-RESPONSE>"
   "SIMROSSETOBJECTFLOATPARAMETER-RESPONSE"
   "SIMROSSETVISIONSENSORIMAGE"
   "<SIMROSSETVISIONSENSORIMAGE-REQUEST>"
   "SIMROSSETVISIONSENSORIMAGE-REQUEST"
   "<SIMROSSETVISIONSENSORIMAGE-RESPONSE>"
   "SIMROSSETVISIONSENSORIMAGE-RESPONSE"
   "SIMROSGETVISIONSENSORDEPTHBUFFER"
   "<SIMROSGETVISIONSENSORDEPTHBUFFER-REQUEST>"
   "SIMROSGETVISIONSENSORDEPTHBUFFER-REQUEST"
   "<SIMROSGETVISIONSENSORDEPTHBUFFER-RESPONSE>"
   "SIMROSGETVISIONSENSORDEPTHBUFFER-RESPONSE"
   "SIMROSGETCOLLECTIONHANDLE"
   "<SIMROSGETCOLLECTIONHANDLE-REQUEST>"
   "SIMROSGETCOLLECTIONHANDLE-REQUEST"
   "<SIMROSGETCOLLECTIONHANDLE-RESPONSE>"
   "SIMROSGETCOLLECTIONHANDLE-RESPONSE"
   "SIMROSGETOBJECTCHILD"
   "<SIMROSGETOBJECTCHILD-REQUEST>"
   "SIMROSGETOBJECTCHILD-REQUEST"
   "<SIMROSGETOBJECTCHILD-RESPONSE>"
   "SIMROSGETOBJECTCHILD-RESPONSE"
   "SIMROSENDDIALOG"
   "<SIMROSENDDIALOG-REQUEST>"
   "SIMROSENDDIALOG-REQUEST"
   "<SIMROSENDDIALOG-RESPONSE>"
   "SIMROSENDDIALOG-RESPONSE"
   "SIMROSGETUIHANDLE"
   "<SIMROSGETUIHANDLE-REQUEST>"
   "SIMROSGETUIHANDLE-REQUEST"
   "<SIMROSGETUIHANDLE-RESPONSE>"
   "SIMROSGETUIHANDLE-RESPONSE"
   "SIMROSGETJOINTMATRIX"
   "<SIMROSGETJOINTMATRIX-REQUEST>"
   "SIMROSGETJOINTMATRIX-REQUEST"
   "<SIMROSGETJOINTMATRIX-RESPONSE>"
   "SIMROSGETJOINTMATRIX-RESPONSE"
   "SIMROSSETSTRINGSIGNAL"
   "<SIMROSSETSTRINGSIGNAL-REQUEST>"
   "SIMROSSETSTRINGSIGNAL-REQUEST"
   "<SIMROSSETSTRINGSIGNAL-RESPONSE>"
   "SIMROSSETSTRINGSIGNAL-RESPONSE"
   "SIMROSCLOSESCENE"
   "<SIMROSCLOSESCENE-REQUEST>"
   "SIMROSCLOSESCENE-REQUEST"
   "<SIMROSCLOSESCENE-RESPONSE>"
   "SIMROSCLOSESCENE-RESPONSE"
   "SIMROSCREATEDUMMY"
   "<SIMROSCREATEDUMMY-REQUEST>"
   "SIMROSCREATEDUMMY-REQUEST"
   "<SIMROSCREATEDUMMY-RESPONSE>"
   "SIMROSCREATEDUMMY-RESPONSE"
   "SIMROSSETUIBUTTONPROPERTY"
   "<SIMROSSETUIBUTTONPROPERTY-REQUEST>"
   "SIMROSSETUIBUTTONPROPERTY-REQUEST"
   "<SIMROSSETUIBUTTONPROPERTY-RESPONSE>"
   "SIMROSSETUIBUTTONPROPERTY-RESPONSE"
   "SIMROSAUXILIARYCONSOLESHOW"
   "<SIMROSAUXILIARYCONSOLESHOW-REQUEST>"
   "SIMROSAUXILIARYCONSOLESHOW-REQUEST"
   "<SIMROSAUXILIARYCONSOLESHOW-RESPONSE>"
   "SIMROSAUXILIARYCONSOLESHOW-RESPONSE"
   "SIMROSSETINTEGERPARAMETER"
   "<SIMROSSETINTEGERPARAMETER-REQUEST>"
   "SIMROSSETINTEGERPARAMETER-REQUEST"
   "<SIMROSSETINTEGERPARAMETER-RESPONSE>"
   "SIMROSSETINTEGERPARAMETER-RESPONSE"
   "SIMROSSETUIBUTTONLABEL"
   "<SIMROSSETUIBUTTONLABEL-REQUEST>"
   "SIMROSSETUIBUTTONLABEL-REQUEST"
   "<SIMROSSETUIBUTTONLABEL-RESPONSE>"
   "SIMROSSETUIBUTTONLABEL-RESPONSE"
   "SIMROSSETJOINTFORCE"
   "<SIMROSSETJOINTFORCE-REQUEST>"
   "SIMROSSETJOINTFORCE-REQUEST"
   "<SIMROSSETJOINTFORCE-RESPONSE>"
   "SIMROSSETJOINTFORCE-RESPONSE"
   "SIMROSSTARTSIMULATION"
   "<SIMROSSTARTSIMULATION-REQUEST>"
   "SIMROSSTARTSIMULATION-REQUEST"
   "<SIMROSSTARTSIMULATION-RESPONSE>"
   "SIMROSSTARTSIMULATION-RESPONSE"
   "SIMROSREMOVEUI"
   "<SIMROSREMOVEUI-REQUEST>"
   "SIMROSREMOVEUI-REQUEST"
   "<SIMROSREMOVEUI-RESPONSE>"
   "SIMROSREMOVEUI-RESPONSE"
   "SIMROSGETFLOATSIGNAL"
   "<SIMROSGETFLOATSIGNAL-REQUEST>"
   "SIMROSGETFLOATSIGNAL-REQUEST"
   "<SIMROSGETFLOATSIGNAL-RESPONSE>"
   "SIMROSGETFLOATSIGNAL-RESPONSE"
   "SIMROSGETINFO"
   "<SIMROSGETINFO-REQUEST>"
   "SIMROSGETINFO-REQUEST"
   "<SIMROSGETINFO-RESPONSE>"
   "SIMROSGETINFO-RESPONSE"
   "SIMROSLOADUI"
   "<SIMROSLOADUI-REQUEST>"
   "SIMROSLOADUI-REQUEST"
   "<SIMROSLOADUI-RESPONSE>"
   "SIMROSLOADUI-RESPONSE"
   "SIMROSGETFLOATINGPARAMETER"
   "<SIMROSGETFLOATINGPARAMETER-REQUEST>"
   "SIMROSGETFLOATINGPARAMETER-REQUEST"
   "<SIMROSGETFLOATINGPARAMETER-RESPONSE>"
   "SIMROSGETFLOATINGPARAMETER-RESPONSE"
   "SIMROSSETJOINTTARGETPOSITION"
   "<SIMROSSETJOINTTARGETPOSITION-REQUEST>"
   "SIMROSSETJOINTTARGETPOSITION-REQUEST"
   "<SIMROSSETJOINTTARGETPOSITION-RESPONSE>"
   "SIMROSSETJOINTTARGETPOSITION-RESPONSE"
   "SIMROSDISPLAYDIALOG"
   "<SIMROSDISPLAYDIALOG-REQUEST>"
   "SIMROSDISPLAYDIALOG-REQUEST"
   "<SIMROSDISPLAYDIALOG-RESPONSE>"
   "SIMROSDISPLAYDIALOG-RESPONSE"
   "SIMROSAUXILIARYCONSOLEOPEN"
   "<SIMROSAUXILIARYCONSOLEOPEN-REQUEST>"
   "SIMROSAUXILIARYCONSOLEOPEN-REQUEST"
   "<SIMROSAUXILIARYCONSOLEOPEN-RESPONSE>"
   "SIMROSAUXILIARYCONSOLEOPEN-RESPONSE"
   "SIMROSREMOVEOBJECT"
   "<SIMROSREMOVEOBJECT-REQUEST>"
   "SIMROSREMOVEOBJECT-REQUEST"
   "<SIMROSREMOVEOBJECT-RESPONSE>"
   "SIMROSREMOVEOBJECT-RESPONSE"
   "SIMROSSETJOINTPOSITION"
   "<SIMROSSETJOINTPOSITION-REQUEST>"
   "SIMROSSETJOINTPOSITION-REQUEST"
   "<SIMROSSETJOINTPOSITION-RESPONSE>"
   "SIMROSSETJOINTPOSITION-RESPONSE"
   "SIMROSSETARRAYPARAMETER"
   "<SIMROSSETARRAYPARAMETER-REQUEST>"
   "SIMROSSETARRAYPARAMETER-REQUEST"
   "<SIMROSSETARRAYPARAMETER-RESPONSE>"
   "SIMROSSETARRAYPARAMETER-RESPONSE"
   "SIMROSREADDISTANCE"
   "<SIMROSREADDISTANCE-REQUEST>"
   "SIMROSREADDISTANCE-REQUEST"
   "<SIMROSREADDISTANCE-RESPONSE>"
   "SIMROSREADDISTANCE-RESPONSE"
   "SIMROSSETBOOLEANPARAMETER"
   "<SIMROSSETBOOLEANPARAMETER-REQUEST>"
   "SIMROSSETBOOLEANPARAMETER-REQUEST"
   "<SIMROSSETBOOLEANPARAMETER-RESPONSE>"
   "SIMROSSETBOOLEANPARAMETER-RESPONSE"
   "SIMROSGETLASTERRORS"
   "<SIMROSGETLASTERRORS-REQUEST>"
   "SIMROSGETLASTERRORS-REQUEST"
   "<SIMROSGETLASTERRORS-RESPONSE>"
   "SIMROSGETLASTERRORS-RESPONSE"
   "SIMROSDISABLESUBSCRIBER"
   "<SIMROSDISABLESUBSCRIBER-REQUEST>"
   "SIMROSDISABLESUBSCRIBER-REQUEST"
   "<SIMROSDISABLESUBSCRIBER-RESPONSE>"
   "SIMROSDISABLESUBSCRIBER-RESPONSE"
   "SIMROSGETDIALOGINPUT"
   "<SIMROSGETDIALOGINPUT-REQUEST>"
   "SIMROSGETDIALOGINPUT-REQUEST"
   "<SIMROSGETDIALOGINPUT-RESPONSE>"
   "SIMROSGETDIALOGINPUT-RESPONSE"
   "SIMROSREADFORCESENSOR"
   "<SIMROSREADFORCESENSOR-REQUEST>"
   "SIMROSREADFORCESENSOR-REQUEST"
   "<SIMROSREADFORCESENSOR-RESPONSE>"
   "SIMROSREADFORCESENSOR-RESPONSE"
   "SIMROSCLEARFLOATSIGNAL"
   "<SIMROSCLEARFLOATSIGNAL-REQUEST>"
   "SIMROSCLEARFLOATSIGNAL-REQUEST"
   "<SIMROSCLEARFLOATSIGNAL-RESPONSE>"
   "SIMROSCLEARFLOATSIGNAL-RESPONSE"
   "SIMROSENABLESUBSCRIBER"
   "<SIMROSENABLESUBSCRIBER-REQUEST>"
   "SIMROSENABLESUBSCRIBER-REQUEST"
   "<SIMROSENABLESUBSCRIBER-RESPONSE>"
   "SIMROSENABLESUBSCRIBER-RESPONSE"
   "SIMROSGETOBJECTINTPARAMETER"
   "<SIMROSGETOBJECTINTPARAMETER-REQUEST>"
   "SIMROSGETOBJECTINTPARAMETER-REQUEST"
   "<SIMROSGETOBJECTINTPARAMETER-RESPONSE>"
   "SIMROSGETOBJECTINTPARAMETER-RESPONSE"
   "SIMROSGETOBJECTHANDLE"
   "<SIMROSGETOBJECTHANDLE-REQUEST>"
   "SIMROSGETOBJECTHANDLE-REQUEST"
   "<SIMROSGETOBJECTHANDLE-RESPONSE>"
   "SIMROSGETOBJECTHANDLE-RESPONSE"
   "SIMROSERASEFILE"
   "<SIMROSERASEFILE-REQUEST>"
   "SIMROSERASEFILE-REQUEST"
   "<SIMROSERASEFILE-RESPONSE>"
   "SIMROSERASEFILE-RESPONSE"
   "SIMROSSETOBJECTPARENT"
   "<SIMROSSETOBJECTPARENT-REQUEST>"
   "SIMROSSETOBJECTPARENT-REQUEST"
   "<SIMROSSETOBJECTPARENT-RESPONSE>"
   "SIMROSSETOBJECTPARENT-RESPONSE"
   "SIMROSGETOBJECTS"
   "<SIMROSGETOBJECTS-REQUEST>"
   "SIMROSGETOBJECTS-REQUEST"
   "<SIMROSGETOBJECTS-RESPONSE>"
   "SIMROSGETOBJECTS-RESPONSE"
   "SIMROSGETARRAYPARAMETER"
   "<SIMROSGETARRAYPARAMETER-REQUEST>"
   "SIMROSGETARRAYPARAMETER-REQUEST"
   "<SIMROSGETARRAYPARAMETER-RESPONSE>"
   "SIMROSGETARRAYPARAMETER-RESPONSE"
   "SIMROSGETMODELPROPERTY"
   "<SIMROSGETMODELPROPERTY-REQUEST>"
   "SIMROSGETMODELPROPERTY-REQUEST"
   "<SIMROSGETMODELPROPERTY-RESPONSE>"
   "SIMROSGETMODELPROPERTY-RESPONSE"
   "SIMROSAUXILIARYCONSOLECLOSE"
   "<SIMROSAUXILIARYCONSOLECLOSE-REQUEST>"
   "SIMROSAUXILIARYCONSOLECLOSE-REQUEST"
   "<SIMROSAUXILIARYCONSOLECLOSE-RESPONSE>"
   "SIMROSAUXILIARYCONSOLECLOSE-RESPONSE"
   "SIMROSPAUSESIMULATION"
   "<SIMROSPAUSESIMULATION-REQUEST>"
   "SIMROSPAUSESIMULATION-REQUEST"
   "<SIMROSPAUSESIMULATION-RESPONSE>"
   "SIMROSPAUSESIMULATION-RESPONSE"
   "SIMROSSETSPHERICALJOINTMATRIX"
   "<SIMROSSETSPHERICALJOINTMATRIX-REQUEST>"
   "SIMROSSETSPHERICALJOINTMATRIX-REQUEST"
   "<SIMROSSETSPHERICALJOINTMATRIX-RESPONSE>"
   "SIMROSSETSPHERICALJOINTMATRIX-RESPONSE"
   "SIMROSGETDISTANCEHANDLE"
   "<SIMROSGETDISTANCEHANDLE-REQUEST>"
   "SIMROSGETDISTANCEHANDLE-REQUEST"
   "<SIMROSGETDISTANCEHANDLE-RESPONSE>"
   "SIMROSGETDISTANCEHANDLE-RESPONSE"
   "SIMROSSETOBJECTQUATERNION"
   "<SIMROSSETOBJECTQUATERNION-REQUEST>"
   "SIMROSSETOBJECTQUATERNION-REQUEST"
   "<SIMROSSETOBJECTQUATERNION-RESPONSE>"
   "SIMROSSETOBJECTQUATERNION-RESPONSE"
   "SIMROSSETINTEGERSIGNAL"
   "<SIMROSSETINTEGERSIGNAL-REQUEST>"
   "SIMROSSETINTEGERSIGNAL-REQUEST"
   "<SIMROSSETINTEGERSIGNAL-RESPONSE>"
   "SIMROSSETINTEGERSIGNAL-RESPONSE"
   "SIMROSGETUISLIDER"
   "<SIMROSGETUISLIDER-REQUEST>"
   "SIMROSGETUISLIDER-REQUEST"
   "<SIMROSGETUISLIDER-RESPONSE>"
   "SIMROSGETUISLIDER-RESPONSE"
   "SIMROSCALLSCRIPTFUNCTION"
   "<SIMROSCALLSCRIPTFUNCTION-REQUEST>"
   "SIMROSCALLSCRIPTFUNCTION-REQUEST"
   "<SIMROSCALLSCRIPTFUNCTION-RESPONSE>"
   "SIMROSCALLSCRIPTFUNCTION-RESPONSE"
   "SIMROSSETUISLIDER"
   "<SIMROSSETUISLIDER-REQUEST>"
   "SIMROSSETUISLIDER-REQUEST"
   "<SIMROSSETUISLIDER-RESPONSE>"
   "SIMROSSETUISLIDER-RESPONSE"
   "SIMROSGETINTEGERSIGNAL"
   "<SIMROSGETINTEGERSIGNAL-REQUEST>"
   "SIMROSGETINTEGERSIGNAL-REQUEST"
   "<SIMROSGETINTEGERSIGNAL-RESPONSE>"
   "SIMROSGETINTEGERSIGNAL-RESPONSE"
   "SIMROSSETOBJECTSELECTION"
   "<SIMROSSETOBJECTSELECTION-REQUEST>"
   "SIMROSSETOBJECTSELECTION-REQUEST"
   "<SIMROSSETOBJECTSELECTION-RESPONSE>"
   "SIMROSSETOBJECTSELECTION-RESPONSE"
   "SIMROSSETOBJECTPOSE"
   "<SIMROSSETOBJECTPOSE-REQUEST>"
   "SIMROSSETOBJECTPOSE-REQUEST"
   "<SIMROSSETOBJECTPOSE-RESPONSE>"
   "SIMROSSETOBJECTPOSE-RESPONSE"
   "SIMROSGETUIEVENTBUTTON"
   "<SIMROSGETUIEVENTBUTTON-REQUEST>"
   "SIMROSGETUIEVENTBUTTON-REQUEST"
   "<SIMROSGETUIEVENTBUTTON-RESPONSE>"
   "SIMROSGETUIEVENTBUTTON-RESPONSE"
   "SIMROSGETSTRINGSIGNAL"
   "<SIMROSGETSTRINGSIGNAL-REQUEST>"
   "SIMROSGETSTRINGSIGNAL-REQUEST"
   "<SIMROSGETSTRINGSIGNAL-RESPONSE>"
   "SIMROSGETSTRINGSIGNAL-RESPONSE"
   "SIMROSBREAKFORCESENSOR"
   "<SIMROSBREAKFORCESENSOR-REQUEST>"
   "SIMROSBREAKFORCESENSOR-REQUEST"
   "<SIMROSBREAKFORCESENSOR-RESPONSE>"
   "SIMROSBREAKFORCESENSOR-RESPONSE"
   "SIMROSGETOBJECTFLOATPARAMETER"
   "<SIMROSGETOBJECTFLOATPARAMETER-REQUEST>"
   "SIMROSGETOBJECTFLOATPARAMETER-REQUEST"
   "<SIMROSGETOBJECTFLOATPARAMETER-RESPONSE>"
   "SIMROSGETOBJECTFLOATPARAMETER-RESPONSE"
   "SIMROSSETJOINTTARGETVELOCITY"
   "<SIMROSSETJOINTTARGETVELOCITY-REQUEST>"
   "SIMROSSETJOINTTARGETVELOCITY-REQUEST"
   "<SIMROSSETJOINTTARGETVELOCITY-RESPONSE>"
   "SIMROSSETJOINTTARGETVELOCITY-RESPONSE"
   "SIMROSLOADMODEL"
   "<SIMROSLOADMODEL-REQUEST>"
   "SIMROSLOADMODEL-REQUEST"
   "<SIMROSLOADMODEL-RESPONSE>"
   "SIMROSLOADMODEL-RESPONSE"
   "SIMROSSYNCHRONOUSTRIGGER"
   "<SIMROSSYNCHRONOUSTRIGGER-REQUEST>"
   "SIMROSSYNCHRONOUSTRIGGER-REQUEST"
   "<SIMROSSYNCHRONOUSTRIGGER-RESPONSE>"
   "SIMROSSYNCHRONOUSTRIGGER-RESPONSE"
   "SIMROSCLEARINTEGERSIGNAL"
   "<SIMROSCLEARINTEGERSIGNAL-REQUEST>"
   "SIMROSCLEARINTEGERSIGNAL-REQUEST"
   "<SIMROSCLEARINTEGERSIGNAL-RESPONSE>"
   "SIMROSCLEARINTEGERSIGNAL-RESPONSE"
   "SIMROSSETFLOATSIGNAL"
   "<SIMROSSETFLOATSIGNAL-REQUEST>"
   "SIMROSSETFLOATSIGNAL-REQUEST"
   "<SIMROSSETFLOATSIGNAL-RESPONSE>"
   "SIMROSSETFLOATSIGNAL-RESPONSE"
   "SIMROSENABLEPUBLISHER"
   "<SIMROSENABLEPUBLISHER-REQUEST>"
   "SIMROSENABLEPUBLISHER-REQUEST"
   "<SIMROSENABLEPUBLISHER-RESPONSE>"
   "SIMROSENABLEPUBLISHER-RESPONSE"
   "SIMROSGETDIALOGRESULT"
   "<SIMROSGETDIALOGRESULT-REQUEST>"
   "SIMROSGETDIALOGRESULT-REQUEST"
   "<SIMROSGETDIALOGRESULT-RESPONSE>"
   "SIMROSGETDIALOGRESULT-RESPONSE"
   "SIMROSGETVISIONSENSORIMAGE"
   "<SIMROSGETVISIONSENSORIMAGE-REQUEST>"
   "SIMROSGETVISIONSENSORIMAGE-REQUEST"
   "<SIMROSGETVISIONSENSORIMAGE-RESPONSE>"
   "SIMROSGETVISIONSENSORIMAGE-RESPONSE"
   "SIMROSREMOVEMODEL"
   "<SIMROSREMOVEMODEL-REQUEST>"
   "SIMROSREMOVEMODEL-REQUEST"
   "<SIMROSREMOVEMODEL-RESPONSE>"
   "SIMROSREMOVEMODEL-RESPONSE"
   "SIMROSSETOBJECTINTPARAMETER"
   "<SIMROSSETOBJECTINTPARAMETER-REQUEST>"
   "SIMROSSETOBJECTINTPARAMETER-REQUEST"
   "<SIMROSSETOBJECTINTPARAMETER-RESPONSE>"
   "SIMROSSETOBJECTINTPARAMETER-RESPONSE"
   "SIMROSREADPROXIMITYSENSOR"
   "<SIMROSREADPROXIMITYSENSOR-REQUEST>"
   "SIMROSREADPROXIMITYSENSOR-REQUEST"
   "<SIMROSREADPROXIMITYSENSOR-RESPONSE>"
   "SIMROSREADPROXIMITYSENSOR-RESPONSE"
   "SIMROSGETBOOLEANPARAMETER"
   "<SIMROSGETBOOLEANPARAMETER-REQUEST>"
   "SIMROSGETBOOLEANPARAMETER-REQUEST"
   "<SIMROSGETBOOLEANPARAMETER-RESPONSE>"
   "SIMROSGETBOOLEANPARAMETER-RESPONSE"
   "SIMROSGETUIBUTTONPROPERTY"
   "<SIMROSGETUIBUTTONPROPERTY-REQUEST>"
   "SIMROSGETUIBUTTONPROPERTY-REQUEST"
   "<SIMROSGETUIBUTTONPROPERTY-RESPONSE>"
   "SIMROSGETUIBUTTONPROPERTY-RESPONSE"
   "SIMROSGETJOINTSTATE"
   "<SIMROSGETJOINTSTATE-REQUEST>"
   "SIMROSGETJOINTSTATE-REQUEST"
   "<SIMROSGETJOINTSTATE-RESPONSE>"
   "SIMROSGETJOINTSTATE-RESPONSE"
   "SIMROSAPPENDSTRINGSIGNAL"
   "<SIMROSAPPENDSTRINGSIGNAL-REQUEST>"
   "SIMROSAPPENDSTRINGSIGNAL-REQUEST"
   "<SIMROSAPPENDSTRINGSIGNAL-RESPONSE>"
   "SIMROSAPPENDSTRINGSIGNAL-RESPONSE"
   "SIMROSREADCOLLISION"
   "<SIMROSREADCOLLISION-REQUEST>"
   "SIMROSREADCOLLISION-REQUEST"
   "<SIMROSREADCOLLISION-RESPONSE>"
   "SIMROSREADCOLLISION-RESPONSE"
  ))

