
#include "header.h"

void predict_unit3(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += -0.001944053;
        } else {
          result[6] += 0.1583732;
        }
      } else {
        result[6] += -0.15053885;
      }
    } else {
      result[6] += -0.15050441;
    }
  } else {
    result[6] += -0.15093456;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.029213734;
            } else {
              result[7] += -0.11567865;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.12911913;
            } else {
              result[7] += 0.048405126;
            }
          }
        } else {
          result[7] += -0.1504593;
        }
      } else {
        result[7] += -0.15050441;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.09222082;
            } else {
              result[7] += 0.007467335;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
              result[7] += 0.2188152;
            } else {
              result[7] += -0.04728642;
            }
          }
        } else {
          result[7] += -0.15014036;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14759468;
        } else {
          result[7] += 0.0049802084;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.16263083;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[7] += -0.16405743;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[7] += -0.18469875;
            } else {
              result[7] += -0.16852927;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.11409045;
            } else {
              result[7] += 0.010752131;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.16601054;
            } else {
              result[7] += 0.16566087;
            }
          }
        }
      }
    } else {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[7] += 0.15186332;
            } else {
              result[7] += -0.16233644;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.18527731;
            } else {
              result[7] += -0.15314764;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[7] += 0.15998593;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.13214606;
            } else {
              result[7] += 0.15731509;
            }
          }
        }
      } else {
        result[7] += -0.15057063;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[8] += -0.11165293;
            } else {
              result[8] += -0.15054281;
            }
          } else {
            result[8] += -0.15050802;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[8] += 0.025046604;
            } else {
              result[8] += -0.15043408;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[8] += -0.12159206;
            } else {
              result[8] += 0.1630284;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.15101549;
            } else {
              result[8] += -0.044422865;
            }
          } else {
            result[8] += -0.1508261;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += -0.15451764;
          } else {
            result[8] += 0.1633969;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.08438857;
            } else {
              result[8] += -0.069375254;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.18195638;
            } else {
              result[8] += -0.15268645;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.21269588;
            } else {
              result[8] += 0.18466298;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.23051862;
            } else {
              result[8] += 0.1788482;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15474117;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14746518;
            } else {
              result[8] += 0.16493054;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.24275693;
            } else {
              result[8] += -0.15174718;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.15070769;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[9] += 0.055335786;
            } else {
              result[9] += -0.15062882;
            }
          } else {
            result[9] += -0.15057373;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
            result[9] += -0.15107837;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[9] += 0.06231894;
            } else {
              result[9] += -0.14545847;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[9] += 0.1603049;
        } else {
          result[9] += -0.14993094;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.12991902;
          } else {
            result[9] += 0.15686817;
          }
        } else {
          result[9] += -0.14682288;
        }
      } else {
        result[9] += -0.15131699;
      }
    }
  } else {
    result[9] += -0.15075439;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.045329124;
            } else {
              result[10] += -0.115634896;
            }
          } else {
            result[10] += -0.15052512;
          }
        } else {
          result[10] += -0.15064327;
        }
      } else {
        result[10] += -0.15102495;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.02248362;
            } else {
              result[10] += 0.095464624;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.12819546;
            } else {
              result[10] += 0.01522752;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.15097082;
            } else {
              result[10] += 0.04923449;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.14073475;
            } else {
              result[10] += -0.01636067;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.14955895;
            } else {
              result[10] += 0.16269284;
            }
          } else {
            result[10] += -0.15067905;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15250841;
            } else {
              result[10] += -0.056309085;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.16111633;
            } else {
              result[10] += -0.0887893;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15069428;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.11762231;
            } else {
              result[11] += -0.15054345;
            }
          } else {
            result[11] += -0.15050861;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.0233097;
            } else {
              result[11] += 0.0904921;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.20632668;
            } else {
              result[11] += -0.1508946;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15087181;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.015848367;
            } else {
              result[11] += 0.091952585;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.18099752;
            } else {
              result[11] += -0.14910601;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.06352747;
            } else {
              result[11] += -0.15116;
            }
          } else {
            result[11] += -0.16126475;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1650894;
            } else {
              result[11] += 0.1876137;
            }
          } else {
            result[11] += -0.1715822;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[11] += 0.16746077;
            } else {
              result[11] += -0.11355076;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.17154574;
            } else {
              result[11] += -0.5667179;
            }
          }
        } else {
          result[11] += -0.15694506;
        }
      }
    }
  } else {
    result[11] += -0.15078619;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[12] += -0.11922769;
        } else {
          result[12] += -0.15057097;
        }
      } else {
        result[12] += -0.15053393;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.025653198;
            } else {
              result[12] += -0.15096585;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.13056014;
            } else {
              result[12] += 0.18313706;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14936516;
            } else {
              result[12] += 0.19264428;
            }
          } else {
            result[12] += -0.1525805;
          }
        }
      } else {
        result[12] += -0.15060984;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15065126;
      } else {
        result[12] += 0.14213228;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += 0.16482;
          } else {
            result[12] += -0.11595966;
          }
        } else {
          result[12] += -0.14954497;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.1516057;
            } else {
              result[12] += -0.036621675;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.010606796;
            } else {
              result[12] += 0.69069093;
            }
          }
        } else {
          result[12] += -0.15072429;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.12065361;
            } else {
              result[13] += -0.15061042;
            }
          } else {
            result[13] += -0.15067752;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.0051318468;
            } else {
              result[13] += 0.08199533;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.1274084;
            } else {
              result[13] += 0.4628099;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.15000567;
            } else {
              result[13] += 0.14008328;
            }
          } else {
            result[13] += -0.15059271;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.1507345;
            } else {
              result[13] += -0.12991175;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.111943804;
            } else {
              result[13] += 0.46634543;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.068054296;
            } else {
              result[13] += -0.10087892;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[13] += 0.1813246;
            } else {
              result[13] += 0.7910121;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.15910198;
            } else {
              result[13] += -0.20117034;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += -0.033657104;
            } else {
              result[13] += -0.15057598;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.16268872;
          } else {
            result[13] += -0.14936523;
          }
        } else {
          result[13] += -0.15052521;
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.15695715;
            } else {
              result[13] += -0.13107182;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.18942468;
            } else {
              result[13] += -0.10355166;
            }
          }
        } else {
          result[13] += 0.16045894;
        }
      } else {
        result[13] += -0.1316743;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += -0.14653;
        } else {
          result[13] += 0.120294675;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[13] += 0.12482526;
            } else {
              result[13] += -0.12522908;
            }
          } else {
            result[13] += 0.1592572;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.11407179;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.082383044;
            } else {
              result[13] += 0.17509888;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += -0.006558285;
          } else {
            result[14] += -0.11567865;
          }
        } else {
          result[14] += -0.15053885;
        }
      } else {
        result[14] += -0.15050441;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.013683845;
            } else {
              result[14] += -0.14532734;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.14211553;
            } else {
              result[14] += 0.15384601;
            }
          }
        } else {
          result[14] += -0.15020376;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[14] += -0.1323513;
            } else {
              result[14] += 0.17878702;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.20755576;
            } else {
              result[14] += -0.14755693;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.1475157;
            } else {
              result[14] += -0.11896669;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[14] += 0.225806;
            } else {
              result[14] += -0.097800605;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[14] += -0.15057105;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.11409198;
            } else {
              result[14] += -0.1474698;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.1506954;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.06650358;
            } else {
              result[14] += -0.15014273;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.2204889;
            } else {
              result[14] += -0.09407974;
            }
          } else {
            result[14] += -0.14985773;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.23126706;
            } else {
              result[14] += -0.14975272;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14693016;
            } else {
              result[14] += 0.026413247;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.04719392;
            } else {
              result[14] += -0.15527798;
            }
          } else {
            result[14] += -0.15056427;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.17274827;
            } else {
              result[14] += -0.10603203;
            }
          } else {
            result[14] += -0.17198615;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.08887033;
            } else {
              result[14] += -0.15046681;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.14171384;
            } else {
              result[14] += -0.15058446;
            }
          }
        } else {
          result[14] += 0.10689481;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.02455618;
          } else {
            result[0] += -0.10763198;
          }
        } else {
          result[0] += -0.15027839;
        }
      } else {
        result[0] += -0.1503823;
      }
    } else {
      result[0] += -0.15085275;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[0] += 0.057342663;
            } else {
              result[0] += 0.15396416;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
              result[0] += -0.14001985;
            } else {
              result[0] += -0.037458446;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            result[0] += 0.20527342;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += 0.07684202;
            } else {
              result[0] += 0.14503013;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          result[0] += 0.15734515;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += 0.109254576;
            } else {
              result[0] += 0.15573889;
            }
          } else {
            result[0] += 0.17713687;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[0] += -0.1501016;
            } else {
              result[0] += -0.03742902;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.08042318;
            } else {
              result[0] += 0.19052202;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.14476533;
          } else {
            result[0] += 0.15861547;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.15066539;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[0] += -0.10912971;
            } else {
              result[0] += 0.48293197;
            }
          }
        } else {
          result[0] += -0.15043741;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.14926493;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[1] += 0.033529576;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.036633193;
            } else {
              result[1] += 0.0825527;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[1] += 0.22383171;
            } else {
              result[1] += 0.16032264;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[1] += -0.14194329;
            } else {
              result[1] += 0.069954775;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.08688974;
        } else {
          result[1] += -0.14853683;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.15046585;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[1] += 0.024610626;
            } else {
              result[1] += -0.09822108;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
              result[1] += -0.15153232;
            } else {
              result[1] += 0.10116042;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[1] += -0.77699685;
            } else {
              result[1] += -0.11893111;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.19462997;
            } else {
              result[1] += 0.10355604;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.18858887;
            } else {
              result[1] += 0.009877417;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[1] += 0.09217456;
            } else {
              result[1] += -0.14848526;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[1] += -0.15047231;
        } else {
          result[1] += -0.15921329;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.10219137;
            } else {
              result[1] += 0.22364941;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.5048146;
            } else {
              result[1] += 0.1931033;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[1] += -0.15035003;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[1] += 0.16440308;
            } else {
              result[1] += -0.1392855;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.02479638;
        } else {
          result[2] += -0.10820732;
        }
      } else {
        result[2] += -0.15031178;
      }
    } else {
      result[2] += -0.15076293;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.037536457;
      } else {
        result[2] += 0.15709804;
      }
    } else {
      result[2] += -0.14808083;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15073144;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14862184;
          } else {
            result[3] += 0.15855885;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.092038736;
          } else {
            result[3] += 0.15754151;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15093331;
        } else {
          result[3] += 0.16149373;
        }
      }
    } else {
      result[3] += -0.15070358;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15057786;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.08948119;
            } else {
              result[4] += -0.015689306;
            }
          } else {
            result[4] += 0.16200271;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
              result[4] += 0.032102384;
            } else {
              result[4] += -0.005221473;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += 0.037669145;
            } else {
              result[4] += 0.04910942;
            }
          }
        }
      } else {
        result[4] += 0.15716422;
      }
    } else {
      result[4] += 0.15741962;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.013895093;
          } else {
            result[5] += -0.10820732;
          }
        } else {
          result[5] += 0.045737673;
        }
      } else {
        result[5] += -0.15024517;
      }
    } else {
      result[5] += -0.15032841;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.1507608;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15043847;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.01136227;
            } else {
              result[5] += -0.09904463;
            }
          } else {
            result[5] += -0.14902136;
          }
        }
      }
    } else {
      result[5] += 0.15601431;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += -0.0001852269;
        } else {
          result[6] += 0.15472072;
        }
      } else {
        result[6] += -0.15031178;
      }
    } else {
      result[6] += -0.15027934;
    }
  } else {
    result[6] += -0.15076295;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.023180619;
            } else {
              result[7] += -0.10820732;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.118954904;
            } else {
              result[7] += 0.041892603;
            }
          }
        } else {
          result[7] += -0.15022323;
        }
      } else {
        result[7] += -0.15027934;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.08553834;
            } else {
              result[7] += 0.0060982443;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.1201205;
            } else {
              result[7] += -0.14517851;
            }
          }
        } else {
          result[7] += -0.14961469;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14638592;
        } else {
          result[7] += 0.017499888;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15962678;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.161597;
            } else {
              result[7] += -0.17036155;
            }
          } else {
            result[7] += -0.03826765;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.10413284;
            } else {
              result[7] += 0.0033945818;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.1582478;
            } else {
              result[7] += 0.1620371;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.15811457;
            } else {
              result[7] += 0.13511977;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[7] += -0.1565554;
            } else {
              result[7] += -0.17451887;
            }
          }
        } else {
          result[7] += -0.15346521;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.15732174;
            } else {
              result[7] += 0.065049574;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.12578626;
            } else {
              result[7] += 0.15352736;
            }
          }
        } else {
          result[7] += -0.14920525;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[8] += -0.10615129;
            } else {
              result[8] += -0.1502611;
            }
          } else {
            result[8] += -0.15033178;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[8] += 0.0037814614;
            } else {
              result[8] += 0.070196986;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[8] += -0.11323673;
            } else {
              result[8] += 0.15860412;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.15008399;
            } else {
              result[8] += -0.04045725;
            }
          } else {
            result[8] += -0.15063056;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += -0.15412652;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.16026838;
            } else {
              result[8] += -0.08131603;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.075017974;
            } else {
              result[8] += -0.057851788;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[8] += 0.20001008;
            } else {
              result[8] += 0.07660569;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.19266126;
            } else {
              result[8] += 0.17703411;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.22159828;
            } else {
              result[8] += 0.17043355;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15421641;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.1460763;
            } else {
              result[8] += 0.16114904;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.22335294;
            } else {
              result[8] += -0.15113637;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.1505241;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.045710467;
            } else {
              result[9] += -0.1164533;
            }
          } else {
            result[9] += -0.15032452;
          }
        } else {
          result[9] += -0.150399;
        }
      } else {
        result[9] += -0.15093935;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[9] += 0.15763982;
      } else {
        result[9] += -0.14954871;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15073566;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14895566;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.15232015;
          } else {
            result[9] += -0.1454354;
          }
        }
      } else {
        result[9] += -0.15060309;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[10] += 0.038178623;
            } else {
              result[10] += -0.10816022;
            }
          } else {
            result[10] += -0.15028977;
          }
        } else {
          result[10] += -0.15040888;
        }
      } else {
        result[10] += -0.15085068;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            result[10] += 0.08880511;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[10] += -0.15223278;
            } else {
              result[10] += 0.040062584;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.14323938;
            } else {
              result[10] += 0.043594535;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[10] += -0.13744609;
            } else {
              result[10] += 5.407484e-05;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[10] += -0.14893056;
            } else {
              result[10] += 0.15972148;
            }
          } else {
            result[10] += -0.15046456;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.15033534;
            } else {
              result[10] += -0.04649331;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.1578522;
            } else {
              result[10] += -0.08181094;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15048641;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[11] += -0.112648435;
            } else {
              result[11] += -0.15026163;
            }
          } else {
            result[11] += -0.15033233;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.02470675;
            } else {
              result[11] += 0.15474154;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.19654939;
            } else {
              result[11] += -0.15065292;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.1507093;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.0036111672;
            } else {
              result[11] += 0.12839936;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[11] += -0.09604124;
            } else {
              result[11] += 0.051497992;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.056133594;
            } else {
              result[11] += -0.016234651;
            }
          } else {
            result[11] += -0.15810639;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            result[11] += 0.16401446;
          } else {
            result[11] += -0.16506234;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[11] += 0.1614009;
            } else {
              result[11] += -0.10934636;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.1670582;
            } else {
              result[11] += -0.4274341;
            }
          }
        } else {
          result[11] += -0.15733467;
        }
      }
    }
  } else {
    result[11] += -0.15060537;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[12] += -0.114407055;
        } else {
          result[12] += -0.15028407;
        }
      } else {
        result[12] += -0.15035568;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[12] += 0.018913083;
            } else {
              result[12] += 0.15590888;
            }
          } else {
            result[12] += -0.15138991;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14853545;
            } else {
              result[12] += 0.19132316;
            }
          } else {
            result[12] += -0.1522739;
          }
        }
      } else {
        result[12] += -0.15038964;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15047045;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[12] += 0.061656315;
        } else {
          result[12] += 0.14919059;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[12] += 0.16090345;
          } else {
            result[12] += -0.108735465;
          }
        } else {
          result[12] += -0.14885452;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.1201012;
            } else {
              result[12] += 0.057072733;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.4148511;
            } else {
              result[12] += -0.1498109;
            }
          }
        } else {
          result[12] += -0.15050927;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.115925275;
            } else {
              result[13] += -0.15036276;
            }
          } else {
            result[13] += -0.1504379;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.00035787773;
            } else {
              result[13] += 0.17904064;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.12262853;
            } else {
              result[13] += 0.34452268;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14957835;
            } else {
              result[13] += 0.124115184;
            }
          } else {
            result[13] += -0.15024559;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.15055354;
            } else {
              result[13] += -0.12394974;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.101430655;
            } else {
              result[13] += 0.34273833;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.06004219;
            } else {
              result[13] += -0.15809338;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[13] += 0.14863232;
            } else {
              result[13] += 0.7024948;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.1565818;
            } else {
              result[13] += -0.19335282;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.23981959;
            } else {
              result[13] += -0.14913894;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.14793633;
          } else {
            result[13] += -0.14852431;
          }
        } else {
          result[13] += -0.15023927;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.15029873;
            } else {
              result[13] += -0.12789743;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.18510327;
            } else {
              result[13] += -0.09454624;
            }
          }
        } else {
          result[13] += 0.15779814;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.13710782;
            } else {
              result[13] += 0.00016504788;
            }
          } else {
            result[13] += 0.14456397;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[13] += -0.04011511;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.07327392;
            } else {
              result[13] += 0.17188022;
            }
          }
        }
      }
    } else {
      result[13] += -0.14316468;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.0058127614;
            } else {
              result[14] += -0.15020423;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.079127334;
            } else {
              result[14] += 0.14682814;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.1341771;
            } else {
              result[14] += 0.14289045;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.16003524;
            } else {
              result[14] += -0.11460988;
            }
          }
        }
      } else {
        result[14] += -0.15031178;
      }
    } else {
      result[14] += -0.15027934;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.1503219;
            } else {
              result[14] += 0.057201225;
            }
          } else {
            result[14] += -0.1496112;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15051988;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.042722687;
            } else {
              result[14] += -0.149717;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.19718185;
            } else {
              result[14] += -0.14853233;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.046676982;
            } else {
              result[14] += -0.1544802;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
              result[14] += -0.14924626;
            } else {
              result[14] += -0.10118193;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[14] += 0.4609962;
            } else {
              result[14] += -0.12609737;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += 0.07010704;
            } else {
              result[14] += 0.02642054;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.15052831;
            } else {
              result[14] += 0.12660357;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += 0.18103123;
            } else {
              result[14] += 0.16162692;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += -0.11294922;
            } else {
              result[14] += 0.11703997;
            }
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.07968833;
            } else {
              result[14] += -0.15015784;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.1385082;
            } else {
              result[14] += -0.15037517;
            }
          }
        } else {
          result[14] += 0.09456399;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[0] += 0.02162546;
          } else {
            result[0] += -0.09954009;
          }
        } else {
          result[0] += -0.15006796;
        }
      } else {
        result[0] += -0.15018025;
      }
    } else {
      result[0] += -0.15071979;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.044761814;
            } else {
              result[0] += -0.1413817;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.22469772;
            } else {
              result[0] += 0.12842456;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[0] += -0.0186645;
            } else {
              result[0] += -0.058855325;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[0] += 0.14033504;
            } else {
              result[0] += 0.013835034;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.030208966;
            } else {
              result[0] += 0.1330766;
            }
          } else {
            result[0] += 0.15069075;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.01391451;
            } else {
              result[0] += 0.095361635;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[0] += 0.14509596;
            } else {
              result[0] += 0.08495529;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[0] += -0.14976251;
            } else {
              result[0] += -0.021172384;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.10163298;
            } else {
              result[0] += -0.152524;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            result[0] += -0.14288655;
          } else {
            result[0] += 0.15643759;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[0] += -0.15050335;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[0] += -0.09915688;
            } else {
              result[0] += 0.40461403;
            }
          }
        } else {
          result[0] += -0.15025528;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[1] += -0.14867243;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
              result[1] += 0.013380651;
            } else {
              result[1] += 0.111175984;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
              result[1] += -0.15545812;
            } else {
              result[1] += 0.333144;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[1] += -0.0039781784;
            } else {
              result[1] += 0.09432617;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += 0.15964985;
            } else {
              result[1] += -0.073164955;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[1] += -0.085670374;
        } else {
          result[1] += -0.14766441;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[1] += -0.15029642;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[1] += -0.44283688;
          } else {
            result[1] += -0.11103074;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[1] += 0.02730926;
            } else {
              result[1] += 0.111468144;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[1] += -0.041771382;
            } else {
              result[1] += -0.15010962;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)280)) {
            result[1] += -0.15261133;
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
              result[1] += 0.20717958;
            } else {
              result[1] += 0.04627604;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[1] += -0.15091805;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.09068942;
            } else {
              result[1] += 0.19373588;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[1] += -0.031755686;
            } else {
              result[1] += 0.32123545;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[1] += -0.15003559;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[1] += 0.12742172;
            } else {
              result[1] += -0.13606474;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.020415684;
        } else {
          result[2] += -0.100149505;
        }
      } else {
        result[2] += -0.15010685;
      }
    } else {
      result[2] += -0.150632;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.030797888;
      } else {
        result[2] += 0.15503809;
      }
    } else {
      result[2] += -0.14715457;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15059295;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14779003;
          } else {
            result[3] += 0.15635346;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
            result[3] += -0.08345172;
          } else {
            result[3] += 0.15551321;
          }
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.15065888;
        } else {
          result[3] += 0.15936477;
        }
      }
    } else {
      result[3] += -0.15054886;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15038554;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.08614546;
            } else {
              result[4] += -0.01796376;
            }
          } else {
            result[4] += 0.15922286;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)50473)) {
              result[4] += 0.02471113;
            } else {
              result[4] += -0.011089748;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[4] += 0.070191145;
            } else {
              result[4] += 0.023172593;
            }
          }
        }
      } else {
        result[4] += 0.1551525;
      }
    } else {
      result[4] += 0.15544274;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.010721323;
          } else {
            result[5] += -0.100149505;
          }
        } else {
          result[5] += 0.03941106;
        }
      } else {
        result[5] += -0.15003446;
      }
    } else {
      result[5] += -0.15013035;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.1506282;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15026303;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.023978176;
            } else {
              result[5] += -0.09288248;
            }
          } else {
            result[5] += -0.14841528;
          }
        }
      }
    } else {
      result[5] += 0.1464414;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.0011340678;
        } else {
          result[6] += 0.15153164;
        }
      } else {
        result[6] += -0.15004875;
      }
    } else {
      result[6] += -0.15013036;
    }
  } else {
    result[6] += -0.150632;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[7] += 0.020438686;
            } else {
              result[7] += -0.15306763;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[7] += 0.05208599;
            } else {
              result[7] += 0.026414929;
            }
          }
        } else {
          result[7] += -0.15000615;
        }
      } else {
        result[7] += -0.15007758;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.07917776;
            } else {
              result[7] += 0.0040675714;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.11349903;
            } else {
              result[7] += -0.14325769;
            }
          }
        } else {
          result[7] += -0.14906089;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14500141;
        } else {
          result[7] += 0.026512297;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15737513;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.16438763;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.09008552;
            } else {
              result[7] += 0.0020173318;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.15196444;
            } else {
              result[7] += 0.15901884;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.15615198;
            } else {
              result[7] += 0.12640704;
            }
          } else {
            result[7] += -0.15869771;
          }
        } else {
          result[7] += -0.15283208;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.15537846;
            } else {
              result[7] += 0.05773062;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.11872817;
            } else {
              result[7] += 0.1501745;
            }
          }
        } else {
          result[7] += -0.14864507;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.1004231;
          } else {
            result[8] += -0.15005179;
          }
        } else {
          result[8] += -0.15013349;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.013358481;
            } else {
              result[8] += 0.09170267;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[8] += 0.067679144;
            } else {
              result[8] += -0.019813385;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.16626091;
            } else {
              result[8] += -0.1508424;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.13927373;
            } else {
              result[8] += -0.15017197;
            }
          }
        }
      }
    } else {
      result[8] += -0.1503168;
    }
  } else {
    result[8] += -0.15037568;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[9] += 0.03793532;
            } else {
              result[9] += -0.109039925;
            }
          } else {
            result[9] += -0.15011068;
          }
        } else {
          result[9] += -0.1501956;
        }
      } else {
        result[9] += -0.15074323;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        result[9] += 0.15551695;
      } else {
        result[9] += -0.14909017;
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[9] += -0.15060394;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[9] += -0.14821813;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[9] += 0.14781013;
          } else {
            result[9] += -0.14370216;
          }
        }
      } else {
        result[9] += -0.15044293;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[10] += -0.0106420815;
            } else {
              result[10] += -0.15020463;
            }
          } else {
            result[10] += -0.15071529;
          }
        } else {
          result[10] += 0.07549501;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          result[10] += -0.15087734;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[10] += -0.15094116;
            } else {
              result[10] += -0.07439903;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[10] += 0.097485304;
            } else {
              result[10] += -0.1495445;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[10] += -0.14571334;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.112353556;
            } else {
              result[10] += -0.10049199;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.14910536;
            } else {
              result[10] += -0.022434922;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += 0.020796105;
            } else {
              result[10] += 0.08216599;
            }
          } else {
            result[10] += -0.18361495;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[10] += -0.15047012;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[10] += -0.13153084;
            } else {
              result[10] += 0.15579927;
            }
          } else {
            result[10] += -0.14559284;
          }
        } else {
          result[10] += -0.14947231;
        }
      }
    } else {
      result[10] += -0.15044497;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[11] += -0.10736363;
        } else {
          result[11] += -0.15005228;
        }
      } else {
        result[11] += -0.150134;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.014226743;
            } else {
              result[11] += -0.11908276;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.14744456;
            } else {
              result[11] += 0.05449924;
            }
          }
        } else {
          result[11] += -0.15065852;
        }
      } else {
        result[11] += -0.15021823;
      }
    }
  } else {
    result[11] += -0.15046477;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[12] += -0.10927207;
        } else {
          result[12] += -0.15007326;
        }
      } else {
        result[12] += -0.15015566;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.0013759811;
            } else {
              result[12] += 0.06325258;
            }
          } else {
            result[12] += -0.15086988;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14756562;
            } else {
              result[12] += 0.17776904;
            }
          } else {
            result[12] += -0.15190375;
          }
        }
      } else {
        result[12] += -0.15020365;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15033008;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[12] += 0.054647345;
        } else {
          result[12] += 0.13671616;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[12] += 0.13168049;
            } else {
              result[12] += 0.15930551;
            }
          } else {
            result[12] += -0.10080751;
          }
        } else {
          result[12] += -0.14808273;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.113915004;
            } else {
              result[12] += 0.05296935;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[12] += -0.152285;
            } else {
              result[12] += 0.29328611;
            }
          }
        } else {
          result[12] += -0.15033492;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[13] += -0.11088179;
            } else {
              result[13] += -0.15014556;
            }
          } else {
            result[13] += -0.15023082;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.002738761;
            } else {
              result[13] += 0.46050468;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.11799456;
            } else {
              result[13] += 0.2916141;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14912118;
            } else {
              result[13] += 0.10970728;
            }
          } else {
            result[13] += -0.14991826;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.15025695;
            } else {
              result[13] += -0.11456849;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[13] += -0.14208877;
            } else {
              result[13] += 0.47643054;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.003182519;
            } else {
              result[13] += 0.1561456;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.043372784;
            } else {
              result[13] += 0.18774047;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.1534115;
            } else {
              result[13] += -0.18420058;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[13] += 0.08698037;
            } else {
              result[13] += -0.1482733;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.13612641;
          } else {
            result[13] += -0.14733598;
          }
        } else {
          result[13] += -0.14994451;
        }
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.14421579;
            } else {
              result[13] += -0.124786265;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.18107846;
            } else {
              result[13] += -0.08589442;
            }
          }
        } else {
          result[13] += 0.15591547;
        }
      } else {
        result[13] += -0.12240867;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[13] += -0.142748;
        } else {
          result[13] += 0.10275233;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.16042729;
            } else {
              result[13] += -0.00016115767;
            }
          } else {
            result[13] += 0.15294966;
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)299)) {
            result[13] += -0.09960555;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.070236124;
            } else {
              result[13] += 0.16855024;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.004781188;
            } else {
              result[14] += -0.1498623;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.06292866;
            } else {
              result[14] += 0.14033191;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.12888592;
            } else {
              result[14] += 0.12869726;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.159297;
            } else {
              result[14] += -0.10633745;
            }
          }
        }
      } else {
        result[14] += -0.15004875;
      }
    } else {
      result[14] += -0.15013036;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.15009937;
            } else {
              result[14] += 0.04011476;
            }
          } else {
            result[14] += -0.1491232;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15038632;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.021136407;
            } else {
              result[14] += -0.14928341;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.16963366;
            } else {
              result[14] += -0.14766584;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.039923757;
            } else {
              result[14] += -0.15421209;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
              result[14] += -0.1486066;
            } else {
              result[14] += -0.09073483;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += 0.61344194;
            } else {
              result[14] += -0.12816998;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
              result[14] += -0.044370152;
            } else {
              result[14] += 0.048192397;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.1500344;
            } else {
              result[14] += 0.11810529;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.16810453;
            } else {
              result[14] += 0.05590656;
            }
          } else {
            result[14] += -0.14982693;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.16210024;
            } else {
              result[14] += -0.14892983;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += -0.13200174;
            } else {
              result[14] += -0.15019667;
            }
          }
        } else {
          result[14] += 0.084255055;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[0] += -0.048323717;
            } else {
              result[0] += -0.15056182;
            }
          } else {
            result[0] += 0.04154301;
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
              result[0] += -0.15045264;
            } else {
              result[0] += 0.039160606;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.11126347;
            } else {
              result[0] += -0.15202488;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.14562024;
            } else {
              result[0] += -0.068566434;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
              result[0] += -0.15022583;
            } else {
              result[0] += -0.039032586;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            result[0] += 0.271718;
          } else {
            result[0] += -0.1702124;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5629642)) {
              result[0] += 0.1883799;
            } else {
              result[0] += -0.11122755;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += -0.16674319;
            } else {
              result[0] += 0.11228519;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.15353417;
            } else {
              result[0] += 0.09015869;
            }
          } else {
            result[0] += 0.14579102;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
              result[0] += -0.0331025;
            } else {
              result[0] += 0.005787011;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)2135313)) {
              result[0] += 0.072033845;
            } else {
              result[0] += 0.14027211;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.13768552;
            } else {
              result[0] += -0.14442;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[0] += -0.022642536;
            } else {
              result[0] += 0.12532604;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[0] += -0.14972988;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[0] += -0.11151626;
            } else {
              result[0] += 0.104705915;
            }
          } else {
            result[0] += -0.14889732;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
            result[0] += 0.34313273;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[0] += -0.13424695;
            } else {
              result[0] += 0.019785246;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
          result[0] += -0.1492578;
        } else {
          result[0] += 0.1552535;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.14960514;
            } else {
              result[0] += -0.022114113;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[0] += 0.35376886;
            } else {
              result[0] += -0.1448837;
            }
          }
        } else {
          result[0] += -0.1499383;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        result[1] += -0.14798595;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[1] += 0.013426467;
            } else {
              result[1] += -0.15352795;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.15895842;
            } else {
              result[1] += -0.041325074;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.0092441365;
            } else {
              result[1] += -0.14087187;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.15220967;
            } else {
              result[1] += -0.117003284;
            }
          }
        }
      }
    } else {
      result[1] += -0.15017322;
    }
  } else {
    result[1] += -0.14972277;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[2] += -0.016932297;
        } else {
          result[2] += -0.091713876;
        }
      } else {
        result[2] += -0.14990762;
      }
    } else {
      result[2] += -0.15052982;
    }
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[2] += 0.025749823;
      } else {
        result[2] += 0.1535201;
      }
    } else {
      result[2] += -0.14600076;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.1504812;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[3] += -0.14682144;
          } else {
            result[3] += 0.15467645;
          }
        } else {
          result[3] += 0.15376128;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          result[3] += -0.1504148;
        } else {
          result[3] += 0.15702808;
        }
      }
    } else {
      result[3] += -0.15041584;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15020567;
  } else {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
              result[4] += 0.07217942;
            } else {
              result[4] += -0.020802557;
            }
          } else {
            result[4] += 0.15587902;
          }
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)50473)) {
              result[4] += 0.021592468;
            } else {
              result[4] += -0.008935011;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)54161)) {
              result[4] += 0.061115257;
            } else {
              result[4] += 0.02010452;
            }
          }
        }
      } else {
        result[4] += 0.15364355;
      }
    } else {
      result[4] += 0.1539945;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[5] += -0.008405813;
          } else {
            result[5] += -0.091713876;
          }
        } else {
          result[5] += 0.0342312;
        }
      } else {
        result[5] += -0.1498264;
      }
    } else {
      result[5] += -0.14994013;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.15052511;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[5] += -0.15009898;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[5] += 0.035152704;
            } else {
              result[5] += -0.084924504;
            }
          } else {
            result[5] += -0.14767979;
          }
        }
      }
    } else {
      result[5] += 0.1376862;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[6] += 0.001763476;
        } else {
          result[6] += 0.14873046;
        }
      } else {
        result[6] += -0.14984304;
      }
    } else {
      result[6] += -0.14994013;
    }
  } else {
    result[6] += -0.15052983;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.013767627;
            } else {
              result[7] += -0.095986664;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[7] += 0.10354931;
            } else {
              result[7] += 0.031635974;
            }
          }
        } else {
          result[7] += -0.14978938;
        }
      } else {
        result[7] += -0.14988178;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)36)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -0.07895815;
            } else {
              result[7] += 0.031371076;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += 0.09138735;
            } else {
              result[7] += -0.14661737;
            }
          }
        } else {
          result[7] += -0.14847057;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[7] += -0.14332841;
        } else {
          result[7] += 0.036721807;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15571256;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.16180152;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.07995236;
            } else {
              result[7] += 0.0007084173;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.14642859;
            } else {
              result[7] += 0.15675694;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.1546843;
            } else {
              result[7] += 0.116829365;
            }
          } else {
            result[7] += -0.1573061;
          }
        } else {
          result[7] += -0.15211034;
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.15398753;
            } else {
              result[7] += 0.05781818;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.111242525;
            } else {
              result[7] += 0.14700627;
            }
          }
        } else {
          result[7] += -0.1480181;
        }
      }
    }
  }
}

