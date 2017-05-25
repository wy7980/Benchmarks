#include <klee/klee.h>
//extern void __VERIFIER_error() __attribute__ ((__noreturn__));

//extern char __VERIFIER_nondet_char(void);
//extern int __VERIFIER_nondet_int(void);
//extern long __VERIFIER_nondet_long(void);
//extern void *__VERIFIER_nondet_pointer(void);

int FlAcpiConfigureFloppy(int DisketteExtension , int FdcInfo );
int FlQueueIrpToThread(int Irp , int DisketteExtension );
int FloppyPnp(int DeviceObject , int Irp );
int FloppyStartDevice(int DeviceObject , int Irp );
int FloppyPnpComplete(int DeviceObject , int Irp , int Context );
int FlFdcDeviceIo(int DeviceObject , int Ioctl , int Data );
int IoBuildDeviceIoControlRequest(int IoControlCode , int DeviceObject , int InputBuffer ,
                                  int InputBufferLength , int OutputBuffer , int OutputBufferLength ,
                                  int InternalDeviceIoControl , int Event , int IoStatusBlock );
int IoDeleteSymbolicLink(int SymbolicLinkName );
int IoQueryDeviceDescription(int BusType , int BusNumber , int ControllerType , int ControllerNumber ,
                             int PeripheralType , int PeripheralNumber , int CalloutRoutine ,
                             int Context );
int IoRegisterDeviceInterface(int PhysicalDeviceObject , int InterfaceClassGuid ,
                              int ReferenceString , int SymbolicLinkName );
int IoSetDeviceInterfaceState(int SymbolicLinkName , int Enable );
int IofCallDriver(int DeviceObject , int Irp );
int KeSetEvent(int Event , int Increment , int Wait );
int KeWaitForSingleObject(int Object , int WaitReason , int WaitMode , int Alertable ,
                          int Timeout );
int ObReferenceObjectByHandle(int Handle , int DesiredAccess , int ObjectType , int AccessMode ,
                              int Object , int HandleInformation );
int PsCreateSystemThread(int ThreadHandle , int DesiredAccess , int ObjectAttributes ,
                         int ProcessHandle , int ClientId , int StartRoutine , int StartContext );
int ZwClose(int Handle );
int FloppyCreateClose(int DeviceObject , int Irp );
int FloppyQueueRequest(int DisketteExtension , int Irp ) ;
int FloppyDeviceControl(int DeviceObject , int Irp );
int FlCheckFormatParameters(int DisketteExtension , int FormatParameters );
int FloppyQueueRequest(int DisketteExtension , int Irp );
void errorFn(void) ;
void IofCompleteRequest(int Irp , int PriorityBoost );
//extern int __VERIFIER_nondet_int();
int FloppyThread  ;
int KernelMode  ;
int Suspended  ;
int Executive  ;
int DiskController  ;
int FloppyDiskPeripheral  ;
int FlConfigCallBack  ;
int MaximumInterfaceType  ;
int MOUNTDEV_MOUNTED_DEVICE_GUID  ;
int myStatus  ;
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
int compRegistered  ;
int lowerDriverReturn  ;
int setEventCalled  ;
int customIrp  ;
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
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  return;
}
}
int PagingReferenceCount  =    0;
int PagingMutex  =    0;
int FlAcpiConfigureFloppy(int DisketteExtension , int FdcInfo ) 
{ 

  {
  return (0);
}
}
int FlQueueIrpToThread(int Irp , int DisketteExtension ) 
{ int status ;
 int threadHandle;
klee_make_symbolic(&threadHandle, sizeof(threadHandle),"threadHandle");
 int DisketteExtension__PoweringDown;
klee_make_symbolic(&DisketteExtension__PoweringDown, sizeof(DisketteExtension__PoweringDown),"DisketteExtension__PoweringDown");
 int DisketteExtension__ThreadReferenceCount;
klee_make_symbolic(&DisketteExtension__ThreadReferenceCount, sizeof(DisketteExtension__ThreadReferenceCount),"DisketteExtension__ThreadReferenceCount");
 int DisketteExtension__FloppyThread;
klee_make_symbolic(&DisketteExtension__FloppyThread, sizeof(DisketteExtension__FloppyThread),"DisketteExtension__FloppyThread");
  int Irp__IoStatus__Status ;
  int Irp__IoStatus__Information ;
  int Irp__Tail__Overlay__CurrentStackLocation__Control ;
 int ObjAttributes;
klee_make_symbolic(&ObjAttributes, sizeof(ObjAttributes),"ObjAttributes");
  int __cil_tmp12 ;
  int __cil_tmp13 ;

  {
  if (DisketteExtension__PoweringDown == 1) {
    myStatus = -1073741101;
    Irp__IoStatus__Status = -1073741101;
    Irp__IoStatus__Information = 0;
    return (-1073741101);
  }
  DisketteExtension__ThreadReferenceCount ++;
  if (DisketteExtension__ThreadReferenceCount == 0) {
    DisketteExtension__ThreadReferenceCount ++;
    PagingReferenceCount ++;
    if (PagingReferenceCount == 1) {

    }
    {
    status = PsCreateSystemThread(threadHandle, 0, ObjAttributes, 0, 0, FloppyThread,
                                  DisketteExtension);
    }
    {
    if (status < 0) {
      DisketteExtension__ThreadReferenceCount = -1;
      PagingReferenceCount --;
      if (PagingReferenceCount == 0) {

      }
      return (status);
    }
    }
    {
    status = ObReferenceObjectByHandle(threadHandle, 1048576, 0, KernelMode, DisketteExtension__FloppyThread,
                                       0);
    ZwClose(threadHandle);
    }
    {
    if (status < 0) {
      return (status);
    }
    }
  }
  //Irp__Tail__Overlay__CurrentStackLocation__Control |= 1;
  if (pended == 0) {
    pended = 1;
  } else {
    {
    errorFn();
    }
  }
  return (259);
}
}
int FloppyPnp(int DeviceObject , int Irp ) 
{int DeviceObject__DeviceExtension;
klee_make_symbolic(&DeviceObject__DeviceExtension, sizeof(DeviceObject__DeviceExtension),"DeviceObject__DeviceExtension");
 int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
  int Irp__IoStatus__Information ;
  int Irp__IoStatus__Status ;
 int Irp__CurrentLocation;
klee_make_symbolic(&Irp__CurrentLocation, sizeof(Irp__CurrentLocation),"Irp__CurrentLocation");
 int disketteExtension__IsRemoved;
klee_make_symbolic(&disketteExtension__IsRemoved, sizeof(disketteExtension__IsRemoved),"disketteExtension__IsRemoved");
 int disketteExtension__IsStarted;
klee_make_symbolic(&disketteExtension__IsStarted, sizeof(disketteExtension__IsStarted),"disketteExtension__IsStarted");
 int disketteExtension__TargetObject;
klee_make_symbolic(&disketteExtension__TargetObject, sizeof(disketteExtension__TargetObject),"disketteExtension__TargetObject");
  int disketteExtension__HoldNewRequests ;
 int disketteExtension__FloppyThread;
klee_make_symbolic(&disketteExtension__FloppyThread, sizeof(disketteExtension__FloppyThread),"disketteExtension__FloppyThread");
 int disketteExtension__InterfaceString__Buffer;
klee_make_symbolic(&disketteExtension__InterfaceString__Buffer, sizeof(disketteExtension__InterfaceString__Buffer),"disketteExtension__InterfaceString__Buffer");
 int disketteExtension__InterfaceString;
klee_make_symbolic(&disketteExtension__InterfaceString, sizeof(disketteExtension__InterfaceString),"disketteExtension__InterfaceString");
 int disketteExtension__ArcName__Length;
klee_make_symbolic(&disketteExtension__ArcName__Length, sizeof(disketteExtension__ArcName__Length),"disketteExtension__ArcName__Length");
 int disketteExtension__ArcName;
klee_make_symbolic(&disketteExtension__ArcName, sizeof(disketteExtension__ArcName),"disketteExtension__ArcName");
 int irpSp__MinorFunction;
klee_make_symbolic(&irpSp__MinorFunction, sizeof(irpSp__MinorFunction),"irpSp__MinorFunction");
 int IoGetConfigurationInformation__FloppyCount;
klee_make_symbolic(&IoGetConfigurationInformation__FloppyCount, sizeof(IoGetConfigurationInformation__FloppyCount),"IoGetConfigurationInformation__FloppyCount");
  int irpSp ;
  int disketteExtension ;
  int ntStatus ;
 int doneEvent;
klee_make_symbolic(&doneEvent, sizeof(doneEvent),"doneEvent");
  int irpSp___0 ;
  int nextIrpSp ;
  int nextIrpSp__Control ;
  int irpSp___1 ;
  int irpSp__Context ;
  int irpSp__Control ;
  long __cil_tmp29 ;
  long __cil_tmp30 ;

  {
  ntStatus = 0;
  PagingReferenceCount ++;
  if (PagingReferenceCount == 1) {

  }
  disketteExtension = DeviceObject__DeviceExtension;
  irpSp = Irp__Tail__Overlay__CurrentStackLocation;
  if (disketteExtension__IsRemoved) {
    {
    Irp__IoStatus__Information = 0;
    Irp__IoStatus__Status = -1073741738;
    myStatus = -1073741738;
    IofCompleteRequest(Irp, 0);
    }
    return (-1073741738);
  }
  if (irpSp__MinorFunction == 0) {
    goto switch_0_0;
  } else {
    if (irpSp__MinorFunction == 5) {
      goto switch_0_5;
    } else {
      if (irpSp__MinorFunction == 1) {
        goto switch_0_5;
      } else {
        if (irpSp__MinorFunction == 6) {
          goto switch_0_6;
        } else {
          if (irpSp__MinorFunction == 3) {
            goto switch_0_6;
          } else {
            if (irpSp__MinorFunction == 4) {
              goto switch_0_4;
            } else {
              if (irpSp__MinorFunction == 2) {
                goto switch_0_2;
              } else {
                goto switch_0_default;
                if (0) {
                  switch_0_0: 
                  {
                  ntStatus = FloppyStartDevice(DeviceObject, Irp);
                  }
                  goto switch_0_break;
                  switch_0_5: 
                  if (irpSp__MinorFunction == 5) {

                  }
                  if (! disketteExtension__IsStarted) {
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
                    ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                    }
                    return (ntStatus);
                  }
                  {
                  disketteExtension__HoldNewRequests = 1;
                  ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
                  }
                  {
                  __cil_tmp29 = (long )ntStatus;
                  if (__cil_tmp29 == 259L) {
                    {
                    KeWaitForSingleObject(disketteExtension__FloppyThread, Executive,
                                          KernelMode, 0, 0);
                    }
                    if (disketteExtension__FloppyThread != 0) {

                    }
                    disketteExtension__FloppyThread = 0;
                    Irp__IoStatus__Status = 0;
                    myStatus = 0;
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
                    ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                    }
                  } else {
                    {
                    ntStatus = -1073741823;
                    Irp__IoStatus__Status = ntStatus;
                    myStatus = ntStatus;
                    Irp__IoStatus__Information = 0;
                    IofCompleteRequest(Irp, 0);
                    }
                  }
                  }
                  goto switch_0_break;
                  switch_0_6: 
                  if (irpSp__MinorFunction == 6) {

                  }
                  if (! disketteExtension__IsStarted) {
                    Irp__IoStatus__Status = 0;
                    myStatus = 0;
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
                    ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                    }
                  } else {
                    Irp__IoStatus__Status = 0;
                    myStatus = 0;
                    irpSp___0 = Irp__Tail__Overlay__CurrentStackLocation;
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
                    irpSp___1 = Irp__Tail__Overlay__CurrentStackLocation - 1;
                    irpSp__Context = doneEvent;
                    irpSp__Control = 224;
                    ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                    }
                    {
                    __cil_tmp30 = (long )ntStatus;
                    if (__cil_tmp30 == 259L) {
                      {
                      KeWaitForSingleObject(doneEvent, Executive, KernelMode, 0, 0);
                      ntStatus = myStatus;
                      }
                    }
                    }
                    {
                    disketteExtension__HoldNewRequests = 0;
                    Irp__IoStatus__Status = ntStatus;
                    myStatus = ntStatus;
                    Irp__IoStatus__Information = 0;
                    IofCompleteRequest(Irp, 0);
                    }
                  }
                  goto switch_0_break;
                  switch_0_4: 
                  disketteExtension__IsStarted = 0;
                  Irp__IoStatus__Status = 0;
                  myStatus = 0;
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
                  ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                  }
                  goto switch_0_break;
                  switch_0_2: 
                  disketteExtension__HoldNewRequests = 0;
                  disketteExtension__IsStarted = 0;
                  disketteExtension__IsRemoved = 1;
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
                  Irp__IoStatus__Status = 0;
                  myStatus = 0;
                  ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                  }
                  if (disketteExtension__InterfaceString__Buffer != 0) {
                    {
                    IoSetDeviceInterfaceState(disketteExtension__InterfaceString,
                                              0);
                    }
                  }
                  if (disketteExtension__ArcName__Length != 0) {
                    {
                    IoDeleteSymbolicLink(disketteExtension__ArcName);
                    }
                  }
                  IoGetConfigurationInformation__FloppyCount --;
                  goto switch_0_break;
                  switch_0_default: ;
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
                  ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
                  }
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
  PagingReferenceCount --;
  if (PagingReferenceCount == 0) {

  }
  return (ntStatus);
}
}
int FloppyStartDevice(int DeviceObject , int Irp ) 
{int DeviceObject__DeviceExtension;
klee_make_symbolic(&DeviceObject__DeviceExtension, sizeof(DeviceObject__DeviceExtension),"DeviceObject__DeviceExtension");
 int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
  int Irp__IoStatus__Status ;
 int disketteExtension__TargetObject;
klee_make_symbolic(&disketteExtension__TargetObject, sizeof(disketteExtension__TargetObject),"disketteExtension__TargetObject");
  int disketteExtension__MaxTransferSize ;
 int disketteExtension__DriveType;
klee_make_symbolic(&disketteExtension__DriveType, sizeof(disketteExtension__DriveType),"disketteExtension__DriveType");
  int disketteExtension__PerpendicularMode ;
  int disketteExtension__DeviceUnit ;
  int disketteExtension__DriveOnValue ;
 int disketteExtension__UnderlyingPDO;
klee_make_symbolic(&disketteExtension__UnderlyingPDO, sizeof(disketteExtension__UnderlyingPDO),"disketteExtension__UnderlyingPDO");
 int disketteExtension__InterfaceString;
klee_make_symbolic(&disketteExtension__InterfaceString, sizeof(disketteExtension__InterfaceString),"disketteExtension__InterfaceString");
  int disketteExtension__IsStarted ;
  int disketteExtension__HoldNewRequests ;
  int ntStatus ;
  int pnpStatus ;
 int doneEvent;
klee_make_symbolic(&doneEvent, sizeof(doneEvent),"doneEvent");
 int fdcInfo;
klee_make_symbolic(&fdcInfo, sizeof(fdcInfo),"fdcInfo");
  int fdcInfo__BufferCount ;
  int fdcInfo__BufferSize ;
 int fdcInfo__MaxTransferSize;
klee_make_symbolic(&fdcInfo__MaxTransferSize, sizeof(fdcInfo__MaxTransferSize),"fdcInfo__MaxTransferSize");
 int fdcInfo__AcpiBios;
klee_make_symbolic(&fdcInfo__AcpiBios, sizeof(fdcInfo__AcpiBios),"fdcInfo__AcpiBios");
 int fdcInfo__AcpiFdiSupported;
klee_make_symbolic(&fdcInfo__AcpiFdiSupported, sizeof(fdcInfo__AcpiFdiSupported),"fdcInfo__AcpiFdiSupported");
 int fdcInfo__PeripheralNumber;
klee_make_symbolic(&fdcInfo__PeripheralNumber, sizeof(fdcInfo__PeripheralNumber),"fdcInfo__PeripheralNumber");
  int fdcInfo__BusType ;
 int fdcInfo__ControllerNumber;
klee_make_symbolic(&fdcInfo__ControllerNumber, sizeof(fdcInfo__ControllerNumber),"fdcInfo__ControllerNumber");
 int fdcInfo__UnitNumber;
klee_make_symbolic(&fdcInfo__UnitNumber, sizeof(fdcInfo__UnitNumber),"fdcInfo__UnitNumber");
 int fdcInfo__BusNumber;
klee_make_symbolic(&fdcInfo__BusNumber, sizeof(fdcInfo__BusNumber),"fdcInfo__BusNumber");
  int Dc ;
  int Fp ;
  int disketteExtension ;
  int irpSp ;
  int irpSp___0 ;
  int nextIrpSp ;
  int nextIrpSp__Control ;
  int irpSp___1 ;
  int irpSp__Control ;
  int irpSp__Context ;
  int InterfaceType ;
 int KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86;
klee_make_symbolic(&KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86, sizeof(KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86),"KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86");
  long __cil_tmp42 ;
  int __cil_tmp43 ;
  int __cil_tmp44 ;
  int __cil_tmp45 ;
 int __cil_tmp46;
klee_make_symbolic(&__cil_tmp46, sizeof(__cil_tmp46),"__cil_tmp46");
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  int __cil_tmp49 ;

  {
  Dc = DiskController;
  Fp = FloppyDiskPeripheral;
  disketteExtension = DeviceObject__DeviceExtension;
  irpSp = Irp__Tail__Overlay__CurrentStackLocation;
  irpSp___0 = Irp__Tail__Overlay__CurrentStackLocation;
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
  irpSp___1 = Irp__Tail__Overlay__CurrentStackLocation - 1;
  irpSp__Context = doneEvent;
  irpSp__Control = 224;
  ntStatus = IofCallDriver(disketteExtension__TargetObject, Irp);
  }
  {
  __cil_tmp42 = (long )ntStatus;
  if (__cil_tmp42 == 259L) {
    {
    ntStatus = KeWaitForSingleObject(doneEvent, Executive, KernelMode, 0, 0);
    ntStatus = myStatus;
    }
  }
  }
  {
  fdcInfo__BufferCount = 0;
  fdcInfo__BufferSize = 0;
  //__cil_tmp43 = 770 << 2;
  //__cil_tmp44 = 7 << 16;
  //__cil_tmp45 = __cil_tmp44 | __cil_tmp43;
  //__cil_tmp46 = __cil_tmp45 | 3;
  ntStatus = FlFdcDeviceIo(disketteExtension__TargetObject, __cil_tmp46, fdcInfo);
  }
  if (ntStatus >= 0) {
    disketteExtension__MaxTransferSize = fdcInfo__MaxTransferSize;
    if (fdcInfo__AcpiBios) {
      if (fdcInfo__AcpiFdiSupported) {
        {
        ntStatus = FlAcpiConfigureFloppy(disketteExtension, fdcInfo);
        }
        if (disketteExtension__DriveType == 4) {
         // __cil_tmp47 = 1 << fdcInfo__PeripheralNumber;
          //disketteExtension__PerpendicularMode |= __cil_tmp47;
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      if (disketteExtension__DriveType == 4) {
       // __cil_tmp48 = 1 << fdcInfo__PeripheralNumber;
        //disketteExtension__PerpendicularMode |= __cil_tmp48;
      }
      InterfaceType = 0;
      {
      while (1) {
        while_0_continue: /* CIL Label */ ;

        if (InterfaceType >= MaximumInterfaceType) {
          goto while_1_break;
        }
        {
        fdcInfo__BusType = InterfaceType;
        ntStatus = IoQueryDeviceDescription(fdcInfo__BusType, fdcInfo__BusNumber,
                                            Dc, fdcInfo__ControllerNumber, Fp, fdcInfo__PeripheralNumber,
                                            FlConfigCallBack, disketteExtension);
        }
        if (ntStatus >= 0) {
          goto while_1_break;
        }
        InterfaceType ++;
      }
      while_0_break: /* CIL Label */ ;
      }
      while_1_break: ;
    }
    if (ntStatus >= 0) {
      if (KUSER_SHARED_DATA__AlternativeArchitecture_NEC98x86 != 0) {
        disketteExtension__DeviceUnit = fdcInfo__UnitNumber;
        disketteExtension__DriveOnValue = fdcInfo__UnitNumber;
      } else {
        disketteExtension__DeviceUnit = fdcInfo__PeripheralNumber;
        //__cil_tmp49 = 16 << fdcInfo__PeripheralNumber;
        //disketteExtension__DriveOnValue = fdcInfo__PeripheralNumber | __cil_tmp49;
      }
      {
      pnpStatus = IoRegisterDeviceInterface(disketteExtension__UnderlyingPDO, MOUNTDEV_MOUNTED_DEVICE_GUID,
                                            0, disketteExtension__InterfaceString);
      }
      if (pnpStatus >= 0) {
        {
        pnpStatus = IoSetDeviceInterfaceState(disketteExtension__InterfaceString,
                                              1);
        }
      }
      disketteExtension__IsStarted = 1;
      disketteExtension__HoldNewRequests = 0;
    }
  }
  {
  Irp__IoStatus__Status = ntStatus;
  myStatus = ntStatus;
  IofCompleteRequest(Irp, 0);
  }
  return (ntStatus);
}
}
int FloppyPnpComplete(int DeviceObject , int Irp , int Context ) 
{ 

  {
  {
  KeSetEvent(Context, 1, 0);
  }
  return (-1073741802);
}
}
int FlFdcDeviceIo(int DeviceObject , int Ioctl , int Data ) 
{ int ntStatus ;
  int irp ;
  int irpStack ;
 int doneEvent;
klee_make_symbolic(&doneEvent, sizeof(doneEvent),"doneEvent");
 int ioStatus;
klee_make_symbolic(&ioStatus, sizeof(ioStatus),"ioStatus");
 int irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&irp__Tail__Overlay__CurrentStackLocation, sizeof(irp__Tail__Overlay__CurrentStackLocation),"irp__Tail__Overlay__CurrentStackLocation");
  int irpStack__Parameters__DeviceIoControl__Type3InputBuffer ;
  long __cil_tmp11 ;

  {
  {
  irp = IoBuildDeviceIoControlRequest(Ioctl, DeviceObject, 0, 0, 0, 0, 1, doneEvent,
                                      ioStatus);
  }
  if (irp == 0) {
    return (-1073741670);
  }
  {
  irpStack = irp__Tail__Overlay__CurrentStackLocation - 1;
  irpStack__Parameters__DeviceIoControl__Type3InputBuffer = Data;
  ntStatus = IofCallDriver(DeviceObject, irp);
  }
  {
  __cil_tmp11 = (long )ntStatus;
  if (__cil_tmp11 == 259L) {
    {
    KeWaitForSingleObject(doneEvent, Suspended, KernelMode, 0, 0);
    ntStatus = myStatus;
    }
  }
  }
  return (ntStatus);
}
}
void FloppyProcessQueuedRequests(int DisketteExtension ) 
{ 

  {
  return;
}
}
void stub_driver_init(void) 
{ 

  {
  s = NP;
  pended = 0;
  compRegistered = 0;
  lowerDriverReturn = 0;
  setEventCalled = 0;
  customIrp = 0;
  return;
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

 FloppyThread  = 0;
 KernelMode  = 0;
 Suspended  = 0;
 Executive  = 0;
 DiskController  = 0;
 FloppyDiskPeripheral  = 0;
 FlConfigCallBack  = 0;
 MaximumInterfaceType  = 0;
 MOUNTDEV_MOUNTED_DEVICE_GUID  = 0;
 myStatus  = 0;
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
 compRegistered  = 0;
 lowerDriverReturn  = 0;
 setEventCalled  = 0;
 customIrp  = 0;

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
      goto switch_2_0;
    } else {
      int tmp_ndt_2;
klee_make_symbolic(&tmp_ndt_2, sizeof(tmp_ndt_2),"tmp_ndt_2");
      if (tmp_ndt_2 == 1) {
        goto switch_2_1;
      } else {
        int tmp_ndt_3;
klee_make_symbolic(&tmp_ndt_3, sizeof(tmp_ndt_3),"tmp_ndt_3");
        if (tmp_ndt_3 == 2) {
          goto switch_2_2;
        } else {
    	  int tmp_ndt_4;
klee_make_symbolic(&tmp_ndt_4, sizeof(tmp_ndt_4),"tmp_ndt_4");
          if (tmp_ndt_4 == 3) {
            goto switch_2_3;
          } else {
            goto switch_2_default;
            if (0) {
              switch_2_0: 
              {
              status = FloppyCreateClose(devobj, pirp);
              }
              goto switch_2_break;
              switch_2_1: 
              {
              status = FloppyCreateClose(devobj, pirp);
              }
              goto switch_2_break;
              switch_2_2: 
              {
              status = FloppyDeviceControl(devobj, pirp);
              }
              goto switch_2_break;
              switch_2_3: 
              {
              status = FloppyPnp(devobj, pirp);
              }
              goto switch_2_break;
              switch_2_default: ;
              return (-1);
            } else {
              switch_2_break: ;
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
              if (s != DC) {
                {
                errorFn();
                }
              } else {
                goto _L___0;
              }
            } else {
              goto _L___0;
            }
          } else {
            _L___0: 
            if (pended == 1) {
              if (status != 259) {
                errorFn();
              }
            } else {
              if (s == DC) {
                if (status == 259) {
                  {
                  errorFn();
                  }
                }
              } else {
                if (status != lowerDriverReturn) {
                  {
                  errorFn();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  status = 0;
  return (status);
}
}
int IoBuildDeviceIoControlRequest(int IoControlCode , int DeviceObject , int InputBuffer ,
                                  int InputBufferLength , int OutputBuffer , int OutputBufferLength ,
                                  int InternalDeviceIoControl , int Event , int IoStatusBlock ) 
{
 int malloc;
klee_make_symbolic(&malloc, sizeof(malloc),"malloc");

  {
  customIrp = 1;
  int tmp_ndt_5;
klee_make_symbolic(&tmp_ndt_5, sizeof(tmp_ndt_5),"tmp_ndt_5");
  if (tmp_ndt_5 == 0) {
    goto switch_3_0;
  } else {
    goto switch_3_default;
    if (0) {
      switch_3_0: 
      return (malloc);
      switch_3_default: ;
      return (0);
    } else {

    }
  }
}
}
int IoDeleteSymbolicLink(int SymbolicLinkName ) 
{

  {
  int tmp_ndt_6;
klee_make_symbolic(&tmp_ndt_6, sizeof(tmp_ndt_6),"tmp_ndt_6");
  if (tmp_ndt_6 == 0) {
    goto switch_4_0;
  } else {
    goto switch_4_default;
    if (0) {
      switch_4_0: 
      return (0);
      switch_4_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int IoQueryDeviceDescription(int BusType , int BusNumber , int ControllerType , int ControllerNumber ,
                             int PeripheralType , int PeripheralNumber , int CalloutRoutine ,
                             int Context ) 
{

  {
  int tmp_ndt_7;
klee_make_symbolic(&tmp_ndt_7, sizeof(tmp_ndt_7),"tmp_ndt_7");
  if (tmp_ndt_7 == 0) {
    goto switch_5_0;
  } else {
    goto switch_5_default;
    if (0) {
      switch_5_0: 
      return (0);
      switch_5_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int IoRegisterDeviceInterface(int PhysicalDeviceObject , int InterfaceClassGuid ,
                              int ReferenceString , int SymbolicLinkName ) 
{

  {
  int tmp_ndt_8;
klee_make_symbolic(&tmp_ndt_8, sizeof(tmp_ndt_8),"tmp_ndt_8");
  if (tmp_ndt_8 == 0) {
    goto switch_6_0;
  } else {
    goto switch_6_default;
    if (0) {
      switch_6_0: 
      return (0);
      switch_6_default: ;
      return (-1073741808);
    } else {

    }
  }
}
}
int IoSetDeviceInterfaceState(int SymbolicLinkName , int Enable ) 
{

  {
  int tmp_ndt_9;
klee_make_symbolic(&tmp_ndt_9, sizeof(tmp_ndt_9),"tmp_ndt_9");
  if (tmp_ndt_9 == 0) {
    goto switch_7_0;
  } else {
    goto switch_7_default;
    if (0) {
      switch_7_0: 
      return (0);
      switch_7_default: ;
      return (-1073741823);
    } else {

    }
  }
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
  int compRetStatus1 ;
 int lcontext;
klee_make_symbolic(&lcontext, sizeof(lcontext),"lcontext");
  unsigned long __cil_tmp7 ;

  {
  if (compRegistered) {
    {
    compRetStatus1 = FloppyPnpComplete(DeviceObject, Irp, lcontext);
    }
    {
    __cil_tmp7 = (unsigned long )compRetStatus1;
    if (__cil_tmp7 == -1073741802) {
      {
      stubMoreProcessingRequired();
      }
    }
    }
  }
  int tmp_ndt_10;
klee_make_symbolic(&tmp_ndt_10, sizeof(tmp_ndt_10),"tmp_ndt_10");
  if (tmp_ndt_10 == 0) {
    goto switch_8_0;
  } else {
    int tmp_ndt_11;
klee_make_symbolic(&tmp_ndt_11, sizeof(tmp_ndt_11),"tmp_ndt_11");
    if (tmp_ndt_11 == 1) {
      goto switch_8_1;
    } else {
      goto switch_8_default;
      if (0) {
        switch_8_0: 
        returnVal2 = 0;
        goto switch_8_break;
        switch_8_1: 
        returnVal2 = -1073741823;
        goto switch_8_break;
        switch_8_default: 
        returnVal2 = 259;
        goto switch_8_break;
      } else {
        switch_8_break: ;
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
  int tmp_ndt_12;
klee_make_symbolic(&tmp_ndt_12, sizeof(tmp_ndt_12),"tmp_ndt_12");
  if (tmp_ndt_12 == 0) {
    goto switch_9_0;
  } else {
    goto switch_9_default;
    if (0) {
      switch_9_0: 
      return (0);
      switch_9_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int ObReferenceObjectByHandle(int Handle , int DesiredAccess , int ObjectType , int AccessMode ,
                              int Object , int HandleInformation ) 
{

  {
  int tmp_ndt_13;
klee_make_symbolic(&tmp_ndt_13, sizeof(tmp_ndt_13),"tmp_ndt_13");
  if (tmp_ndt_13 == 0) {
    goto switch_10_0;
  } else {
    goto switch_10_default;
    if (0) {
      switch_10_0: 
      return (0);
      switch_10_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int PsCreateSystemThread(int ThreadHandle , int DesiredAccess , int ObjectAttributes ,
                         int ProcessHandle , int ClientId , int StartRoutine , int StartContext ) 
{

  {
  int tmp_ndt_14;
klee_make_symbolic(&tmp_ndt_14, sizeof(tmp_ndt_14),"tmp_ndt_14");
  if (tmp_ndt_14 == 0) {
    goto switch_11_0;
  } else {
    goto switch_11_default;
    if (0) {
      switch_11_0: 
      return (0);
      switch_11_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int ZwClose(int Handle ) 
{

  {
  int tmp_ndt_15;
klee_make_symbolic(&tmp_ndt_15, sizeof(tmp_ndt_15),"tmp_ndt_15");
  if (tmp_ndt_15 == 0) {
    goto switch_12_0;
  } else {
    goto switch_12_default;
    if (0) {
      switch_12_0: 
      return (0);
      switch_12_default: ;
      return (-1073741823);
    } else {

    }
  }
}
}
int FloppyCreateClose(int DeviceObject , int Irp ) 
{ int Irp__IoStatus__Status ;
  int Irp__IoStatus__Information ;

  {
  {
  myStatus = 0;
  Irp__IoStatus__Status = 0;
  Irp__IoStatus__Information = 1;
  IofCompleteRequest(Irp, 0);
  }
  return (0);
}
}
int FloppyQueueRequest(int DisketteExtension , int Irp ) ;
int FloppyDeviceControl(int DeviceObject , int Irp ) 
{int disketteExtension__HoldNewRequests;
klee_make_symbolic(&disketteExtension__HoldNewRequests, sizeof(disketteExtension__HoldNewRequests),"disketteExtension__HoldNewRequests");
 int disketteExtension__IsRemoved;
klee_make_symbolic(&disketteExtension__IsRemoved, sizeof(disketteExtension__IsRemoved),"disketteExtension__IsRemoved");
  int Irp__IoStatus__Information ;
 int disketteExtension__IsStarted;
klee_make_symbolic(&disketteExtension__IsStarted, sizeof(disketteExtension__IsStarted),"disketteExtension__IsStarted");
 int Irp__CurrentLocation;
klee_make_symbolic(&Irp__CurrentLocation, sizeof(Irp__CurrentLocation),"Irp__CurrentLocation");
 int Irp__Tail__Overlay__CurrentStackLocation;
klee_make_symbolic(&Irp__Tail__Overlay__CurrentStackLocation, sizeof(Irp__Tail__Overlay__CurrentStackLocation),"Irp__Tail__Overlay__CurrentStackLocation");
 int disketteExtension__TargetObject;
klee_make_symbolic(&disketteExtension__TargetObject, sizeof(disketteExtension__TargetObject),"disketteExtension__TargetObject");
 int irpSp__Parameters__DeviceIoControl__OutputBufferLength;
klee_make_symbolic(&irpSp__Parameters__DeviceIoControl__OutputBufferLength, sizeof(irpSp__Parameters__DeviceIoControl__OutputBufferLength),"irpSp__Parameters__DeviceIoControl__OutputBufferLength");
 int sizeof__MOUNTDEV_NAME;
klee_make_symbolic(&sizeof__MOUNTDEV_NAME, sizeof(sizeof__MOUNTDEV_NAME),"sizeof__MOUNTDEV_NAME");
 int Irp__AssociatedIrp__SystemBuffer;
klee_make_symbolic(&Irp__AssociatedIrp__SystemBuffer, sizeof(Irp__AssociatedIrp__SystemBuffer),"Irp__AssociatedIrp__SystemBuffer");
  int mountName__NameLength ;
 int disketteExtension__DeviceName__Length;
klee_make_symbolic(&disketteExtension__DeviceName__Length, sizeof(disketteExtension__DeviceName__Length),"disketteExtension__DeviceName__Length");
 int sizeof__USHORT;
klee_make_symbolic(&sizeof__USHORT, sizeof(sizeof__USHORT),"sizeof__USHORT");
 int disketteExtension__InterfaceString__Buffer;
klee_make_symbolic(&disketteExtension__InterfaceString__Buffer, sizeof(disketteExtension__InterfaceString__Buffer),"disketteExtension__InterfaceString__Buffer");
  int uniqueId__UniqueIdLength ;
 int disketteExtension__InterfaceString__Length;
klee_make_symbolic(&disketteExtension__InterfaceString__Length, sizeof(disketteExtension__InterfaceString__Length),"disketteExtension__InterfaceString__Length");
 int sizeof__MOUNTDEV_UNIQUE_ID;
klee_make_symbolic(&sizeof__MOUNTDEV_UNIQUE_ID, sizeof(sizeof__MOUNTDEV_UNIQUE_ID),"sizeof__MOUNTDEV_UNIQUE_ID");
 int irpSp__Parameters__DeviceIoControl__InputBufferLength;
klee_make_symbolic(&irpSp__Parameters__DeviceIoControl__InputBufferLength, sizeof(irpSp__Parameters__DeviceIoControl__InputBufferLength),"irpSp__Parameters__DeviceIoControl__InputBufferLength");
 int sizeof__FORMAT_PARAMETERS;
klee_make_symbolic(&sizeof__FORMAT_PARAMETERS, sizeof(sizeof__FORMAT_PARAMETERS),"sizeof__FORMAT_PARAMETERS");
 int irpSp__Parameters__DeviceIoControl__IoControlCode___1;
klee_make_symbolic(&irpSp__Parameters__DeviceIoControl__IoControlCode___1, sizeof(irpSp__Parameters__DeviceIoControl__IoControlCode___1),"irpSp__Parameters__DeviceIoControl__IoControlCode___1");
 int sizeof__FORMAT_EX_PARAMETERS;
klee_make_symbolic(&sizeof__FORMAT_EX_PARAMETERS, sizeof(sizeof__FORMAT_EX_PARAMETERS),"sizeof__FORMAT_EX_PARAMETERS");
 int formatExParameters__FormatGapLength;
klee_make_symbolic(&formatExParameters__FormatGapLength, sizeof(formatExParameters__FormatGapLength),"formatExParameters__FormatGapLength");
 int formatExParameters__SectorsPerTrack;
klee_make_symbolic(&formatExParameters__SectorsPerTrack, sizeof(formatExParameters__SectorsPerTrack),"formatExParameters__SectorsPerTrack");
 int sizeof__DISK_GEOMETRY;
klee_make_symbolic(&sizeof__DISK_GEOMETRY, sizeof(sizeof__DISK_GEOMETRY),"sizeof__DISK_GEOMETRY");
  int Irp__IoStatus__Status___0 ;
 int disketteExtension;
klee_make_symbolic(&disketteExtension, sizeof(disketteExtension),"disketteExtension");
  int ntStatus ;
  int outputBufferLength ;
 int lowestDriveMediaType;
klee_make_symbolic(&lowestDriveMediaType, sizeof(lowestDriveMediaType),"lowestDriveMediaType");
 int highestDriveMediaType;
klee_make_symbolic(&highestDriveMediaType, sizeof(highestDriveMediaType),"highestDriveMediaType");
 int formatExParametersSize;
klee_make_symbolic(&formatExParametersSize, sizeof(formatExParametersSize),"formatExParametersSize");
  int formatExParameters ;
  int tmp ;
  int mountName ;
  int uniqueId ;
  int tmp___0 ;
  int __cil_tmp39 ;
  int __cil_tmp40 ;
 int __cil_tmp41;
klee_make_symbolic(&__cil_tmp41, sizeof(__cil_tmp41),"__cil_tmp41");
  int __cil_tmp42 ;
  int __cil_tmp43 ;
 int __cil_tmp44;
klee_make_symbolic(&__cil_tmp44, sizeof(__cil_tmp44),"__cil_tmp44");
 int __cil_tmp45;
klee_make_symbolic(&__cil_tmp45, sizeof(__cil_tmp45),"__cil_tmp45");
  int __cil_tmp46 ;
  int __cil_tmp47 ;
  int __cil_tmp48 ;
  int __cil_tmp49 ;
 int __cil_tmp50;
klee_make_symbolic(&__cil_tmp50, sizeof(__cil_tmp50),"__cil_tmp50");
  int __cil_tmp51 ;
  int __cil_tmp52 ;
  int __cil_tmp53 ;
  int __cil_tmp54 ;
 int __cil_tmp55;
klee_make_symbolic(&__cil_tmp55, sizeof(__cil_tmp55),"__cil_tmp55");
  int __cil_tmp56 ;
  int __cil_tmp57 ;
  int __cil_tmp58 ;
  int __cil_tmp59 ;
 int __cil_tmp60;
klee_make_symbolic(&__cil_tmp60, sizeof(__cil_tmp60),"__cil_tmp60");
  int __cil_tmp61 ;
  int __cil_tmp62 ;
  int __cil_tmp63 ;
  int __cil_tmp64 ;
 int __cil_tmp65;
klee_make_symbolic(&__cil_tmp65, sizeof(__cil_tmp65),"__cil_tmp65");
 int __cil_tmp66;
klee_make_symbolic(&__cil_tmp66, sizeof(__cil_tmp66),"__cil_tmp66");
  int __cil_tmp67 ;
  int __cil_tmp68 ;
 int __cil_tmp69;
klee_make_symbolic(&__cil_tmp69, sizeof(__cil_tmp69),"__cil_tmp69");
  int __cil_tmp70 ;
  int __cil_tmp71 ;
 int __cil_tmp72;
klee_make_symbolic(&__cil_tmp72, sizeof(__cil_tmp72),"__cil_tmp72");
  int __cil_tmp73 ;
  int __cil_tmp74 ;
 int __cil_tmp75;
klee_make_symbolic(&__cil_tmp75, sizeof(__cil_tmp75),"__cil_tmp75");
  int __cil_tmp76 ;
  int __cil_tmp77 ;
 int __cil_tmp78;
klee_make_symbolic(&__cil_tmp78, sizeof(__cil_tmp78),"__cil_tmp78");
  int __cil_tmp79 ;
  int __cil_tmp80 ;
 int __cil_tmp81;
klee_make_symbolic(&__cil_tmp81, sizeof(__cil_tmp81),"__cil_tmp81");
  int __cil_tmp82 ;
  int __cil_tmp83 ;
  int __cil_tmp84 ;
  int __cil_tmp85 ;
  int __cil_tmp86 ;
  int __cil_tmp87 ;
 int __cil_tmp88;
klee_make_symbolic(&__cil_tmp88, sizeof(__cil_tmp88),"__cil_tmp88");
  int __cil_tmp89 ;
  int __cil_tmp90 ;
  long __cil_tmp91 ;

  {
  if (disketteExtension__HoldNewRequests) {
    {
    //__cil_tmp39 = 3 << 14;
    //__cil_tmp40 = 50 << 16;
    //__cil_tmp41 = __cil_tmp40 | __cil_tmp39;
    if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 != __cil_tmp41) {
      {
      ntStatus = FloppyQueueRequest(disketteExtension, Irp);
      }
      return (ntStatus);
    }
    }
  }
  if (disketteExtension__IsRemoved) {
    {
    Irp__IoStatus__Information = 0;
    Irp__IoStatus__Status___0 = -1073741738;
    myStatus = -1073741738;
    IofCompleteRequest(Irp, 0);
    }
    return (-1073741738);
  }
  if (! disketteExtension__IsStarted) {
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
    tmp = IofCallDriver(disketteExtension__TargetObject, Irp);
    }
    return (tmp);
  }
  {
  //__cil_tmp42 = 2 << 2;
  //__cil_tmp43 = 77 << 16;
  //__cil_tmp44 = __cil_tmp43 | __cil_tmp42;
  if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp44) {
    goto switch_13_exp_0;
  } else {
    {
    //__cil_tmp45 = 77 << 16;
    if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp45) {
      goto switch_13_exp_1;
    } else {
      {
      //__cil_tmp46 = 6 << 2;
      //__cil_tmp47 = 3 << 14;
      //__cil_tmp48 = 7 << 16;
      //__cil_tmp49 = __cil_tmp48 | __cil_tmp47;
      //__cil_tmp50 = __cil_tmp49 | __cil_tmp46;
      if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp50) {
        goto switch_13_exp_2;
      } else {
        {
       // __cil_tmp51 = 11 << 2;
        //__cil_tmp52 = 3 << 14;
        //__cil_tmp53 = 7 << 16;
       // __cil_tmp54 = __cil_tmp53 | __cil_tmp52;
        //__cil_tmp55 = __cil_tmp54 | __cil_tmp51;
        if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp55) {
          goto switch_13_exp_3;
        } else {
          {
         // __cil_tmp56 = 512 << 2;
         // __cil_tmp57 = 1 << 14;
         // __cil_tmp58 = 7 << 16;
          //__cil_tmp59 = __cil_tmp58 | __cil_tmp57;
         // __cil_tmp60 = __cil_tmp59 | __cil_tmp56;
          if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp60) {
            goto switch_13_exp_4;
          } else {
            {
            //__cil_tmp61 = 512 << 2;
            //__cil_tmp62 = 1 << 14;
           // __cil_tmp63 = 45 << 16;
            //__cil_tmp64 = __cil_tmp63 | __cil_tmp62;
            //__cil_tmp65 = __cil_tmp64 | __cil_tmp61;
            if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp65) {
              goto switch_13_exp_5;
            } else {
              {
              //__cil_tmp66 = 7 << 16;
              if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp66) {
                goto switch_13_exp_6;
              } else {
                {
                //__cil_tmp67 = 9 << 2;
                //__cil_tmp68 = 7 << 16;
                //__cil_tmp69 = __cil_tmp68 | __cil_tmp67;
                if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp69) {
                  goto switch_13_exp_7;
                } else {
                  {
                  //__cil_tmp70 = 768 << 2;
                  //__cil_tmp71 = 7 << 16;
                  //__cil_tmp72 = __cil_tmp71 | __cil_tmp70;
                  if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp72) {
                    goto switch_13_exp_8;
                  } else {
                    {
                    //__cil_tmp73 = 768 << 2;
                   // __cil_tmp74 = 45 << 16;
                    //__cil_tmp75 = __cil_tmp74 | __cil_tmp73;
                    if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp75) {
                      goto switch_13_exp_9;
                    } else {
                      {
                      //__cil_tmp76 = 3 << 2;
                      //__cil_tmp77 = 77 << 16;
                      //__cil_tmp78 = __cil_tmp77 | __cil_tmp76;
                      if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp78) {
                        goto switch_13_exp_10;
                      } else {
                        {
                        //__cil_tmp79 = 248 << 2;
                        //__cil_tmp80 = 7 << 16;
                        //__cil_tmp81 = __cil_tmp80 | __cil_tmp79;
                        if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp81) {
                          goto switch_13_exp_11;
                        } else {
                          goto switch_13_default;
                          if (0) {
                            switch_13_exp_0: ;
                            if (irpSp__Parameters__DeviceIoControl__OutputBufferLength < sizeof__MOUNTDEV_NAME) {
                              ntStatus = -1073741811;
                              goto switch_13_break;
                            }
                            mountName = Irp__AssociatedIrp__SystemBuffer;
                            mountName__NameLength = disketteExtension__DeviceName__Length;
                            {
                            __cil_tmp82 = sizeof__USHORT + mountName__NameLength;
                            if (irpSp__Parameters__DeviceIoControl__OutputBufferLength < __cil_tmp82) {
                              ntStatus = -2147483643;
                              Irp__IoStatus__Information = sizeof__MOUNTDEV_NAME;
                              goto switch_13_break;
                            }
                            }
                            ntStatus = 0;
                            Irp__IoStatus__Information = sizeof__USHORT + mountName__NameLength;
                            goto switch_13_break;
                            switch_13_exp_1: ;
                            if (! disketteExtension__InterfaceString__Buffer) {
                              ntStatus = -1073741811;
                              goto switch_13_break;
                            } else {
                              if (irpSp__Parameters__DeviceIoControl__OutputBufferLength < sizeof__MOUNTDEV_UNIQUE_ID) {
                                ntStatus = -1073741811;
                                goto switch_13_break;
                              }
                            }
                            uniqueId = Irp__AssociatedIrp__SystemBuffer;
                            uniqueId__UniqueIdLength = disketteExtension__InterfaceString__Length;
                            {
                            __cil_tmp83 = sizeof__USHORT + uniqueId__UniqueIdLength;
                            if (irpSp__Parameters__DeviceIoControl__OutputBufferLength < __cil_tmp83) {
                              ntStatus = -2147483643;
                              Irp__IoStatus__Information = sizeof__MOUNTDEV_UNIQUE_ID;
                              goto switch_13_break;
                            }
                            }
                            ntStatus = 0;
                            Irp__IoStatus__Information = sizeof__USHORT + uniqueId__UniqueIdLength;
                            goto switch_13_break;
                            switch_13_exp_2: ;
                            switch_13_exp_3: ;
                            if (irpSp__Parameters__DeviceIoControl__InputBufferLength < sizeof__FORMAT_PARAMETERS) {
                              ntStatus = -1073741811;
                              goto switch_13_break;
                            }
                            {
                            tmp___0 = FlCheckFormatParameters(disketteExtension, Irp__AssociatedIrp__SystemBuffer);
                            }
                            if (! tmp___0) {
                              ntStatus = -1073741811;
                              goto switch_13_break;
                            }
                            {
                            //__cil_tmp84 = 11 << 2;
                            //__cil_tmp85 = 3 << 14;
                            //__cil_tmp86 = 7 << 16;
                            //__cil_tmp87 = __cil_tmp86 | __cil_tmp85;
                            //__cil_tmp88 = __cil_tmp87 | __cil_tmp84;
                            if (irpSp__Parameters__DeviceIoControl__IoControlCode___1 == __cil_tmp88) {
                              if (irpSp__Parameters__DeviceIoControl__InputBufferLength < sizeof__FORMAT_EX_PARAMETERS) {
                                ntStatus = -1073741811;
                                goto switch_13_break;
                              }
                              formatExParameters = Irp__AssociatedIrp__SystemBuffer;
                              if (irpSp__Parameters__DeviceIoControl__InputBufferLength < formatExParametersSize) {
                                ntStatus = -1073741811;
                                goto switch_13_break;
                              } else {
                                if (formatExParameters__FormatGapLength >= 256) {
                                  ntStatus = -1073741811;
                                  goto switch_13_break;
                                } else {
                                  if (formatExParameters__SectorsPerTrack >= 256) {
                                    ntStatus = -1073741811;
                                    goto switch_13_break;
                                  }
                                }
                              }
                            }
                            }
                            switch_13_exp_4: ;
                            switch_13_exp_5: ;
                            switch_13_exp_6: ;
                            switch_13_exp_7: 
                            {
                            ntStatus = FlQueueIrpToThread(Irp, disketteExtension);
                            }
                            goto switch_13_break;
                            switch_13_exp_8: ;
                            switch_13_exp_9: 
                            outputBufferLength = irpSp__Parameters__DeviceIoControl__OutputBufferLength;
                            if (outputBufferLength < sizeof__DISK_GEOMETRY) {
                              ntStatus = -1073741789;
                              goto switch_13_break;
                            }
                            ntStatus = 0;
                            {
                            __cil_tmp89 = highestDriveMediaType - lowestDriveMediaType;
                            __cil_tmp90 = __cil_tmp89 + 1;
                            if (outputBufferLength < __cil_tmp90) {
                              ntStatus = -2147483643;
                            }
                            }
                            goto switch_13_break;
                            switch_13_exp_10: ;
                            switch_13_exp_11: ;
                            switch_13_default: ;
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
                            ntStatus = IofCallDriver(disketteExtension__TargetObject,
                                                     Irp);
                            }
                            return (ntStatus);
                          } else {
                            switch_13_break: ;
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
    }
  }
  }
  {
  __cil_tmp91 = (long )ntStatus;
  if (__cil_tmp91 != 259L) {
    {
    Irp__IoStatus__Status___0 = ntStatus;
    myStatus = ntStatus;
    IofCompleteRequest(Irp, 0);
    }
  }
  }
  return (ntStatus);
}
}
int FlCheckFormatParameters(int DisketteExtension , int FormatParameters ) 
{int DriveMediaConstants__driveMediaType__MediaType;
klee_make_symbolic(&DriveMediaConstants__driveMediaType__MediaType, sizeof(DriveMediaConstants__driveMediaType__MediaType),"DriveMediaConstants__driveMediaType__MediaType");
 int FormatParameters__MediaType;
klee_make_symbolic(&FormatParameters__MediaType, sizeof(FormatParameters__MediaType),"FormatParameters__MediaType");
 int FAKE_CONDITION;
klee_make_symbolic(&FAKE_CONDITION, sizeof(FAKE_CONDITION),"FAKE_CONDITION");

  {
  if (DriveMediaConstants__driveMediaType__MediaType != FormatParameters__MediaType) {
    return (0);
  } else {
    if (FAKE_CONDITION) {
      return (0);
    } else {
      return (1);
    }
  }
}
}
int FloppyQueueRequest(int DisketteExtension , int Irp ) 
{ int Irp__IoStatus__Status ;
  int Irp__IoStatus__Information ;
  int Irp__Tail__Overlay__CurrentStackLocation__Control ;
  int ntStatus ;
 int FAKE_CONDITION;
klee_make_symbolic(&FAKE_CONDITION, sizeof(FAKE_CONDITION),"FAKE_CONDITION");

  {
  PagingReferenceCount ++;
  if (PagingReferenceCount == 1) {

  }
  if (FAKE_CONDITION) {
    {
    Irp__IoStatus__Status = -1073741536;
    myStatus = -1073741536;
    Irp__IoStatus__Information = 0;
    IofCompleteRequest(Irp, 0);
    PagingReferenceCount --;
    }
    if (PagingReferenceCount == 0) {

    }
    ntStatus = -1073741536;
  } else {
    Irp__IoStatus__Status = 259;
    myStatus = 259;
    //Irp__Tail__Overlay__CurrentStackLocation__Control |= 1;
    if (pended == 0) {
      pended = 1;
    } else {
      {
      errorFn();
      }
    }
    ntStatus = 259;
  }
  return (ntStatus);
}
}

