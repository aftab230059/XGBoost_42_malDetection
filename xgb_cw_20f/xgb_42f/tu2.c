
#include "header.h"

void predict_unit2(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15180391;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.1764966;
    } else {
      result[4] += -0.14762564;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.119800314;
            } else {
              result[5] += -0.15150318;
            }
          } else {
            result[5] += -0.15185979;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15169555;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.08066626;
            } else {
              result[5] += -0.15105784;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.09092963;
        } else {
          result[5] += -0.044561625;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
              result[5] += 0.093167536;
            } else {
              result[5] += 0.0052730897;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
              result[5] += 0.19407111;
            } else {
              result[5] += 0.11856034;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += -0.01708249;
            } else {
              result[5] += -0.14494368;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
              result[5] += 0.089575164;
            } else {
              result[5] += 0.1479076;
            }
          }
        }
      } else {
        result[5] += -0.15150483;
      }
    }
  } else {
    result[5] += 0.22178942;
  }
  if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.012493786;
            } else {
              result[6] += -0.15057683;
            }
          } else {
            result[6] += -0.15234652;
          }
        } else {
          result[6] += -0.15149298;
        }
      } else {
        result[6] += -0.15151994;
      }
    } else {
      result[6] += -0.15185152;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[6] += 0.20310836;
    } else {
      result[6] += -0.1476082;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
              result[7] += 0.078088194;
            } else {
              result[7] += 0.17623086;
            }
          } else {
            result[7] += -0.17306218;
          }
        } else {
          result[7] += -0.15170059;
        }
      } else {
        result[7] += -0.15174024;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.11112038;
            } else {
              result[7] += -0.15293965;
            }
          } else {
            result[7] += 0.2145478;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 2.987074;
            } else {
              result[7] += -0.14217831;
            }
          } else {
            result[7] += -0.15219398;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.15080199;
        } else {
          result[7] += -0.0067682513;
        }
      }
    }
  } else {
    if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.16874857;
            } else {
              result[7] += -0.1672445;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.2387168;
            } else {
              result[7] += -0.15393141;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.1760863;
            } else {
              result[7] += 0.16634011;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[7] += -0.15160432;
            } else {
              result[7] += -0.18962987;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[7] += -0.17081106;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[7] += -0.06614476;
            } else {
              result[7] += 0.0014959994;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.15013207;
            } else {
              result[7] += 0.052826032;
            }
          } else {
            result[7] += 0.17988446;
          }
        }
      }
    } else {
      result[7] += -0.15160917;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[8] += -0.12617862;
          } else {
            result[8] += -0.15150547;
          }
        } else {
          result[8] += -0.15153077;
        }
      } else {
        result[8] += -0.12669647;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.059672777;
            } else {
              result[8] += -0.14542393;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.2140746;
            } else {
              result[8] += 0.11517597;
            }
          }
        } else {
          result[8] += -0.15247159;
        }
      } else {
        result[8] += -0.151923;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[8] += -0.15166739;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.039582536;
            } else {
              result[8] += 0.14912926;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.04752687;
            } else {
              result[8] += -0.15238062;
            }
          }
        } else {
          result[8] += -0.15219752;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.011922968;
            } else {
              result[8] += -0.13681765;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.099133834;
            } else {
              result[8] += -0.15178268;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
              result[8] += -0.15072617;
            } else {
              result[8] += 0.11520913;
            }
          } else {
            result[8] += 0.13297234;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.11092774;
            } else {
              result[9] += -0.15214382;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.20639111;
            } else {
              result[9] += -0.15105203;
            }
          }
        } else {
          result[9] += -0.15183544;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.07543494;
        } else {
          result[9] += 0.066084825;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.15243265;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.16404346;
            } else {
              result[9] += 0.18193522;
            }
          }
        } else {
          result[9] += -0.1498631;
        }
      } else {
        result[9] += -0.15168926;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.17610571;
      } else {
        result[9] += -0.14646935;
      }
    } else {
      result[9] += -0.15127699;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.06401774;
            } else {
              result[10] += -0.15157795;
            }
          } else {
            result[10] += -0.15159066;
          }
        } else {
          result[10] += -0.15196599;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.021659486;
        } else {
          result[10] += 0.052558944;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
              result[10] += 0.14987351;
            } else {
              result[10] += -0.15383692;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[10] += 0.41540834;
            } else {
              result[10] += 0.18627882;
            }
          }
        } else {
          result[10] += -0.15044595;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.1497381;
            } else {
              result[10] += 0.18285912;
            }
          } else {
            result[10] += -0.15200551;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.17296633;
            } else {
              result[10] += -0.1497365;
            }
          } else {
            result[10] += -0.15101466;
          }
        }
      }
    }
  } else {
    result[10] += -0.15168427;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[11] += -0.14929307;
          } else {
            result[11] += -0.13303073;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.046287544;
            } else {
              result[11] += 0.12701583;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.23931931;
            } else {
              result[11] += -0.15197593;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15183064;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.05062738;
            } else {
              result[11] += 0.0719871;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.15319219;
            } else {
              result[11] += -0.14483498;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.08163377;
            } else {
              result[11] += 0.23041861;
            }
          } else {
            result[11] += -0.15045658;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[11] += -0.15753427;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.2086419;
            } else {
              result[11] += -0.14054602;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.19612394;
            } else {
              result[11] += 0.14997159;
            }
          } else {
            result[11] += -0.18452762;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.070827596;
            } else {
              result[11] += 0.18397833;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += 0.025865808;
            } else {
              result[11] += -0.12398561;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.15170765;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[12] += -0.12900034;
          } else {
            result[12] += -0.14227132;
          }
        } else {
          result[12] += -0.1516006;
        }
      } else {
        result[12] += -0.15162623;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.09060224;
            } else {
              result[12] += -0.031650163;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += 0.12018307;
            } else {
              result[12] += -0.1525405;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1509554;
            } else {
              result[12] += 0.20165463;
            }
          } else {
            result[12] += -0.15580298;
          }
        }
      } else {
        result[12] += -0.151782;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15164314;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[12] += 0.11027289;
        } else {
          result[12] += 0.28842232;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += 0.18510412;
          } else {
            result[12] += -0.13001396;
          }
        } else {
          result[12] += -0.15154073;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.11689962;
            } else {
              result[12] += 0.15235585;
            }
          } else {
            result[12] += -0.15162946;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.13699165;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.19048211;
            } else {
              result[12] += -0.11952522;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.119370244;
            } else {
              result[13] += -0.15168437;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += 0.130041;
            } else {
              result[13] += -0.04595992;
            }
          }
        } else {
          result[13] += -0.15150675;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15156612;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.2040176;
            } else {
              result[13] += -0.10952782;
            }
          }
        } else {
          result[13] += 0.1779141;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.06381569;
            } else {
              result[13] += -0.17938042;
            }
          } else {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[13] += -0.09207643;
            } else {
              result[13] += 0.23324965;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[13] += -0.15814446;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.28611463;
            } else {
              result[13] += 0.049679756;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15081657;
            } else {
              result[13] += 0.12124378;
            }
          } else {
            result[13] += -0.15159878;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14308752;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
              result[13] += 0.30679095;
            } else {
              result[13] += 0.17183656;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.18393233;
            } else {
              result[13] += -0.13931614;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.2126864;
            } else {
              result[13] += -0.12943673;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[13] += 0.19544044;
          } else {
            result[13] += 0.1762721;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.16154498;
          } else {
            result[13] += 0.17957665;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.049089756;
            } else {
              result[13] += 0.16543363;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.0714845;
            } else {
              result[13] += 0.20416756;
            }
          }
        }
      }
    } else {
      result[13] += -0.14868915;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += 0.00051192695;
            } else {
              result[14] += -0.15102121;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.10550875;
            } else {
              result[14] += -0.06301397;
            }
          }
        } else {
          result[14] += -0.15149495;
        }
      } else {
        result[14] += -0.15151994;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.018181263;
            } else {
              result[14] += 0.08643816;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.17892298;
            } else {
              result[14] += 0.046028037;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.15027244;
            } else {
              result[14] += 0.1409618;
            }
          } else {
            result[14] += 0.33243728;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15119961;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14744577;
            } else {
              result[14] += -0.022351362;
            }
          }
        } else {
          result[14] += -0.15171447;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)303)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[14] += -0.15165223;
            } else {
              result[14] += -0.12443878;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.075558744;
            } else {
              result[14] += -0.14973627;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.17996706;
            } else {
              result[14] += -0.17154118;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.08968211;
            } else {
              result[14] += -0.14958371;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          result[14] += 0.36978164;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
              result[14] += -0.085717574;
            } else {
              result[14] += 0.074003465;
            }
          } else {
            result[14] += -0.14857611;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[14] += 0.06223814;
            } else {
              result[14] += -0.15182295;
            }
          } else {
            result[14] += -0.15184869;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.19645382;
            } else {
              result[14] += -0.122394614;
            }
          } else {
            result[14] += -0.17072774;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.14472628;
            } else {
              result[14] += -0.15157703;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.34706855;
            } else {
              result[14] += -0.14938214;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.07170471;
          } else {
            result[14] += 0.17833684;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.029348796;
            } else {
              result[0] += -0.14500917;
            }
          } else {
            result[0] += -0.15108229;
          }
        } else {
          result[0] += -0.15110919;
        }
      } else {
        result[0] += -0.15156868;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += -0.006705906;
      } else {
        result[0] += 0.032768264;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[0] += -0.16696669;
            } else {
              result[0] += 0.014606688;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[0] += 0.25366044;
            } else {
              result[0] += 0.10404513;
            }
          }
        } else {
          result[0] += -0.15309079;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            result[0] += 0.17338367;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.38514888;
            } else {
              result[0] += 0.17414144;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            result[0] += -0.16575806;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.17100061;
            } else {
              result[0] += 0.3283939;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[0] += -0.15122713;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.04362224;
            } else {
              result[0] += 0.23212539;
            }
          } else {
            result[0] += -0.15125352;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.150017;
            } else {
              result[0] += -0.032069486;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.04583613;
            } else {
              result[0] += 0.3064965;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.17025918;
          } else {
            result[0] += -0.12175574;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.1508144;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[1] += 0.06420548;
            } else {
              result[1] += -0.32070956;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.054525603;
            } else {
              result[1] += 0.0836171;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[1] += 0.2600211;
            } else {
              result[1] += 0.1731796;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.143095;
            } else {
              result[1] += 0.098393984;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            result[1] += -0.117856;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[1] += 0.04644081;
            } else {
              result[1] += -0.09790924;
            }
          }
        } else {
          result[1] += -0.15056059;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.13883385;
            } else {
              result[1] += 0.0010198369;
            }
          } else {
            result[1] += 0.22155921;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.15118763;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.14368938;
            } else {
              result[1] += 0.30062068;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[1] += 0.014290708;
            } else {
              result[1] += -0.069140434;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[1] += 0.09727332;
            } else {
              result[1] += 0.052279618;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += -0.028320132;
            } else {
              result[1] += -0.1511443;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[1] += -0.03955117;
            } else {
              result[1] += -0.14854556;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            result[1] += -0.15414503;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.21174456;
            } else {
              result[1] += -0.16258574;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.18458049;
            } else {
              result[1] += 0.0729581;
            }
          } else {
            result[1] += -0.15067537;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.1513035;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += -0.08544614;
            } else {
              result[1] += 0.23595192;
            }
          } else {
            result[1] += -0.14724745;
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15140286;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.15463287;
      } else {
        result[2] += -0.15014993;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)17886)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11049)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
              result[2] += 0.052298106;
            } else {
              result[2] += 0.10215745;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
              result[2] += -0.13866565;
            } else {
              result[2] += 0.073210895;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)18398)) {
            result[2] += -0.0979063;
          } else {
            result[2] += 0.03399605;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)22837)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)22552)) {
              result[2] += 0.11098714;
            } else {
              result[2] += -0.0008177565;
            }
          } else {
            result[2] += 0.19473897;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30252)) {
              result[2] += 0.052436724;
            } else {
              result[2] += -0.12307107;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)31053)) {
              result[2] += 0.20283414;
            } else {
              result[2] += 0.08646976;
            }
          }
        }
      }
    } else {
      result[2] += 0.16908771;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15143658;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15164253;
            } else {
              result[3] += 0.17170662;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[3] += 0.2537832;
            } else {
              result[3] += 0.16892853;
            }
          }
        } else {
          result[3] += -0.1499512;
        }
      } else {
        result[3] += -0.15164767;
      }
    } else {
      result[3] += -0.15143281;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15138315;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.16920096;
    } else {
      result[4] += -0.14600132;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.11458277;
            } else {
              result[5] += -0.1510839;
            }
          } else {
            result[5] += -0.15145744;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15129535;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.06795618;
            } else {
              result[5] += -0.15052986;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.08294675;
        } else {
          result[5] += -0.037749134;
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
              result[5] += 0.07985076;
            } else {
              result[5] += 0.2187892;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
              result[5] += -0.070061326;
            } else {
              result[5] += 0.041403256;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.08996034;
            } else {
              result[5] += 0.18281183;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
              result[5] += -0.080450326;
            } else {
              result[5] += 0.100341514;
            }
          }
        }
      } else {
        result[5] += -0.15108213;
      }
    }
  } else {
    result[5] += 0.21014707;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0083403345;
            } else {
              result[6] += -0.14899667;
            }
          } else {
            result[6] += -0.15168619;
          }
        } else {
          result[6] += -0.15107377;
        }
      } else {
        result[6] += -0.1511001;
      }
    } else {
      if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
        result[6] += 0.26150313;
      } else {
        result[6] += 0.18776819;
      }
    }
  } else {
    result[6] += -0.15145159;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.05908868;
            } else {
              result[7] += -0.16673067;
            }
          } else {
            result[7] += 0.16882917;
          }
        } else {
          result[7] += -0.15123023;
        }
      } else {
        result[7] += -0.15127541;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.105197996;
            } else {
              result[7] += -0.15224715;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[7] += 0.26291183;
            } else {
              result[7] += -0.15166372;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[7] += -0.14986378;
          } else {
            result[7] += 0.007256547;
          }
        }
      } else {
        result[7] += 0.20091316;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.17117754;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[7] += -0.18738571;
          } else {
            result[7] += -0.16677475;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.13388398;
            } else {
              result[7] += 0.036496274;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.19032027;
            } else {
              result[7] += 0.17171001;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.16496238;
            } else {
              result[7] += -0.16476303;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.20441963;
            } else {
              result[7] += -0.15309319;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[7] += 0.16880468;
            } else {
              result[7] += 0.15576175;
            }
          } else {
            result[7] += -0.16365558;
          }
        }
      } else {
        result[7] += -0.1511427;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            result[8] += -0.12167967;
          } else {
            result[8] += -0.15108155;
          }
        } else {
          result[8] += -0.15110849;
        }
      } else {
        result[8] += -0.12201952;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[8] += 0.037772156;
            } else {
              result[8] += 0.24249034;
            }
          } else {
            result[8] += -0.15958767;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[8] += 0.17748246;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.29633114;
            } else {
              result[8] += -0.15185995;
            }
          }
        }
      } else {
        result[8] += -0.1514486;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
      result[8] += -0.15125816;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.05268984;
            } else {
              result[8] += 0.13889885;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.06222838;
            } else {
              result[8] += -0.15171218;
            }
          }
        } else {
          result[8] += -0.15171234;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.025192572;
            } else {
              result[8] += -0.13178058;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.08358462;
            } else {
              result[8] += -0.15131888;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)307)) {
              result[8] += -0.14999191;
            } else {
              result[8] += 0.110329635;
            }
          } else {
            result[8] += 0.121942334;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.10003225;
            } else {
              result[9] += -0.15171294;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.19419512;
            } else {
              result[9] += -0.14974767;
            }
          }
        } else {
          result[9] += -0.15143302;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.063736185;
        } else {
          result[9] += 0.053002577;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.15160608;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.1521074;
            } else {
              result[9] += 0.17278793;
            }
          } else {
            result[9] += -0.14895637;
          }
        }
      } else {
        result[9] += -0.1512908;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.16880943;
      } else {
        result[9] += -0.14458585;
      }
    } else {
      result[9] += -0.15077792;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.052325163;
            } else {
              result[10] += -0.15113753;
            }
          } else {
            result[10] += -0.15115462;
          }
        } else {
          result[10] += -0.15155767;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.02244054;
        } else {
          result[10] += 0.04452227;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[10] += 0.112337425;
            } else {
              result[10] += -0.15260896;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[10] += -0.13866478;
            } else {
              result[10] += 0.20877051;
            }
          }
        } else {
          result[10] += -0.15151447;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15063228;
            } else {
              result[10] += 0.17241785;
            }
          } else {
            result[10] += -0.15152243;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[10] += -0.080039576;
            } else {
              result[10] += -0.15100665;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.17122887;
            } else {
              result[10] += -0.102910854;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15126692;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[11] += -0.14536256;
            } else {
              result[11] += -0.15111059;
            }
          } else {
            result[11] += -0.12922096;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
              result[11] += 0.04463056;
            } else {
              result[11] += 0.15011877;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.22733498;
            } else {
              result[11] += -0.15150645;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15144591;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += -0.043898124;
            } else {
              result[11] += 0.05961133;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.1403233;
            } else {
              result[11] += -0.14243147;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[11] += 0.08362913;
            } else {
              result[11] += 1.0771011;
            }
          } else {
            result[11] += -0.15179953;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.12167665;
            } else {
              result[11] += -0.15291989;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.17744586;
            } else {
              result[11] += 0.10010142;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.0055101444;
            } else {
              result[11] += 0.084954396;
            }
          } else {
            result[11] += -0.14867601;
          }
        } else {
          result[11] += -0.16230717;
        }
      }
    }
  } else {
    result[11] += -0.15130582;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[12] += -0.124749176;
          } else {
            result[12] += -0.13981532;
          }
        } else {
          result[12] += -0.151155;
        }
      } else {
        result[12] += -0.15118197;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.030765884;
            } else {
              result[12] += -0.15166607;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.1547718;
            } else {
              result[12] += 0.1788214;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.15028523;
            } else {
              result[12] += 0.18222144;
            }
          } else {
            result[12] += -0.15517381;
          }
        }
      } else {
        result[12] += -0.15132244;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15121114;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[12] += 0.09374193;
        } else {
          result[12] += 0.23443154;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.15861283;
            } else {
              result[12] += 0.177008;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[12] += -0.07682543;
            } else {
              result[12] += -0.14041886;
            }
          }
        } else {
          result[12] += -0.15085605;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.10791492;
            } else {
              result[12] += 0.13772891;
            }
          } else {
            result[12] += -0.15121618;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.13255744;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[12] += 0.17276314;
            } else {
              result[12] += -0.11522273;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.11154414;
            } else {
              result[13] += -0.1512348;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.056163207;
            } else {
              result[13] += -0.12237894;
            }
          }
        } else {
          result[13] += -0.1510005;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15113807;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.18888712;
            } else {
              result[13] += -0.10309809;
            }
          }
        } else {
          result[13] += 0.16089514;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08884645;
            } else {
              result[13] += -0.16209121;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.14104177;
            } else {
              result[13] += 0.21445395;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[13] += -0.16347587;
            } else {
              result[13] += -0.06548674;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[13] += -0.24251775;
            } else {
              result[13] += -0.14254673;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15005349;
            } else {
              result[13] += 0.09357026;
            }
          } else {
            result[13] += -0.1511949;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[13] += -0.14010814;
          } else {
            result[13] += 0.21573816;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.17393236;
            } else {
              result[13] += -0.13645178;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.20258643;
            } else {
              result[13] += -0.12271003;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            result[13] += 0.18560037;
          } else {
            result[13] += 0.16908845;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.16073571;
          } else {
            result[13] += 0.16843304;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.04293052;
            } else {
              result[13] += 0.15549937;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.06638351;
            } else {
              result[13] += 0.19312309;
            }
          }
        }
      }
    } else {
      result[13] += -0.14756118;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += 0.0015876843;
            } else {
              result[14] += -0.14942823;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.09848024;
            } else {
              result[14] += -0.05557333;
            }
          }
        } else {
          result[14] += -0.15107337;
        }
      } else {
        result[14] += -0.1511001;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.016417103;
            } else {
              result[14] += -0.14846614;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.16940698;
            } else {
              result[14] += 0.035609473;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.14993198;
            } else {
              result[14] += 0.12365789;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += 0.35504478;
            } else {
              result[14] += -0.085168764;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.15056276;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14456803;
            } else {
              result[14] += -0.003008133;
            }
          }
        } else {
          result[14] += -0.15123895;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += -0.15124747;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.08851064;
            } else {
              result[14] += -0.15143147;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[14] += 0.16831903;
            } else {
              result[14] += 0.044821657;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.091343336;
            } else {
              result[14] += -0.15070052;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.2747499;
            } else {
              result[14] += -0.107977316;
            }
          } else {
            result[14] += -0.15089062;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 1.5177861;
            } else {
              result[14] += -0.15168613;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14914133;
            } else {
              result[14] += -0.050280638;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.05628778;
            } else {
              result[14] += -0.15305024;
            }
          } else {
            result[14] += -0.15129723;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.18840258;
            } else {
              result[14] += -0.11664241;
            }
          } else {
            result[14] += -0.16625172;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.021838471;
            } else {
              result[14] += -0.15121254;
            }
          } else {
            result[14] += -0.15117739;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.06110382;
          } else {
            result[14] += 0.15672901;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.024903335;
            } else {
              result[0] += -0.14326335;
            }
          } else {
            result[0] += -0.15074596;
          }
        } else {
          result[0] += -0.1507762;
        }
      } else {
        result[0] += -0.15126657;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += -0.002510474;
      } else {
        result[0] += 0.028856928;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[0] += -0.15784411;
            } else {
              result[0] += 0.0076373117;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[0] += 0.20728055;
            } else {
              result[0] += 0.081565015;
            }
          }
        } else {
          result[0] += -0.15193279;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            result[0] += 0.17111248;
          } else {
            result[0] += -0.16269918;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[0] += 0.16610105;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[0] += 0.3409044;
            } else {
              result[0] += 0.20862733;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[0] += -0.15096262;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.14442198;
            } else {
              result[0] += 0.16997208;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.03488252;
            } else {
              result[0] += 0.20422378;
            }
          } else {
            result[0] += -0.15092593;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.1492647;
            } else {
              result[0] += -0.022749742;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.04148371;
            } else {
              result[0] += 0.2547004;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.164632;
          } else {
            result[0] += -0.11605751;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.15060359;
      } else {
        result[1] += -0.12683523;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[1] += 0.051538117;
            } else {
              result[1] += -0.2659548;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.04348607;
            } else {
              result[1] += 0.09575405;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[1] += 0.17432532;
            } else {
              result[1] += -0.13074382;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += -0.13921356;
            } else {
              result[1] += 0.08916161;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[1] += -0.0985314;
            } else {
              result[1] += 0.04574552;
            }
          } else {
            result[1] += -0.11703361;
          }
        } else {
          result[1] += -0.14993766;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.13466562;
            } else {
              result[1] += 0.0068827453;
            }
          } else {
            result[1] += 0.19609565;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[1] += -0.1508795;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.21269329;
            } else {
              result[1] += -0.14724714;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[1] += 0.009094704;
            } else {
              result[1] += -0.06441446;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.063113585;
            } else {
              result[1] += 0.031266876;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[1] += -0.1507617;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[1] += -0.027434027;
            } else {
              result[1] += -0.1460218;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[1] += 0.05597992;
            } else {
              result[1] += 0.13479298;
            }
          } else {
            result[1] += -0.1500987;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += -0.15619934;
            } else {
              result[1] += -0.065357596;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += -0.0039044712;
            } else {
              result[1] += 0.19226918;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          result[1] += -0.15093528;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += -0.08018225;
            } else {
              result[1] += 0.21769719;
            }
          } else {
            result[1] += -0.1445927;
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.1510821;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.14140561;
      } else {
        result[2] += -0.14951156;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
              result[2] += 0.067119546;
            } else {
              result[2] += 0.14218234;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.06387334;
            } else {
              result[2] += -0.05026105;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            result[2] += 0.16927804;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
              result[2] += 0.049333863;
            } else {
              result[2] += 0.14940798;
            }
          }
        }
      } else {
        result[2] += -0.027147133;
      }
    } else {
      result[2] += 0.16395378;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15113236;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15120429;
            } else {
              result[3] += 0.1662202;
            }
          } else {
            result[3] += 0.16392234;
          }
        } else {
          result[3] += -0.14912376;
        }
      } else {
        result[3] += -0.15124805;
      }
    } else {
      result[3] += -0.1511335;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15105616;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.16404702;
    } else {
      result[4] += -0.14409256;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.10915575;
            } else {
              result[5] += -0.15075266;
            }
          } else {
            result[5] += -0.15115549;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15098831;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.057069812;
            } else {
              result[5] += -0.15004364;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.07510985;
        } else {
          result[5] += -0.031712983;
        }
      }
    } else {
      result[5] += 0.1863908;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
              result[5] += 0.076402485;
            } else {
              result[5] += 0.2615009;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
              result[5] += 0.12906034;
            } else {
              result[5] += 0.03928161;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += -0.092257746;
            } else {
              result[5] += 0.0033895695;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.024798775;
            } else {
              result[5] += 0.058323313;
            }
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)50397)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)49680)) {
              result[5] += 0.13184683;
            } else {
              result[5] += -0.014686274;
            }
          } else {
            result[5] += 0.24308577;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
              result[5] += 0.054855138;
            } else {
              result[5] += -0.10547073;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
              result[5] += 0.13003792;
            } else {
              result[5] += 0.06853923;
            }
          }
        }
      }
    } else {
      result[5] += -0.15074734;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.007551334;
            } else {
              result[6] += -0.14745569;
            }
          } else {
            result[6] += -0.15109871;
          }
        } else {
          result[6] += -0.15073921;
        }
      } else {
        result[6] += -0.15076905;
      }
    } else {
      result[6] += 0.18513139;
    }
  } else {
    result[6] += -0.15115237;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.044253778;
            } else {
              result[7] += -0.16085151;
            }
          } else {
            result[7] += 0.16354103;
          }
        } else {
          result[7] += -0.15086026;
        }
      } else {
        result[7] += -0.1509101;
      }
    } else {
      if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.09937362;
            } else {
              result[7] += -0.15156043;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
              result[7] += 0.22568735;
            } else {
              result[7] += -0.15116352;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[7] += -0.14900157;
          } else {
            result[7] += 0.019701762;
          }
        }
      } else {
        result[7] += 0.19102338;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.16561711;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.18015286;
            } else {
              result[7] += -0.16376856;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[7] += 0.18035644;
            } else {
              result[7] += -0.042009134;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.123122215;
            } else {
              result[7] += 0.023546144;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.17571047;
            } else {
              result[7] += 0.16603455;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.14928624;
            } else {
              result[7] += 0.16365483;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[7] += -0.15326227;
            } else {
              result[7] += 0.2076334;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.15237415;
            } else {
              result[7] += 0.08472217;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += -0.15007988;
            } else {
              result[7] += 0.16184542;
            }
          }
        }
      } else {
        result[7] += -0.1507361;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[8] += -0.14614433;
            } else {
              result[8] += -0.117076114;
            }
          } else {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[8] += 0.008319968;
            } else {
              result[8] += -0.15094316;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.3244594;
            } else {
              result[8] += -0.1356837;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[8] += 0.16966689;
            } else {
              result[8] += 0.3256973;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.15330325;
            } else {
              result[8] += -0.051950622;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[8] += -0.15099312;
            } else {
              result[8] += -0.19898114;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += -0.15078484;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.1704116;
            } else {
              result[8] += -0.10752333;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.09979296;
            } else {
              result[8] += -0.08674004;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.19175194;
            } else {
              result[8] += -0.15796289;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.19481418;
            } else {
              result[8] += 0.288391;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.26238006;
            } else {
              result[8] += 0.18834224;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15526524;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14867334;
            } else {
              result[8] += 0.17034385;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.26408002;
            } else {
              result[8] += -0.15190056;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.1509781;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)201385408)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[9] += -0.08712311;
            } else {
              result[9] += -0.15136999;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.18617657;
            } else {
              result[9] += -0.14842902;
            }
          }
        } else {
          result[9] += -0.15113182;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[9] += 0.053957578;
        } else {
          result[9] += 0.042720035;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.15079206;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.14095062;
            } else {
              result[9] += 0.16550544;
            }
          } else {
            result[9] += -0.14796944;
          }
        }
      } else {
        result[9] += -0.15099499;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[9] += 0.16364153;
      } else {
        result[9] += -0.14239313;
      }
    } else {
      result[9] += -0.15034063;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += 0.043075465;
            } else {
              result[10] += -0.15078963;
            }
          } else {
            result[10] += -0.15081194;
          }
        } else {
          result[10] += -0.15125759;
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[10] += 0.022207828;
        } else {
          result[10] += 0.03785901;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.07630838;
            } else {
              result[10] += 0.15066355;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.12046256;
            } else {
              result[10] += 0.066300265;
            }
          }
        } else {
          result[10] += -0.15101546;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14971606;
            } else {
              result[10] += 0.16529056;
            }
          } else {
            result[10] += -0.15118118;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += -0.068739176;
            } else {
              result[10] += -0.15150675;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.16573331;
            } else {
              result[10] += -0.09424092;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15094422;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[11] += -0.1432565;
            } else {
              result[11] += -0.15077731;
            }
          } else {
            result[11] += -0.12516323;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.038472455;
            } else {
              result[11] += 0.17011087;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.21511877;
            } else {
              result[11] += -0.1511748;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15113157;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[11] += -0.00647836;
            } else {
              result[11] += 0.14964284;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1473724;
            } else {
              result[11] += -0.087171;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.071972266;
            } else {
              result[11] += -0.15230124;
            }
          } else {
            result[11] += -0.15706572;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.16881752;
            } else {
              result[11] += 0.19584958;
            }
          } else {
            result[11] += -0.16663897;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.17214492;
            } else {
              result[11] += 0.0647972;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.21587387;
            } else {
              result[11] += 0.025263252;
            }
          }
        } else {
          result[11] += -0.15763769;
        }
      }
    }
  } else {
    result[11] += -0.15099972;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[12] += -0.12027744;
          } else {
            result[12] += -0.13721327;
          }
        } else {
          result[12] += -0.15080342;
        }
      } else {
        result[12] += -0.1508334;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.05348936;
            } else {
              result[12] += -0.15153296;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[12] += 0.15640771;
            } else {
              result[12] += 0.012769407;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14961758;
            } else {
              result[12] += 0.16899088;
            }
          } else {
            result[12] += -0.15467316;
          }
        }
      } else {
        result[12] += -0.15095878;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15089749;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[12] += 0.080601536;
        } else {
          result[12] += 0.20127185;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.14381762;
            } else {
              result[12] += 0.17144246;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[12] += -0.06287237;
            } else {
              result[12] += -0.1364508;
            }
          }
        } else {
          result[12] += -0.15026191;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
              result[12] += -0.089228585;
            } else {
              result[12] += 0.23373926;
            }
          } else {
            result[12] += -0.15089853;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.1273739;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += 0.07424797;
            } else {
              result[12] += 0.16933227;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.14402662;
            } else {
              result[13] += -0.15091705;
            }
          } else {
            result[13] += -0.106880695;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.0033197347;
            } else {
              result[13] += 0.92500216;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.13123779;
            } else {
              result[13] += 0.77857006;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.15097156;
            } else {
              result[13] += -0.13538955;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.11975367;
            } else {
              result[13] += 0.814401;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14773713;
            } else {
              result[13] += 0.1334374;
            }
          } else {
            result[13] += -0.15067466;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.08208847;
            } else {
              result[13] += -0.10331791;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.05007654;
            } else {
              result[13] += 0.22916183;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.16302295;
            } else {
              result[13] += -0.2198876;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371699456)) {
              result[13] += -0.15241978;
            } else {
              result[13] += -0.059026945;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
              result[13] += -0.1297031;
            } else {
              result[13] += -0.15120985;
            }
          } else {
            result[13] += 0.008835334;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.1932484;
          } else {
            result[13] += -0.113778695;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.16481093;
            } else {
              result[13] += -0.13369322;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.19634746;
            } else {
              result[13] += -0.113325246;
            }
          }
        } else {
          result[13] += 0.16435269;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.1466879;
            } else {
              result[13] += -0.013554816;
            }
          } else {
            result[13] += 0.15804182;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[13] += 0.0005938739;
            } else {
              result[13] += -0.09039154;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.094088905;
            } else {
              result[13] += 0.18594685;
            }
          }
        }
      }
    } else {
      result[13] += -0.14643756;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += 0.0021508231;
            } else {
              result[14] += -0.14789069;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.09135406;
            } else {
              result[14] += -0.04864543;
            }
          }
        } else {
          result[14] += -0.15073888;
        }
      } else {
        result[14] += -0.15076905;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.012350862;
            } else {
              result[14] += 0.090177536;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += 0.15902507;
            } else {
              result[14] += 0.020513747;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.14919621;
            } else {
              result[14] += 0.1213608;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += -0.086954825;
            } else {
              result[14] += 0.27104846;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.14982538;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14251336;
            } else {
              result[14] += 0.010457357;
            }
          }
        } else {
          result[14] += -0.1508871;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15093988;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.06884084;
            } else {
              result[14] += -0.15105714;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2192098560)) {
              result[14] += 0.06644542;
            } else {
              result[14] += 0.014439824;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.086844414;
            } else {
              result[14] += -0.15019268;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.25241348;
            } else {
              result[14] += -0.09566395;
            }
          } else {
            result[14] += -0.15035152;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.39439288;
            } else {
              result[14] += -0.15092732;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14811501;
            } else {
              result[14] += -0.03345681;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[14] += 0.054010283;
            } else {
              result[14] += -0.15085009;
            }
          } else {
            result[14] += -0.15085332;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.18191148;
            } else {
              result[14] += -0.112855025;
            }
          } else {
            result[14] += -0.16240665;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.027792701;
            } else {
              result[14] += -0.15086228;
            }
          } else {
            result[14] += -0.15086553;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.049573276;
          } else {
            result[14] += 0.13806422;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[0] += 0.020687692;
            } else {
              result[0] += -0.14136197;
            }
          } else {
            result[0] += -0.15047193;
          }
        } else {
          result[0] += -0.15050769;
        }
      } else {
        result[0] += -0.15103632;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[0] += 0.00033372018;
      } else {
        result[0] += 0.025352225;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[0] += -0.14954974;
            } else {
              result[0] += 0.00264994;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3338)) {
              result[0] += 0.19469792;
            } else {
              result[0] += 0.065046;
            }
          }
        } else {
          result[0] += -0.1507248;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            result[0] += 0.16652575;
          } else {
            result[0] += -0.16074501;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[0] += 0.16194244;
          } else {
            result[0] += 0.24804439;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[0] += -0.1506936;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.14248355;
            } else {
              result[0] += 0.15477748;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.024436168;
            } else {
              result[0] += 0.18725061;
            }
          } else {
            result[0] += -0.15066616;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.1484679;
            } else {
              result[0] += -0.01402546;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.033963814;
            } else {
              result[0] += 0.23053215;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.1607653;
          } else {
            result[0] += -0.10989208;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.15019561;
      } else {
        result[1] += -0.12290711;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += 0.039744433;
            } else {
              result[1] += 0.08291845;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.04403817;
            } else {
              result[1] += 0.067302026;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[1] += 0.16866237;
            } else {
              result[1] += 0.065978;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += -0.15172397;
            } else {
              result[1] += 0.3283761;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            result[1] += -0.11779281;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40973)) {
              result[1] += 0.03860931;
            } else {
              result[1] += -0.09665232;
            }
          }
        } else {
          result[1] += -0.1492772;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.15075119;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[1] += 1.721752;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += -0.022072611;
            } else {
              result[1] += -0.14755778;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[1] += -0.26368114;
            } else {
              result[1] += -0.1281225;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.21198948;
            } else {
              result[1] += 0.1190523;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += 0.045302745;
            } else {
              result[1] += 0.13926323;
            }
          } else {
            result[1] += -0.14922464;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[1] += -0.15065405;
        } else {
          result[1] += -0.1596091;
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.08451052;
            } else {
              result[1] += 0.2861221;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[1] += -0.15063307;
            } else {
              result[1] += -0.04217742;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.5768566;
            } else {
              result[1] += 0.17265913;
            }
          } else {
            result[1] += -0.14803456;
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.15082636;
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[2] += 0.1285908;
      } else {
        result[2] += -0.14883299;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)63974)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)62739)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)61981)) {
              result[2] += 0.0654618;
            } else {
              result[2] += -0.034814417;
            }
          } else {
            result[2] += 0.1570738;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
              result[2] += 0.010376628;
            } else {
              result[2] += -0.12534912;
            }
          } else {
            result[2] += 0.09144088;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)4155)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)3906)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.05000396;
            } else {
              result[2] += -0.028484436;
            }
          } else {
            result[2] += -0.16301891;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)27439)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)20714)) {
              result[2] += 0.06321785;
            } else {
              result[2] += 0.12345239;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
              result[2] += -0.10687286;
            } else {
              result[2] += 0.051278252;
            }
          }
        }
      }
    } else {
      result[2] += 0.16023889;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15090013;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15083016;
            } else {
              result[3] += 0.16224733;
            }
          } else {
            result[3] += 0.16016045;
          }
        } else {
          result[3] += -0.14801587;
        }
      } else {
        result[3] += -0.15089777;
      }
    } else {
      result[3] += -0.15089996;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15079235;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.16032267;
    } else {
      result[4] += -0.14177884;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.103631936;
            } else {
              result[5] += -0.15048431;
            }
          } else {
            result[5] += -0.15092698;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15073726;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.044573497;
            } else {
              result[5] += -0.14955895;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.06761899;
        } else {
          result[5] += -0.026443992;
        }
      }
    } else {
      result[5] += 0.17034553;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)60490)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51430)) {
              result[5] += 0.061561387;
            } else {
              result[5] += -0.0008464366;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)54081)) {
              result[5] += 0.21261601;
            } else {
              result[5] += 0.079645365;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)61488)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.0077298614;
            } else {
              result[5] += -0.13069241;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += 0.010568897;
            } else {
              result[5] += 0.12531365;
            }
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
            result[5] += 0.21752682;
          } else {
            result[5] += 0.009345551;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
            result[5] += -0.12197505;
          } else {
            result[5] += 0.12677264;
          }
        }
      }
    } else {
      result[5] += -0.15047503;
    }
  }
}

