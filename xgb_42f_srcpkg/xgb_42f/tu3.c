
#include "header.h"

void predict_unit3(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.03372067;
            } else {
              result[6] += -0.14642704;
            }
          } else {
            result[6] += -0.1518424;
          }
        } else {
          result[6] += -0.15050745;
        }
      } else {
        result[6] += -0.15064715;
      }
    } else {
      result[6] += 0.16220644;
    }
  } else {
    result[6] += -0.15173063;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[7] += -0.109958306;
            } else {
              result[7] += -0.15055747;
            }
          } else {
            result[7] += -0.15061747;
          }
        } else {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            result[7] += -0.14950055;
          } else {
            result[7] += 0.15570123;
          }
        }
      } else {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          result[7] += -0.060456328;
        } else {
          result[7] += -0.13038112;
        }
      }
    } else {
      result[7] += 0.17407638;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
          result[7] += 0.17121911;
        } else {
          result[7] += 0.16340223;
        }
      } else {
        result[7] += -0.13771413;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)28873)) {
            result[7] += -0.15191741;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[7] += -0.14975718;
            } else {
              result[7] += 0.09090313;
            }
          }
        } else {
          result[7] += 0.16192295;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += 0.16829464;
            } else {
              result[7] += -0.006170826;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += -0.21906029;
            } else {
              result[7] += -0.15839031;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.17907156;
            } else {
              result[7] += -0.16010869;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15352121;
            } else {
              result[7] += 0.1620878;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[8] += -0.13562258;
        } else {
          result[8] += -0.15020522;
        }
      } else {
        result[8] += -0.15051018;
      }
    } else {
      result[8] += -0.15065007;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[8] += 0.028515005;
            } else {
              result[8] += 0.13885003;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[8] += -0.15349212;
            } else {
              result[8] += -0.014480558;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.1753605;
            } else {
              result[8] += -0.1393303;
            }
          } else {
            result[8] += -0.16035947;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.23611036;
            } else {
              result[8] += -0.1519026;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.047007732;
            } else {
              result[8] += -0.152971;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15333088;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.11337983;
            } else {
              result[8] += -0.15113592;
            }
          }
        }
      }
    } else {
      result[8] += -0.15202412;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += 0.024522508;
            } else {
              result[9] += -0.15064715;
            }
          } else {
            result[9] += -0.15204026;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[9] += 0.19640775;
            } else {
              result[9] += -0.031043772;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[9] += 0.025795555;
            } else {
              result[9] += 0.118702315;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.14692064;
        } else {
          result[9] += 0.16053987;
        }
      }
    } else {
      result[9] += -0.15120092;
    }
  } else {
    result[9] += -0.15192468;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.03341413;
            } else {
              result[10] += -0.15027878;
            }
          } else {
            result[10] += -0.15056431;
          }
        } else {
          result[10] += -0.15064715;
        }
      } else {
        result[10] += -0.15167934;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[10] += -0.0041408725;
            } else {
              result[10] += 0.10160109;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[10] += 0.16152509;
            } else {
              result[10] += -0.1326244;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.15171933;
            } else {
              result[10] += -0.084000774;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.3512591;
            } else {
              result[10] += -0.15538211;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265957824)) {
              result[10] += 0.16696489;
            } else {
              result[10] += 0.30381638;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
              result[10] += 0.18515588;
            } else {
              result[10] += 0.16020063;
            }
          }
        } else {
          result[10] += -0.15085572;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15199143;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.17703526;
        } else {
          result[10] += -0.1106919;
        }
      } else {
        result[10] += -0.1507114;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          result[11] += -0.1385703;
        } else {
          result[11] += -0.15020867;
        }
      } else {
        result[11] += -0.15050991;
      }
    } else {
      result[11] += -0.15064982;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.050493196;
            } else {
              result[11] += -0.027886853;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.1501191;
            } else {
              result[11] += 0.018067745;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[11] += 0.013542006;
            } else {
              result[11] += 0.18315014;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[11] += 0.16225561;
            } else {
              result[11] += 0.06764493;
            }
          }
        }
      } else {
        result[11] += -0.15111957;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
              result[11] += -0.06170002;
            } else {
              result[11] += -0.22932337;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[11] += 0.16203384;
            } else {
              result[11] += 0.23371619;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
              result[11] += -0.43494958;
            } else {
              result[11] += -0.18027836;
            }
          } else {
            result[11] += -0.14309584;
          }
        }
      } else {
        result[11] += -0.15190116;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.13305835;
          } else {
            result[12] += -0.14113848;
          }
        } else {
          result[12] += -0.1502025;
        }
      } else {
        result[12] += -0.1505081;
      }
    } else {
      result[12] += -0.15064786;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
              result[12] += -0.012904498;
            } else {
              result[12] += -0.15593001;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.20001915;
            } else {
              result[12] += 0.038520686;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.15483622;
            } else {
              result[12] += 0.2665167;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[12] += -0.16428271;
            } else {
              result[12] += -0.14964348;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.19081499;
            } else {
              result[12] += 0.13268924;
            }
          } else {
            result[12] += -0.15352693;
          }
        } else {
          result[12] += -0.15237138;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[12] += -0.15149866;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += 0.07549535;
            } else {
              result[12] += -0.15094063;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[12] += 0.11082752;
            } else {
              result[12] += -0.1505295;
            }
          } else {
            result[12] += -0.15058225;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[12] += 0.16784965;
        } else {
          result[12] += -0.15040447;
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.1385004;
            } else {
              result[13] += -0.15021083;
            }
          } else {
            result[13] += -0.1505144;
          }
        } else {
          result[13] += -0.1506498;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.06383865;
            } else {
              result[13] += -0.14979483;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.025382161;
            } else {
              result[13] += 0.1535328;
            }
          }
        } else {
          result[13] += -0.15159252;
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
          result[13] += 0.17551482;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[13] += -0.15077032;
            } else {
              result[13] += 0.03466739;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
              result[13] += 0.18811427;
            } else {
              result[13] += 0.1516223;
            }
          }
        }
      } else {
        result[13] += -0.1498727;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)1034)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[13] += 0.11111358;
            } else {
              result[13] += -0.11959043;
            }
          } else {
            result[13] += -0.15234356;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[13] += -0.16107473;
            } else {
              result[13] += 0.09601569;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += 0.17043671;
            } else {
              result[13] += -0.098023936;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[13] += 0.11105639;
            } else {
              result[13] += -0.15007427;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.221412;
            } else {
              result[13] += -0.09085925;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            result[13] += -0.15138939;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
              result[13] += -0.020656712;
            } else {
              result[13] += -0.15086661;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)68027)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[13] += 0.12759961;
            } else {
              result[13] += 0.15876152;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.16721593;
            } else {
              result[13] += -0.14937402;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[13] += 0.16359507;
            } else {
              result[13] += -0.11920741;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += 0.57147944;
            } else {
              result[13] += 0.17245063;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
            result[13] += -0.16069002;
          } else {
            result[13] += 0.23694691;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
            result[13] += -0.16391897;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[13] += 0.18134734;
            } else {
              result[13] += -0.15038493;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[14] += 0.016663557;
            } else {
              result[14] += -0.15725398;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.220893;
            } else {
              result[14] += 0.02628008;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
              result[14] += -0.15103728;
            } else {
              result[14] += -0.02692995;
            }
          } else {
            result[14] += -0.15267067;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[14] += -0.17591293;
            } else {
              result[14] += -0.21769217;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.15399441;
            } else {
              result[14] += -0.17867073;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
              result[14] += -0.16277151;
            } else {
              result[14] += 0.3873349;
            }
          } else {
            result[14] += -0.15216279;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.19993496;
            } else {
              result[14] += 0.16436896;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
              result[14] += -0.15049222;
            } else {
              result[14] += 0.17086512;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[14] += 0.2220317;
            } else {
              result[14] += 0.16242482;
            }
          } else {
            result[14] += -0.11248801;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)441)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[14] += -0.0022615937;
            } else {
              result[14] += -0.13576362;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += -0.16165698;
            } else {
              result[14] += 0.13725354;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.19628407;
            } else {
              result[14] += 0.1668877;
            }
          } else {
            result[14] += -0.15103483;
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)507)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.15407905;
            } else {
              result[14] += -0.049333762;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.2689304;
            } else {
              result[14] += -0.1490554;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
              result[14] += -0.024195543;
            } else {
              result[14] += -0.15046991;
            }
          } else {
            result[14] += -0.15244223;
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          result[14] += -0.09692942;
        } else {
          result[14] += 0.2543438;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)496355648)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
            result[14] += -0.15335806;
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 1.2558852;
            } else {
              result[14] += 0.29267386;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3035573248)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[14] += -0.15705636;
            } else {
              result[14] += 0.38496336;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3063292416)) {
              result[14] += 0.9123136;
            } else {
              result[14] += -0.08778198;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)26159)) {
              result[14] += 0.25286236;
            } else {
              result[14] += 0.53783226;
            }
          } else {
            result[14] += -0.15469843;
          }
        } else {
          result[14] += -0.15083963;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.013513685;
            } else {
              result[0] += 0.0074275467;
            }
          } else {
            result[0] += -0.14989613;
          }
        } else {
          result[0] += -0.15029785;
        }
      } else {
        result[0] += -0.15044555;
      }
    } else {
      result[0] += -0.15144217;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)62186)) {
              result[0] += 0.072999954;
            } else {
              result[0] += -0.051877916;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64250)) {
              result[0] += 0.23091018;
            } else {
              result[0] += 0.16266397;
            }
          }
        } else {
          result[0] += -0.15200622;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[0] += 0.06130632;
            } else {
              result[0] += 0.19529974;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[0] += 0.16500759;
            } else {
              result[0] += 0.17803612;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.154463;
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.16039224;
            } else {
              result[0] += -0.081753455;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
              result[0] += -0.15200137;
            } else {
              result[0] += -0.12594767;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
              result[0] += 0.061640345;
            } else {
              result[0] += -0.15309857;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.0210283;
            } else {
              result[0] += -0.15658864;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
              result[0] += -0.15145609;
            } else {
              result[0] += 0.11691762;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
          result[0] += -0.15018779;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[0] += 0.15746832;
          } else {
            result[0] += -0.0912088;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.14963663;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[1] += 0.0154920295;
            } else {
              result[1] += 0.16671267;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[1] += -0.16075769;
            } else {
              result[1] += 0.21346386;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[1] += 0.2049502;
            } else {
              result[1] += -0.12230182;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.06312124;
            } else {
              result[1] += -0.15160757;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)280)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[1] += -0.15993297;
            } else {
              result[1] += -0.1264293;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[1] += 0.41268918;
            } else {
              result[1] += -0.13340324;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[1] += 0.2035224;
            } else {
              result[1] += -0.012294396;
            }
          } else {
            result[1] += -0.15704125;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
            result[1] += -0.10469677;
          } else {
            result[1] += 0.30131072;
          }
        } else {
          result[1] += -0.14649904;
        }
      } else {
        result[1] += -0.15018748;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1469)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15133244;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[2] += -0.003773291;
            } else {
              result[2] += -0.09207553;
            }
          } else {
            result[2] += -0.093821466;
          }
        } else {
          result[2] += -0.1285155;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)21308)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)20857)) {
              result[2] += 0.021122726;
            } else {
              result[2] += -0.13478425;
            }
          } else {
            result[2] += -0.14820501;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.01444575;
            } else {
              result[2] += 0.0981441;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.04531189;
            } else {
              result[2] += -0.14462194;
            }
          }
        }
      } else {
        result[2] += -0.14862958;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)52507)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)51884)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)50483)) {
              result[2] += 0.06781104;
            } else {
              result[2] += 0.023431998;
            }
          } else {
            result[2] += 0.15390924;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)52818)) {
            result[2] += -0.21901737;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)53109)) {
              result[2] += 0.17017412;
            } else {
              result[2] += 0.05724564;
            }
          }
        }
      } else {
        result[2] += -0.14840679;
      }
    } else {
      result[2] += 0.15762992;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15151456;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.1507819;
            } else {
              result[3] += 0.15993258;
            }
          } else {
            result[3] += 0.15771638;
          }
        } else {
          result[3] += -0.14988907;
        }
      } else {
        result[3] += -0.1508604;
      }
    } else {
      result[3] += -0.150979;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.14286393;
          } else {
            result[4] += -0.15037015;
          }
        } else {
          result[4] += -0.15155517;
        }
      } else {
        result[4] += -0.15151374;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)41059)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)40780)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
              result[4] += 0.07515889;
            } else {
              result[4] += 0.05547708;
            }
          } else {
            result[4] += -0.109597445;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)43981)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42189)) {
              result[4] += 0.08827429;
            } else {
              result[4] += 0.15750524;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)44550)) {
              result[4] += -0.11159968;
            } else {
              result[4] += 0.07378471;
            }
          }
        }
      } else {
        result[4] += -0.1502961;
      }
    }
  } else {
    result[4] += 0.15859935;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[5] += 0.046285983;
            } else {
              result[5] += -0.15636884;
            }
          } else {
            result[5] += -0.15385997;
          }
        } else {
          result[5] += -0.15267211;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)63923)) {
              result[5] += 0.24428801;
            } else {
              result[5] += 0.17273095;
            }
          } else {
            result[5] += -0.15221034;
          }
        } else {
          result[5] += -0.14930256;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.15165955;
      } else {
        result[5] += -0.15747137;
      }
    }
  } else {
    result[5] += -0.1510891;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.024969626;
            } else {
              result[6] += -0.14488374;
            }
          } else {
            result[6] += -0.1515092;
          }
        } else {
          result[6] += -0.150289;
        }
      } else {
        result[6] += -0.15043697;
      }
    } else {
      result[6] += 0.15899971;
    }
  } else {
    result[6] += -0.15151253;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += -0.09302774;
            } else {
              result[7] += -0.15006179;
            }
          } else {
            result[7] += -0.15033126;
          }
        } else {
          result[7] += -0.1503969;
        }
      } else {
        result[7] += 0.16936845;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          result[7] += -0.15010776;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[7] += 3.6651716;
            } else {
              result[7] += -0.1337112;
            }
          } else {
            result[7] += -0.15091482;
          }
        }
      } else {
        result[7] += 0.14779305;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          result[7] += 0.16700111;
        } else {
          result[7] += 0.16037479;
        }
      } else {
        result[7] += -0.13443574;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            result[7] += -0.15152079;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[7] += -0.15008625;
            } else {
              result[7] += 0.053874824;
            }
          }
        } else {
          result[7] += 0.15868287;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.056034286;
            } else {
              result[7] += -0.15299228;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += -0.20276591;
            } else {
              result[7] += -0.15747738;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.1730249;
            } else {
              result[7] += -0.15584081;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15312496;
            } else {
              result[7] += 0.1579109;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.13411956;
          } else {
            result[8] += -0.12828012;
          }
        } else {
          result[8] += -0.14988571;
        }
      } else {
        result[8] += -0.15029132;
      }
    } else {
      result[8] += -0.15043932;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[8] += 0.046861812;
            } else {
              result[8] += -0.11271374;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += 0.10721461;
            } else {
              result[8] += -0.1755284;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[8] += -0.088009216;
            } else {
              result[8] += 0.17352766;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.4565409;
            } else {
              result[8] += 0.16097088;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.21416883;
            } else {
              result[8] += -0.15131456;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.04163045;
            } else {
              result[8] += -0.15223669;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15302718;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.09550232;
            } else {
              result[8] += -0.15069354;
            }
          }
        }
      }
    } else {
      result[8] += -0.15197858;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[9] += 0.0238706;
            } else {
              result[9] += -0.1508269;
            }
          } else {
            result[9] += -0.15174074;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)36442)) {
              result[9] += -0.06632066;
            } else {
              result[9] += 0.10765573;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
              result[9] += 0.13809419;
            } else {
              result[9] += 0.08444449;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.14551027;
        } else {
          result[9] += 0.15778318;
        }
      }
    } else {
      result[9] += -0.15098527;
    }
  } else {
    result[9] += -0.15170725;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.028830923;
            } else {
              result[10] += -0.14995734;
            }
          } else {
            result[10] += -0.15033701;
          }
        } else {
          result[10] += -0.15043697;
        }
      } else {
        result[10] += -0.15144213;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[10] += -0.0035601521;
            } else {
              result[10] += 0.0907216;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[10] += 0.15735844;
            } else {
              result[10] += -0.12382782;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.15094854;
            } else {
              result[10] += -0.07470349;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[10] += 0.26469007;
            } else {
              result[10] += -0.15257293;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)265957824)) {
              result[10] += 0.16117595;
            } else {
              result[10] += 0.24992342;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
              result[10] += 0.17590547;
            } else {
              result[10] += 0.15747865;
            }
          }
        } else {
          result[10] += -0.15042244;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15177105;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.1684349;
        } else {
          result[10] += -0.10271692;
        }
      } else {
        result[10] += -0.15037823;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[11] += -0.13617425;
          } else {
            result[11] += -0.14988908;
          }
        } else {
          result[11] += -0.15029112;
        }
      } else {
        result[11] += -0.1504391;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += 0.017834807;
            } else {
              result[11] += 0.14689393;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[11] += -0.15304726;
            } else {
              result[11] += -0.16130021;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)288)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[11] += 0.32486796;
            } else {
              result[11] += 1.960627;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[11] += 0.15364833;
            } else {
              result[11] += -0.18086106;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          result[11] += -0.17017667;
        } else {
          result[11] += -0.15127733;
        }
      }
    }
  } else {
    result[11] += -0.15169236;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.1298578;
          } else {
            result[12] += -0.13915332;
          }
        } else {
          result[12] += -0.14988305;
        }
      } else {
        result[12] += -0.15028957;
      }
    } else {
      result[12] += -0.15043755;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[12] += 0.023622094;
            } else {
              result[12] += -0.14091186;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[12] += -0.024914451;
            } else {
              result[12] += 0.17423451;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
              result[12] += -0.15469968;
            } else {
              result[12] += 0.23075163;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[12] += -0.162625;
            } else {
              result[12] += -0.14820045;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
              result[12] += 0.16631013;
            } else {
              result[12] += 0.099524826;
            }
          } else {
            result[12] += -0.15309012;
          }
        } else {
          result[12] += -0.1516975;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[12] += -0.15126522;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += 0.067462444;
            } else {
              result[12] += -0.1505025;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)107601)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
              result[12] += 0.10039045;
            } else {
              result[12] += -0.15028593;
            }
          } else {
            result[12] += -0.15038577;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[12] += 0.16347837;
        } else {
          result[12] += -0.15002817;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.13609602;
            } else {
              result[13] += -0.14989121;
            }
          } else {
            result[13] += -0.15029493;
          }
        } else {
          result[13] += -0.15043911;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += -0.05950088;
            } else {
              result[13] += -0.14895973;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[13] += 0.06985328;
            } else {
              result[13] += -0.15369947;
            }
          }
        } else {
          result[13] += -0.15122576;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.037940964;
            } else {
              result[13] += -0.15197754;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.15925731;
            } else {
              result[13] += 0.088850535;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.15089935;
            } else {
              result[13] += -0.043770254;
            }
          } else {
            result[13] += 0.16735879;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[13] += 0.16322464;
            } else {
              result[13] += 0.053668126;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[13] += -0.08027123;
            } else {
              result[13] += 0.16821414;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[13] += -0.1593449;
            } else {
              result[13] += 0.2091814;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
              result[13] += -0.16228151;
            } else {
              result[13] += -0.13653262;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.18839723;
            } else {
              result[13] += -0.13987744;
            }
          } else {
            result[13] += 0.1742784;
          }
        } else {
          result[13] += -0.14968827;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)261)) {
            result[13] += 0.15627918;
          } else {
            result[13] += 0.20525904;
          }
        } else {
          result[13] += 0.15760595;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[13] += -0.15129249;
        } else {
          result[13] += 0.13852902;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[13] += 0.13774972;
            } else {
              result[13] += -0.16051185;
            }
          } else {
            result[13] += 0.17340435;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
            result[13] += 0.17985308;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[13] += -0.056725968;
            } else {
              result[13] += 0.16202113;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[14] += 0.01140608;
            } else {
              result[14] += 0.11086901;
            }
          } else {
            result[14] += -0.15076263;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1822)) {
              result[14] += -0.150737;
            } else {
              result[14] += -0.020005535;
            }
          } else {
            result[14] += -0.15239538;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[14] += -0.17306924;
            } else {
              result[14] += -0.20712744;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[14] += -0.15353876;
            } else {
              result[14] += -0.17637803;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
              result[14] += -0.15867399;
            } else {
              result[14] += 0.30463216;
            }
          } else {
            result[14] += -0.15177064;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)472)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[14] += 0.1781612;
            } else {
              result[14] += 0.16119325;
            }
          } else {
            result[14] += -0.11165998;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            result[14] += -0.15858045;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
              result[14] += 0.14478242;
            } else {
              result[14] += 0.048927028;
            }
          }
        }
      } else {
        result[14] += -0.1518326;
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)507)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)51042)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
              result[14] += -0.15285604;
            } else {
              result[14] += -0.068132296;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.24559811;
            } else {
              result[14] += -0.14902438;
            }
          }
        } else {
          result[14] += -0.15218171;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3118221568)) {
          result[14] += -0.096600994;
        } else {
          result[14] += 0.20962551;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)544)) {
            result[14] += -0.15350385;
          } else {
            result[14] += 0.2366812;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
              result[14] += 0.17920035;
            } else {
              result[14] += -0.1470875;
            }
          } else {
            result[14] += -0.1477219;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)9555)) {
              result[14] += 0.14328116;
            } else {
              result[14] += 0.32788694;
            }
          } else {
            result[14] += -0.15410013;
          }
        } else {
          result[14] += -0.15058634;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[0] += -0.003079656;
            } else {
              result[0] += -0.1478292;
            }
          } else {
            result[0] += -0.14956592;
          }
        } else {
          result[0] += -0.15010458;
        }
      } else {
        result[0] += -0.15029892;
      }
    } else {
      result[0] += -0.15124713;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)2315)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)2078)) {
              result[0] += 0.0034464912;
            } else {
              result[0] += -0.18131435;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[0] += 0.21294616;
            } else {
              result[0] += 0.067789584;
            }
          }
        } else {
          result[0] += -0.15155813;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[0] += 0.18797049;
            } else {
              result[0] += 0.16184133;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[0] += 0.4247448;
            } else {
              result[0] += 0.15807179;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15410104;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[0] += 0.043257453;
            } else {
              result[0] += 0.15796396;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
              result[0] += -0.14789768;
            } else {
              result[0] += 0.6508301;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[0] += -0.15346687;
            } else {
              result[0] += 0.70428157;
            }
          }
        } else {
          result[0] += -0.1516107;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34750)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
              result[0] += 0.1460872;
            } else {
              result[0] += -0.12778254;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
              result[0] += 0.007596297;
            } else {
              result[0] += 0.1694054;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60316)) {
            result[0] += 0.15546848;
          } else {
            result[0] += -0.14820738;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    result[1] += -0.14915173;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
              result[1] += 0.025031084;
            } else {
              result[1] += -0.089295365;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
              result[1] += -0.16734721;
            } else {
              result[1] += 0.04949796;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[1] += 0.64211863;
            } else {
              result[1] += 0.06342736;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.10176115;
            } else {
              result[1] += 0.1551944;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)647)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[1] += 0.12987109;
            } else {
              result[1] += -0.062029958;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[1] += 0.13728876;
            } else {
              result[1] += -0.14842063;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[1] += -0.1526656;
          } else {
            result[1] += 0.16393447;
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1879)) {
            result[1] += -0.10018336;
          } else {
            result[1] += 0.23986076;
          }
        } else {
          result[1] += -0.14504375;
        }
      } else {
        result[1] += -0.14991812;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1469)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        result[2] += -0.15109834;
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
              result[2] += 0.0015681491;
            } else {
              result[2] += -0.08737737;
            }
          } else {
            result[2] += -0.08910775;
          }
        } else {
          result[2] += -0.1251338;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)58383)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)53284)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)30864)) {
              result[2] += -0.0030808141;
            } else {
              result[2] += 0.053275168;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)55824)) {
              result[2] += -0.11617113;
            } else {
              result[2] += -0.0390974;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63988)) {
              result[2] += 0.24453384;
            } else {
              result[2] += -0.011793782;
            }
          } else {
            result[2] += -0.14422725;
          }
        }
      } else {
        result[2] += -0.1481308;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)64201)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)59651)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
              result[2] += 0.062484443;
            } else {
              result[2] += 0.01138882;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
              result[2] += 0.1413271;
            } else {
              result[2] += 0.04972984;
            }
          }
        } else {
          result[2] += 0.016158924;
        }
      } else {
        result[2] += -0.14758652;
      }
    } else {
      result[2] += 0.15577552;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15128109;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[3] += -0.150594;
            } else {
              result[3] += 0.15749443;
            }
          } else {
            result[3] += 0.15579616;
          }
        } else {
          result[3] += -0.14930898;
        }
      } else {
        result[3] += -0.15066375;
      }
    } else {
      result[3] += -0.15082113;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.14112979;
          } else {
            result[4] += -0.15020968;
          }
        } else {
          result[4] += -0.15124053;
        }
      } else {
        result[4] += -0.15130588;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)14390)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)13257)) {
              result[4] += 0.04870535;
            } else {
              result[4] += 0.14308526;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)14959)) {
              result[4] += -0.14581677;
            } else {
              result[4] += 0.029994195;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)16356)) {
              result[4] += 0.06921721;
            } else {
              result[4] += 0.32800466;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)18628)) {
              result[4] += -0.11081623;
            } else {
              result[4] += 0.06656859;
            }
          }
        }
      } else {
        result[4] += -0.15010192;
      }
    }
  } else {
    result[4] += 0.1565767;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[5] += 0.039908353;
            } else {
              result[5] += -0.15076813;
            }
          } else {
            result[5] += -0.15334445;
          }
        } else {
          result[5] += -0.1522763;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[5] += 0.16762966;
            } else {
              result[5] += 0.20852005;
            }
          } else {
            result[5] += -0.15117018;
          }
        } else {
          result[5] += -0.14803647;
        }
      }
    } else {
      result[5] += -0.15315723;
    }
  } else {
    result[5] += -0.15093254;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += 0.018660234;
            } else {
              result[6] += -0.14322013;
            }
          } else {
            result[6] += -0.15119992;
          }
        } else {
          result[6] += -0.15009649;
        }
      } else {
        result[6] += -0.15029144;
      }
    } else {
      result[6] += 0.15677841;
    }
  } else {
    result[6] += -0.15130484;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += -0.08640001;
            } else {
              result[7] += -0.14973886;
            }
          } else {
            result[7] += -0.15013476;
          }
        } else {
          result[7] += 0.16527426;
        }
      } else {
        result[7] += -0.15023981;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        result[7] += -0.14853756;
      } else {
        result[7] += 0.14193824;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
          result[7] += 0.1633532;
        } else {
          result[7] += 0.15812641;
        }
      } else {
        result[7] += -0.13029274;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            result[7] += -0.15120119;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[7] += -0.14979358;
            } else {
              result[7] += 0.048279434;
            }
          }
        } else {
          result[7] += 0.15640672;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
              result[7] += 0.087116405;
            } else {
              result[7] += -0.03826007;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[7] += -0.19305877;
            } else {
              result[7] += -0.15605879;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.16839083;
            } else {
              result[7] += -0.15148759;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)129921)) {
              result[7] += -0.1492562;
            } else {
              result[7] += 0.15803386;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[8] += -0.13119659;
          } else {
            result[8] += -0.124522164;
          }
        } else {
          result[8] += -0.14955479;
        }
      } else {
        result[8] += -0.15009862;
      }
    } else {
      result[8] += -0.1502935;
    }
  } else {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.023426011;
            } else {
              result[8] += -0.08294004;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += -0.15539977;
            } else {
              result[8] += 0.11868692;
            }
          }
        } else {
          result[8] += -0.15127935;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.21786575;
            } else {
              result[8] += -0.15077265;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[8] += -0.03859088;
            } else {
              result[8] += -0.15150079;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[8] += -0.15252745;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.07581484;
            } else {
              result[8] += -0.15037264;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.34711602;
            } else {
              result[8] += -0.13930193;
            }
          } else {
            result[8] += -0.15184143;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)45935)) {
              result[8] += 0.21884991;
            } else {
              result[8] += 0.16953695;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.2855917;
            } else {
              result[8] += -0.19803745;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            result[8] += -0.15540017;
          } else {
            result[8] += 0.1676155;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.15344438;
            } else {
              result[8] += 0.17746902;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.17303252;
            } else {
              result[8] += 0.15298918;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[9] += 0.023862727;
            } else {
              result[9] += -0.15039745;
            }
          } else {
            result[9] += -0.15149595;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
              result[9] += 0.18226796;
            } else {
              result[9] += -0.048806418;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
              result[9] += 0.13910978;
            } else {
              result[9] += 0.07538994;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          result[9] += -0.14377345;
        } else {
          result[9] += 0.15584707;
        }
      }
    } else {
      result[9] += -0.15079875;
    }
  } else {
    result[9] += -0.15146431;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[10] += 0.025549868;
            } else {
              result[10] += -0.14963071;
            }
          } else {
            result[10] += -0.15014;
          }
        } else {
          result[10] += -0.15029144;
        }
      } else {
        result[10] += -0.15124708;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
              result[10] += 0.043619737;
            } else {
              result[10] += 0.13582665;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[10] += -0.14578176;
            } else {
              result[10] += 0.091423474;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.15567255;
          } else {
            result[10] += -0.14837015;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          result[10] += -0.15219778;
        } else {
          result[10] += -0.16764258;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.15149166;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[10] += 0.16430931;
        } else {
          result[10] += -0.094293;
        }
      } else {
        result[10] += -0.14989252;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[11] += -0.1335157;
          } else {
            result[11] += -0.14955841;
          }
        } else {
          result[11] += -0.15009843;
        }
      } else {
        result[11] += -0.15029332;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)325)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[11] += 0.021239294;
            } else {
              result[11] += 0.12609608;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[11] += -0.15653975;
            } else {
              result[11] += 0.05368776;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
              result[11] += 0.16706313;
            } else {
              result[11] += -0.18274073;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += -0.19503634;
            } else {
              result[11] += -0.15046549;
            }
          }
        }
      } else {
        result[11] += -0.15094051;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[11] += -0.1192442;
            } else {
              result[11] += 0.01742662;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)10064)) {
              result[11] += 0.13135792;
            } else {
              result[11] += -0.016249364;
            }
          }
        } else {
          result[11] += 0.1688722;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
            result[11] += -0.13579123;
          } else {
            result[11] += -0.38527772;
          }
        } else {
          result[11] += -0.18149629;
        }
      }
    } else {
      result[11] += -0.15142585;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[12] += -0.12637582;
          } else {
            result[12] += -0.13684535;
          }
        } else {
          result[12] += -0.14955194;
        }
      } else {
        result[12] += -0.15009701;
      }
    } else {
      result[12] += -0.15029195;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)208)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += -0.022740789;
            } else {
              result[12] += -0.1593878;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[12] += 0.16531424;
            } else {
              result[12] += -0.15087925;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += 0.21428151;
            } else {
              result[12] += -0.16722615;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
              result[12] += -0.15609325;
            } else {
              result[12] += 0.035643525;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.19403218;
            } else {
              result[12] += 0.22638781;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[12] += -0.15258339;
            } else {
              result[12] += 0.16693756;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.15000616;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.16142225;
            } else {
              result[12] += -0.12768131;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)1448)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
            result[12] += -0.15323171;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += 0.06963652;
            } else {
              result[12] += -0.15147015;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
            result[12] += 0.17018369;
          } else {
            result[12] += -0.14901423;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          result[12] += -0.15693398;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6)) {
            result[12] += 0.46543643;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
              result[12] += -0.14294876;
            } else {
              result[12] += 0.14919218;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.13342804;
            } else {
              result[13] += -0.14956068;
            }
          } else {
            result[13] += -0.1501019;
          }
        } else {
          result[13] += -0.15029332;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += -0.02036839;
            } else {
              result[13] += -0.15015674;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[13] += -0.15062748;
            } else {
              result[13] += -0.06659654;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
              result[13] += -0.1407848;
            } else {
              result[13] += 0.1583378;
            }
          } else {
            result[13] += 4.002517;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.045250796;
            } else {
              result[13] += -0.15176806;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.15875275;
            } else {
              result[13] += 0.07385449;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.15069173;
            } else {
              result[13] += -0.041458923;
            }
          } else {
            result[13] += 0.15960811;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
              result[13] += 0.20169736;
            } else {
              result[13] += 0.10511986;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
              result[13] += -0.07031156;
            } else {
              result[13] += 0.19174883;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
              result[13] += 0.08390074;
            } else {
              result[13] += -0.17426595;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
              result[13] += 0.15486972;
            } else {
              result[13] += -0.14322335;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.17809391;
            } else {
              result[13] += -0.13737714;
            }
          } else {
            result[13] += 0.17102748;
          }
        } else {
          result[13] += -0.14834483;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          result[13] += 0.18972604;
        } else {
          result[13] += 0.15561548;
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)487)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
          result[13] += -0.15049201;
        } else {
          result[13] += 0.13189714;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48838)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[13] += 0.1166885;
            } else {
              result[13] += -0.123828076;
            }
          } else {
            result[13] += 0.17749837;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3252497920)) {
            result[13] += 0.17849366;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
              result[13] += -0.040957056;
            } else {
              result[13] += 0.15895012;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[14] += 0.031198146;
            } else {
              result[14] += -0.116697066;
            }
          } else {
            result[14] += -0.15064028;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)229)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
              result[14] += -0.14900465;
            } else {
              result[14] += -0.108165406;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[14] += 0.17187035;
            } else {
              result[14] += -0.14537331;
            }
          }
        }
      } else {
        result[14] += -0.15056759;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)61435)) {
            result[14] += -0.15238181;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)61678)) {
              result[14] += -0.040522687;
            } else {
              result[14] += -0.15245023;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
            result[14] += -0.1499729;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2854760192)) {
              result[14] += 0.07306631;
            } else {
              result[14] += -0.1494028;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)52948)) {
            result[14] += -0.1510111;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[14] += 0.25836536;
            } else {
              result[14] += -0.1504396;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[14] += 0.4005099;
            } else {
              result[14] += -0.13755694;
            }
          } else {
            result[14] += -0.14896953;
          }
        }
      }
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[14] += 0.05934826;
            } else {
              result[14] += 0.16863413;
            }
          } else {
            result[14] += -0.15121248;
          }
        } else {
          result[14] += -0.15215866;
        }
      } else {
        result[14] += -0.15442173;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[14] += 0.17114857;
          } else {
            result[14] += 0.15915637;
          }
        } else {
          result[14] += -0.07638099;
        }
      } else {
        result[14] += -0.15065311;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.007941464;
            } else {
              result[0] += 0.010755399;
            }
          } else {
            result[0] += -0.14919788;
          }
        } else {
          result[0] += -0.14992101;
        }
      } else {
        result[0] += -0.15017301;
      }
    } else {
      result[0] += -0.15105905;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)264)) {
            result[0] += -0.15937996;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
              result[0] += 0.05625087;
            } else {
              result[0] += 0.13781863;
            }
          }
        } else {
          result[0] += -0.15103532;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)57306)) {
              result[0] += 0.18074575;
            } else {
              result[0] += 0.15960577;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)477)) {
              result[0] += 0.3545814;
            } else {
              result[0] += 0.15676337;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2119496576)) {
            result[0] += -0.15332857;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
              result[0] += 0.037394032;
            } else {
              result[0] += 0.15613964;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
              result[0] += -0.14661628;
            } else {
              result[0] += 0.29289246;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += -0.1526728;
            } else {
              result[0] += 0.37705538;
            }
          }
        } else {
          result[0] += -0.15140139;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[0] += -0.14567955;
            } else {
              result[0] += 0.37408084;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[0] += -0.16504765;
            } else {
              result[0] += 0.087320745;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2567035392)) {
            result[0] += -0.15538837;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[0] += 1.6293306;
            } else {
              result[0] += 0.15761776;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.14929935;
    } else {
      result[1] += -0.13766187;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
              result[1] += 0.04931714;
            } else {
              result[1] += 0.11323644;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[1] += 0.044804726;
            } else {
              result[1] += -0.15638824;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)24)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
              result[1] += -0.08955255;
            } else {
              result[1] += 0.026304705;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
              result[1] += 0.14556207;
            } else {
              result[1] += -0.006423641;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.101055205;
            } else {
              result[1] += -0.16127717;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
              result[1] += 0.37048665;
            } else {
              result[1] += 0.23600546;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1878)) {
              result[1] += -0.16593507;
            } else {
              result[1] += -0.10916722;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
              result[1] += -0.2634428;
            } else {
              result[1] += -0.1342465;
            }
          }
        }
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            result[1] += 0.22313187;
          } else {
            result[1] += -0.09904496;
          }
        } else {
          result[1] += -0.14324152;
        }
      } else {
        result[1] += -0.14964043;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
      result[2] += -0.15088873;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)19951)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)11198)) {
              result[2] += 0.046642486;
            } else {
              result[2] += -0.015864335;
            }
          } else {
            result[2] += -0.14734957;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)20521)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.58106506;
            } else {
              result[2] += -0.106822476;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)47007)) {
              result[2] += 0.038267955;
            } else {
              result[2] += -0.0020563665;
            }
          }
        }
      } else {
        result[2] += -0.1477126;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)19426)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)19183)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)17201)) {
              result[2] += 0.044915214;
            } else {
              result[2] += 0.12794028;
            }
          } else {
            result[2] += -0.2398216;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)20941)) {
            result[2] += 0.13977206;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32230)) {
              result[2] += 0.04123935;
            } else {
              result[2] += 0.05968555;
            }
          }
        }
      } else {
        result[2] += -0.1465725;
      }
    } else {
      result[2] += 0.15433246;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    result[3] += -0.15108167;
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[3] += -0.15040393;
            } else {
              result[3] += 0.15427923;
            }
          } else {
            result[3] += 0.1558974;
          }
        } else {
          result[3] += -0.14887159;
        }
      } else {
        result[3] += -0.15049495;
      }
    } else {
      result[3] += -0.15065727;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.1392061;
          } else {
            result[4] += -0.15006115;
          }
        } else {
          result[4] += -0.1509599;
        }
      } else {
        result[4] += -0.15112914;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)27511)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)27268)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)25201)) {
              result[4] += 0.06054691;
            } else {
              result[4] += 0.003521208;
            }
          } else {
            result[4] += -0.1553951;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)28839)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)28566)) {
              result[4] += 0.19091262;
            } else {
              result[4] += 0.09292283;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
              result[4] += -0.012241685;
            } else {
              result[4] += 0.06536352;
            }
          }
        }
      } else {
        result[4] += -0.14991692;
      }
    }
  } else {
    result[4] += 0.15491523;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2084520832)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += 0.017920462;
            } else {
              result[5] += 0.11237699;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)1028)) {
              result[5] += 0.2256733;
            } else {
              result[5] += -0.10085341;
            }
          }
        } else {
          result[5] += -0.15187433;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
              result[5] += 0.38327324;
            } else {
              result[5] += 0.15363674;
            }
          } else {
            result[5] += -0.1507216;
          }
        } else {
          result[5] += -0.15339714;
        }
      }
    } else {
      result[5] += -0.15277977;
    }
  } else {
    result[5] += -0.1507835;
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += 0.0141720055;
            } else {
              result[6] += -0.15029684;
            }
          } else {
            result[6] += -0.149913;
          }
        } else {
          result[6] += -0.15092349;
        }
      } else {
        result[6] += -0.15016614;
      }
    } else {
      result[6] += 0.15514182;
    }
  } else {
    result[6] += -0.15112822;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += -0.07966325;
            } else {
              result[7] += -0.1493931;
            }
          } else {
            result[7] += 0.16293229;
          }
        } else {
          if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
            result[7] += -0.14995068;
          } else {
            result[7] += 0.12653664;
          }
        }
      } else {
        result[7] += -0.15010014;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        result[7] += -0.147727;
      } else {
        result[7] += 0.13414893;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[7] += 0.15985751;
      } else {
        result[7] += -0.12619856;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1377281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)26732)) {
            result[7] += -0.15082586;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[7] += 0.059247505;
            } else {
              result[7] += -0.14952071;
            }
          }
        } else {
          result[7] += 0.15454066;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[7] += 0.044825234;
            } else {
              result[7] += -0.15720487;
            }
          } else {
            result[7] += -0.15269972;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.1645233;
            } else {
              result[7] += -0.14205593;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.15235427;
            } else {
              result[7] += 0.15202357;
            }
          }
        }
      }
    }
  }
}

