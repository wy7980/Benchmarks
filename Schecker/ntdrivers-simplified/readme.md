
original source get from sv-benchmarks(https|//github.com/sosy-lab/sv-benchmarks/tree/master/c/ntdrivers-simplified)



# test1
|No|programe name|
|---|---|
|1|floppy_simpl3_false-unreach-call_true-valid-memsafety_true-termination.out.c|
|2|kbfiltr_simpl2_true-unreach-call_true-valid-memsafety_true-termination.out.c|
|3|kbfiltr_simpl1_true-unreach-call_true-valid-memsafety_true-termination.out.c|
|4|floppy_simpl4_false-unreach-call_true-valid-memsafety_true-termination.out.c|
|5|floppy_simpl4_true-unreach-call_true-valid-memsafety_true-termination.out.c|
|6|kbfiltr_simpl2_false-unreach-call_true-valid-memsafety_true-termination.out.c|
|7|cdaudio_simpl1_false-unreach-call_true-valid-memsafety_true-termination.out.c|

| NO |    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|----|-----------|--------|---------|---------|---------|--------|------------|
|1|klee-last|   65968|    51.29|    76.63|    55.75|    1575|        1.08|
|2|klee-last|   12800|    11.21|    71.78|    46.46|    1272|        0.98|
|3|klee-last|   10613|   240.80|    62.98|    36.84|     867|        0.02|
|4|klee-last|   70645|    73.62|    82.56|    66.23|    2127|        0.59|
|5|klee-last|   98909|   152.36|    82.57|    66.23|    2128|        0.37|
|6|klee-last|    7824|     8.39|    71.80|    47.00|    1273|        0.72|
|7|klee-last|   90107|   118.82|    80.29|    62.74|    2781|        0.39|


| type |        property        | satisfiability |
|------|------------------------|----------------|
| EF   | E F a>0                | satisfied      |
| EG   | E a>0 G b!=3           | satisfied      |
| EG   | E a>0 and b!=3 G b!=5  | satisfied      |
| EU   | E a>=0 U b=3           | satisfied      |
| EU   | E a<0 U b=3 and a>=0   | unsatisfied    |
| EX   | E a<0 X b<4            | satisfied      |
| EX   | E a>0 and b=4 X a<0    | unsatisfied    |
| EF   | E a<0 and b<4 F a>2    | unsatisfied    |
| EF   | E a>=0 and b=3 F b>4   | satisfied      |
| AU   | A a>=0 U a>=0 and b!=3 | satisfied      |
| AU   | A a<0 U a>=0 and b>=4  | unsatisfied    |
| AX   | A a<0 X a<3            | satisfied      |
| AX   | A a>=0 and b=3 X b>3   | unsatisfied    |
| AF   | A a<0 F a>4            | unsatisfied    |
| AF   | A a<0 F b!=4           | satisfied      |

# test2

## 1 cdaudio_simpl1_false-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  90107 |  202.11 |   80.29 |   62.74 |   2781 |       0.26 |
------------------------------------------------------------------------

| type |                         property                        | satisfiability |
|------|---------------------------------------------------------|----------------|
| EF   | E F irpSp__MinorFunction = 0                            | satisfied      |
| EX   | E irpSp__MinorFunction != 0 X irpSp__MinorFunction = 22 | satisfied      |
| EU   | E irpSp__MinorFunction = 0 U irpSp__MinorFunction = 22  | unsatisfied    |


## 2 floppy_simpl3_false-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  65968 |  144.78 |   76.63 |   55.75 |   1575 |       0.62 |
------------------------------------------------------------------------

| type |                        property                        | satisfiability |
|------|--------------------------------------------------------|----------------|
| EF   | E F irpSp__MinorFunction = 5                           | satisfied      |
| AX   | A irpSp__MinorFunction != 5 X irpSp__MinorFunction = 1 | unsatisfied    |

## 3.floppy_simpl4_false-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  70645 |  553.01 |   82.56 |   66.23 |   2127 |       0.12 |
------------------------------------------------------------------------

| type |             property             | satisfiability |
|------|----------------------------------|----------------|
| EX   | E tmp_ndt_2 != 1 X tmp_ndt_3 = 2 | satisfied      |
| AX   | A tmp_ndt_2 != 1 X tmp_ndt_3 = 2 | unsatisfied    |
| EX   | E tmp_ndt_1 =0 X tmp_ndt_2 = 1   | unsatisfied    |

## 4.floppy_simpl4_true-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  98909 |  205.84 |   82.57 |   66.23 |   2128 |       0.32 |
------------------------------------------------------------------------

| type |                                                                property                                                               | satisfiability |
|------|---------------------------------------------------------------------------------------------------------------------------------------|----------------|
| AU   | A tmp_ndt_10=0 U tmp_ndt_10!=0 and tmp_ndt_11=1                                                                                       | unsatisfied    |
| EX   | E disketteExtension__InterfaceString__Buffer= 1 X irpSp__Parameters__DeviceIoControl__OutputBufferLength < sizeof__MOUNTDEV_UNIQUE_ID | satisfied      |

## 5. kbfiltr_simpl1_true-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  10613 |   12.35 |   62.98 |   36.84 |    867 |       0.28 |
------------------------------------------------------------------------

| type |                                            property                                           | satisfiability |
|------|-----------------------------------------------------------------------------------------------|----------------|
| EF   | E irpStack__MinorFunction != 0 and irpStack__MinorFunction!=23 F irpStack__MinorFunction = 19 | satisfied      |
| AF   | A irpStack__MinorFunction!=0 and irpStack__MinorFunction!=23 F  irpStack__MinorFunction=0     | unsatisfied    |


## 6.kbfiltr_simpl2_false-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |   7824 |    9.31 |   71.80 |   47.00 |   1273 |       0.49 |
------------------------------------------------------------------------

| type |                         property                         | satisfiability |
|------|----------------------------------------------------------|----------------|
| EX   | E irpStack__MinorFunction=6 X irpStack__MinorFunction=13 | satisfied      |
| AF   | A irpStack__MinorFunction!=6 F irpStack__MinorFunction=3 | unsatisfied    |

## 7.kbfiltr_simpl2_true-unreach-call_true-valid-memsafety_true-termination.out.c

------------------------------------------------------------------------
|    Path   | Instrs | Time(s) | ICov(%) | BCov(%) | ICount | TSolver(%) |
|-----------|--------|---------|---------|---------|--------|------------|
| klee-last |  12800 |   36.03 |   71.78 |   46.46 |   1272 |       0.29 |
------------------------------------------------------------------------

| type |                         property                         | satisfiability |
|------|----------------------------------------------------------|----------------|
| EF   | E tmp_ndt_6 = 0 F tmp_ndt_7=1                            | unsatisfied    |
| EU   | E irpStack__MinorFunction!=2 U irpStack__MinorFunction=1 | satisfied      |

