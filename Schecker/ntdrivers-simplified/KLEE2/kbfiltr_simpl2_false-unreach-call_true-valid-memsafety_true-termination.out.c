#include <klee/klee.h>
//extern void __VERIFIER_error() __attribute__ ((__noreturn__));

//extern char __VERIFIER_nondet_char(void);
//extern int __VERIFIER_nondet_int(void);
//extern long __VERIFIER_nondet_long(void);
//extern void *__VERIFIER_nondet_pointer(void);

int KbFilter_PnP(int DeviceObject , int Irp );
int IofCallDriver(int DeviceObject , int Irp );
int KeSetEvent(int Event , int Increment , int Wait );
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable ,
                          int Timeout );
int KbFilter_Complete(int DeviceObject , int Irp , int Context );
int KbFilter_CreateClose(int DeviceObject , int Irp );
int KbFilter_DispatchPassThrough(int DeviceObject , int Irp );
int KbFilter_Power(int DeviceObject , int Irp );
int PoCallDriver(int DeviceObject , int Irp );
int KbFilter_InternIoCtl(int DeviceObject , int Irp );
void errorFn(void) ;
void IofCompleteRequest(int Irp , int PriorityBoost );
//extern int __VERIFIER_nondet_int();
int KernelMode  ;
int Executive  ;
int DevicePowerState ;
int s  ;
int UNLOADED  ;
int NP  ;
int DC  ;
int SKIP1  ;
int SKIP2  ;
int MPR1  ;
int MPR3  ;
int IPC  ;
int pended  ;
int compFptr  ;
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
int myStatus  ;

int nexttest(int x, int y)
{
 if(x>3){
    if(y<5){
        return 0;
    }else{
        return 1;
    }
 }else{
    if(y==6){
        return 2;
    }else{
        return 3;
    }
 }
}

void errorFn(void) 
{ 

    int a, b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");
    nexttest(a, b);
}

void stub_driver_init(void) 
{ 

  {
  s = NP;
  pended = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  return;
}
}
void _BLAST_init(void) 
{ 

  {
  UNLOADED = 0;
  NP = 1;
  DC = 2;
  SKIP1 = 3;
  SKIP2 = 4;
  MPR1 = 5;
  MPR3 = 6;
  IPC = 7;
  s = UNLOADED;
  pended = 0;
  compFptr = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  return;
}
}
int KbFilter_PnP(int DeviceObject , int Irp ) 
{ int devExt ;
  int irpStack ;
  int status ;
 int event;
klee_make_symbolic(&event, sizeof(event),"event");
 int DeviceObject__DeviceExtension;
klee_make_symbolic(&DeviceObject__DeviceExtension, sizeof(DeviceObject__DeviceExtension),"DeviceObject__DeviceExtension");
 int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
 int irpStack__MinorFunction;
klee_make_symbolic(&irpStack__MinorFunction, sizeof(irpStack__MinorFunction),"irpStack__MinorFunction");
 int devExt__TopOfStack;
klee_make_symbolic(&devExt__TopOfStack, sizeof(devExt__TopOfStack),"devExt__TopOfStack");
  int devExt__Started ;
  int devExt__Removed ;
  int devExt__SurpriseRemoved ;
  int Irp__IoStatus__Status ;
  int Irp__IoStatus__Information ;
 int Irp__CurrentLocation;
klee_make_symbolic(&Irp__CurrentLocation, sizeof(Irp__CurrentLocation),"Irp__CurrentLocation");
  int irpSp ;
  int nextIrpSp ;
  int nextIrpSp__Control ;
  int irpSp___0 ;
  int irpSp__Context ;
  int irpSp__Control ;
  long __cil_tmp23 ;

  {
  status = 0;
  devExt = DeviceObject__DeviceExtension;
  irpStack = Irp__Tail__Overlay__CurrentStackLocation;
  if (irpStack__MinorFunction == 0) {
    goto switch_0_0;
  } else {
    if (irpStack__MinorFunction == 23) {
      goto switch_0_23;
    } else {
      if (irpStack__MinorFunction == 2) {
        goto switch_0_2;
      } else {
        if (irpStack__MinorFunction == 1) {
          goto switch_0_1;
        } else {
          if (irpStack__MinorFunction == 5) {
            goto switch_0_1;
          } else {
            if (irpStack__MinorFunction == 3) {
              goto switch_0_1;
            } else {
              if (irpStack__MinorFunction == 6) {
                goto switch_0_1;
              } else {
                if (irpStack__MinorFunction == 13) {
                  goto switch_0_1;
                } else {
                  if (irpStack__MinorFunction == 4) {
                    goto switch_0_1;
                  } else {
                    if (irpStack__MinorFunction == 7) {
                      goto switch_0_1;
                    } else {
                      if (irpStack__MinorFunction == 8) {
                        goto switch_0_1;
                      } else {
                        if (irpStack__MinorFunction == 9) {
                          goto switch_0_1;
                        } else {
                          if (irpStack__MinorFunction == 12) {
                            goto switch_0_1;
                          } else {
                            if (irpStack__MinorFunction == 10) {
                              goto switch_0_1;
                            } else {
                              if (irpStack__MinorFunction == 11) {
                                goto switch_0_1;
                              } else {
                                if (irpStack__MinorFunction == 15) {
                                  goto switch_0_1;
                                } else {
                                  if (irpStack__MinorFunction == 16) {
                                    goto switch_0_1;
                                  } else {
                                    if (irpStack__MinorFunction == 17) {
                                      goto switch_0_1;
                                    } else {
                                      if (irpStack__MinorFunction == 18) {
                                        goto switch_0_1;
                                      } else {
                                        if (irpStack__MinorFunction == 19) {
                                          goto switch_0_1;
                                        } else {
                                          if (irpStack__MinorFunction == 20) {
                                            goto switch_0_1;
                                          } else {
                                            goto switch_0_1;
                                            if (0) {
                                              switch_0_0: 
                                              irpSp = Irp__Tail__Overlay__CurrentStackLocation;
                                              nextIrpSp = Irp__Tail__Overlay__CurrentStackLocation - 1;
                                              nextIrpSp__Control = 0;
                                              if (s != NP) {
                                                {
                                                errorFn();
                                                }
                                              } else {
                                                if (compRegistered != 0) {
                                                  {
                                                  errorFn();
                                                  }
                                                } else {
                                                  compRegistered = 1;
                                                }
                                              }
                                              {
                                              irpSp___0 = Irp__Tail__Overlay__CurrentStackLocation - 1;
                                              irpSp__Context = event;
                                              irpSp__Control = 224;
                                              status = IofCallDriver(devExt__TopOfStack,
                                                                     Irp);
                                              }
                                              {
                                              __cil_tmp23 = (long )status;
                                              if (__cil_tmp23 == 259) {
                                                {
                                                KeWaitForSingleObject(event, Executive,
                                                                      KernelMode,
                                                                      0, 0);
                                                }
                                              }
                                              }
                                              if (status >= 0) {
                                                if (myStatus >= 0) {
                                                  devExt__Started = 1;
                                                  devExt__Removed = 0;
                                                  devExt__SurpriseRemoved = 0;
                                                }
                                              }
                                              {
                                              Irp__IoStatus__Status = status;
                                              myStatus = status;
                                              Irp__IoStatus__Information = 0;
                                              IofCompleteRequest(Irp, 0);
                                              }
                                              goto switch_0_break;
                                              switch_0_23: 
                                              devExt__SurpriseRemoved = 1;
                                              if (s == NP) {
                                                s = SKIP1;
                                              } else {
                                                {
                                                errorFn();
                                                }
                                              }
                                              {
                                              Irp__CurrentLocation ++;
                                              Irp__Tail__Overlay__CurrentStackLocation ++;
                                              status = IofCallDriver(devExt__TopOfStack,
                                                                     Irp);
                                              }
                                              goto switch_0_break;
                                              switch_0_2: 
                                              devExt__Removed = 1;
                                              if (s == NP) {
                                                s = SKIP1;
                                              } else {
                                                {
                                                errorFn();
                                                }
                                              }
                                              {
                                              Irp__CurrentLocation ++;
                                              Irp__Tail__Overlay__CurrentStackLocation ++;
                                              IofCallDriver(devExt__TopOfStack, Irp);
                                              status = 0;
                                              }
                                              goto switch_0_break;
                                              switch_0_1: ;
                                              if (s == NP) {
                                                s = SKIP1;
                                              } else {
                                                {
                                                errorFn();
                                                }
                                              }
                                              {
                                              Irp__CurrentLocation ++;
                                              Irp__Tail__Overlay__CurrentStackLocation ++;
                                              status = IofCallDriver(devExt__TopOfStack,
                                                                     Irp);
                                              }
                                              goto switch_0_break;
                                            } else {
                                              switch_0_break: ;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (status);
}
}
int main(void) 
{ int status ;
 int irp;
klee_make_symbolic(&irp, sizeof(irp),"irp");
  int pirp ;
  int pirp__IoStatus__Status ;
 int irp_choice;
klee_make_symbolic(&irp_choice, sizeof(irp_choice),"irp_choice");
 int devobj;
klee_make_symbolic(&devobj, sizeof(devobj),"devobj");
  int __cil_tmp8 ;

 KernelMode  = 0;
 Executive  = 0;
 DevicePowerState  =    1;
 s  = 0;
 UNLOADED  = 0;
 NP  = 0;
 DC  = 0;
 SKIP1  = 0;
 SKIP2 = 0 ;
 MPR1  = 0;
 MPR3  = 0;
 IPC  = 0;
 pended  = 0;
 compFptr  = 0;
 compRegistered  = 0;
 lowerDriverReturn  = 0;
 setEventCalled  = 0;
 customIrp  = 0;
 myStatus  = 0;

  {
  {
  status = 0;
  pirp = irp;
  _BLAST_init();
  }
  if (status >= 0) {
    s = NP;
    customIrp = 0;
    setEventCalled = customIrp;
    lowerDriverReturn = setEventCalled;
    compRegistered = lowerDriverReturn;
    pended = compRegistered;
    pirp__IoStatus__Status = 0;
    myStatus = 0;
    if (irp_choice == 0) {
      pirp__IoStatus__Status = -1073741637;
      myStatus = -1073741637;
    }
    {
    stub_driver_init();
    }
    {
    if (status < 0) {
      return (-1);
    }
    }
    int tmp_ndt_1;
klee_make_symbolic(&tmp_ndt_1, sizeof(tmp_ndt_1),"tmp_ndt_1");
    if (tmp_ndt_1 == 0) {
      goto switch_1_0;
    } else {
      int tmp_ndt_2;
klee_make_symbolic(&tmp_ndt_2, sizeof(tmp_ndt_2),"tmp_ndt_2");
      if (tmp_ndt_2 == 1) {
        goto switch_1_1;
      } else {
        int tmp_ndt_3;
klee_make_symbolic(&tmp_ndt_3, sizeof(tmp_ndt_3),"tmp_ndt_3");
        if (tmp_ndt_3 == 3) {
          goto switch_1_3;
        } else {
    	  int tmp_ndt_4;
klee_make_symbolic(&tmp_ndt_4, sizeof(tmp_ndt_4),"tmp_ndt_4");
          if (tmp_ndt_4 == 4) {
            goto switch_1_4;
          } else {
    	    int tmp_ndt_5;
klee_make_symbolic(&tmp_ndt_5, sizeof(tmp_ndt_5),"tmp_ndt_5");
            if (tmp_ndt_5 == 8) {
              goto switch_1_8;
            } else {
              goto switch_1_default;
              if (0) {
                switch_1_0: 
                {
                status = KbFilter_CreateClose(devobj, pirp);
                }
                goto switch_1_break;
                switch_1_1: 
                {
                status = KbFilter_CreateClose(devobj, pirp);
                }
                goto switch_1_break;
                switch_1_3: 
                {
                status = KbFilter_PnP(devobj, pirp);
                }
                goto switch_1_break;
                switch_1_4: 
                {
                status = KbFilter_Power(devobj, pirp);
                }
                goto switch_1_break;
                switch_1_8: 
                {
                status = KbFilter_InternIoCtl(devobj, pirp);
                }
                goto switch_1_break;
                switch_1_default: ;
                return (-1);
              } else {
                switch_1_break: ;
              }
            }
          }
        }
      }
    }
  }
  if (pended == 1) {
    if (s == NP) {
      s = NP;
    } else {
      goto _L___2;
    }
  } else {
    _L___2: 
    if (pended == 1) {
      if (s == MPR3) {
        s = MPR3;
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
      if (s != UNLOADED) {
        if (status != -1) {
          if (s != SKIP2) {
            if (s != IPC) {
              if (s == DC) {
                goto _L___0;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
            if (pended == 1) {
              if (status != 259) {
                {
                errorFn();
                }
              }
            } else {
              if (s == DC) {
                if (status == 259) {

                }
              } else {
                if (status != lowerDriverReturn) {
                   errorFn();
                }
                else{
                }
              }
            }
          }
        }
      }
    }
  }
  return (status);
}
}
void stubMoreProcessingRequired(void) 
{ 

  {
  if (s == NP) {
    s = MPR1;
  } else {
    {
    errorFn();
    }
  }
  return;
}
}
int IofCallDriver(int DeviceObject , int Irp ) 
{
  int returnVal2 ;
  int compRetStatus ;
 int lcontext;
klee_make_symbolic(&lcontext, sizeof(lcontext),"lcontext");
  long long __cil_tmp7 ;

  {
  if (compRegistered) {
    {
    compRetStatus = KbFilter_Complete(DeviceObject, Irp, lcontext);
    }
    {
    __cil_tmp7 = (long long )compRetStatus;
    if (__cil_tmp7 == -1073741802) {
      {
      stubMoreProcessingRequired();
      }
    }
    }
  }
  int tmp_ndt_6;
klee_make_symbolic(&tmp_ndt_6, sizeof(tmp_ndt_6),"tmp_ndt_6");
  if (tmp_ndt_6 == 0) {
    goto switch_2_0;
  } else {
    int tmp_ndt_7;
klee_make_symbolic(&tmp_ndt_7, sizeof(tmp_ndt_7),"tmp_ndt_7");
    if (tmp_ndt_7 == 1) {
      goto switch_2_1;
    } else {
      goto switch_2_default;
      if (0) {
        switch_2_0: 
        returnVal2 = 0;
        goto switch_2_break;
        switch_2_1: 
        returnVal2 = -1073741823;
        goto switch_2_break;
        switch_2_default: 
        returnVal2 = 259;
        goto switch_2_break;
      } else {
        switch_2_break: ;
      }
    }
  }
  if (s == NP) {
    s = IPC;
    lowerDriverReturn = returnVal2;
  } else {
    if (s == MPR1) {
      if (returnVal2 == 259) {
        s = MPR3;
        lowerDriverReturn = returnVal2;
      } else {
        s = NP;
        lowerDriverReturn = returnVal2;
      }
    } else {
      if (s == SKIP1) {
        s = SKIP2;
        lowerDriverReturn = returnVal2;
      } else {
        {
        errorFn();
        }
      }
    }
  }
  return (returnVal2);
}
}
void IofCompleteRequest(int Irp , int PriorityBoost ) 
{ 

  {
  if (s == NP) {
    s = DC;
  } else {
    {
    errorFn();
    }
  }
  return;
}
}
int KeSetEvent(int Event , int Increment , int Wait ) 
{int l;
klee_make_symbolic(&l, sizeof(l),"l");

  {
  setEventCalled = 1;
  return (l);
}
}
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable ,
                          int Timeout ) 
{

  {
  if (s == MPR3) {
    if (setEventCalled == 1) {
      s = NP;
      setEventCalled = 0;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (customIrp == 1) {
      s = NP;
      customIrp = 0;
    } else {
      if (s == MPR3) {
        {
        errorFn();
        }
      }
    }
  }
  int tmp_ndt_8;
klee_make_symbolic(&tmp_ndt_8, sizeof(tmp_ndt_8),"tmp_ndt_8");
  if (tmp_ndt_8 == 0) {
    goto switch_3_0;
  } else {
    goto switch_3_default;
    if (0) {
      switch_3_0: 
      return (0);
      switch_3_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int KbFilter_Complete(int DeviceObject , int Irp , int Context ) 
{ int event ;

  {
  {
  event = Context;
  KeSetEvent(event, 0, 0);
  }
  return (-1073741802);
}
}
int KbFilter_CreateClose(int DeviceObject , int Irp ) 
{int irpStack__MajorFunction;
klee_make_symbolic(&irpStack__MajorFunction, sizeof(irpStack__MajorFunction),"irpStack__MajorFunction");
 int devExt__UpperConnectData__ClassService;
klee_make_symbolic(&devExt__UpperConnectData__ClassService, sizeof(devExt__UpperConnectData__ClassService),"devExt__UpperConnectData__ClassService");
  int Irp__IoStatus__Status ;
  int status ;
  int tmp ;

  {
  status = myStatus;
  if (irpStack__MajorFunction == 0) {
    goto switch_4_0;
  } else {
    if (irpStack__MajorFunction == 2) {
      goto switch_4_2;
    } else {
      if (0) {
        switch_4_0: ;
        if (devExt__UpperConnectData__ClassService == 0) {
          status = -1073741436;
        }
        goto switch_4_break;
        switch_4_2: ;
        goto switch_4_break;
      } else {
        switch_4_break: ;
      }
    }
  }
  {
  Irp__IoStatus__Status = status;
  myStatus = status;
  tmp = KbFilter_DispatchPassThrough(DeviceObject, Irp);
  }
  return (tmp);
}
}
int KbFilter_DispatchPassThrough(int DeviceObject , int Irp ) 
{int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
 int Irp__CurrentLocation;
klee_make_symbolic(&Irp__CurrentLocation, sizeof(Irp__CurrentLocation),"Irp__CurrentLocation");
 int DeviceObject__DeviceExtension__TopOfStack;
klee_make_symbolic(&DeviceObject__DeviceExtension__TopOfStack, sizeof(DeviceObject__DeviceExtension__TopOfStack),"DeviceObject__DeviceExtension__TopOfStack");
  int irpStack ;
  int tmp ;

  {
  irpStack = Irp__Tail__Overlay__CurrentStackLocation;
  if (s == NP) {
    s = SKIP1;
  } else {
    {
    errorFn();
    }
  }
  {
  Irp__CurrentLocation ++;
  Irp__Tail__Overlay__CurrentStackLocation ++;
  tmp = IofCallDriver(DeviceObject__DeviceExtension__TopOfStack, Irp);
  }
  return (tmp);
}
}
int KbFilter_Power(int DeviceObject , int Irp ) 
{int irpStack__MinorFunction;
klee_make_symbolic(&irpStack__MinorFunction, sizeof(irpStack__MinorFunction),"irpStack__MinorFunction");
  int devExt__DeviceState ;
 int powerState__DeviceState;
klee_make_symbolic(&powerState__DeviceState, sizeof(powerState__DeviceState),"powerState__DeviceState");
 int Irp__CurrentLocation;
klee_make_symbolic(&Irp__CurrentLocation, sizeof(Irp__CurrentLocation),"Irp__CurrentLocation");
 int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
 int devExt__TopOfStack;
klee_make_symbolic(&devExt__TopOfStack, sizeof(devExt__TopOfStack),"devExt__TopOfStack");
 int powerType;
klee_make_symbolic(&powerType, sizeof(powerType),"powerType");
  int tmp ;

  {
  if (irpStack__MinorFunction == 2) {
    goto switch_5_2;
  } else {
    if (irpStack__MinorFunction == 1) {
      goto switch_5_1;
    } else {
      if (irpStack__MinorFunction == 0) {
        goto switch_5_0;
      } else {
        if (irpStack__MinorFunction == 3) {
          goto switch_5_3;
        } else {
          goto switch_5_default;
          if (0) {
            switch_5_2: ;
            if (powerType == DevicePowerState) {
              devExt__DeviceState = powerState__DeviceState;
            }
            switch_5_1: ;
            switch_5_0: ;
            switch_5_3: ;
            switch_5_default: ;
            goto switch_5_break;
          } else {
            switch_5_break: ;
          }
        }
      }
    }
  }
  if (s == NP) {
    s = SKIP1;
  } else {
    {
    errorFn();
    }
  }
  {
  Irp__CurrentLocation ++;
  Irp__Tail__Overlay__CurrentStackLocation ++;
  tmp = PoCallDriver(devExt__TopOfStack, Irp);
  }
  return (tmp);
}
}
int PoCallDriver(int DeviceObject , int Irp ) 
{
  int compRetStatus ;
  int returnVal ;
 int lcontext;
klee_make_symbolic(&lcontext, sizeof(lcontext),"lcontext");
  unsigned long __cil_tmp7 ;
  long __cil_tmp8 ;

  {
  if (compRegistered) {
    {
    compRetStatus = KbFilter_Complete(DeviceObject, Irp, lcontext);
    }
    {
    __cil_tmp7 = (unsigned long )compRetStatus;
    if (__cil_tmp7 == -1073741802) {
      {
      stubMoreProcessingRequired();
      }
    }
    }
  }
  int tmp_ndt_9;
klee_make_symbolic(&tmp_ndt_9, sizeof(tmp_ndt_9),"tmp_ndt_9");
  if (tmp_ndt_9 == 0) {
    goto switch_6_0;
  } else {
    int tmp_ndt_10;
klee_make_symbolic(&tmp_ndt_10, sizeof(tmp_ndt_10),"tmp_ndt_10");
    if (tmp_ndt_10 == 1) {
      goto switch_6_1;
    } else {
      goto switch_6_default;
      if (0) {
        switch_6_0: 
        returnVal = 0;
        goto switch_6_break;
        switch_6_1: 
        returnVal = -1073741823;
        goto switch_6_break;
        switch_6_default: 
        returnVal = 259;
        goto switch_6_break;
      } else {
        switch_6_break: ;
      }
    }
  }
  if (s == NP) {
    s = IPC;
    lowerDriverReturn = returnVal;
  } else {
    if (s == MPR1) {
      {
      __cil_tmp8 = (long )returnVal;
      if (__cil_tmp8 == 259L) {
        s = MPR3;
        lowerDriverReturn = returnVal;
      } else {
        s = NP;
        lowerDriverReturn = returnVal;
      }
      }
    } else {
      if (s == SKIP1) {
        s = SKIP2;
        lowerDriverReturn = returnVal;
      } else {
        {
        errorFn();
        }
      }
    }
  }
  return (returnVal);
}
}
int KbFilter_InternIoCtl(int DeviceObject , int Irp ) 
{ int Irp__IoStatus__Information ;
 int irpStack__Parameters__DeviceIoControl__IoControlCode;
klee_make_symbolic(&irpStack__Parameters__DeviceIoControl__IoControlCode, sizeof(irpStack__Parameters__DeviceIoControl__IoControlCode),"irpStack__Parameters__DeviceIoControl__IoControlCode");
 int devExt__UpperConnectData__ClassService;
klee_make_symbolic(&devExt__UpperConnectData__ClassService, sizeof(devExt__UpperConnectData__ClassService),"devExt__UpperConnectData__ClassService");
 int irpStack__Parameters__DeviceIoControl__InputBufferLength;
klee_make_symbolic(&irpStack__Parameters__DeviceIoControl__InputBufferLength, sizeof(irpStack__Parameters__DeviceIoControl__InputBufferLength),"irpStack__Parameters__DeviceIoControl__InputBufferLength");
 int sizeof__CONNECT_DATA;
klee_make_symbolic(&sizeof__CONNECT_DATA, sizeof(sizeof__CONNECT_DATA),"sizeof__CONNECT_DATA");
 int irpStack__Parameters__DeviceIoControl__Type3InputBuffer;
klee_make_symbolic(&irpStack__Parameters__DeviceIoControl__Type3InputBuffer, sizeof(irpStack__Parameters__DeviceIoControl__Type3InputBuffer),"irpStack__Parameters__DeviceIoControl__Type3InputBuffer");
 int sizeof__INTERNAL_I8042_HOOK_KEYBOARD;
klee_make_symbolic(&sizeof__INTERNAL_I8042_HOOK_KEYBOARD, sizeof(sizeof__INTERNAL_I8042_HOOK_KEYBOARD),"sizeof__INTERNAL_I8042_HOOK_KEYBOARD");
 int hookKeyboard__InitializationRoutine;
klee_make_symbolic(&hookKeyboard__InitializationRoutine, sizeof(hookKeyboard__InitializationRoutine),"hookKeyboard__InitializationRoutine");
 int hookKeyboard__IsrRoutine;
klee_make_symbolic(&hookKeyboard__IsrRoutine, sizeof(hookKeyboard__IsrRoutine),"hookKeyboard__IsrRoutine");
  int Irp__IoStatus__Status ;
  int hookKeyboard ;
  int connectData ;
  int status ;
  int tmp ;
  int __cil_tmp17 ;
  int __cil_tmp18 ;
  int __cil_tmp19 ;
 int __cil_tmp20;
klee_make_symbolic(&__cil_tmp20, sizeof(__cil_tmp20),"__cil_tmp20");
  int __cil_tmp21 ;
  int __cil_tmp22 ;
  int __cil_tmp23 ;
 int __cil_tmp24;
klee_make_symbolic(&__cil_tmp24, sizeof(__cil_tmp24),"__cil_tmp24");
  int __cil_tmp25 ;
  int __cil_tmp26 ;
  int __cil_tmp27 ;
 int __cil_tmp28;
klee_make_symbolic(&__cil_tmp28, sizeof(__cil_tmp28),"__cil_tmp28");
 int __cil_tmp29;
klee_make_symbolic(&__cil_tmp29, sizeof(__cil_tmp29),"__cil_tmp29");
  int __cil_tmp30 ;
  int __cil_tmp31 ;
 int __cil_tmp32;
klee_make_symbolic(&__cil_tmp32, sizeof(__cil_tmp32),"__cil_tmp32");
  int __cil_tmp33 ;
  int __cil_tmp34 ;
 int __cil_tmp35;
klee_make_symbolic(&__cil_tmp35, sizeof(__cil_tmp35),"__cil_tmp35");
  int __cil_tmp36 ;
  int __cil_tmp37 ;
 int __cil_tmp38;
klee_make_symbolic(&__cil_tmp38, sizeof(__cil_tmp38),"__cil_tmp38");
  int __cil_tmp39 ;
  int __cil_tmp40 ;
 int __cil_tmp41;
klee_make_symbolic(&__cil_tmp41, sizeof(__cil_tmp41),"__cil_tmp41");
  int __cil_tmp42 ;
  int __cil_tmp43 ;
 int __cil_tmp44;
klee_make_symbolic(&__cil_tmp44, sizeof(__cil_tmp44),"__cil_tmp44");
  int __cil_tmp45 ;

  {
  status = 0;
  Irp__IoStatus__Information = 0;
  {
  //__cil_tmp17 = 128 << 2;
  //__cil_tmp18 = 11 << 16;
  //__cil_tmp19 = __cil_tmp18 | __cil_tmp17;
  //__cil_tmp20 = __cil_tmp19 | 3;
  if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp20) {
    goto switch_7_exp_0;
  } else {
    {
    //__cil_tmp21 = 256 << 2;
    //__cil_tmp22 = 11 << 16;
    //__cil_tmp23 = __cil_tmp22 | __cil_tmp21;
    //__cil_tmp24 = __cil_tmp23 | 3;
    if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp24) {
      goto switch_7_exp_1;
    } else {
      {
      //__cil_tmp25 = 4080 << 2;
      //__cil_tmp26 = 11 << 16;
      //__cil_tmp27 = __cil_tmp26 | __cil_tmp25;
      //__cil_tmp28 = __cil_tmp27 | 3;
      if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp28) {
        goto switch_7_exp_2;
      } else {
        {
        //__cil_tmp29 = 11 << 16;
        if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp29) {
          goto switch_7_exp_3;
        } else {
          {
          //__cil_tmp30 = 32 << 2;
          //__cil_tmp31 = 11 << 16;
          //__cil_tmp32 = __cil_tmp31 | __cil_tmp30;
          if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp32) {
            goto switch_7_exp_4;
          } else {
            {
            //__cil_tmp33 = 16 << 2;
            //__cil_tmp34 = 11 << 16;
            //__cil_tmp35 = __cil_tmp34 | __cil_tmp33;
            if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp35) {
              goto switch_7_exp_5;
            } else {
              {
              //__cil_tmp36 = 2 << 2;
             // __cil_tmp37 = 11 << 16;
              //__cil_tmp38 = __cil_tmp37 | __cil_tmp36;
              if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp38) {
                goto switch_7_exp_6;
              } else {
                {
               // __cil_tmp39 = 8 << 2;
               // __cil_tmp40 = 11 << 16;
               // __cil_tmp41 = __cil_tmp40 | __cil_tmp39;
                if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp41) {
                  goto switch_7_exp_7;
                } else {
                  {
                //  __cil_tmp42 = 1 << 2;
                //  __cil_tmp43 = 11 << 16;
                //  __cil_tmp44 = __cil_tmp43 | __cil_tmp42;
                  if (irpStack__Parameters__DeviceIoControl__IoControlCode == __cil_tmp44) {
                    goto switch_7_exp_8;
                  } else {
                    if (0) {
                      switch_7_exp_0: ;
                      if (devExt__UpperConnectData__ClassService != 0) {
                        status = -1073741757;
                        goto switch_7_break;
                      } else {
                        if (irpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__CONNECT_DATA) {
                          status = -1073741811;
                          goto switch_7_break;
                        }
                      }
                      connectData = irpStack__Parameters__DeviceIoControl__Type3InputBuffer;
                      goto switch_7_break;
                      switch_7_exp_1: 
                      status = -1073741822;
                      goto switch_7_break;
                      switch_7_exp_2: ;
                      if (irpStack__Parameters__DeviceIoControl__InputBufferLength < sizeof__INTERNAL_I8042_HOOK_KEYBOARD) {
                        status = -1073741811;
                        goto switch_7_break;
                      }
                      hookKeyboard = irpStack__Parameters__DeviceIoControl__Type3InputBuffer;
                      if (hookKeyboard__InitializationRoutine) {

                      }
                      if (hookKeyboard__IsrRoutine) {

                      }
                      status = 0;
                      goto switch_7_break;
                      switch_7_exp_3: ;
                      switch_7_exp_4: ;
                      switch_7_exp_5: ;
                      switch_7_exp_6: ;
                      switch_7_exp_7: ;
                      switch_7_exp_8: ;
                      goto switch_7_break;
                    } else {
                      switch_7_break: ;
                    }
                  }
                  }
                }
                }
              }
              }
            }
            }
          }
          }
        }
        }
      }
      }
    }
    }
  }
  }
  {
  if (status < 0) {
    {
    Irp__IoStatus__Status = status;
    myStatus = status;
    IofCompleteRequest(Irp, 0);
    }
    return (status);
  }
  }
  {
  tmp = KbFilter_DispatchPassThrough(DeviceObject, Irp);
  }
  return (tmp);
}
}

