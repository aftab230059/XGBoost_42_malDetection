
#include "header.h"

void predict_unit8(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.13649182;
    } else {
      result[1] += -0.08556696;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)34126)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)316)) {
              result[1] += 0.0073298328;
            } else {
              result[1] += -0.12066651;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.17436402;
            } else {
              result[1] += 0.01328964;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += -0.062317085;
            } else {
              result[1] += 0.063041516;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
              result[1] += 0.15648293;
            } else {
              result[1] += 0.0085313665;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
              result[1] += -0.15104032;
            } else {
              result[1] += -0.13284323;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[1] += -0.023419803;
            } else {
              result[1] += -0.11341604;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            result[1] += -0.14537781;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[1] += 0.16186506;
            } else {
              result[1] += 0.29710674;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
              result[1] += 0.02273325;
            } else {
              result[1] += 0.07240103;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)486)) {
              result[1] += -0.1543671;
            } else {
              result[1] += 0.026251756;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[1] += 0.15132293;
            } else {
              result[1] += -0.100636765;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[1] += 0.053335007;
            } else {
              result[1] += -0.048217695;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          result[1] += -0.15222989;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)494)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[1] += 0.17952573;
            } else {
              result[1] += 0.06419661;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)304)) {
              result[1] += 0.13436961;
            } else {
              result[1] += -0.1445054;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.14609128;
        } else {
          result[2] += -0.120574124;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
              result[2] += -0.01680991;
            } else {
              result[2] += -0.08043679;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)63988)) {
              result[2] += 0.018286463;
            } else {
              result[2] += -0.02838649;
            }
          }
        } else {
          result[2] += -0.13048562;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1675)) {
              result[2] += 0.032869264;
            } else {
              result[2] += -0.10587723;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
              result[2] += 0.08808122;
            } else {
              result[2] += 0.026910093;
            }
          }
        } else {
          result[2] += -0.07910902;
        }
      } else {
        result[2] += 0.14964634;
      }
    }
  } else {
    result[2] += -0.15000892;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.15002573;
    } else {
      result[3] += -0.11652995;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14629468;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.12616798;
            } else {
              result[3] += 0.14908522;
            }
          }
        } else {
          result[3] += 0.14954142;
        }
      } else {
        result[3] += -0.14670569;
      }
    } else {
      result[3] += -0.14854716;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.08934433;
          } else {
            result[4] += -0.1467754;
          }
        } else {
          result[4] += -0.14780992;
        }
      } else {
        result[4] += -0.15000656;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)26366)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)25771)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)24654)) {
              result[4] += 0.027805278;
            } else {
              result[4] += 0.08059227;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)26071)) {
              result[4] += -0.15983567;
            } else {
              result[4] += -0.00355598;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)28566)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)27847)) {
              result[4] += 0.03587919;
            } else {
              result[4] += 0.17381969;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)31100)) {
              result[4] += -0.006543484;
            } else {
              result[4] += 0.034546386;
            }
          }
        }
      } else {
        result[4] += -0.13506688;
      }
    }
  } else {
    if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
      result[4] += 0.15002605;
    } else {
      result[4] += -0.07644295;
    }
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[5] += 0.0015392272;
            } else {
              result[5] += 0.047458187;
            }
          } else {
            result[5] += -0.14974013;
          }
        } else {
          result[5] += 0.15028104;
        }
      } else {
        result[5] += -0.15421574;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)17307)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)4880)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)3615)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[5] += 0.14117944;
            } else {
              result[5] += -0.1370375;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1159754368)) {
              result[5] += 0.30788958;
            } else {
              result[5] += -0.17783803;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1715437184)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)8251)) {
              result[5] += -0.07063371;
            } else {
              result[5] += -0.1613932;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[5] += 0.2969397;
            } else {
              result[5] += -0.06496029;
            }
          }
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)17537)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1631175168)) {
            result[5] += -0.1735194;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1647413248)) {
              result[5] += 2.1790476;
            } else {
              result[5] += 0.33700398;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1112952576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)608804544)) {
              result[5] += 0.05390097;
            } else {
              result[5] += -0.083433345;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
              result[5] += 0.16471522;
            } else {
              result[5] += -0.009567025;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        result[5] += -0.15377152;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33712)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[5] += -0.080598876;
            } else {
              result[5] += 0.14771207;
            }
          } else {
            result[5] += -0.11080078;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
              result[5] += 0.03761559;
            } else {
              result[5] += -0.15273802;
            }
          } else {
            result[5] += -0.14943123;
          }
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.14407432;
      } else {
        result[5] += 0.16478792;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += -0.00052461965;
            } else {
              result[6] += -0.12153392;
            }
          } else {
            result[6] += -0.13505583;
          }
        } else {
          result[6] += -0.14726385;
        }
      } else {
        result[6] += -0.1477543;
      }
    } else {
      result[6] += 0.1491745;
    }
  } else {
    result[6] += -0.15000635;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
    if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[7] += 0.0026232623;
            } else {
              result[7] += -0.050064698;
            }
          } else {
            result[7] += -0.1504421;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)87)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[7] += 0.1502584;
            } else {
              result[7] += -0.118962064;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
              result[7] += -0.14466074;
            } else {
              result[7] += 0.12453785;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
          if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
            result[7] += -0.14971566;
          } else {
            result[7] += 0.087434135;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
              result[7] += 0.752893;
            } else {
              result[7] += 0.121586695;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.12996165;
            } else {
              result[7] += 0.13839488;
            }
          }
        }
      }
    } else {
      result[7] += 0.1513811;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)65535)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            result[7] += 0.16676067;
          } else {
            result[7] += -0.11003765;
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2456591104)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2272993536)) {
              result[7] += 0.06326815;
            } else {
              result[7] += -0.19627139;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
              result[7] += 0.16103086;
            } else {
              result[7] += 0.0025979918;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          result[7] += 0.17117739;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
            result[7] += 0.13889031;
          } else {
            result[7] += -0.095466055;
          }
        }
      }
    } else {
      result[7] += -0.14786363;
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)527)) {
              result[8] += -0.07084094;
            } else {
              result[8] += -0.0013180571;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)44832)) {
              result[8] += -0.1488514;
            } else {
              result[8] += -0.174939;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[8] += 0.17624983;
            } else {
              result[8] += 0.2028618;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[8] += -0.16380222;
            } else {
              result[8] += 0.035561755;
            }
          }
        }
      } else {
        result[8] += -0.15737708;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            result[8] += -0.2776077;
          } else {
            result[8] += 0.13658229;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += 0.16103652;
            } else {
              result[8] += -0.12906824;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40340)) {
              result[8] += 0.09125206;
            } else {
              result[8] += 0.17300363;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)700)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.08698921;
            } else {
              result[8] += -0.15179059;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[8] += 0.15144554;
            } else {
              result[8] += -0.18383919;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[8] += 0.48924825;
            } else {
              result[8] += 0.14160223;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[8] += 0.0309902;
            } else {
              result[8] += -0.15250678;
            }
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[8] += 0.037810825;
            } else {
              result[8] += -0.15829271;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[8] += 0.16391885;
            } else {
              result[8] += -0.13340929;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
            result[8] += -0.15167789;
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)432)) {
              result[8] += 0.15621656;
            } else {
              result[8] += -0.17902523;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
              result[8] += -0.046167254;
            } else {
              result[8] += 0.13010627;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
              result[8] += 0.15124357;
            } else {
              result[8] += -0.08539138;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
              result[8] += -0.14357054;
            } else {
              result[8] += 0.24402858;
            }
          } else {
            result[8] += -0.15638182;
          }
        }
      }
    } else {
      result[8] += -0.15060687;
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)311377)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[9] += 0.0036904507;
            } else {
              result[9] += -0.14963895;
            }
          } else {
            result[9] += 0.1479485;
          }
        } else {
          result[9] += -0.14934969;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)99123120)) {
              result[9] += 0.18618812;
            } else {
              result[9] += 0.15804854;
            }
          } else {
            result[9] += -0.08355814;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
              result[9] += 0.06803316;
            } else {
              result[9] += -0.27407572;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[9] += 0.18141013;
            } else {
              result[9] += -0.07706241;
            }
          }
        }
      }
    } else {
      result[9] += -0.14957035;
    }
  } else {
    result[9] += -0.14982603;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[10] += -0.00087892404;
            } else {
              result[10] += -0.14624879;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[10] += 0.0099787;
            } else {
              result[10] += 0.010945635;
            }
          }
        } else {
          result[10] += -0.14829981;
        }
      } else {
        result[10] += -0.15000705;
      }
    } else {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)15842)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[10] += 0.00600036;
            } else {
              result[10] += 0.029348044;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
              result[10] += -0.1292918;
            } else {
              result[10] += 0.04786865;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.1490321;
          } else {
            result[10] += -0.121118344;
          }
        }
      } else {
        result[10] += -0.14938548;
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14947449;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.09500071;
      } else {
        result[10] += -0.1263436;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)485)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[11] += 0.0028919969;
            } else {
              result[11] += -0.15204465;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[11] += 0.15203482;
            } else {
              result[11] += -0.24478588;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
              result[11] += -0.2027695;
            } else {
              result[11] += -0.16621637;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[11] += -0.12019513;
            } else {
              result[11] += 0.10041561;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[11] += -0.14917433;
            } else {
              result[11] += 0.11736829;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[11] += -0.28323257;
            } else {
              result[11] += -0.08380931;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)485)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
              result[11] += -0.012431708;
            } else {
              result[11] += 0.14894933;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
              result[11] += -0.26105744;
            } else {
              result[11] += -0.12673987;
            }
          }
        }
      }
    } else {
      result[11] += -0.14989644;
    }
  } else {
    result[11] += -0.14959778;
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)208)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += -0.0018258296;
            } else {
              result[12] += -0.14402036;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
              result[12] += 0.14350341;
            } else {
              result[12] += -0.14303613;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)862)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)12872)) {
              result[12] += -0.15105973;
            } else {
              result[12] += 0.11109757;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
              result[12] += -0.06751517;
            } else {
              result[12] += 0.08821506;
            }
          }
        }
      } else {
        result[12] += -0.15484548;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)18064)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1206383360)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1190531200)) {
              result[12] += 0.09843992;
            } else {
              result[12] += -0.44892985;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3101)) {
              result[12] += 0.0867474;
            } else {
              result[12] += 0.16514905;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)18352)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3570386688)) {
              result[12] += -0.9145774;
            } else {
              result[12] += 0.088676415;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
              result[12] += 0.12764508;
            } else {
              result[12] += 0.053001244;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.1544976;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)149)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[12] += 0.10025408;
            } else {
              result[12] += -0.21250206;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
              result[12] += 0.14921185;
            } else {
              result[12] += -0.017954355;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)45714)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)39287)) {
        result[12] += -0.15090862;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[12] += -0.07994071;
        } else {
          result[12] += 0.10430734;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[12] += 0.14182335;
          } else {
            result[12] += -0.12296653;
          }
        } else {
          result[12] += -0.1474435;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += 0.12034367;
            } else {
              result[12] += -0.09402957;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[12] += 0.10368066;
            } else {
              result[12] += -0.23970717;
            }
          }
        } else {
          result[12] += -0.13742328;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
              result[13] += -0.07023464;
            } else {
              result[13] += -0.11433957;
            }
          } else {
            result[13] += -0.051084112;
          }
        } else {
          result[13] += -0.13516639;
        }
      } else {
        result[13] += -0.14727266;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[13] += 0.0049143387;
            } else {
              result[13] += -0.12501745;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)403)) {
              result[13] += 0.1668738;
            } else {
              result[13] += 0.019887961;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48516)) {
            result[13] += -0.15530911;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1295143936)) {
              result[13] += 0.2259613;
            } else {
              result[13] += -0.10622606;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
              result[13] += 0.15430833;
            } else {
              result[13] += -0.10085244;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
              result[13] += -0.0014499413;
            } else {
              result[13] += 0.16310786;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)919)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
              result[13] += -0.010689032;
            } else {
              result[13] += -0.12590179;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
              result[13] += -0.11554674;
            } else {
              result[13] += 0.18400736;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      result[13] += -0.14445396;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)55062)) {
          result[13] += 0.50324816;
        } else {
          result[13] += -0.080552846;
        }
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6166)) {
            result[13] += -0.11907419;
          } else {
            result[13] += 0.11147845;
          }
        } else {
          result[13] += -0.14331369;
        }
      }
    }
  }
  if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.01041577;
            } else {
              result[14] += -0.10650601;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
              result[14] += 0.15861131;
            } else {
              result[14] += 0.022549864;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)459)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)64511)) {
              result[14] += -0.15054072;
            } else {
              result[14] += 0.068293646;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[14] += -0.1439971;
            } else {
              result[14] += 0.15231943;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)28478)) {
          result[14] += -0.15143077;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
              result[14] += 0.042030614;
            } else {
              result[14] += 0.13273764;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
              result[14] += -0.10600462;
            } else {
              result[14] += 0.010039508;
            }
          }
        }
      }
    } else {
      result[14] += -0.14930065;
    }
  } else {
    result[14] += -0.052612364;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[0] += 0.006338525;
            } else {
              result[0] += -0.110177666;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)48703)) {
              result[0] += 0.19624344;
            } else {
              result[0] += -0.062150415;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
            result[0] += -0.15435761;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)56322)) {
              result[0] += -0.14858504;
            } else {
              result[0] += 0.13856229;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59130)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1614904576)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1550386432)) {
              result[0] += 0.11194559;
            } else {
              result[0] += -0.25586113;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[0] += 0.2576859;
            } else {
              result[0] += -0.14053926;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60210)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)59886)) {
              result[0] += -0.15460616;
            } else {
              result[0] += -0.20889969;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1371489792)) {
              result[0] += 0.0047206385;
            } else {
              result[0] += 0.13937771;
            }
          }
        }
      }
    } else {
      result[0] += -0.14904721;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.25018287;
      } else {
        result[0] += -0.14477631;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15370405;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14438452;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.111700706;
            } else {
              result[0] += 0.14929007;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.1464144;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
            result[0] += -0.08062763;
          } else {
            result[0] += 0.11534957;
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.13425206;
    } else {
      result[1] += -0.0797502;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)68)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[1] += 0.0021733511;
            } else {
              result[1] += -0.1359596;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.2652673;
            } else {
              result[1] += 0.13899846;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += -0.15636557;
            } else {
              result[1] += -0.09309929;
            }
          } else {
            result[1] += 0.14601234;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)283)) {
          result[1] += 0.15461083;
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)288)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)13219)) {
              result[1] += -0.05027828;
            } else {
              result[1] += -0.19338357;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)302)) {
              result[1] += 0.16424744;
            } else {
              result[1] += 0.014943644;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[1] += -0.15133876;
            } else {
              result[1] += -0.10349887;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)9392)) {
              result[1] += 0.07801831;
            } else {
              result[1] += -0.14639245;
            }
          }
        } else {
          result[1] += 0.21926491;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)299)) {
            result[1] += 0.1767547;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)386)) {
              result[1] += -0.14566197;
            } else {
              result[1] += 0.04917747;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            result[1] += 0.17396437;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)299)) {
              result[1] += 0.1296039;
            } else {
              result[1] += 0.04466226;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)1636)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            result[2] += -0.1454123;
          } else {
            result[2] += -0.11675062;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)1360)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)837)) {
              result[2] += -0.045048382;
            } else {
              result[2] += 0.024001176;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1469)) {
              result[2] += -0.10853375;
            } else {
              result[2] += -0.030032987;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)22390)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)16057)) {
              result[2] += 0.031156402;
            } else {
              result[2] += -0.012041868;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)23233)) {
              result[2] += 0.17911878;
            } else {
              result[2] += 0.025164908;
            }
          }
        } else {
          result[2] += 0.12303849;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)8361)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)6929)) {
              result[2] += 0.019353533;
            } else {
              result[2] += 0.21995905;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)9584)) {
              result[2] += -0.117524706;
            } else {
              result[2] += 0.02205472;
            }
          }
        } else {
          result[2] += -0.12604797;
        }
      } else {
        result[2] += 0.14949887;
      }
    }
  } else {
    result[2] += -0.14995527;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14997673;
    } else {
      result[3] += -0.112416804;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14546761;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.12172682;
            } else {
              result[3] += 0.14875342;
            }
          }
        } else {
          result[3] += 0.14925246;
        }
      } else {
        result[3] += -0.1459606;
      }
    } else {
      result[3] += -0.1481753;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.0835917;
          } else {
            result[4] += -0.1460878;
          }
        } else {
          result[4] += -0.14741087;
        }
      } else {
        result[4] += -0.14995287;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)58776)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)58457)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)38841)) {
              result[4] += 0.025126861;
            } else {
              result[4] += 0.035771556;
            }
          } else {
            result[4] += 0.119553216;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)61243)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)60286)) {
              result[4] += 0.014761182;
            } else {
              result[4] += -0.05776078;
            }
          } else {
            result[4] += 0.02821614;
          }
        }
      } else {
        result[4] += -0.13077925;
      }
    }
  } else {
    result[4] += 0.14926906;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)4)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1)) {
              result[5] += 0.0041348333;
            } else {
              result[5] += -0.1496189;
            }
          } else {
            result[5] += 0.14990212;
          }
        } else {
          result[5] += -0.15364411;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1977933952)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[5] += -0.0056921244;
            } else {
              result[5] += 0.0662368;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)22071)) {
              result[5] += 1.3012278;
            } else {
              result[5] += -0.16631073;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1877709568)) {
              result[5] += -0.110202655;
            } else {
              result[5] += 0.12110933;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50476)) {
              result[5] += 0.24401028;
            } else {
              result[5] += 0.0067281113;
            }
          }
        }
      }
    } else {
      result[5] += -0.15014592;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        result[5] += -0.15331341;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
              result[5] += 0.092226714;
            } else {
              result[5] += -0.15126437;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[5] += 0.14361703;
            } else {
              result[5] += -0.08658171;
            }
          }
        } else {
          result[5] += -0.15068594;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.14286518;
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59752)) {
          result[5] += 0.1684006;
        } else {
          result[5] += -0.08227186;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)15)) {
              result[6] += -0.00062222814;
            } else {
              result[6] += -0.12063117;
            }
          } else {
            result[6] += -0.13076665;
          }
        } else {
          result[6] += -0.14662318;
        }
      } else {
        result[6] += -0.14734782;
      }
    } else {
      result[6] += 0.14887653;
    }
  } else {
    result[6] += -0.14995265;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)1883)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[21].missing != -1) && (data[21].fvalue < (float)53)) {
              result[7] += -0.028755693;
            } else {
              result[7] += 0.14415546;
            }
          } else {
            result[7] += 0.027627314;
          }
        } else {
          result[7] += -0.07655078;
        }
      } else {
        result[7] += -0.14761208;
      }
    } else {
      if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          result[7] += -0.13485985;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[7] += -0.13680701;
            } else {
              result[7] += 0.16228744;
            }
          } else {
            result[7] += -0.14510947;
          }
        }
      } else {
        result[7] += 0.082284465;
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
      result[7] += 0.15063195;
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)615)) {
          result[7] += -0.14942306;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            result[7] += -0.14144458;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[7] += 0.63371813;
            } else {
              result[7] += 0.11044216;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.008533379;
            } else {
              result[7] += -0.15049955;
            }
          } else {
            result[7] += -0.15085292;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)15)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)343)) {
              result[7] += 0.15049283;
            } else {
              result[7] += -0.09235277;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
              result[7] += -0.14992735;
            } else {
              result[7] += 0.122246355;
            }
          }
        }
      }
    }
  }
  if ( (data[19].missing != -1) && (data[19].fvalue < (float)86)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
              result[8] += -0.009418569;
            } else {
              result[8] += 0.03208046;
            }
          } else {
            result[8] += -0.15607792;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
              result[8] += 0.13445592;
            } else {
              result[8] += 0.0414607;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1759)) {
              result[8] += -0.1602102;
            } else {
              result[8] += 0.12483664;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
              result[8] += -0.04608772;
            } else {
              result[8] += 0.07110151;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[8] += 0.10834638;
            } else {
              result[8] += 0.031839963;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
              result[8] += -0.03786184;
            } else {
              result[8] += 0.08050318;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)4626)) {
              result[8] += -0.05778635;
            } else {
              result[8] += -0.15468056;
            }
          }
        }
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
        result[8] += -0.15217127;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[29].missing != -1) && (data[29].fvalue < (float)1)) {
            result[8] += -0.20854543;
          } else {
            result[8] += -0.13401885;
          }
        } else {
          result[8] += -0.14982617;
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          result[8] += 0.19013457;
        } else {
          result[8] += -0.133214;
        }
      } else {
        result[8] += -0.12673244;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)221)) {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
          result[8] += -0.15288901;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[8] += -0.22729117;
            } else {
              result[8] += -0.12600553;
            }
          } else {
            result[8] += -0.14440404;
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)264)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)39)) {
              result[8] += 0.15972228;
            } else {
              result[8] += -0.28032535;
            }
          } else {
            result[8] += -0.1300098;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[8] += -0.15256229;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
              result[8] += 0.12871905;
            } else {
              result[8] += -0.07055654;
            }
          }
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)7095)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)3333)) {
              result[9] += 0.0005000278;
            } else {
              result[9] += 0.06116938;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1402044288)) {
              result[9] += -0.08962986;
            } else {
              result[9] += 0.1584691;
            }
          }
        } else {
          result[9] += -0.14895776;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          result[9] += 0.15894264;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)44233)) {
              result[9] += 0.068828925;
            } else {
              result[9] += -0.20627956;
            }
          } else {
            result[9] += 0.17338267;
          }
        }
      }
    } else {
      result[9] += -0.14938901;
    }
  } else {
    result[9] += -0.14972942;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[10] += -0.0010315968;
            } else {
              result[10] += 0.008852247;
            }
          } else {
            result[10] += -0.14788063;
          }
        } else {
          result[10] += -0.14993371;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)15842)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
              result[10] += 0.018175486;
            } else {
              result[10] += -0.036522396;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)442)) {
              result[10] += -0.1497805;
            } else {
              result[10] += 0.014021958;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[10] += 0.14864206;
          } else {
            result[10] += -0.11469952;
          }
        }
      }
    } else {
      result[10] += -0.14894749;
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.1493069;
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)912)) {
        result[10] += 0.084981665;
      } else {
        result[10] += -0.1207739;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
              result[11] += -0.06998104;
            } else {
              result[11] += -0.14710401;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[11] += -0.002526219;
            } else {
              result[11] += 0.059078388;
            }
          }
        } else {
          result[11] += -0.15201926;
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)478)) {
              result[11] += 0.008002911;
            } else {
              result[11] += 0.067402974;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
              result[11] += 0.12230563;
            } else {
              result[11] += -0.019541377;
            }
          }
        } else {
          result[11] += -0.14944568;
        }
      }
    } else {
      result[11] += -0.15155709;
    }
  } else {
    result[11] += -0.14945509;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)59004)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)56788)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)45298)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)152)) {
              result[12] += 0.004740516;
            } else {
              result[12] += -0.14906977;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += -0.15011042;
            } else {
              result[12] += -0.032123968;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
              result[12] += 0.034273203;
            } else {
              result[12] += 0.101065576;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
              result[12] += -0.16230427;
            } else {
              result[12] += 0.11992557;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1)) {
              result[12] += -0.16537271;
            } else {
              result[12] += 0.094726875;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[12] += 0.1280724;
            } else {
              result[12] += -0.11016407;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
            result[12] += 0.14903462;
          } else {
            result[12] += -0.13329706;
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)18597)) {
              result[12] += -0.15255406;
            } else {
              result[12] += 0.29257894;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[12] += 0.023236483;
            } else {
              result[12] += 0.31992108;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)27219)) {
              result[12] += 0.088332556;
            } else {
              result[12] += 0.13075557;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)56386)) {
              result[12] += 0.065723464;
            } else {
              result[12] += -0.07645714;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)63989)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)36696)) {
              result[12] += -0.17035338;
            } else {
              result[12] += -0.1558212;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[12] += 0.043072466;
            } else {
              result[12] += -0.15935501;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)60176)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)59916)) {
              result[12] += 0.028197173;
            } else {
              result[12] += 0.36334902;
            }
          } else {
            result[12] += -0.16900733;
          }
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[12] += -0.15105158;
            } else {
              result[12] += 0.055304796;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
              result[12] += 0.15251124;
            } else {
              result[12] += 0.028378135;
            }
          }
        } else {
          result[12] += -0.14939049;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)62236)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3832654848)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1482411776)) {
              result[12] += -0.02912397;
            } else {
              result[12] += -0.11829578;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3859072512)) {
              result[12] += 0.33305717;
            } else {
              result[12] += -0.042268902;
            }
          }
        } else {
          result[12] += -0.15219091;
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)7.8308200836)) {
        result[12] += -0.15981503;
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
          result[12] += 0.14902693;
        } else {
          result[12] += -0.14003341;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)334)) {
              result[13] += -0.058823287;
            } else {
              result[13] += 0.021831995;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
              result[13] += -0.15206978;
            } else {
              result[13] += 0.14665474;
            }
          }
        } else {
          result[13] += -0.14663386;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2182743296)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2054161792)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
              result[13] += 0.23286493;
            } else {
              result[13] += 0.0063840887;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2069228800)) {
              result[13] += 0.36381733;
            } else {
              result[13] += 0.11711252;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)321)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
              result[13] += -0.09108853;
            } else {
              result[13] += -0.0051965537;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[13] += 0.013188255;
            } else {
              result[13] += 0.13403541;
            }
          }
        }
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)16)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)305)) {
              result[13] += -0.0034419186;
            } else {
              result[13] += -0.12528068;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)420)) {
              result[13] += 0.115875386;
            } else {
              result[13] += -0.021813214;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5742)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1759)) {
              result[13] += 0.039958246;
            } else {
              result[13] += -0.08682127;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[13] += 0.2063205;
            } else {
              result[13] += 0.14976181;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)608)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
              result[13] += -0.1518441;
            } else {
              result[13] += -0.082242504;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)1440)) {
              result[13] += 0.16158822;
            } else {
              result[13] += -0.13995275;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)497)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[13] += 0.026341038;
            } else {
              result[13] += -0.07493549;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
              result[13] += -0.12688372;
            } else {
              result[13] += 0.1411302;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      result[13] += -0.14333893;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2384619520)) {
          result[13] += 0.35780165;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3655086336)) {
            result[13] += 0.038533032;
          } else {
            result[13] += -0.0828034;
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          result[13] += -0.14749219;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6428)) {
              result[13] += 0.1153326;
            } else {
              result[13] += 0.0004549268;
            }
          } else {
            result[13] += -0.124400206;
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
              result[14] += 0.0028482177;
            } else {
              result[14] += -0.151957;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[14] += 0.18683766;
            } else {
              result[14] += 0.13337088;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3885167872)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
              result[14] += -0.09858384;
            } else {
              result[14] += -0.14637351;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3911013376)) {
              result[14] += 0.19964962;
            } else {
              result[14] += -0.14430368;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)58604)) {
          result[14] += -0.1573765;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            result[14] += -0.13247593;
          } else {
            result[14] += 0.08127597;
          }
        }
      }
    } else {
      result[14] += -0.15131472;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)104)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.42937726;
            } else {
              result[14] += 0.13347636;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)30583)) {
              result[14] += 0.17360339;
            } else {
              result[14] += 0.2079985;
            }
          }
        } else {
          result[14] += 0.1509229;
        }
      } else {
        result[14] += -0.35653368;
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)121)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)486)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[14] += -0.2874921;
            } else {
              result[14] += -0.14888848;
            }
          } else {
            result[14] += 0.13382533;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)41390)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1582615552)) {
              result[14] += -1.6313273;
            } else {
              result[14] += -0.1982556;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)109)) {
              result[14] += -0.2882355;
            } else {
              result[14] += 0.10887767;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)488)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[14] += 0.13894911;
            } else {
              result[14] += -0.11250773;
            }
          } else {
            result[14] += -0.14960952;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)441)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)222)) {
              result[14] += -0.0134755615;
            } else {
              result[14] += -0.15111731;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)488)) {
              result[14] += 0.11064015;
            } else {
              result[14] += -0.012212554;
            }
          }
        }
      }
    }
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
              result[0] += -0.0056865956;
            } else {
              result[0] += 0.011778272;
            }
          } else {
            result[0] += -0.14708693;
          }
        } else {
          result[0] += -0.14977422;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.024499329;
            } else {
              result[0] += -0.08952382;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[0] += -0.14829057;
            } else {
              result[0] += 0.23176332;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3742177280)) {
              result[0] += -0.09659253;
            } else {
              result[0] += 0.029341308;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[0] += 0.044745244;
            } else {
              result[0] += -0.09302855;
            }
          }
        }
      }
    } else {
      result[0] += -0.14880043;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.21643119;
      } else {
        result[0] += -0.14336255;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15311697;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14328814;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.10401784;
            } else {
              result[0] += 0.14865294;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.14294003;
        } else {
          result[0] += 0.053915504;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.13182119;
    } else {
      result[1] += -0.0738329;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)34500)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)442)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)303)) {
              result[1] += 0.0052422956;
            } else {
              result[1] += -0.07925257;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)551)) {
              result[1] += 0.17768008;
            } else {
              result[1] += 0.011664322;
            }
          }
        } else {
          if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[1] += -0.05504134;
            } else {
              result[1] += 0.020653622;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)50)) {
              result[1] += 0.10535424;
            } else {
              result[1] += -0.013075219;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[1] += -0.15022594;
            } else {
              result[1] += -0.10628637;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3427947776)) {
              result[1] += -0.0067156865;
            } else {
              result[1] += -0.08594473;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
            result[1] += -0.14449708;
          } else {
            result[1] += 0.16034588;
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)37736)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)481198656)) {
              result[1] += 0.21692623;
            } else {
              result[1] += 0.08080731;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.15258041;
            } else {
              result[1] += 0.07149305;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.024416693;
            } else {
              result[1] += -0.061041806;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)647)) {
              result[1] += -0.07353481;
            } else {
              result[1] += 0.01441729;
            }
          }
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)188)) {
              result[1] += -0.012887374;
            } else {
              result[1] += -0.08941509;
            }
          } else {
            result[1] += -0.15168284;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48180)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)494)) {
              result[1] += 0.17270717;
            } else {
              result[1] += -0.057500374;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)31625)) {
              result[1] += -0.06519212;
            } else {
              result[1] += 0.08422427;
            }
          }
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.14463781;
        } else {
          result[2] += -0.1125658;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)41643)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)39175)) {
              result[2] += 0.021490168;
            } else {
              result[2] += -0.05738045;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)41991)) {
              result[2] += 0.6105282;
            } else {
              result[2] += 0.019094806;
            }
          }
        } else {
          result[2] += -0.12476159;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)4355)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)3172)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
              result[2] += -0.0008333144;
            } else {
              result[2] += 0.06087816;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)3453)) {
              result[2] += -0.14117208;
            } else {
              result[2] += 0.0051887734;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5822)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5213)) {
              result[2] += 0.02608718;
            } else {
              result[2] += 0.16654694;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)7343)) {
              result[2] += -0.049427036;
            } else {
              result[2] += 0.02622946;
            }
          }
        }
      } else {
        result[2] += 0.14934751;
      }
    }
  } else {
    result[2] += -0.14989664;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[3] += -0.14992455;
    } else {
      result[3] += -0.10797889;
    }
  } else {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2156375040)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
            result[3] += -0.14469275;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43562)) {
              result[3] += -0.115861125;
            } else {
              result[3] += 0.14838736;
            }
          }
        } else {
          result[3] += 0.14894372;
        }
      } else {
        result[3] += -0.1451284;
      }
    } else {
      result[3] += -0.14773892;
    }
  }
  if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)716)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            result[4] += -0.07773983;
          } else {
            result[4] += -0.14546254;
          }
        } else {
          result[4] += -0.1469559;
        }
      } else {
        result[4] += -0.14989415;
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)54906)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)54009)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)49564)) {
              result[4] += 0.030143723;
            } else {
              result[4] += 0.0034826428;
            }
          } else {
            result[4] += 0.13170813;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56578)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56012)) {
              result[4] += -0.007653618;
            } else {
              result[4] += -0.114943;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56868)) {
              result[4] += 0.18326162;
            } else {
              result[4] += 0.022368748;
            }
          }
        }
      } else {
        result[4] += -0.12558642;
      }
    }
  } else {
    result[4] += 0.14905374;
  }
  if ( (data[10].missing != -1) && (data[10].fvalue < (float)2011381248)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)53486)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)51858)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)6238)) {
              result[5] += -0.002367035;
            } else {
              result[5] += 0.0375874;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)20615)) {
              result[5] += 0.040416606;
            } else {
              result[5] += -0.1368575;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1250292736)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)55339)) {
              result[5] += -0.1898728;
            } else {
              result[5] += 0.20730652;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1730588800)) {
              result[5] += 0.25532478;
            } else {
              result[5] += -0.2009484;
            }
          }
        }
      } else {
        result[5] += -0.18099721;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)33361)) {
          result[5] += -0.17893253;
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)44913)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)464605088)) {
              result[5] += -0.1790277;
            } else {
              result[5] += 0.3747718;
            }
          } else {
            result[5] += -0.17380047;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)56324)) {
          result[5] += -0.18176556;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)58670)) {
              result[5] += 0.0848226;
            } else {
              result[5] += 0.25990415;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
              result[5] += -0.0031167334;
            } else {
              result[5] += 0.12935978;
            }
          }
        }
      }
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)59630)) {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)49720)) {
        result[5] += -0.15255196;
      } else {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)54303)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)54038)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)49938)) {
              result[5] += 0.078236744;
            } else {
              result[5] += -0.15014116;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[5] += -0.08393772;
            } else {
              result[5] += 0.13752721;
            }
          }
        } else {
          result[5] += -0.14968626;
        }
      }
    } else {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        result[5] += -0.14145549;
      } else {
        result[5] += 0.1506094;
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)2)) {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[6] += -0.0006953556;
            } else {
              result[6] += -0.11734522;
            }
          } else {
            result[6] += -0.12556751;
          }
        } else {
          result[6] += -0.14599979;
        }
      } else {
        result[6] += -0.14688428;
      }
    } else {
      result[6] += 0.14848615;
    }
  } else {
    result[6] += -0.14989391;
  }
  if ( (data[31].missing != -1) && (data[31].fvalue < (float)16)) {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[7] += -0.011949809;
            } else {
              result[7] += -0.07046058;
            }
          } else {
            result[7] += -0.14714995;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4133719040)) {
              result[7] += -0.13080236;
            } else {
              result[7] += -0.078010164;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)56)) {
              result[7] += 0.113646664;
            } else {
              result[7] += -0.14391018;
            }
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
          result[7] += 0.15079017;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)1879)) {
              result[7] += -0.148989;
            } else {
              result[7] += 0.103384115;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54616)) {
              result[7] += 0.035651796;
            } else {
              result[7] += -0.010890089;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)619)) {
        if ( (data[38].missing != -1) && (data[38].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
            result[7] += -0.15039419;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56)) {
              result[7] += 0.06258577;
            } else {
              result[7] += -0.13881053;
            }
          }
        } else {
          result[7] += 0.08295106;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
            result[7] += 0.43133447;
          } else {
            result[7] += 0.09909007;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60944)) {
            result[7] += -0.12056822;
          } else {
            result[7] += 0.1356512;
          }
        }
      }
    }
  } else {
    result[7] += 0.15060502;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)315)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)88)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)87)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
              result[8] += -3.344442e-05;
            } else {
              result[8] += -0.16000135;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55436)) {
              result[8] += 0.17029351;
            } else {
              result[8] += 0.19634631;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
              result[8] += -0.18452811;
            } else {
              result[8] += -0.1592938;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)223)) {
              result[8] += 0.17257068;
            } else {
              result[8] += -0.04869963;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[8] += -0.11790596;
            } else {
              result[8] += -0.1508865;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)263)) {
              result[8] += 0.01939755;
            } else {
              result[8] += -0.10045424;
            }
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2.0007820129)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
              result[8] += 0.14689188;
            } else {
              result[8] += 0.087090164;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
              result[8] += -0.15268925;
            } else {
              result[8] += 0.09641127;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)46186)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)24872)) {
              result[8] += 0.09124854;
            } else {
              result[8] += 0.15456004;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)151)) {
              result[8] += -0.14712939;
            } else {
              result[8] += 0.14960723;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56899)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
              result[8] += -0.015179555;
            } else {
              result[8] += 0.12174204;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)65016)) {
              result[8] += 0.098892175;
            } else {
              result[8] += -0.03693166;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)1449)) {
          result[8] += -0.16311947;
        } else {
          result[8] += 0.14732276;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
      result[8] += -0.15522969;
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)261)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[8] += 0.15080586;
          } else {
            result[8] += -0.10443818;
          }
        } else {
          result[8] += -0.15903877;
        }
      } else {
        result[8] += -0.15447727;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)14149)) {
    if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)10134)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1942640640)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1860617216)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1811010176)) {
              result[9] += 0.0048289676;
            } else {
              result[9] += -0.1709749;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[9] += -0.06937616;
            } else {
              result[9] += 0.16491109;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)5900)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)5591)) {
              result[9] += -0.05072557;
            } else {
              result[9] += -0.80469304;
            }
          } else {
            result[9] += 0.15605909;
          }
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)11064)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
            result[9] += 0.15882403;
          } else {
            result[9] += -0.075226106;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51748)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)51507)) {
              result[9] += 0.020914357;
            } else {
              result[9] += -0.3091678;
            }
          } else {
            result[9] += 0.16973141;
          }
        }
      }
    } else {
      result[9] += -0.14921874;
    }
  } else {
    result[9] += -0.14961763;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)49198)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)47924)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1030112576)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
              result[10] += 0.0018698053;
            } else {
              result[10] += -0.14966142;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)249908816)) {
              result[10] += 0.022709839;
            } else {
              result[10] += 0.12616092;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)320)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)14653)) {
              result[10] += -0.15201622;
            } else {
              result[10] += -0.11509217;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2013966080)) {
              result[10] += -0.15406078;
            } else {
              result[10] += 0.10432043;
            }
          }
        }
      } else {
        result[10] += -0.15127894;
      }
    } else {
      if ( (data[11].missing != -1) && (data[11].fvalue < (float)43719)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)33113)) {
              result[10] += 0.025708733;
            } else {
              result[10] += -0.041930653;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)331876768)) {
              result[10] += -0.25658992;
            } else {
              result[10] += 0.021482332;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4243005184)) {
              result[10] += 0.06396337;
            } else {
              result[10] += -0.15250802;
            }
          } else {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[10] += -0.08478945;
            } else {
              result[10] += 0.16144922;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)440)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)51238)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)4269145600)) {
              result[10] += 0.087843984;
            } else {
              result[10] += -0.36434403;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)52771)) {
              result[10] += -0.13818888;
            } else {
              result[10] += 0.034284845;
            }
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)56138)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
              result[10] += -0.12726375;
            } else {
              result[10] += 0.13274452;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)992)) {
              result[10] += 0.634724;
            } else {
              result[10] += 0.08140585;
            }
          }
        }
      }
    }
  } else {
    if ( (data[19].missing != -1) && (data[19].fvalue < (float)681)) {
      result[10] += -0.14909898;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        result[10] += 0.084500864;
      } else {
        result[10] += -0.11505621;
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)46326)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)761)) {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)773)) {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[11] += -0.06284614;
            } else {
              result[11] += -0.12941842;
            }
          } else {
            result[11] += -0.1465625;
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)331)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
              result[11] += 0.004968641;
            } else {
              result[11] += -0.032348044;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)484)) {
              result[11] += 0.11415447;
            } else {
              result[11] += -0.020257737;
            }
          }
        }
      } else {
        result[11] += -0.15115348;
      }
    } else {
      result[11] += -0.14961942;
    }
  } else {
    result[11] += -0.14928192;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
            if ( (data[22].missing != -1) && (data[22].fvalue < (float)1736)) {
              result[12] += -0.06971724;
            } else {
              result[12] += -0.13715519;
            }
          } else {
            result[12] += -0.093765706;
          }
        } else {
          result[12] += -0.1481896;
        }
      } else {
        if ( (data[19].missing != -1) && (data[19].fvalue < (float)120)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)107)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)10)) {
              result[12] += -0.0018010464;
            } else {
              result[12] += -0.15347792;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
              result[12] += 0.063370496;
            } else {
              result[12] += 0.15534839;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
            result[12] += -0.15152544;
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)34135)) {
              result[12] += 0.15392382;
            } else {
              result[12] += 0.028212897;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5)) {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)104)) {
            result[12] += -0.15063907;
          } else {
            result[12] += 0.18935382;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)2050)) {
            result[12] += -0.10124399;
          } else {
            result[12] += 0.14568672;
          }
        }
      } else {
        result[12] += -0.15183331;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)222)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)17199752)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)784)) {
            result[12] += -0.19838062;
          } else {
            result[12] += 0.10022674;
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35144)) {
            result[12] += 0.15562235;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)55789)) {
              result[12] += -0.4053325;
            } else {
              result[12] += 0.15195227;
            }
          }
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[12] += -0.0028807581;
            } else {
              result[12] += 0.1039157;
            }
          } else {
            result[12] += -0.15617107;
          }
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)151)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[12] += 0.14777957;
            } else {
              result[12] += -0.25577348;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)121)) {
              result[12] += 0.08592683;
            } else {
              result[12] += -0.20275633;
            }
          }
        }
      }
    } else {
      if ( (data[20].missing != -1) && (data[20].fvalue < (float)39638)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1306)) {
            result[12] += -0.1497706;
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[12] += 0.04991549;
            } else {
              result[12] += -0.14402826;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[12] += -0.14554276;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)4237)) {
              result[12] += 0.14662935;
            } else {
              result[12] += -0.14324233;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2235)) {
          result[12] += 0.14617074;
        } else {
          result[12] += -0.13171366;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)51263)) {
    if ( (data[11].missing != -1) && (data[11].fvalue < (float)5141)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)732651392)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)4385)) {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3365)) {
              result[13] += -0.055034228;
            } else {
              result[13] += 0.036635835;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1878)) {
              result[13] += -0.12390929;
            } else {
              result[13] += 0.05950113;
            }
          }
        } else {
          result[13] += -0.14601229;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)48690)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)304)) {
              result[13] += -0.016590176;
            } else {
              result[13] += 0.0621906;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)749577344)) {
              result[13] += 0.13215822;
            } else {
              result[13] += -0.13422602;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)50334)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)50108)) {
              result[13] += 0.03997262;
            } else {
              result[13] += 0.24462987;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)122)) {
              result[13] += -0.11430875;
            } else {
              result[13] += 0.09680768;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)1)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)20)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1)) {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
              result[13] += -0.0038725769;
            } else {
              result[13] += 0.02659909;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)356)) {
              result[13] += -0.15982074;
            } else {
              result[13] += -0.008427453;
            }
          }
        } else {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)128)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3467)) {
              result[13] += -0.15012711;
            } else {
              result[13] += 0.13412273;
            }
          } else {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)217)) {
              result[13] += 0.31077904;
            } else {
              result[13] += -0.06183711;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)298)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)37)) {
              result[13] += 0.14729854;
            } else {
              result[13] += 0.0368603;
            }
          } else {
            result[13] += 0.14990614;
          }
        } else {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)6690)) {
            result[13] += 0.35076767;
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)167486704)) {
              result[13] += 0.13104042;
            } else {
              result[13] += -0.016170248;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)500)) {
      result[13] += -0.14194949;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)590)) {
        if ( (data[11].missing != -1) && (data[11].fvalue < (float)47957)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2515185920)) {
            result[13] += -0.06802532;
          } else {
            result[13] += -0.010987017;
          }
        } else {
          result[13] += 0.32956427;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)4457)) {
          result[13] += -0.14598258;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)6869)) {
            result[13] += 0.071292974;
          } else {
            result[13] += -0.11857104;
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)103)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)148)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)102)) {
              result[14] += 0.001920204;
            } else {
              result[14] += 0.06746475;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)3859)) {
              result[14] += 0.063999586;
            } else {
              result[14] += -0.15005723;
            }
          }
        } else {
          result[14] += -0.046836935;
        }
      } else {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
          result[14] += -0.16021742;
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
            result[14] += 0.13921034;
          } else {
            result[14] += -0.1429659;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)108)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)104)) {
          result[14] += 0.15265015;
        } else {
          if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
            result[14] += -0.1028229;
          } else {
            result[14] += 0.1404999;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)109)) {
          result[14] += -0.15134731;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)150)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)17)) {
              result[14] += 0.14511177;
            } else {
              result[14] += -0.0036999267;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)103)) {
              result[14] += -0.13414201;
            } else {
              result[14] += 0.041411288;
            }
          }
        }
      }
    }
  } else {
    result[14] += -0.14906085;
  }
  if ( (data[20].missing != -1) && (data[20].fvalue < (float)2477)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4321)) {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
              result[0] += -0.0030753212;
            } else {
              result[0] += 0.01586147;
            }
          } else {
            result[0] += -0.1465698;
          }
        } else {
          result[0] += -0.1496885;
        }
      } else {
        if ( (data[16].missing != -1) && (data[16].fvalue < (float)33042)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)32794)) {
            if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
              result[0] += 0.023494842;
            } else {
              result[0] += -0.082061134;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
              result[0] += -0.14734626;
            } else {
              result[0] += 0.21261714;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)57938)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)33290)) {
              result[0] += 0.0066059115;
            } else {
              result[0] += -0.10245895;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)514242560)) {
              result[0] += 0.117629774;
            } else {
              result[0] += 0.018248143;
            }
          }
        }
      }
    } else {
      result[0] += -0.14854059;
    }
  } else {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1453306624)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
        result[0] += 0.18398961;
      } else {
        result[0] += -0.141142;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)4803)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1462853888)) {
          result[0] += 0.15191226;
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2209388032)) {
            result[0] += -0.14167936;
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[0] += -0.09625857;
            } else {
              result[0] += 0.14841995;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)3771627008)) {
          result[0] += -0.13971728;
        } else {
          result[0] += 0.048163775;
        }
      }
    }
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)80)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)2)) {
      result[1] += -0.12913167;
    } else {
      result[1] += -0.068216816;
    }
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)43594)) {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)42630)) {
        if ( (data[20].missing != -1) && (data[20].fvalue < (float)0.00039800000377)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)35398)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)1851)) {
              result[1] += 0.004260497;
            } else {
              result[1] += -0.06838352;
            }
          } else {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)40794)) {
              result[1] += 0.0674816;
            } else {
              result[1] += -0.02877356;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)332)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)278)) {
              result[1] += -0.032157797;
            } else {
              result[1] += 0.031288028;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)408)) {
              result[1] += 0.0712302;
            } else {
              result[1] += 0.0021809288;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)35344664)) {
          if ( (data[11].missing != -1) && (data[11].fvalue < (float)11619)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)419)) {
              result[1] += -0.045699403;
            } else {
              result[1] += 0.13736157;
            }
          } else {
            if ( (data[11].missing != -1) && (data[11].fvalue < (float)38752)) {
              result[1] += 0.33584332;
            } else {
              result[1] += -0.016709968;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)3799532800)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2371757312)) {
              result[1] += -0.07230562;
            } else {
              result[1] += -0.15522829;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)3940550912)) {
              result[1] += 0.14690016;
            } else {
              result[1] += -0.10619938;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)18)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)2)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)49002)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1)) {
              result[1] += 0.09082261;
            } else {
              result[1] += 1.2503109;
            }
          } else {
            if ( (data[20].missing != -1) && (data[20].fvalue < (float)2)) {
              result[1] += 0.15487593;
            } else {
              result[1] += -0.097545914;
            }
          }
        } else {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)56179)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)54077)) {
              result[1] += 0.021250846;
            } else {
              result[1] += 0.08062228;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)279)) {
              result[1] += -0.15178838;
            } else {
              result[1] += 0.054687236;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)60986)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1893026944)) {
              result[1] += 0.009606961;
            } else {
              result[1] += -0.028895391;
            }
          } else {
            result[1] += -0.15047026;
          }
        } else {
          result[1] += -0.14952147;
        }
      }
    }
  }
  if ( (data[17].missing != -1) && (data[17].fvalue < (float)2)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)350)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)653)) {
        if ( (data[0].missing != -1) && (data[0].fvalue < (float)1)) {
          result[2] += -0.14375702;
        } else {
          result[2] += -0.108192734;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)76471912)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)18755)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)256)) {
              result[2] += 0.02452117;
            } else {
              result[2] += -0.14547034;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)19078)) {
              result[2] += 0.3684432;
            } else {
              result[2] += 0.016616741;
            }
          }
        } else {
          result[2] += -0.122091725;
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)364)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1060)) {
          result[2] += 0.0655938;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1963)) {
            result[2] += -0.03613676;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2568)) {
              result[2] += 0.07644121;
            } else {
              result[2] += 0.024293866;
            }
          }
        }
      } else {
        result[2] += 0.14914976;
      }
    }
  } else {
    result[2] += -0.1498373;
  }
}

