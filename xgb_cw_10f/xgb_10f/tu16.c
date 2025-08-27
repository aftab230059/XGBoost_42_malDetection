
#include "header.h"

void predict_unit16(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00031819972;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.03190334;
            } else {
              result[2] += 0.08746763;
            }
          } else {
            result[2] += -0.008689486;
          }
        } else {
          result[2] += 0.09989215;
        }
      } else {
        result[2] += -0.02269459;
      }
    }
  } else {
    result[2] += -0.12993786;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.033494763;
    } else {
      result[3] += -0.12837632;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
        result[3] += 0.063174404;
      } else {
        result[3] += -0.017792981;
      }
    } else {
      result[3] += -0.07623351;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.040086456;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)34214)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.0005056626;
            } else {
              result[4] += 0.012644048;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)40066)) {
              result[4] += -0.005270402;
            } else {
              result[4] += -5.468664e-05;
            }
          }
        }
      } else {
        result[4] += 0.094518796;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[4] += 0.021859378;
        } else {
          result[4] += 0.09669669;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          result[4] += -0.07838168;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.09856343;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.06635622;
            } else {
              result[4] += 0.05053519;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.13005088;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 0.00042926488;
        } else {
          result[5] += -0.033436235;
        }
      } else {
        result[5] += -0.120081976;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[5] += 0.015680017;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[5] += -0.09833639;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[5] += 0.0048558456;
            } else {
              result[5] += 0.051712524;
            }
          } else {
            result[5] += -0.02391041;
          }
        }
      }
    }
  } else {
    result[5] += -0.099272065;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.000418892;
  } else {
    result[6] += -0.12993807;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.00065782387;
            } else {
              result[7] += -0.014661071;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
              result[7] += 0.018747568;
            } else {
              result[7] += 0.001455151;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[7] += -0.009526801;
            } else {
              result[7] += -0.028002666;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[7] += -0.008278906;
            } else {
              result[7] += -0.0005102185;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            result[7] += 0.007529759;
          } else {
            result[7] += 0.01582287;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[7] += -0.0030850468;
            } else {
              result[7] += 0.004165544;
            }
          } else {
            result[7] += 0.06392303;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
              result[7] += -0.009933637;
            } else {
              result[7] += 0.08706864;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.17236435;
            } else {
              result[7] += -0.0015194073;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[7] += 0.14625701;
          } else {
            result[7] += 0.036342513;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[7] += 0.0856373;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += -0.058864728;
            } else {
              result[7] += -0.16105327;
            }
          } else {
            result[7] += 0.00026156232;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.14754698;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[7] += -0.086391084;
            } else {
              result[7] += 0.19407077;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.012429691;
            } else {
              result[7] += 0.13292137;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.14192171;
            } else {
              result[7] += -0.021083169;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          result[7] += -0.23943272;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[7] += 0.0007190965;
            } else {
              result[7] += -0.03391056;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[7] += 0.036228295;
            } else {
              result[7] += -0.012805356;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.14225328;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.10916503;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[7] += 0.027491864;
          } else {
            result[7] += 0.0949412;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[8] += -0.016271409;
        } else {
          result[8] += -0.10355537;
        }
      } else {
        result[8] += -0.11897456;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.0004326547;
            } else {
              result[8] += -0.1316036;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[8] += -0.036065713;
            } else {
              result[8] += 0.13758366;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[8] += -0.14160642;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[8] += 0.090259746;
            } else {
              result[8] += -0.09002135;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
          result[8] += -0.13103846;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            result[8] += 0.09182423;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[8] += -0.13605107;
            } else {
              result[8] += -0.014525806;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1412105;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[8] += 0.09039751;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.08169163;
          } else {
            result[8] += -0.017036475;
          }
        }
      } else {
        result[8] += -0.098452486;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.00040424126;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.116068915;
          } else {
            result[9] += 0.04204411;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.004773775;
            } else {
              result[9] += 0.0112852985;
            }
          } else {
            result[9] += 0.07259177;
          }
        } else {
          result[9] += 0.0074944464;
        }
      }
    } else {
      result[9] += -0.08101174;
    }
  } else {
    result[9] += -0.11528479;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[10] += 6.797595e-05;
      } else {
        result[10] += -0.13008887;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[10] += 0.0062457155;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          result[10] += -0.091934845;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[10] += -0.0015981926;
            } else {
              result[10] += 0.0039767027;
            }
          } else {
            result[10] += 0.06157009;
          }
        }
      }
    }
  } else {
    result[10] += -0.10162145;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[11] += -0.013698219;
        } else {
          result[11] += -0.10303025;
        }
      } else {
        result[11] += -0.10823074;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[11] += -0.0008711475;
            } else {
              result[11] += 0.0022578505;
            }
          } else {
            result[11] += -0.1467211;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[11] += -0.15701132;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.018287184;
            } else {
              result[11] += 0.041778393;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[11] += 0.10343963;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.009336708;
            } else {
              result[11] += 0.093640566;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += -0.0075477916;
            } else {
              result[11] += -0.14100666;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.1402851;
            } else {
              result[11] += 0.0020495895;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.14506988;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[11] += 0.00985132;
            } else {
              result[11] += -0.014023022;
            }
          } else {
            result[11] += 0.016231736;
          }
        } else {
          result[11] += -0.10226618;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[11] += -0.018929755;
            } else {
              result[11] += 0.023355218;
            }
          } else {
            result[11] += -0.097053796;
          }
        } else {
          result[11] += 0.073493816;
        }
      }
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.00084761827;
            } else {
              result[12] += -0.14290342;
            }
          } else {
            result[12] += 0.14505792;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
            result[12] += -0.15163456;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[12] += -0.035030708;
            } else {
              result[12] += 0.00026469008;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[12] += 0.10977228;
          } else {
            result[12] += 0.025419632;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.09630505;
          } else {
            result[12] += 0.09424495;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[12] += -0.13038647;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[12] += 0.09823028;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[12] += -0.11242477;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
              result[12] += -0.030055232;
            } else {
              result[12] += 0.06750994;
            }
          }
        }
      }
    }
  } else {
    result[12] += -0.10606216;
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
              result[13] += 0.0005029047;
            } else {
              result[13] += 0.077833;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.13227357;
            } else {
              result[13] += 0.032269895;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[13] += 0.14238584;
            } else {
              result[13] += 0.04642751;
            }
          } else {
            result[13] += -0.07055543;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          result[13] += -0.11094254;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.14379519;
            } else {
              result[13] += -0.04678847;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += 0.032260545;
            } else {
              result[13] += -0.060773764;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[13] += -0.108558014;
      } else {
        result[13] += -0.006902121;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[13] += 0.11906198;
        } else {
          result[13] += -0.07891399;
        }
      } else {
        result[13] += 0.16033699;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        result[13] += 0.0014982644;
      } else {
        result[13] += 0.056348573;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += 0.0029062585;
            } else {
              result[14] += -0.09197695;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += -0.0032843016;
            } else {
              result[14] += -0.010749279;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += 0.0059537464;
            } else {
              result[14] += 0.02695655;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[14] += 0.0024752186;
            } else {
              result[14] += -0.0049055116;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0026302154;
            } else {
              result[14] += 0.021302864;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.12686567;
            } else {
              result[14] += -0.0023448158;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[14] += -0.120900676;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[14] += -0.012960068;
            } else {
              result[14] += 0.07575331;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        result[14] += -0.1287751;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += 0.06396319;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[14] += -0.12034088;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.04686323;
            } else {
              result[14] += -0.057664413;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        result[14] += -0.017478287;
      } else {
        result[14] += -0.11805191;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          result[14] += -0.120812185;
        } else {
          result[14] += 0.025751248;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.16729853;
          } else {
            result[14] += 0.033288617;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[14] += 0.0031660434;
          } else {
            result[14] += -0.090754725;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[0] += 0.0007587804;
            } else {
              result[0] += 0.0077021387;
            }
          } else {
            result[0] += 0.054230887;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.09934618;
            } else {
              result[0] += 0.025085509;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[0] += -0.1355663;
            } else {
              result[0] += -0.027235521;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[0] += -0.09172232;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += -0.053733148;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += 0.015359688;
            } else {
              result[0] += 0.064502716;
            }
          }
        }
      }
    } else {
      result[0] += -0.10651771;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[0] += 0.06875345;
        } else {
          result[0] += 0.21310574;
        }
      } else {
        result[0] += -0.016835414;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += -0.09983738;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.05031854;
        } else {
          result[0] += 0.006967621;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        result[1] += -0.03373497;
      } else {
        result[1] += -0.090449356;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[1] += 0.00057623914;
            } else {
              result[1] += -0.006742996;
            }
          } else {
            result[1] += -0.14304362;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.062396552;
            } else {
              result[1] += -0.091450386;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += 0.001708831;
            } else {
              result[1] += -0.05034194;
            }
          }
        }
      } else {
        result[1] += 0.09393251;
      }
    }
  } else {
    result[1] += -0.10352168;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00030994593;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.091283835;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[2] += 0.009380516;
            } else {
              result[2] += 0.06631784;
            }
          } else {
            result[2] += -0.031171897;
          }
        } else {
          result[2] += 0.07590905;
        }
      }
    }
  } else {
    result[2] += -0.1273869;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[3] += -0.030396791;
      } else {
        result[3] += -0.12929001;
      }
    } else {
      result[3] += 0.0216244;
    }
  } else {
    result[3] += 0.039260987;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.036686826;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)32197)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.00042485993;
            } else {
              result[4] += 0.1159584;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)59596)) {
              result[4] += -0.0013112988;
            } else {
              result[4] += 0.0057067443;
            }
          }
        }
      } else {
        result[4] += 0.090449765;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[4] += 0.022236874;
            } else {
              result[4] += 0.086245604;
            }
          } else {
            result[4] += -0.0737278;
          }
        } else {
          result[4] += 0.0925764;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[4] += -0.063343875;
        } else {
          result[4] += 0.04538799;
        }
      }
    }
  } else {
    result[4] += -0.12750964;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[5] += 0.0004205863;
          } else {
            result[5] += -0.123461835;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[5] += 0.0119412495;
            } else {
              result[5] += -0.08424952;
            }
          } else {
            result[5] += 0.04879606;
          }
        }
      } else {
        result[5] += -0.08979635;
      }
    } else {
      result[5] += 0.087849736;
    }
  } else {
    result[5] += -0.09508645;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00042291867;
  } else {
    result[6] += -0.12738712;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += -0.00036858334;
            } else {
              result[7] += 0.0045103254;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.0050570252;
            } else {
              result[7] += -0.15211934;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[7] += 0.1278065;
          } else {
            result[7] += 0.0042478656;
          }
        }
      } else {
        result[7] += -0.17497836;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += 0.14640537;
            } else {
              result[7] += 0.055248015;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.01883357;
            } else {
              result[7] += -0.07478866;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            result[7] += -0.21362261;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.00064025057;
            } else {
              result[7] += -0.081759006;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          result[7] += 0.14107417;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.10561388;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[7] += 0.025469026;
            } else {
              result[7] += 0.09043514;
            }
          }
        }
      }
    }
  } else {
    result[7] += -0.10522758;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.00064123323;
            } else {
              result[8] += -0.0122118285;
            }
          } else {
            result[8] += -0.13254738;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += -0.0010431075;
            } else {
              result[8] += -0.18639596;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[8] += 0.13537923;
            } else {
              result[8] += -0.020710982;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[8] += -0.14023641;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[8] += 0.028976282;
            } else {
              result[8] += 0.09884373;
            }
          } else {
            result[8] += -0.090869516;
          }
        }
      }
    } else {
      result[8] += -0.115789585;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.12867194;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        result[8] += 0.08218578;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.13412479;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[8] += -0.03174652;
            } else {
              result[8] += 0.12869197;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.13628653;
            } else {
              result[8] += 0.012167083;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[9] += 0.00040831647;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)295023)) {
            result[9] += -0.11267784;
          } else {
            result[9] += 0.041541938;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[9] += 0.01426004;
        } else {
          result[9] += 0.0063712588;
        }
      }
    } else {
      result[9] += -0.07734064;
    }
  } else {
    result[9] += -0.111830175;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += 0.00012683694;
        } else {
          result[10] += -0.12502599;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.0036543522;
            } else {
              result[10] += 0.026317833;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.055057354;
            } else {
              result[10] += 0.0035298944;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            result[10] += -0.0031498394;
          } else {
            result[10] += 0.01733244;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[10] += -0.07763922;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[10] += 0.06859234;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.015865829;
            } else {
              result[10] += 0.009691132;
            }
          }
        }
      } else {
        result[10] += -0.085747525;
      }
    }
  } else {
    result[10] += -0.09779018;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += 0.00019647118;
            } else {
              result[11] += -0.14485149;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.15527262;
            } else {
              result[11] += -0.0036649795;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.0237863;
            } else {
              result[11] += 0.0001793391;
            }
          } else {
            result[11] += -0.14725071;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += -0.18722084;
        } else {
          result[11] += 0.14365432;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[11] += -0.20438512;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[11] += 0.1373733;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.02765484;
            } else {
              result[11] += 0.1450251;
            }
          }
        } else {
          result[11] += -0.17683424;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[11] += 0.031895965;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[11] += -0.08165258;
          } else {
            result[11] += -0.19454499;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[11] += -0.07574701;
        } else {
          result[11] += -0.14980699;
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[11] += 0.13882864;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += -0.016794778;
            } else {
              result[11] += -0.08658356;
            }
          } else {
            result[11] += 0.014315936;
          }
        }
      } else {
        result[11] += 0.048614092;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[12] += -0.013426703;
          } else {
            result[12] += -0.08804976;
          }
        } else {
          result[12] += -0.10251911;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.0008764819;
            } else {
              result[12] += -0.14132197;
            }
          } else {
            result[12] += 0.14336161;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += -0.16176143;
            } else {
              result[12] += 0.06625903;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[12] += -0.1289314;
            } else {
              result[12] += -1.6113549e-05;
            }
          }
        }
      }
    } else {
      result[12] += -0.130588;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.12094758;
            } else {
              result[12] += 0.027940353;
            }
          } else {
            result[12] += 0.1145743;
          }
        } else {
          result[12] += -0.037203513;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.111243404;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.018169388;
            } else {
              result[12] += 0.042766333;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.035291754;
            } else {
              result[12] += 0.020157939;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        result[12] += -0.11008834;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[12] += -0.07585376;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[12] += 0.104470156;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
              result[12] += -0.08913628;
            } else {
              result[12] += 0.015873708;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.0041867835;
            } else {
              result[13] += -0.10642337;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.0049825227;
            } else {
              result[13] += -0.0020080183;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += -0.12604858;
            } else {
              result[13] += 0.044052966;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
              result[13] += 0.11942237;
            } else {
              result[13] += -0.018184802;
            }
          }
        }
      } else {
        result[13] += -0.09898596;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[13] += -0.10501897;
      } else {
        result[13] += -0.0060659293;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
          result[13] += 0.11392654;
        } else {
          result[13] += -0.07650722;
        }
      } else {
        result[13] += 0.13645229;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[13] += 0.013549567;
        } else {
          result[13] += -0.049697146;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          result[13] += -0.0025982466;
        } else {
          result[13] += 0.03909089;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[14] += -0.0010365938;
            } else {
              result[14] += -0.088971555;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += 0.002494174;
            } else {
              result[14] += 0.061865203;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += -0.012434189;
            } else {
              result[14] += -0.12465712;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += -0.002102037;
            } else {
              result[14] += 0.07362422;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.14787826;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[14] += -0.08016686;
            } else {
              result[14] += 0.11417687;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.17904261;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += -0.12172926;
            } else {
              result[14] += -0.019729428;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.015513667;
            } else {
              result[14] += 0.10342252;
            }
          } else {
            result[14] += -0.13496734;
          }
        } else {
          result[14] += 0.21434885;
        }
      } else {
        result[14] += -0.12077006;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[14] += -0.12604359;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[14] += 0.051025935;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.11342125;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.034149878;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
              result[14] += -0.08419259;
            } else {
              result[14] += 0.08925213;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.00050776626;
            } else {
              result[0] += 0.0027249237;
            }
          } else {
            result[0] += 0.049769428;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
              result[0] += -0.095732294;
            } else {
              result[0] += 0.023335498;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[0] += -0.1316282;
            } else {
              result[0] += -0.026621697;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[0] += -0.08819076;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[0] += -0.04623034;
            } else {
              result[0] += 0.016943362;
            }
          } else {
            result[0] += 0.08660502;
          }
        }
      }
    } else {
      result[0] += -0.1001373;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[0] += 0.065946676;
        } else {
          result[0] += 0.2011358;
        }
      } else {
        result[0] += -0.00883055;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.09531294;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.06559664;
        } else {
          result[0] += -0.009964098;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.00067538535;
            } else {
              result[1] += 0.0077285124;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.14425881;
            } else {
              result[1] += -0.011114661;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += 0.0030498707;
            } else {
              result[1] += 0.061598796;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
              result[1] += -0.038241517;
            } else {
              result[1] += 0.0008741502;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[1] += 0.09865908;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.03501802;
            } else {
              result[1] += -0.08407373;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += -0.0129927015;
            } else {
              result[1] += -0.08558222;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.13464151;
            } else {
              result[1] += 0.014398004;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += -0.13379811;
            } else {
              result[1] += -0.00989146;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[1] += -0.14515322;
            } else {
              result[1] += -0.025703145;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.017761907;
            } else {
              result[1] += -0.0039157025;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
            result[1] += -0.14002122;
          } else {
            result[1] += -0.3286934;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += -0.005106528;
            } else {
              result[1] += 0.12162105;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.20079927;
            } else {
              result[1] += 0.056456167;
            }
          }
        }
      }
    }
  } else {
    result[1] += -0.104436286;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.0002221677;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
              result[2] += 0.028673546;
            } else {
              result[2] += 0.08784702;
            }
          } else {
            result[2] += -0.013280353;
          }
        } else {
          result[2] += 0.098734066;
        }
      } else {
        result[2] += -0.024668755;
      }
    }
  } else {
    result[2] += -0.12468999;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.02765397;
    } else {
      result[3] += -0.123473935;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
        result[3] += -0.092151776;
      } else {
        result[3] += 0.058281064;
      }
    } else {
      result[3] += 0.06317;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.033562742;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)55852)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)52239)) {
              result[4] += -0.0009814784;
            } else {
              result[4] += 0.009626361;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)57663)) {
              result[4] += -0.01484426;
            } else {
              result[4] += 0.002939494;
            }
          }
        }
      } else {
        result[4] += 0.08573641;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.0820202;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.06522364;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += 0.021431152;
            } else {
              result[4] += 0.11030887;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += -0.08045486;
            } else {
              result[4] += 0.052742876;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.1248219;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[5] += 0.00033112644;
          } else {
            result[5] += -0.120957;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[5] += 0.011658622;
            } else {
              result[5] += -0.07903382;
            }
          } else {
            result[5] += 0.037154738;
          }
        }
      } else {
        result[5] += -0.085611485;
      }
    } else {
      result[5] += 0.082970455;
    }
  } else {
    result[5] += -0.090909705;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00032753352;
  } else {
    result[6] += -0.124690235;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
              result[7] += -0.00030288153;
            } else {
              result[7] += 0.008790679;
            }
          } else {
            result[7] += -0.115058936;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            result[7] += 0.13338009;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += -0.18726286;
            } else {
              result[7] += 0.101084135;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -0.102716655;
            } else {
              result[7] += 0.0024865188;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[7] += 0.015968144;
            } else {
              result[7] += 0.17423314;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[7] += -0.13266139;
          } else {
            result[7] += 0.023104426;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
        result[7] += 0.09486354;
      } else {
        result[7] += 0.04054512;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
      result[7] += -0.123178564;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
        result[7] += 0.07801803;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            result[7] += -0.16630928;
          } else {
            result[7] += 0.09452813;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[7] += 0.018041652;
            } else {
              result[7] += -0.102146894;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[7] += 0.24566068;
            } else {
              result[7] += 0.006840917;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[8] += -0.0010671671;
            } else {
              result[8] += 0.09409107;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.09397615;
            } else {
              result[8] += 0.0014735565;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[8] += -0.03132713;
          } else {
            result[8] += -0.12159916;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[8] += -0.08791568;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
              result[8] += 0.01499384;
            } else {
              result[8] += 0.033275127;
            }
          }
        } else {
          result[8] += 0.21274607;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[8] += -0.12203131;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.018226003;
            } else {
              result[8] += 0.084260985;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[8] += -0.09113364;
            } else {
              result[8] += -0.00033286947;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.118057884;
            } else {
              result[8] += 0.009077666;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[8] += 0.029051958;
            } else {
              result[8] += -0.0128380405;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      result[8] += -0.1260723;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        result[8] += 0.07735787;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          result[8] += -0.13192014;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
            result[8] += 0.08101279;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[8] += -0.109309696;
            } else {
              result[8] += 0.018658012;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.0003025267;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.037995793;
        } else {
          result[9] += -0.10316057;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.01198729;
      } else {
        result[9] += 0.0048405267;
      }
    }
  } else {
    result[9] += -0.10823714;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[10] += 0.0006602134;
            } else {
              result[10] += -0.11444621;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[10] += 0.006180752;
            } else {
              result[10] += 0.04609915;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
            result[10] += -0.10404263;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[10] += -0.030807199;
            } else {
              result[10] += 0.03045438;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)404894)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 0.03060722;
            } else {
              result[10] += -0.05611166;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += 0.026319763;
            } else {
              result[10] += 0.13472538;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.037674807;
            } else {
              result[10] += -0.09705371;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[10] += -0.08383546;
            } else {
              result[10] += 3.7165853e-05;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.079903185;
          } else {
            result[10] += 0.05633753;
          }
        } else {
          result[10] += -0.09067644;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          result[10] += -0.014727905;
        } else {
          result[10] += 0.027634412;
        }
      }
    }
  } else {
    result[10] += -0.0939667;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
              result[11] += 0.00049320876;
            } else {
              result[11] += -0.041710302;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.0020701268;
            } else {
              result[11] += 0.026873594;
            }
          }
        } else {
          result[11] += -0.10322376;
        }
      } else {
        result[11] += -0.10458452;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
        result[11] += -0.14379077;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[11] += -0.0018056766;
            } else {
              result[11] += 0.013164927;
            }
          } else {
            result[11] += -0.09446372;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[11] += -0.012967981;
            } else {
              result[11] += -0.049607508;
            }
          } else {
            result[11] += 0.06754547;
          }
        }
      }
    }
  } else {
    result[11] += -0.108146116;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += -0.0024191188;
            } else {
              result[12] += 0.0036343173;
            }
          } else {
            result[12] += -0.12959634;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            result[12] += -0.13776934;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[12] += 0.046342045;
            } else {
              result[12] += -0.086103946;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            result[12] += -0.14506918;
          } else {
            result[12] += 0.0027960902;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.10290285;
            } else {
              result[12] += 0.004894285;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.0032834003;
            } else {
              result[12] += -0.06645233;
            }
          }
        }
      }
    } else {
      result[12] += -0.12750672;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.11694804;
            } else {
              result[12] += 0.025981244;
            }
          } else {
            result[12] += 0.10953188;
          }
        } else {
          result[12] += -0.04163078;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.10764349;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.016036326;
            } else {
              result[12] += 0.03851191;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.03012414;
            } else {
              result[12] += 0.018470677;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        result[12] += -0.10494034;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += -9.783988e-05;
            } else {
              result[12] += -0.08242443;
            }
          } else {
            result[12] += 0.0590135;
          }
        } else {
          result[12] += 0.014737016;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.0014189947;
            } else {
              result[13] += -0.010706905;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[13] += -0.13585222;
            } else {
              result[13] += -0.040001076;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[13] += 0.032365605;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.13854824;
            } else {
              result[13] += 0.006920411;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.08893604;
            } else {
              result[13] += -0.036244597;
            }
          } else {
            result[13] += 0.09304397;
          }
        } else {
          result[13] += -0.13260867;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.047322553;
            } else {
              result[13] += 0.0959479;
            }
          } else {
            result[13] += -0.082705684;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.12227649;
            } else {
              result[13] += 0.26999488;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[13] += 0.0076563815;
            } else {
              result[13] += -0.032678097;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[13] += -0.16901523;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += 0.09665432;
            } else {
              result[13] += -0.0040094866;
            }
          }
        } else {
          result[13] += 0.116931625;
        }
      }
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.012888609;
            } else {
              result[13] += 0.012390531;
            }
          } else {
            result[13] += 0.13808379;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[13] += 0.08010273;
            } else {
              result[13] += -0.032995693;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += -0.20918868;
            } else {
              result[13] += -0.09769847;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.024569195;
            } else {
              result[13] += -0.1566053;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += -0.15046701;
            } else {
              result[13] += 0.13423377;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
            result[13] += 0.094832726;
          } else {
            result[13] += 0.020163927;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[13] += -0.11217493;
          } else {
            result[13] += 0.15435581;
          }
        } else {
          result[13] += -0.14591251;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[13] += 0.15880911;
            } else {
              result[13] += 0.03627648;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[13] += -0.046568185;
            } else {
              result[13] += 0.08463337;
            }
          }
        } else {
          result[13] += -0.07421477;
        }
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.00033433444;
            } else {
              result[14] += -0.13370831;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
              result[14] += 0.11113077;
            } else {
              result[14] += 0.0019870535;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            result[14] += -0.10258231;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += -0.084286645;
            } else {
              result[14] += 0.07562553;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += 0.14335768;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[14] += -0.07715531;
            } else {
              result[14] += 0.11079277;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.1556635;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[14] += -0.1179084;
            } else {
              result[14] += -0.020215204;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.016534017;
            } else {
              result[14] += 0.088383704;
            }
          } else {
            result[14] += -0.1322041;
          }
        } else {
          result[14] += 0.20536384;
        }
      } else {
        result[14] += -0.11748727;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[14] += -0.12304247;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[14] += 0.0389164;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.1070132;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.026899278;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[14] += -0.11946972;
            } else {
              result[14] += 0.02099053;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[0] += 0.0017338209;
            } else {
              result[0] += -0.0021626512;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[0] += 0.11507583;
            } else {
              result[0] += -0.001972023;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            result[0] += -0.1015844;
          } else {
            result[0] += -0.035663698;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.1232002;
        } else {
          result[0] += -0.079747945;
        }
      }
    } else {
      result[0] += -0.09409038;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.14048651;
      } else {
        result[0] += -0.0035674341;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += -0.092130415;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.040652987;
        } else {
          result[0] += 0.005046696;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54884)) {
              result[1] += -0.00051989505;
            } else {
              result[1] += 0.009494254;
            }
          } else {
            result[1] += -0.16266717;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
              result[1] += 0.13143323;
            } else {
              result[1] += 0.038528565;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[1] += -0.20046397;
            } else {
              result[1] += 0.053540822;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            result[1] += -0.008290287;
          } else {
            result[1] += -0.014365786;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            result[1] += -0.21680067;
          } else {
            result[1] += -0.07067954;
          }
        }
      }
    } else {
      result[1] += 0.12125807;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          result[1] += 0.09855267;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += -0.022219133;
            } else {
              result[1] += -0.18584584;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.022863664;
            } else {
              result[1] += 0.06368453;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[1] += -0.106862165;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.040888354;
            } else {
              result[1] += -0.09018797;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[1] += 0.08341732;
          } else {
            result[1] += -0.048815835;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.09645292;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.09088989;
          } else {
            result[1] += 0.030991578;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[1] += 0.04982182;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[1] += -0.033139255;
            } else {
              result[1] += 0.01941481;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[1] += -0.093788676;
            } else {
              result[1] += -0.20338832;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.124978974;
            } else {
              result[1] += 0.029890351;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00019414857;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
        result[2] += 0.089074135;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[2] += -0.0020129944;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
            result[2] += 0.08320947;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += 0.00036801398;
            } else {
              result[2] += 0.07488457;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.12187111;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.025084587;
    } else {
      result[3] += -0.12060286;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[3] += -0.032726534;
    } else {
      result[3] += 0.05973605;
    }
  }
}

