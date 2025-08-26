
#include "header.h"

void predict_unit23(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)16531)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[1] += -0.004019796;
            } else {
              result[1] += 0.009046978;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[1] += -0.011631517;
            } else {
              result[1] += 0.012268708;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[1] += 0.00048349626;
            } else {
              result[1] += 0.0383238;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34379)) {
              result[1] += 0.023804361;
            } else {
              result[1] += -0.065654375;
            }
          }
        }
      } else {
        result[1] += -0.12660736;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
        result[1] += -0.08409171;
      } else {
        result[1] += 0.20987745;
      }
    }
  } else {
    result[1] += -0.12679131;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)48039)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)46279)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)46051)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)45044)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)44853)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)43217)) {
              result[2] += -0.00019229525;
            } else {
              result[2] += 0.058438066;
            }
          } else {
            result[2] += -0.13679112;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            result[2] += 0.26667395;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)45717)) {
              result[2] += -0.030839281;
            } else {
              result[2] += -0.11145886;
            }
          }
        }
      } else {
        result[2] += -0.05714962;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        result[2] += 0.12999295;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)47487)) {
          result[2] += 0.061709296;
        } else {
          result[2] += -0.0946671;
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)48806)) {
        result[2] += -0.11378719;
      } else {
        result[2] += -0.046010293;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)63458)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)62881)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)61706)) {
              result[2] += 0.013388427;
            } else {
              result[2] += -0.063610874;
            }
          } else {
            result[2] += 0.39692232;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)63665)) {
            result[2] += -0.0063090227;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)64324)) {
              result[2] += -0.02364647;
            } else {
              result[2] += -0.015257877;
            }
          }
        }
      } else {
        result[2] += -0.11586742;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.08927958;
    } else {
      result[3] += -0.00062474865;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.071581066;
    } else {
      result[3] += -0.0034087067;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)34979)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)34019)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)33431)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31693)) {
              result[4] += 0.0010390312;
            } else {
              result[4] += 0.060910117;
            }
          } else {
            result[4] += -0.13218148;
          }
        } else {
          result[4] += 0.14240785;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)35254)) {
          result[4] += -0.08561189;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)36088)) {
            result[4] += 0.031967133;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)37226)) {
              result[4] += -0.10499707;
            } else {
              result[4] += -0.012887208;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)39447)) {
        result[4] += 0.060300488;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)40516)) {
              result[4] += -0.014583616;
            } else {
              result[4] += 0.050210092;
            }
          } else {
            result[4] += -0.10024955;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)41591)) {
            result[4] += 0.069240846;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
              result[4] += -0.030781642;
            } else {
              result[4] += 0.007721992;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.079825744;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
              result[5] += -0.0001762443;
            } else {
              result[5] += 0.08532928;
            }
          } else {
            result[5] += -0.13665685;
          }
        } else {
          result[5] += -0.13618249;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[5] += 0.14717232;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[5] += -0.088190384;
            } else {
              result[5] += 0.1360625;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
              result[5] += -0.21391687;
            } else {
              result[5] += 0.022337435;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20366)) {
          result[5] += -0.1540482;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
            result[5] += 0.1594447;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
              result[5] += -0.15605117;
            } else {
              result[5] += 0.022574091;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
              result[5] += -0.14387627;
            } else {
              result[5] += 0.16321845;
            }
          } else {
            result[5] += -0.17820989;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            result[5] += -0.1582275;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
              result[5] += -0.14901043;
            } else {
              result[5] += 0.0071031787;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
        result[5] += 0.13502978;
      } else {
        result[5] += 0.041196372;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        result[5] += -0.080475055;
      } else {
        result[5] += 0.0990661;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[23].missing != -1) && (data[23].fvalue < (float)12)) {
      result[6] += 0.0001677419;
    } else {
      result[6] += 0.013677924;
    }
  } else {
    result[6] += -0.07981254;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[7] += 0.0005114757;
            } else {
              result[7] += -0.12501265;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.13449836;
            } else {
              result[7] += 0.07860976;
            }
          }
        } else {
          result[7] += -0.12994944;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)59)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            result[7] += 0.12687759;
          } else {
            result[7] += 0.022688547;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)32)) {
              result[7] += -0.08071292;
            } else {
              result[7] += 0.015712408;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2357014272)) {
              result[7] += -0.015405783;
            } else {
              result[7] += 0.13991895;
            }
          }
        }
      }
    } else {
      result[7] += 0.114944346;
    }
  } else {
    result[7] += -0.10688673;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
              result[8] += -0.010050469;
            } else {
              result[8] += 0.08700315;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
              result[8] += -0.086263314;
            } else {
              result[8] += 0.28013805;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
              result[8] += 0.043085538;
            } else {
              result[8] += -0.002490836;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
              result[8] += -0.012078875;
            } else {
              result[8] += 0.0013193177;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.14594623;
            } else {
              result[8] += 0.03596714;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)41134)) {
              result[8] += -0.08451836;
            } else {
              result[8] += 0.03196022;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[8] += 0.2343469;
            } else {
              result[8] += 0.013560415;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
              result[8] += 0.01828521;
            } else {
              result[8] += -0.027308779;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += -0.19293785;
            } else {
              result[8] += 0.062744744;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[8] += 0.12557645;
            } else {
              result[8] += -0.0035825893;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
              result[8] += -0.026118807;
            } else {
              result[8] += -0.18622519;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
              result[8] += 0.04011353;
            } else {
              result[8] += 0.008030921;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
              result[8] += -0.0038014678;
            } else {
              result[8] += -0.21035916;
            }
          } else {
            result[8] += 0.12184039;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[8] += -0.16724053;
            } else {
              result[8] += -0.022946194;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
              result[8] += 0.095555425;
            } else {
              result[8] += -0.0019506906;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3399763968)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2956528384)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1599453184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[8] += -0.019128026;
            } else {
              result[8] += 0.074341156;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)29299)) {
              result[8] += -0.023468805;
            } else {
              result[8] += -0.08034734;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2039111168)) {
              result[8] += 0.31132936;
            } else {
              result[8] += 0.0291705;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36709)) {
              result[8] += -0.016190449;
            } else {
              result[8] += 0.021287674;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)62460)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[8] += -0.1607815;
            } else {
              result[8] += -0.06390859;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11356)) {
              result[8] += 0.026930666;
            } else {
              result[8] += -0.08065664;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[8] += -0.026473328;
            } else {
              result[8] += 0.61412394;
            }
          } else {
            result[8] += -0.11751852;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
              result[8] += 0.035118505;
            } else {
              result[8] += -0.03303676;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48458)) {
              result[8] += 0.014763156;
            } else {
              result[8] += 0.39061624;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
              result[8] += -0.06294904;
            } else {
              result[8] += -0.14952725;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[8] += 0.2649562;
            } else {
              result[8] += -0.10367697;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[8] += 0.2795478;
            } else {
              result[8] += 0.92361647;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48966)) {
              result[8] += -0.11822425;
            } else {
              result[8] += 0.22905274;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4217347584)) {
              result[8] += -0.07447298;
            } else {
              result[8] += 0.22813688;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[8] += 0.449456;
            } else {
              result[8] += 0.005920146;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1698013184)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[9] += 9.067153e-05;
            } else {
              result[9] += 0.14823392;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
              result[9] += -0.14389528;
            } else {
              result[9] += 0.12603475;
            }
          }
        } else {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[9] += -0.07680489;
          } else {
            result[9] += 0.1484297;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)39016)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[9] += -0.11340975;
            } else {
              result[9] += 0.15620966;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5591)) {
              result[9] += 0.13745584;
            } else {
              result[9] += -0.12549415;
            }
          }
        } else {
          result[9] += 0.122863844;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.05859325;
      } else {
        result[9] += 0.15514761;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[9] += -0.09375241;
        } else {
          result[9] += 0.1324499;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5591)) {
              result[9] += -0.086516686;
            } else {
              result[9] += -0.15425682;
            }
          } else {
            result[9] += 0.08033832;
          }
        } else {
          result[9] += 0.06186056;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[9] += -0.06385223;
      } else {
        result[9] += 0.15296932;
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[10] += 7.46076e-05;
            } else {
              result[10] += 0.012816911;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
              result[10] += 0.11381367;
            } else {
              result[10] += 0.023660263;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60670)) {
            result[10] += -0.14228404;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
              result[10] += 0.16219555;
            } else {
              result[10] += -0.113900825;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
          result[10] += -0.14127642;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)266309232)) {
            result[10] += 0.18380855;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
              result[10] += -0.13435252;
            } else {
              result[10] += 0.10478602;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3198206208)) {
        result[10] += -0.11644132;
      } else {
        result[10] += -0.029185442;
      }
    }
  } else {
    result[10] += -0.115925625;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
              result[11] += 0.00012128297;
            } else {
              result[11] += -0.03917279;
            }
          } else {
            result[11] += -0.16968785;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[11] += -0.16659042;
          } else {
            result[11] += 0.14714558;
          }
        }
      } else {
        result[11] += -0.15838447;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
          result[11] += -0.16120431;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
            result[11] += 0.16246167;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[11] += -0.17547105;
            } else {
              result[11] += 0.062002946;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
            result[11] += -0.1759022;
          } else {
            result[11] += -0.0011631298;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)5405)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
              result[11] += 0.036894046;
            } else {
              result[11] += 0.25011894;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[11] += -0.19611976;
            } else {
              result[11] += -0.0082750935;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.1243294;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44471)) {
              result[12] += -0.0023038106;
            } else {
              result[12] += 0.01833232;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[12] += -0.043978658;
            } else {
              result[12] += -0.0030559045;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[12] += 0.14020622;
          } else {
            result[12] += 0.074107066;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            result[12] += -0.14968863;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61935)) {
              result[12] += -0.08612604;
            } else {
              result[12] += 0.044991124;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
              result[12] += 0.0019428144;
            } else {
              result[12] += -0.048973978;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[12] += 0.14175855;
            } else {
              result[12] += 0.007010779;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[12] += -0.071815796;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
              result[12] += -0.22875766;
            } else {
              result[12] += -0.081921756;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
            result[12] += 0.20857687;
          } else {
            result[12] += -0.12769794;
          }
        }
      } else {
        result[12] += 0.19060677;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)9820)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[12] += 0.1795392;
            } else {
              result[12] += 0.0082876375;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1499005440)) {
              result[12] += -0.0743066;
            } else {
              result[12] += 0.011347359;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[12] += 0.1833862;
            } else {
              result[12] += -0.043411925;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
              result[12] += 0.19970416;
            } else {
              result[12] += 0.014106664;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)12452)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[12] += -0.08302173;
            } else {
              result[12] += 0.1522956;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2621401856)) {
              result[12] += 0.034583304;
            } else {
              result[12] += -0.038654707;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17067)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[12] += 0.0017493998;
            } else {
              result[12] += 0.06325291;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
              result[12] += -0.05398831;
            } else {
              result[12] += 0.0024088067;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            result[12] += -0.034840044;
          } else {
            result[12] += -0.14394173;
          }
        } else {
          result[12] += 0.03673051;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[12] += 0.12419977;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[12] += -0.08684593;
          } else {
            result[12] += 0.024136016;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
              result[13] += 0.001208089;
            } else {
              result[13] += -0.017207302;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47693)) {
              result[13] += 0.02858261;
            } else {
              result[13] += -0.020473355;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
              result[13] += -0.12943637;
            } else {
              result[13] += 0.110951796;
            }
          } else {
            result[13] += 0.12567852;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398005248)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
              result[13] += 0.09065908;
            } else {
              result[13] += -0.15785569;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += 0.23792861;
            } else {
              result[13] += 0.12228308;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3284568832)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
              result[13] += -0.00025063154;
            } else {
              result[13] += -0.21919072;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.033358295;
            } else {
              result[13] += 0.18297167;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
              result[13] += -0.15710579;
            } else {
              result[13] += -0.06281235;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3687526656)) {
              result[13] += 0.096780576;
            } else {
              result[13] += -0.10954066;
            }
          }
        } else {
          result[13] += 0.13778503;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          result[13] += 0.14799672;
        } else {
          result[13] += -0.1186096;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[13] += -0.1745573;
            } else {
              result[13] += 0.058945227;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.08395102;
            } else {
              result[13] += 0.011319357;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += -0.13689783;
            } else {
              result[13] += 0.051391292;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1957388416)) {
              result[13] += 0.03368937;
            } else {
              result[13] += -0.18871777;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4024162560)) {
              result[13] += 0.034770187;
            } else {
              result[13] += -0.2488407;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2800293632)) {
              result[13] += -0.22877868;
            } else {
              result[13] += -0.026303915;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[13] += 0.075069614;
            } else {
              result[13] += -0.037155222;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += -0.14050545;
            } else {
              result[13] += 0.10202789;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
            result[13] += 0.12733108;
          } else {
            result[13] += 0.008930274;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            result[13] += 0.327064;
          } else {
            result[13] += 0.052609287;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
              result[13] += 0.06249012;
            } else {
              result[13] += 0.20100187;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[13] += 0.07438729;
            } else {
              result[13] += -0.092746705;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[13] += -0.052969433;
            } else {
              result[13] += -0.2764205;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[13] += -0.08960609;
            } else {
              result[13] += 0.08773844;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -9.3033e-05;
            } else {
              result[14] += 0.031200932;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[14] += -0.14573103;
            } else {
              result[14] += 0.0045078346;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)315034144)) {
              result[14] += 0.3182542;
            } else {
              result[14] += -0.06148561;
            }
          } else {
            result[14] += -0.100308515;
          }
        }
      } else {
        result[14] += -0.12785947;
      }
    } else {
      result[14] += 0.13550456;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            result[14] += 0.068936184;
          } else {
            result[14] += -0.1314699;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
            result[14] += -0.07916951;
          } else {
            result[14] += -0.42438117;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          result[14] += 0.07895853;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[14] += -0.13766392;
            } else {
              result[14] += -0.036243618;
            }
          } else {
            result[14] += 0.054059736;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
            result[14] += -0.08994282;
          } else {
            result[14] += -0.0233581;
          }
        } else {
          result[14] += 0.15853794;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)512)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)277)) {
              result[14] += -0.0649787;
            } else {
              result[14] += 0.055373725;
            }
          } else {
            result[14] += 0.12885328;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.13799201;
          } else {
            result[14] += 0.014998833;
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)50734)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)43961)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
              result[0] += -0.00028398476;
            } else {
              result[0] += 0.14279263;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.08496155;
            } else {
              result[0] += 0.07059607;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46699)) {
              result[0] += 0.02782969;
            } else {
              result[0] += 0.14192861;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48458)) {
              result[0] += -0.08247897;
            } else {
              result[0] += 0.021470439;
            }
          }
        }
      } else {
        result[0] += 0.19829138;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)52006)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
            result[0] += -0.086388454;
          } else {
            result[0] += 0.035483595;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            result[0] += -0.17735137;
          } else {
            result[0] += -0.041849688;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
              result[0] += -0.026257021;
            } else {
              result[0] += 0.015252908;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[0] += 0.12168737;
            } else {
              result[0] += 0.37842596;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53768)) {
              result[0] += -0.07203078;
            } else {
              result[0] += -0.04463341;
            }
          } else {
            result[0] += 0.11349214;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55088)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
              result[0] += 0.1152923;
            } else {
              result[0] += -0.1260883;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
              result[0] += 0.21605201;
            } else {
              result[0] += 0.09698536;
            }
          }
        } else {
          result[0] += -0.10773337;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
          result[0] += 0.2309999;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)55867)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[0] += -0.041858383;
            } else {
              result[0] += 0.007430752;
            }
          } else {
            result[0] += 0.24243268;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
        result[0] += -0.18152255;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            result[0] += 0.073037446;
          } else {
            result[0] += 0.2683921;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57416)) {
              result[0] += -0.02803999;
            } else {
              result[0] += -0.19279787;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[0] += 0.057256516;
            } else {
              result[0] += -0.0040798043;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57669)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
              result[1] += 3.396933e-05;
            } else {
              result[1] += 0.02924713;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[1] += -0.007813554;
            } else {
              result[1] += -0.10999002;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[1] += 0.032506295;
            } else {
              result[1] += -0.1631863;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3598538240)) {
              result[1] += 0.26103014;
            } else {
              result[1] += -0.13932738;
            }
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[1] += -0.042576347;
            } else {
              result[1] += 0.10784705;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[1] += -0.23117162;
            } else {
              result[1] += 0.04016591;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)38174)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += -0.023762625;
            } else {
              result[1] += 0.7365348;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[1] += 0.30404586;
            } else {
              result[1] += -0.07819641;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4103136768)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4076412416)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
              result[1] += 0.0070742792;
            } else {
              result[1] += -0.14004631;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[1] += 0.17789939;
            } else {
              result[1] += -0.066656716;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
            result[1] += 0.36428624;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[1] += -0.11495409;
            } else {
              result[1] += 0.23622979;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
              result[1] += -0.1738252;
            } else {
              result[1] += 0.07019232;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
              result[1] += 0.13276339;
            } else {
              result[1] += -0.07645412;
            }
          }
        } else {
          result[1] += 0.17334418;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2398005248)) {
              result[1] += -0.02272005;
            } else {
              result[1] += -0.12996338;
            }
          } else {
            result[1] += -0.20277324;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
              result[1] += -0.12005311;
            } else {
              result[1] += 0.10396467;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.16868795;
            } else {
              result[1] += -0.09757071;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[1] += 0.16421935;
            } else {
              result[1] += 0.3509834;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[1] += -0.05835123;
            } else {
              result[1] += 0.17031577;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            result[1] += -0.0507035;
          } else {
            result[1] += -0.2414964;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)38644)) {
              result[1] += 0.0015890326;
            } else {
              result[1] += 0.08763212;
            }
          } else {
            result[1] += -0.13838378;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += 0.12079729;
            } else {
              result[1] += 0.358377;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
              result[1] += -0.1415132;
            } else {
              result[1] += 0.14223205;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3340514816)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
              result[1] += -0.010990318;
            } else {
              result[1] += 0.059337966;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[1] += -0.18843031;
            } else {
              result[1] += -0.074083;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64759)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
              result[1] += -0.03172122;
            } else {
              result[1] += 0.16926655;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[1] += -0.1655907;
            } else {
              result[1] += 0.01558463;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[2] += -0.024056604;
            } else {
              result[2] += -0.011556068;
            }
          } else {
            result[2] += 0.022341091;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1469)) {
            result[2] += -0.08698345;
          } else {
            result[2] += -0.009788383;
          }
        }
      } else {
        result[2] += -0.079806134;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)8361)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)8010)) {
            result[2] += 0.015030789;
          } else {
            result[2] += 0.05604227;
          }
        } else {
          result[2] += -0.1138968;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)9584)) {
          result[2] += -0.11319791;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)10301)) {
            result[2] += 0.17762399;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)14010)) {
              result[2] += -0.029952733;
            } else {
              result[2] += 0.00013912265;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)3753)) {
      result[2] += 0.044458166;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4057)) {
        result[2] += -0.040338315;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)4898)) {
              result[2] += 0.01864225;
            } else {
              result[2] += -0.016716387;
            }
          } else {
            result[2] += 0.09969833;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7019)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6705)) {
              result[2] += -0.009026407;
            } else {
              result[2] += -0.03293402;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7935)) {
              result[2] += 0.047314983;
            } else {
              result[2] += 0.006662798;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.08591016;
    } else {
      result[3] += -0.0005528789;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.070283934;
    } else {
      result[3] += -0.0024336833;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1368)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
            result[4] += -0.0021365392;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
              result[4] += 0.0030824523;
            } else {
              result[4] += 0.0099552255;
            }
          }
        } else {
          result[4] += -0.020637056;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)23764)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)23499)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
              result[4] += 0.008017432;
            } else {
              result[4] += -0.09409635;
            }
          } else {
            result[4] += 0.14574423;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)24050)) {
            result[4] += -0.094464235;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38315)) {
              result[4] += -0.0010661074;
            } else {
              result[4] += 0.0061154943;
            }
          }
        }
      }
    } else {
      result[4] += 0.059384365;
    }
  } else {
    result[4] += -0.07667437;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
              result[5] += 1.2680661e-05;
            } else {
              result[5] += 0.13971658;
            }
          } else {
            result[5] += -0.16459616;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)9329)) {
            result[5] += -0.100209974;
          } else {
            result[5] += 0.16663149;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
          result[5] += -0.20920742;
        } else {
          result[5] += -0.14212574;
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
              result[5] += -0.13071166;
            } else {
              result[5] += 0.10365559;
            }
          } else {
            result[5] += -0.15150443;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)18524)) {
              result[5] += -0.1544548;
            } else {
              result[5] += -0.061511528;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[5] += 0.14198805;
            } else {
              result[5] += -0.103088476;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
          result[5] += 0.17233966;
        } else {
          result[5] += -0.08882567;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      result[5] += -0.1481169;
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
              result[5] += -0.14821711;
            } else {
              result[5] += 0.106694244;
            }
          } else {
            result[5] += -0.15336815;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
            result[5] += -0.14552312;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[5] += 0.14447801;
            } else {
              result[5] += 0.052429706;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)813467392)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[5] += -0.13935909;
            } else {
              result[5] += 0.17315756;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)23688)) {
              result[5] += -0.16623047;
            } else {
              result[5] += 0.032429688;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5909)) {
              result[5] += 0.0404939;
            } else {
              result[5] += -0.15482894;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[5] += -0.05992416;
            } else {
              result[5] += 0.010613589;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[6] += 0.00012849845;
  } else {
    result[6] += -0.07666154;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[7] += 0.0025792317;
            } else {
              result[7] += -0.025182627;
            }
          } else {
            result[7] += -0.11172967;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[7] += -0.07654081;
            } else {
              result[7] += -0.032710172;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2650760192)) {
              result[7] += -0.02513756;
            } else {
              result[7] += 0.0706407;
            }
          }
        }
      } else {
        result[7] += 0.14490277;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)6)) {
            result[7] += -0.14611384;
          } else {
            result[7] += -0.05492604;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1499005440)) {
            result[7] += 0.122830346;
          } else {
            result[7] += -0.08691629;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[7] += -0.110629305;
            } else {
              result[7] += -0.04078629;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
              result[7] += 0.302651;
            } else {
              result[7] += -0.07486894;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[7] += 0.054449283;
            } else {
              result[7] += 0.2887724;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59186)) {
              result[7] += -0.048732;
            } else {
              result[7] += 0.1307293;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)414614720)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)133638360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[7] += -0.0056971377;
            } else {
              result[7] += -0.1261366;
            }
          } else {
            result[7] += 0.20849018;
          }
        } else {
          result[7] += -0.141424;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)7187)) {
              result[7] += 0.24338613;
            } else {
              result[7] += -0.1308397;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)39566)) {
              result[7] += 0.32127982;
            } else {
              result[7] += 0.08737251;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)57147)) {
              result[7] += -0.01741662;
            } else {
              result[7] += -0.11628796;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4191465472)) {
              result[7] += 0.10757863;
            } else {
              result[7] += -0.0826705;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11906)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)11088)) {
              result[7] += 0.07645594;
            } else {
              result[7] += -0.11451355;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.042502385;
            } else {
              result[7] += 0.23391959;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23106)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2564)) {
              result[7] += -0.08387837;
            } else {
              result[7] += 0.16805899;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
              result[7] += -0.068949915;
            } else {
              result[7] += 0.08051606;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += -0.008460603;
            } else {
              result[7] += 0.004336052;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[7] += -0.005092583;
            } else {
              result[7] += 0.10276166;
            }
          }
        } else {
          result[7] += 0.11713543;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[8] += -1.1142924e-05;
            } else {
              result[8] += 0.036877435;
            }
          } else {
            result[8] += -0.1443168;
          }
        } else {
          result[8] += 0.13002719;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
          result[8] += -0.14293729;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)224)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[8] += 0.043509766;
            } else {
              result[8] += 0.13488615;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += -0.080554135;
            } else {
              result[8] += 0.02518955;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
          result[8] += -0.074078195;
        } else {
          result[8] += 0.15390551;
        }
      } else {
        result[8] += -0.13869111;
      }
    }
  } else {
    result[8] += -0.13144268;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)7751)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)31122)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[9] += -0.00021802705;
            } else {
              result[9] += 0.12253798;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[9] += 0.12411327;
            } else {
              result[9] += -0.08765289;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)53290)) {
              result[9] += 0.08234367;
            } else {
              result[9] += -0.057082042;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[9] += 0.15015852;
            } else {
              result[9] += -0.027195046;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)51103944)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
            result[9] += 0.11349487;
          } else {
            result[9] += -0.15451275;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)576729216)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += 0.21471377;
            } else {
              result[9] += 0.15431795;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[9] += 0.14445844;
            } else {
              result[9] += -0.10852188;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)54551)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)81898296)) {
          result[9] += 0.15125024;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
              result[9] += 0.20089741;
            } else {
              result[9] += -0.107912;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)382589280)) {
              result[9] += 0.15234715;
            } else {
              result[9] += 0.002323715;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
          result[9] += 0.14723705;
        } else {
          result[9] += 0.05453408;
        }
      }
    }
  } else {
    result[9] += -0.12691371;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)19858)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)19346)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[10] += -2.554575e-05;
            } else {
              result[10] += 0.18865615;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[10] += -0.45829466;
            } else {
              result[10] += -0.023523707;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[10] += -0.10952539;
            } else {
              result[10] += 0.12529421;
            }
          } else {
            result[10] += -0.35497117;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)22857)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[10] += 0.0372039;
            } else {
              result[10] += -0.081636734;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22343)) {
              result[10] += 0.13868476;
            } else {
              result[10] += 0.023120293;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
              result[10] += -0.09784825;
            } else {
              result[10] += 0.093165405;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
              result[10] += -0.14016153;
            } else {
              result[10] += 0.0021303513;
            }
          }
        }
      }
    } else {
      result[10] += -0.11268627;
    }
  } else {
    result[10] += -0.11472365;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
              result[11] += -0.00086602505;
            } else {
              result[11] += 0.06961027;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.14973338;
            } else {
              result[11] += -0.0053712707;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20861)) {
              result[11] += 0.09335253;
            } else {
              result[11] += 0.00012517172;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)66609492)) {
              result[11] += -0.07016428;
            } else {
              result[11] += 0.0028251803;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)20105)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13475)) {
              result[11] += -0.0008315799;
            } else {
              result[11] += 0.012082152;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[11] += 0.046430953;
            } else {
              result[11] += 0.5987259;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)23372)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)782316608)) {
              result[11] += 0.020176746;
            } else {
              result[11] += -0.030088766;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
              result[11] += 0.00033743196;
            } else {
              result[11] += 0.01599368;
            }
          }
        }
      }
    } else {
      result[11] += -0.12388056;
    }
  } else {
    result[11] += -0.12370657;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)29570)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)27491)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[12] += 0.0012485012;
            } else {
              result[12] += -0.06921876;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26939)) {
              result[12] += 0.034800477;
            } else {
              result[12] += 0.50907665;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)23856)) {
              result[12] += -0.06621531;
            } else {
              result[12] += 0.054845687;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)201685632)) {
              result[12] += 0.30941087;
            } else {
              result[12] += -0.0051986203;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
              result[12] += -0.10816317;
            } else {
              result[12] += 0.06150678;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.1359933;
            } else {
              result[12] += -0.190212;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            result[12] += 0.08510129;
          } else {
            result[12] += -1.2117982;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)27752)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
              result[12] += 0.061043575;
            } else {
              result[12] += 0.328119;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
              result[12] += -0.09355566;
            } else {
              result[12] += 0.26372916;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[12] += 0.20226489;
            } else {
              result[12] += 0.4357145;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3512011520)) {
              result[12] += -0.120941505;
            } else {
              result[12] += 0.16909124;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1450752896)) {
              result[12] += 0.014072957;
            } else {
              result[12] += 0.16622086;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.0015864499;
            } else {
              result[12] += -0.11337445;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28765)) {
              result[12] += 0.0735144;
            } else {
              result[12] += 0.29031736;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48380)) {
              result[12] += 0.21222499;
            } else {
              result[12] += -0.15433156;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)32405)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1763358336)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
              result[12] += -0.01482815;
            } else {
              result[12] += -0.09523091;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[12] += 0.47531423;
            } else {
              result[12] += -0.104443625;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[12] += -0.29552254;
            } else {
              result[12] += 0.35490662;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
              result[12] += 0.019070834;
            } else {
              result[12] += -0.12620081;
            }
          }
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[12] += -0.058332663;
            } else {
              result[12] += -0.17760491;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[12] += 0.5089802;
            } else {
              result[12] += -0.057997186;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2039111168)) {
              result[12] += 0.1075053;
            } else {
              result[12] += -0.7566256;
            }
          } else {
            result[12] += 0.12407527;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)32902)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60694)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[12] += 0.02944066;
            } else {
              result[12] += 0.2595132;
            }
          } else {
            result[12] += -0.17371017;
          }
        } else {
          result[12] += 0.42254147;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)35152)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[12] += -0.005308664;
            } else {
              result[12] += -0.0998278;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1386276096)) {
              result[12] += 0.29952493;
            } else {
              result[12] += -0.0124914935;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)35706)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[12] += 0.0052210367;
            } else {
              result[12] += 0.10397089;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)35936)) {
              result[12] += -0.0741628;
            } else {
              result[12] += -1.1818972e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
              result[13] += -0.00018427573;
            } else {
              result[13] += 0.030995645;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
              result[13] += -0.09280257;
            } else {
              result[13] += -0.0010817678;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47199)) {
              result[13] += 0.07465396;
            } else {
              result[13] += -0.03368426;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += -0.008498701;
            } else {
              result[13] += 0.042827252;
            }
          }
        }
      } else {
        result[13] += -0.12266404;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
        result[13] += -0.0802244;
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
          result[13] += 0.29191902;
        } else {
          result[13] += -0.07153344;
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
      result[13] += -0.11922076;
    } else {
      result[13] += 0.0054612593;
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2845)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.0034450174;
            } else {
              result[14] += -0.14774702;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[14] += -0.024559429;
            } else {
              result[14] += -0.00033468448;
            }
          }
        } else {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            result[14] += -0.010918956;
          } else {
            result[14] += -0.009322364;
          }
        }
      } else {
        result[14] += -0.1267775;
      }
    } else {
      result[14] += 0.13316064;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            result[14] += 0.065680765;
          } else {
            result[14] += -0.12916756;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
            result[14] += -0.07607873;
          } else {
            result[14] += -0.40137187;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53520)) {
            result[14] += 0.031207224;
          } else {
            result[14] += 0.08901475;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[14] += -0.13596274;
            } else {
              result[14] += -0.036337372;
            }
          } else {
            result[14] += 0.053042818;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10315)) {
            result[14] += -0.085690536;
          } else {
            result[14] += -0.022154717;
          }
        } else {
          result[14] += 0.15001082;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[14] += 0.12806472;
            } else {
              result[14] += 0.039283797;
            }
          } else {
            result[14] += -0.03722662;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[14] += -0.13544108;
          } else {
            result[14] += 0.014777501;
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1145715328)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[0] += 0.00075168005;
            } else {
              result[0] += -0.104718395;
            }
          } else {
            result[0] += -0.13790578;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.017339177;
            } else {
              result[0] += 0.12569994;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1324402432)) {
              result[0] += 0.13540797;
            } else {
              result[0] += -0.10099568;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
              result[0] += 0.055571955;
            } else {
              result[0] += -0.034723874;
            }
          } else {
            result[0] += -0.1470693;
          }
        } else {
          result[0] += 0.09999915;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[0] += -0.09949162;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[0] += -0.08638953;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.18455958;
            } else {
              result[0] += 0.11023116;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[0] += -0.07583818;
            } else {
              result[0] += 0.10623308;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
        result[0] += -0.13783059;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)21099)) {
            result[0] += -0.088091604;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += 0.02200335;
            } else {
              result[0] += 0.1307123;
            }
          }
        } else {
          result[0] += -0.12200011;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
          result[0] += -0.11064885;
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            result[0] += -0.027062347;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[0] += 0.13044566;
            } else {
              result[0] += 0.039424308;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += -0.091135025;
            } else {
              result[0] += 0.09475327;
            }
          } else {
            result[0] += -0.12994677;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
            result[0] += 0.10905574;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
              result[0] += -0.041674197;
            } else {
              result[0] += 0.0451998;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += -0.017300783;
            } else {
              result[1] += -0.14463046;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += -0.14305149;
            } else {
              result[1] += 0.014760058;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1434199552)) {
            result[1] += 0.8392749;
          } else {
            result[1] += -0.05337778;
          }
        }
      } else {
        result[1] += -0.1693431;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3369854464)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
              result[1] += -0.03263118;
            } else {
              result[1] += 0.15166155;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
              result[1] += -0.15081027;
            } else {
              result[1] += 0.21425053;
            }
          }
        } else {
          result[1] += -0.22813103;
        }
      } else {
        result[1] += -0.15287799;
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)1307)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2299985664)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[1] += 0.013335336;
            } else {
              result[1] += 0.28129897;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
              result[1] += -0.07311156;
            } else {
              result[1] += 0.21097411;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[1] += 0.06419055;
            } else {
              result[1] += 0.2530068;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[1] += -0.031542882;
            } else {
              result[1] += 0.13708165;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1795638272)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1045826752)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
              result[1] += -0.15596491;
            } else {
              result[1] += 0.07694985;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
              result[1] += 0.2186519;
            } else {
              result[1] += -0.098599315;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59)) {
            result[1] += -0.16336945;
          } else {
            result[1] += -0.043437995;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
              result[1] += -0.02372536;
            } else {
              result[1] += -0.17259303;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2407267328)) {
              result[1] += -0.22792476;
            } else {
              result[1] += 0.106225565;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += 0.14220151;
            } else {
              result[1] += 0.35463747;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[1] += -0.14748351;
            } else {
              result[1] += 0.2204815;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)302)) {
              result[1] += 0.04917641;
            } else {
              result[1] += -0.18346693;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[1] += -0.31405395;
            } else {
              result[1] += -0.066055946;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)309)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += -0.00017896503;
            } else {
              result[1] += -0.025503816;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
              result[1] += 0.06521922;
            } else {
              result[1] += -0.0026828137;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)43546)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37177)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)34810)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)34258)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)33749)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += 0.0008773419;
            } else {
              result[2] += 0.021214673;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)33950)) {
              result[2] += -0.12411357;
            } else {
              result[2] += -0.032574955;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)34579)) {
            result[2] += 0.13949332;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.08225031;
            } else {
              result[2] += -0.05570184;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)35560)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)35431)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35051)) {
              result[2] += -0.12133173;
            } else {
              result[2] += 0.07220408;
            }
          } else {
            result[2] += -0.13992754;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)35866)) {
            result[2] += 0.17404003;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)35998)) {
              result[2] += -0.13784173;
            } else {
              result[2] += -0.0073757293;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        result[2] += 0.0022621336;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)38428)) {
          result[2] += 0.5994391;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
            result[2] += 0.06396492;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39320)) {
              result[2] += -0.1282466;
            } else {
              result[2] += 0.009698596;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)45044)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        result[2] += -0.08580053;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)43811)) {
          result[2] += -0.10396264;
        } else {
          result[2] += 0.24324879;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)45379)) {
        result[2] += 0.21520816;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            result[2] += 0.06650813;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)49575)) {
              result[2] += -0.05161417;
            } else {
              result[2] += 0.0057742344;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47487)) {
            result[2] += -0.046123408;
          } else {
            result[2] += -0.119257554;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.082693465;
    } else {
      result[3] += -0.0005223232;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
      result[3] += 0.06819987;
    } else {
      result[3] += -0.00054170506;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)16356)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)14390)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)8284)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)7636)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
              result[4] += -0.00032101216;
            } else {
              result[4] += -0.03784496;
            }
          } else {
            result[4] += 0.062777385;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)8891)) {
            result[4] += -0.09768561;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)9186)) {
              result[4] += 0.024904754;
            } else {
              result[4] += -0.0018337726;
            }
          }
        }
      } else {
        result[4] += 0.04847755;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)14959)) {
        result[4] += -0.13159186;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15231)) {
          result[4] += 0.048712462;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
            result[4] += -0.015095984;
          } else {
            result[4] += -0.0024337422;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)16637)) {
        result[4] += 0.02181071;
      } else {
        result[4] += 0.137516;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)18039)) {
          result[4] += -0.03213755;
        } else {
          result[4] += -0.115074776;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)18913)) {
          result[4] += 0.11295458;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)19183)) {
            result[4] += -0.10976673;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
              result[4] += 0.12545092;
            } else {
              result[4] += 0.0037110425;
            }
          }
        }
      }
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1352913536)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1309093120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[5] += -0.00032996282;
            } else {
              result[5] += 0.09353198;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)40361)) {
              result[5] += -0.12331761;
            } else {
              result[5] += -0.16577302;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += -0.1574775;
            } else {
              result[5] += 0.015213014;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[5] += 0.1319197;
            } else {
              result[5] += 0.016238173;
            }
          }
        }
      } else {
        result[5] += -0.15076452;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)8581)) {
          result[5] += -0.14042792;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)38506)) {
            result[5] += -0.11945305;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[5] += 0.1759926;
            } else {
              result[5] += 0.111634485;
            }
          }
        }
      } else {
        result[5] += -0.1621625;
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1418493568)) {
            result[5] += 0.0653396;
          } else {
            result[5] += -0.07968762;
          }
        } else {
          result[5] += -0.15568605;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
          result[5] += 0.085295804;
        } else {
          result[5] += -0.08553398;
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57256)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
              result[5] += -0.057871927;
            } else {
              result[5] += -0.14711097;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1992729472)) {
              result[5] += -0.08261794;
            } else {
              result[5] += 0.12792836;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)52390)) {
              result[5] += 0.1255465;
            } else {
              result[5] += -0.1556868;
            }
          } else {
            result[5] += -0.14495327;
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)21836)) {
          result[5] += -0.16119967;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)53033)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
              result[5] += -0.014526521;
            } else {
              result[5] += 0.15732871;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
              result[5] += -0.15002602;
            } else {
              result[5] += 0.013262577;
            }
          }
        }
      }
    }
  }
  result[6] += 0.00018848354;
  if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)4294947072)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60425)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58145)) {
              result[7] += 8.1545084e-05;
            } else {
              result[7] += 0.024750086;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
              result[7] += -0.042293224;
            } else {
              result[7] += 0.0039109485;
            }
          }
        } else {
          result[7] += -0.10210096;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)8771)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            result[7] += 0.027718376;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[7] += -0.16921803;
            } else {
              result[7] += -0.031465556;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49952)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[7] += 0.07084837;
            } else {
              result[7] += -0.11130086;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55600)) {
              result[7] += 0.13206042;
            } else {
              result[7] += -0.01734328;
            }
          }
        }
      }
    } else {
      result[7] += -0.14038023;
    }
  } else {
    result[7] += 0.111897685;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)45935)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1910466432)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)28526)) {
              result[8] += -0.0015775613;
            } else {
              result[8] += 0.005501321;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45411)) {
              result[8] += 0.006907832;
            } else {
              result[8] += 0.14649412;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6929)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[8] += -0.071861655;
            } else {
              result[8] += 0.5489471;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
              result[8] += -0.08760144;
            } else {
              result[8] += -0.15043226;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
              result[8] += -0.0041662473;
            } else {
              result[8] += -0.018601123;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15721)) {
              result[8] += -0.049172264;
            } else {
              result[8] += 0.1480714;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3172840704)) {
            result[8] += -0.25765485;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.14691888;
            } else {
              result[8] += 0.0014266833;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1747430528)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1062497984)) {
              result[8] += 0.041882478;
            } else {
              result[8] += 0.29361504;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2326164224)) {
              result[8] += -0.10777968;
            } else {
              result[8] += 0.05097956;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3224507648)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)39062)) {
              result[8] += 0.4216685;
            } else {
              result[8] += 0.13644667;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[8] += -0.14433248;
            } else {
              result[8] += 0.132017;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
          result[8] += 0.2916905;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
            result[8] += -0.22698174;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
              result[8] += -0.09113169;
            } else {
              result[8] += 0.21253173;
            }
          }
        }
      }
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2580181248)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47693)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
              result[8] += -0.02496986;
            } else {
              result[8] += 0.38678715;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
              result[8] += 0.011316476;
            } else {
              result[8] += -0.007217318;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)48458)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)46699)) {
              result[8] += 0.10549072;
            } else {
              result[8] += 0.3441152;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)50198)) {
              result[8] += -0.17914173;
            } else {
              result[8] += 0.084106185;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)50461)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59378)) {
              result[8] += -0.052902948;
            } else {
              result[8] += 0.19707945;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.14304183;
            } else {
              result[8] += -0.52983445;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60024)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[8] += 0.04635846;
            } else {
              result[8] += -0.018814884;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[8] += 0.3979074;
            } else {
              result[8] += -0.03744935;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2772094208)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2718478592)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60440)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
              result[8] += 0.06291075;
            } else {
              result[8] += -0.010505581;
            }
          } else {
            result[8] += 0.3491788;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48458)) {
              result[8] += -0.1408678;
            } else {
              result[8] += 0.21947843;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
              result[8] += -0.025197148;
            } else {
              result[8] += 0.25309187;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60564)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += -0.03899283;
            } else {
              result[8] += -0.13380659;
            }
          } else {
            result[8] += 0.2786117;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[8] += 0.08727263;
            } else {
              result[8] += -0.16011348;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2928404992)) {
              result[8] += -0.13537094;
            } else {
              result[8] += 0.0077143735;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += 0.00016061863;
            } else {
              result[9] += -0.12432333;
            }
          } else {
            result[9] += -0.12642573;
          }
        } else {
          result[9] += 0.12384387;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)260945)) {
            result[9] += -0.14752257;
          } else {
            result[9] += 0.08457116;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)215557952)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[9] += 0.1480961;
            } else {
              result[9] += -0.08264501;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
              result[9] += 0.14336784;
            } else {
              result[9] += -0.01716651;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)2904)) {
        result[9] += 0.14247578;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
          result[9] += 0.14002535;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)544740288)) {
              result[9] += 0.12246426;
            } else {
              result[9] += -0.121802814;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.08620241;
            } else {
              result[9] += 0.002173025;
            }
          }
        }
      }
    }
  } else {
    result[9] += -0.12637351;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)4051475456)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
              result[10] += 0.0001529775;
            } else {
              result[10] += 0.034680832;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[10] += 0.09127289;
            } else {
              result[10] += -0.038487785;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
              result[10] += -0.2064314;
            } else {
              result[10] += 0.018156203;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)15206)) {
              result[10] += 0.15297772;
            } else {
              result[10] += 0.034754355;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)25409)) {
            result[10] += -0.22812067;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
              result[10] += 0.15305935;
            } else {
              result[10] += -0.08648658;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
            result[10] += 0.12420776;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
              result[10] += -0.22472389;
            } else {
              result[10] += 0.030064406;
            }
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)3198206208)) {
        result[10] += -0.11228074;
      } else {
        result[10] += -0.025424218;
      }
    }
  } else {
    result[10] += -0.112358704;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)60933)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)58400)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)57897)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56642)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52273)) {
              result[11] += -0.00028052006;
            } else {
              result[11] += 0.009300554;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[11] += -0.014132338;
            } else {
              result[11] += -0.18281296;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3454892544)) {
              result[11] += 0.013960867;
            } else {
              result[11] += 0.13419881;
            }
          } else {
            result[11] += -0.2041341;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)314)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
              result[11] += -0.006619216;
            } else {
              result[11] += 0.22637078;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[11] += -0.04085394;
            } else {
              result[11] += 0.008499113;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[11] += 0.14203736;
            } else {
              result[11] += -0.1959936;
            }
          } else {
            result[11] += 0.16046113;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)232647088)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[11] += -0.017086832;
            } else {
              result[11] += -0.11092438;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1795638272)) {
              result[11] += 0.14941575;
            } else {
              result[11] += 0.038876552;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)317)) {
              result[11] += -0.038135126;
            } else {
              result[11] += -0.31800395;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[11] += -0.0004450105;
            } else {
              result[11] += 0.023082051;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)44448)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
            result[11] += -0.12563309;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.07779661;
            } else {
              result[11] += 0.19145854;
            }
          }
        } else {
          result[11] += -0.15204954;
        }
      }
    }
  } else {
    result[11] += -0.1225802;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63732)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[12] += 5.532442e-05;
            } else {
              result[12] += -0.01604243;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[12] += 0.030493801;
            } else {
              result[12] += 0.15611295;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60824)) {
              result[12] += -0.011934166;
            } else {
              result[12] += -0.1705089;
            }
          } else {
            result[12] += 0.13711035;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          result[12] += -0.13661557;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            result[12] += 0.0918758;
          } else {
            result[12] += -0.051870964;
          }
        }
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
        result[12] += -0.032455467;
      } else {
        result[12] += -0.041908573;
      }
    }
  } else {
    result[12] += -0.1266833;
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)9027)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)7446)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49722)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2905214976)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)560492160)) {
              result[13] += -0.006639331;
            } else {
              result[13] += 0.029358702;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3541748992)) {
              result[13] += -0.10213644;
            } else {
              result[13] += 0.013482046;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
              result[13] += -0.14593858;
            } else {
              result[13] += -0.0423489;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
              result[13] += -0.13730222;
            } else {
              result[13] += 0.10693189;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2829588992)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.17363355;
            } else {
              result[13] += -0.06807048;
            }
          } else {
            result[13] += 0.03516539;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.14293101;
            } else {
              result[13] += -0.07012622;
            }
          } else {
            result[13] += -0.13327721;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)7708)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
            result[13] += -0.16752921;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[13] += 0.052832957;
            } else {
              result[13] += -0.14270966;
            }
          }
        } else {
          result[13] += -0.02296309;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3626729728)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1777797376)) {
              result[13] += -0.014781953;
            } else {
              result[13] += -0.08819157;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3714831616)) {
              result[13] += 0.31205758;
            } else {
              result[13] += -0.03511265;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)883932608)) {
            result[13] += 0.17261435;
          } else {
            result[13] += 0.047766265;
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)9301)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50828)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)262)) {
              result[13] += -0.16004744;
            } else {
              result[13] += -0.004933985;
            }
          } else {
            result[13] += 0.1743109;
          }
        } else {
          result[13] += 0.089399844;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)49348)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)47076)) {
              result[13] += 0.18423113;
            } else {
              result[13] += 0.3604058;
            }
          } else {
            result[13] += -0.06893697;
          }
        } else {
          result[13] += -0.12993884;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)368)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[13] += 0.0010032123;
            } else {
              result[13] += 0.023259195;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.122237824;
            } else {
              result[13] += 0.05373774;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)799135808)) {
            result[13] += 0.19831814;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
              result[13] += 0.118430376;
            } else {
              result[13] += -0.016303245;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
              result[13] += -0.026637804;
            } else {
              result[13] += -0.12981622;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[13] += 0.14303309;
            } else {
              result[13] += -0.10956747;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)14490)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[13] += 0.13592866;
            } else {
              result[13] += -0.021173175;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45676)) {
              result[13] += -0.019916333;
            } else {
              result[13] += 0.035165947;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)528995584)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)348961088)) {
              result[14] += -4.9382128e-05;
            } else {
              result[14] += -0.041967977;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)592172608)) {
              result[14] += 0.04914649;
            } else {
              result[14] += 0.0004889832;
            }
          }
        } else {
          result[14] += 0.13083598;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)440)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)24600)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
              result[14] += -0.087229565;
            } else {
              result[14] += -0.2954329;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[14] += 0.06986146;
            } else {
              result[14] += -0.10497239;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[14] += 0.091649495;
            } else {
              result[14] += -0.03740994;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
              result[14] += 0.07759058;
            } else {
              result[14] += -0.109354086;
            }
          }
        }
      }
    } else {
      result[14] += -0.124964416;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += -0.14044091;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[14] += 0.014331862;
            } else {
              result[14] += 0.119964875;
            }
          } else {
            result[14] += -0.078460716;
          }
        } else {
          result[14] += -0.115025625;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[14] += 0.133898;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)378)) {
          result[14] += -0.107731335;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
            result[14] += 0.08699784;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[14] += -0.090489864;
            } else {
              result[14] += 0.033816453;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)16803)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)16270)) {
              result[0] += -0.00029605423;
            } else {
              result[0] += 0.09010206;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[0] += -0.14963007;
            } else {
              result[0] += 0.07702747;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)17809)) {
            result[0] += 0.35441744;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
              result[0] += -0.1422753;
            } else {
              result[0] += 0.0031565554;
            }
          }
        }
      } else {
        result[0] += -0.11823867;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)183891488)) {
        result[0] += 0.032238275;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)42674)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
            result[0] += -0.030485848;
          } else {
            result[0] += -0.12746936;
          }
        } else {
          result[0] += -0.0130006205;
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)65274)) {
      result[0] += 0.056650262;
    } else {
      result[0] += 0.031090213;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)3314336000)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2984166400)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2592396800)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)33879)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30862)) {
              result[1] += -0.0013687613;
            } else {
              result[1] += -0.014335849;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)37473)) {
              result[1] += 0.017894983;
            } else {
              result[1] += -7.127867e-05;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)39508)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[1] += 0.0072389343;
            } else {
              result[1] += 0.062223125;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10568)) {
              result[1] += 0.058990773;
            } else {
              result[1] += -0.019196905;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)29825)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)328)) {
              result[1] += -0.00781411;
            } else {
              result[1] += 0.32234722;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3144361216)) {
              result[1] += -0.015550028;
            } else {
              result[1] += 0.12164267;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3008718848)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)321)) {
              result[1] += -0.12958403;
            } else {
              result[1] += 0.23089363;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
              result[1] += -0.03922327;
            } else {
              result[1] += 0.013972301;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)37360)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += 0.0029628342;
            } else {
              result[1] += -0.11564122;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += 0.037344392;
            } else {
              result[1] += 0.2410397;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3481869312)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
              result[1] += 0.2966973;
            } else {
              result[1] += 0.11101094;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
              result[1] += 0.10357563;
            } else {
              result[1] += -0.021315431;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54812)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24872)) {
              result[1] += -0.054801255;
            } else {
              result[1] += -0.16271588;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[1] += 0.12495002;
            } else {
              result[1] += -0.08401154;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4111)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[1] += 0.23625265;
            } else {
              result[1] += 0.029284844;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5661)) {
              result[1] += -0.18632188;
            } else {
              result[1] += 0.0069999667;
            }
          }
        }
      }
    }
  } else {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
      result[1] += -0.15080649;
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1557)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
              result[1] += 0.41204664;
            } else {
              result[1] += -0.08370456;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[1] += -0.0576119;
            } else {
              result[1] += 0.17935167;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[1] += -0.09924865;
            } else {
              result[1] += 0.29066187;
            }
          } else {
            result[1] += -0.12090141;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)41748)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3999892736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26416)) {
              result[1] += -0.00080309645;
            } else {
              result[1] += -0.06088401;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
              result[1] += -0.011922038;
            } else {
              result[1] += 0.04972172;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)8527)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[1] += -0.17307377;
            } else {
              result[1] += -0.009062771;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)42196)) {
              result[1] += 0.12582093;
            } else {
              result[1] += 0.0088332705;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)27655)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)23202)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)22590)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.0010905366;
            } else {
              result[2] += -0.034850586;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
              result[2] += 0.029290609;
            } else {
              result[2] += 0.006140685;
            }
          }
        } else {
          result[2] += -0.0767488;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)22869)) {
          result[2] += -0.08406545;
        } else {
          result[2] += -0.04571279;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)23587)) {
        result[2] += 0.24280377;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)24390)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)24155)) {
              result[2] += -0.03489287;
            } else {
              result[2] += -0.123801716;
            }
          } else {
            result[2] += 0.0071697873;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)24390)) {
            result[2] += 0.6025589;
          } else {
            result[2] += -0.0039345254;
          }
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)28383)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
        result[2] += -0.11111391;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)28195)) {
          result[2] += -0.007076175;
        } else {
          result[2] += -0.103059165;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)30467)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)28857)) {
              result[2] += 0.27334583;
            } else {
              result[2] += -0.09214252;
            }
          } else {
            result[2] += 0.22832452;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)29481)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)28606)) {
              result[2] += -0.05988029;
            } else {
              result[2] += 0.005093902;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)29934)) {
              result[2] += -0.12492149;
            } else {
              result[2] += 0.004406907;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
          result[2] += -0.13763486;
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)32611)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)31144)) {
              result[2] += 0.087395415;
            } else {
              result[2] += 0.032752723;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)32733)) {
              result[2] += -0.12604323;
            } else {
              result[2] += -0.0021920702;
            }
          }
        }
      }
    }
  }
}

