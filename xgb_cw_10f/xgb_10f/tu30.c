
#include "header.h"

void predict_unit30(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[0] += -0.0003959169;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[0] += 0.0012376877;
          } else {
            result[0] += 0.09529074;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
              result[0] += -0.038352713;
            } else {
              result[0] += 0.0058692526;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[0] += -0.06934831;
            } else {
              result[0] += 0.000748894;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[0] += -0.088239886;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[0] += -0.01744542;
          } else {
            result[0] += 0.018923774;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[0] += 0.13853672;
        } else {
          result[0] += -0.04160088;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[0] += -0.033232827;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[0] += 0.0021355776;
          } else {
            result[0] += 0.022046879;
          }
        } else {
          result[0] += -0.008485411;
        }
      } else {
        result[0] += 0.04669494;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[1] += 5.485892e-05;
            } else {
              result[1] += 0.080072075;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.13587183;
            } else {
              result[1] += 0.0012482788;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += 0.020272616;
            } else {
              result[1] += -0.0146977315;
            }
          } else {
            result[1] += -0.10443291;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.11031057;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[1] += -0.0342798;
            } else {
              result[1] += -0.0034918888;
            }
          }
        } else {
          result[1] += 0.114047535;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56523)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += 0.006432557;
            } else {
              result[1] += 0.07446589;
            }
          } else {
            result[1] += 0.09096433;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.041879226;
            } else {
              result[1] += -0.11200812;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
              result[1] += 0.0387397;
            } else {
              result[1] += -0.042734034;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.044578932;
          } else {
            result[1] += -0.10386891;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[1] += 0.0039992672;
            } else {
              result[1] += 0.058075335;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
              result[1] += -0.0848888;
            } else {
              result[1] += 0.001905759;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.03994339;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.00010599242;
    } else {
      result[2] += 0.0011032799;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
      result[2] += 0.02208689;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[2] += -0.015790317;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.014289587;
            } else {
              result[2] += -0.019655373;
            }
          } else {
            result[2] += 0.02703512;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
            result[2] += -0.020100852;
          } else {
            result[2] += 0.016308885;
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    result[3] += 0.0084461365;
  } else {
    result[3] += -0.024546975;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      result[4] += -6.8481e-05;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
            result[4] += 0.02739246;
          } else {
            result[4] += -0.0010429159;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            result[4] += 0.030556735;
          } else {
            result[4] += 0.01091051;
          }
        }
      } else {
        result[4] += -0.008049435;
      }
    }
  } else {
    result[4] += 0.042419795;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += -0.00016199242;
        } else {
          result[5] += -0.004212371;
        }
      } else {
        result[5] += 0.0019455353;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
        result[5] += 0.014057192;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          result[5] += 0.0025687132;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            result[5] += -0.010249471;
          } else {
            result[5] += 0.004208214;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          result[5] += -0.02351901;
        } else {
          result[5] += 0.05181826;
        }
      } else {
        result[5] += -0.0760829;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
        result[5] += 0.015895411;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
          result[5] += -0.021288613;
        } else {
          result[5] += 0.0017496393;
        }
      }
    }
  }
  result[6] += -9.039922e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[7] += -3.7869962e-05;
            } else {
              result[7] += 0.012102253;
            }
          } else {
            result[7] += -0.0513297;
          }
        } else {
          result[7] += 0.103930295;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
          result[7] += -0.079637155;
        } else {
          result[7] += 0.017095495;
        }
      }
    } else {
      result[7] += 0.0781124;
    }
  } else {
    result[7] += -0.07681994;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      result[8] += -0.0054608667;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += 6.15684e-05;
            } else {
              result[8] += 0.0066179307;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += -0.038224827;
            } else {
              result[8] += -0.006670287;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[8] += 0.002691088;
            } else {
              result[8] += 0.012395524;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += -0.0024205404;
            } else {
              result[8] += -0.015344519;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[8] += -0.0351224;
        } else {
          result[8] += 0.00037645767;
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.095869824;
    } else {
      result[8] += 0.005085893;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -9.6109645e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0018179103;
      } else {
        result[9] += -0.0004982886;
      }
    } else {
      result[9] += 0.0031572399;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += -7.2785086e-05;
            } else {
              result[10] += 0.020461041;
            }
          } else {
            result[10] += -0.07948939;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += 0.054765966;
            } else {
              result[10] += -0.0028250192;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[10] += -0.036874548;
            } else {
              result[10] += -0.00016107323;
            }
          }
        }
      } else {
        result[10] += 0.018517474;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.0005498065;
      } else {
        result[10] += -0.019049779;
      }
    }
  } else {
    result[10] += -0.02015381;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 1.5481552e-05;
            } else {
              result[11] += -0.003917671;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[11] += -0.12703869;
            } else {
              result[11] += -0.0015380955;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.0025846143;
            } else {
              result[11] += -0.03416267;
            }
          } else {
            result[11] += 0.08070192;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.02964595;
            } else {
              result[11] += 0.0070273224;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.08742452;
            } else {
              result[11] += 4.9450686e-05;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.09278682;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += -0.002469266;
            } else {
              result[11] += -0.04758595;
            }
          }
        }
      }
    } else {
      result[11] += -0.000422418;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.10498982;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.0010419516;
        } else {
          result[11] += 0.012284632;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[11] += -0.0010085328;
        } else {
          result[11] += 0.00018006944;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += -0.00021483487;
            } else {
              result[12] += 0.0024061047;
            }
          } else {
            result[12] += -0.004771051;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.00076505187;
            } else {
              result[12] += 0.0066700513;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.00625517;
            } else {
              result[12] += 0.0003684569;
            }
          }
        }
      } else {
        result[12] += 0.027088473;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)7526)) {
        result[12] += -0.027789883;
      } else {
        result[12] += 0.011304334;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[12] += 0.050126947;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.006376998;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += 0.0022046594;
            } else {
              result[12] += 0.01496314;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.014526997;
            } else {
              result[12] += 0.009811232;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
        result[12] += -0.040509645;
      } else {
        result[12] += 0.01549993;
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)17327)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[13] += 2.0173047e-05;
            } else {
              result[13] += 0.107481994;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.012892811;
            } else {
              result[13] += -0.035319958;
            }
          }
        } else {
          result[13] += -0.08324485;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          result[13] += 0.08028005;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            result[13] += -0.08230188;
          } else {
            result[13] += 0.063885905;
          }
        }
      }
    } else {
      result[13] += -0.077226914;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[13] += 0.0516962;
    } else {
      result[13] += -0.017356949;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += -0.00045463847;
            } else {
              result[14] += -0.09282973;
            }
          } else {
            result[14] += 0.0037465002;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            result[14] += -0.009072114;
          } else {
            result[14] += -0.027593479;
          }
        }
      } else {
        result[14] += -0.10291107;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            result[14] += 0.0016833503;
          } else {
            result[14] += 0.00015485809;
          }
        } else {
          result[14] += 0.005972672;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
          result[14] += -0.005101008;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[14] += -0.0013554456;
            } else {
              result[14] += 0.001449497;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[14] += -0.001781715;
            } else {
              result[14] += 0.003292718;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[14] += 0.00066317;
            } else {
              result[14] += -0.008975886;
            }
          } else {
            result[14] += -0.09663632;
          }
        } else {
          result[14] += 0.09168434;
        }
      } else {
        result[14] += -0.09181848;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[14] += 0.10742173;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.010578184;
            } else {
              result[14] += -0.00666491;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[14] += 0.02222685;
            } else {
              result[14] += -0.0016142284;
            }
          }
        } else {
          result[14] += -0.02082544;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[0] += -0.00021839261;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)272)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)254)) {
              result[0] += 0.0007219558;
            } else {
              result[0] += 0.08476583;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
              result[0] += -0.014831502;
            } else {
              result[0] += 0.00049143395;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
          result[0] += -0.033564087;
        } else {
          result[0] += -1.5958842e-05;
        }
      }
    } else {
      result[0] += -0.03984291;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          result[0] += -0.07094809;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            result[0] += -0.011748598;
          } else {
            result[0] += 0.028770542;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
          result[0] += -0.0012279276;
        } else {
          result[0] += 0.02191196;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[0] += 0.12489752;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[0] += -0.036065876;
        } else {
          result[0] += 0.018573025;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)58035)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57010)) {
              result[1] += -6.776102e-05;
            } else {
              result[1] += 0.025847461;
            }
          } else {
            result[1] += -0.15888521;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57688)) {
            result[1] += 0.053475935;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57868)) {
              result[1] += -0.025227947;
            } else {
              result[1] += 0.040466677;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += -0.015422296;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58206)) {
            result[1] += -0.14717212;
          } else {
            result[1] += -0.026892457;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        result[1] += 0.03504194;
      } else {
        result[1] += 0.076936886;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58700)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += -0.017789576;
          } else {
            result[1] += -0.11533929;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            result[1] += 0.028126433;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.021436358;
            } else {
              result[1] += 0.05112555;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[1] += -0.07854012;
          } else {
            result[1] += -0.010003335;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
            result[1] += 0.04651414;
          } else {
            result[1] += -0.022397885;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          result[1] += 0.012231649;
        } else {
          result[1] += 0.024942128;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[1] += -0.0038078898;
            } else {
              result[1] += 0.009296344;
            }
          } else {
            result[1] += -0.02395293;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.10497749;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[1] += -0.033325467;
            } else {
              result[1] += 0.020662425;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -0.0001080789;
    } else {
      result[2] += 0.0012230617;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.018336715;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        result[2] += -0.027524525;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.018283864;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.02393038;
          } else {
            result[2] += 0.0146582145;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    result[3] += 0.006938518;
  } else {
    result[3] += -0.023517506;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
    result[4] += -6.726212e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.027494326;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        result[4] += -0.0051119504;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          result[4] += 0.030732831;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.007628515;
            } else {
              result[4] += -0.0071235956;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)56646)) {
              result[4] += 0.008023879;
            } else {
              result[4] += 0.02361315;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[5] += -0.00027203903;
          } else {
            result[5] += 0.0018196966;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            result[5] += 0.006572339;
          } else {
            result[5] += 0.0022695728;
          }
        }
      } else {
        result[5] += -0.0053822673;
      }
    } else {
      result[5] += -0.08138356;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[5] += 0.02303694;
      } else {
        result[5] += 0.006850646;
      }
    } else {
      result[5] += -0.0065045864;
    }
  }
  result[6] += -9.4422176e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += 0.00016826224;
            } else {
              result[7] += -0.0039299265;
            }
          } else {
            result[7] += 0.13192426;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += -0.050107684;
            } else {
              result[7] += -0.14452454;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[7] += 0.00019469617;
            } else {
              result[7] += -0.10644028;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          result[7] += 0.13767125;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.0049951514;
            } else {
              result[7] += 0.08663647;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.07763986;
            } else {
              result[7] += 0.02290894;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51738)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[7] += 0.00887672;
          } else {
            result[7] += -0.0033017122;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51595)) {
            result[7] += 0.017644744;
          } else {
            result[7] += 0.028572751;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51893)) {
          result[7] += -0.035525493;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)52186)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[7] += 0.019687295;
            } else {
              result[7] += 0.026390672;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
              result[7] += -0.030330943;
            } else {
              result[7] += 0.00035752074;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)495)) {
      result[7] += -0.06341817;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        result[7] += -0.029052546;
      } else {
        result[7] += 0.06575238;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[8] += 0.00012562216;
            } else {
              result[8] += 0.05720297;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[8] += 0.00795263;
            } else {
              result[8] += -0.005403796;
            }
          }
        } else {
          result[8] += -0.08811867;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.023350764;
            } else {
              result[8] += -0.009479217;
            }
          } else {
            result[8] += -0.1262349;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.0070341895;
            } else {
              result[8] += 0.12010158;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.02892032;
            } else {
              result[8] += -0.08007954;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.08866585;
      } else {
        result[8] += 0.01748137;
      }
    }
  } else {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
        result[8] += -0.044710383;
      } else {
        result[8] += 0.017149022;
      }
    } else {
      result[8] += 0.021609064;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -0.00010057614;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += -0.0021286365;
      } else {
        result[9] += -0.00095417607;
      }
    } else {
      result[9] += 0.0032530911;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[10] += 7.741635e-05;
            } else {
              result[10] += -0.011986349;
            }
          } else {
            result[10] += 0.02974959;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[10] += -0.11029107;
          } else {
            result[10] += 0.05958383;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.053903565;
            } else {
              result[10] += -0.036960963;
            }
          } else {
            result[10] += 0.11581225;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)522179)) {
              result[10] += -0.0016447887;
            } else {
              result[10] += -0.056807633;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[10] += 0.049118184;
            } else {
              result[10] += -0.0009215551;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        result[10] += -0.00039354528;
      } else {
        result[10] += -0.008112889;
      }
    }
  } else {
    result[10] += -0.01799844;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[11] += -0.0012724266;
        } else {
          result[11] += -0.00014824844;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.0002526098;
            } else {
              result[11] += -0.0015805057;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.024554675;
            } else {
              result[11] += -0.0019972955;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[11] += -0.084206745;
            } else {
              result[11] += 4.5226643e-05;
            }
          } else {
            result[11] += -0.00045287088;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            result[11] += 0.015029742;
          } else {
            result[11] += -0.039715577;
          }
        } else {
          result[11] += 0.058541063;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
          result[11] += -0.10292993;
        } else {
          result[11] += 0.010686593;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.10159865;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.0008952569;
        } else {
          result[11] += 0.01065089;
        }
      } else {
        result[11] += -0.00047092896;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += -0.00014885464;
            } else {
              result[12] += 0.0023535127;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[12] += -0.0036112699;
            } else {
              result[12] += -0.00084035855;
            }
          }
        } else {
          result[12] += 0.015289114;
        }
      } else {
        result[12] += -0.004138408;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[12] += 0.007230527;
            } else {
              result[12] += -0.010001711;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[12] += 0.03323763;
            } else {
              result[12] += 0.0019848829;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
            result[12] += -0.016265808;
          } else {
            result[12] += 0.006658863;
          }
        }
      } else {
        result[12] += 0.035775457;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      result[12] += -0.05074056;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
        result[12] += 0.03244631;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          result[12] += 0.005049091;
        } else {
          result[12] += -0.048019033;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
              result[13] += -8.202096e-05;
            } else {
              result[13] += 0.015738966;
            }
          } else {
            result[13] += -0.075798005;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            result[13] += 0.06768565;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += -0.08370404;
            } else {
              result[13] += 0.06068258;
            }
          }
        }
      } else {
        result[13] += -0.0412729;
      }
    } else {
      result[13] += 0.056357563;
    }
  } else {
    result[13] += -0.041049264;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[14] += -0.00017816327;
            } else {
              result[14] += -0.07595598;
            }
          } else {
            result[14] += 0.0013557133;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.014958073;
            } else {
              result[14] += 0.006052177;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[14] += 0.20581885;
            } else {
              result[14] += -0.0034987812;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[14] += -0.013111704;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.08139534;
            } else {
              result[14] += -0.014421438;
            }
          }
        } else {
          result[14] += 0.012524794;
        }
      }
    } else {
      result[14] += 0.062660426;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += -0.10941926;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          result[14] += 0.047539975;
        } else {
          result[14] += -0.020009374;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.0057968237;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          result[14] += -0.088383496;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[14] += 0.036420997;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += -0.012280848;
            } else {
              result[14] += 0.046676703;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[0] += -0.00017704295;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[0] += 0.0008101559;
            } else {
              result[0] += -0.016064974;
            }
          } else {
            result[0] += 0.09444605;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.0016713953;
            } else {
              result[0] += -0.02470388;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
              result[0] += -0.01582303;
            } else {
              result[0] += 0.0033311138;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
        result[0] += -0.030828457;
      } else {
        result[0] += -0.0002607347;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[0] += -0.064854175;
          } else {
            result[0] += -0.011647802;
          }
        } else {
          result[0] += 0.026975688;
        }
      } else {
        result[0] += 0.009453211;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[0] += 0.11654482;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
          result[0] += -0.03574002;
        } else {
          result[0] += 0.015568366;
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += 0.00016909586;
            } else {
              result[1] += -0.00085834466;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.036239505;
            } else {
              result[1] += -0.019963712;
            }
          }
        } else {
          result[1] += -0.0366856;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)24)) {
            result[1] += 0.055467878;
          } else {
            result[1] += 0.023367994;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            result[1] += -0.01554193;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[1] += 0.08980485;
            } else {
              result[1] += 0.0015205623;
            }
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          result[1] += -0.13644037;
        } else {
          result[1] += 0.007166437;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
          result[1] += 0.061525915;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[1] += -0.00015364333;
            } else {
              result[1] += -0.08906778;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[1] += 0.05850522;
            } else {
              result[1] += -0.022525847;
            }
          }
        }
      }
    }
  } else {
    result[1] += 0.03959832;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      result[2] += -8.464725e-05;
    } else {
      result[2] += 0.0013077601;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.02109359;
        } else {
          result[2] += -0.016678164;
        }
      } else {
        result[2] += 0.025443343;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
        result[2] += -0.027193997;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
          result[2] += 0.021355864;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            result[2] += -0.022113716;
          } else {
            result[2] += 0.014264511;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    result[3] += 0.0061308225;
  } else {
    result[3] += -0.021597628;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
    result[4] += -2.8969132e-05;
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[4] += 0.025909951;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
        result[4] += -0.0011648872;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          result[4] += 0.02995075;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
              result[4] += 0.0098443385;
            } else {
              result[4] += -0.00735915;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[4] += 0.024342308;
            } else {
              result[4] += 0.007882601;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)53207)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[5] += 0.00018658892;
          } else {
            result[5] += -0.0048394464;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[5] += 0.012629109;
          } else {
            result[5] += 0.0025565997;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[5] += -0.017404312;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            result[5] += 0.04120388;
          } else {
            result[5] += -0.0035945915;
          }
        }
      }
    } else {
      result[5] += -0.078338854;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
      result[5] += 0.01972454;
    } else {
      result[5] += 0.00028202755;
    }
  }
  result[6] += -7.2087176e-05;
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -3.7382793e-05;
            } else {
              result[7] += 0.05056919;
            }
          } else {
            result[7] += -0.044540524;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[7] += -0.06191355;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.030164616;
            } else {
              result[7] += 0.057496835;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          result[7] += 0.0187748;
        } else {
          result[7] += -0.03153039;
        }
      }
    } else {
      result[7] += -0.05051661;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        result[7] += 0.071625866;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[7] += 0.0009882017;
        } else {
          result[7] += 0.031547047;
        }
      }
    } else {
      result[7] += -0.03855597;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[8] += 6.114018e-05;
            } else {
              result[8] += 0.046794172;
            }
          } else {
            result[8] += -0.044418562;
          }
        } else {
          result[8] += 0.039401367;
        }
      } else {
        result[8] += -0.04826171;
      }
    } else {
      result[8] += 0.058887728;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
      result[8] += -0.117010154;
    } else {
      result[8] += 0.0055786897;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    result[9] += -7.5542805e-05;
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[9] += 0.005086503;
    } else {
      result[9] += 0.0012013941;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[10] += -0.00017078035;
        } else {
          result[10] += 0.0013244535;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.10248272;
          } else {
            result[10] += 0.012351179;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += -0.05172052;
            } else {
              result[10] += -9.341026e-05;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)17050)) {
              result[10] += 0.042684197;
            } else {
              result[10] += 5.3408596e-05;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
        result[10] += 0.06260461;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
          result[10] += 0.009669002;
        } else {
          result[10] += -0.017485483;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
      result[10] += -0.020025434;
    } else {
      result[10] += 0.010820948;
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[11] += -0.0010710402;
        } else {
          result[11] += -0.0001361503;
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += 0.00020419437;
            } else {
              result[11] += -0.001364814;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[11] += 0.02044292;
            } else {
              result[11] += -0.0016949337;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[11] += -8.931286e-05;
            } else {
              result[11] += -0.0009327081;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += 0.0016824302;
            } else {
              result[11] += -0.0007812774;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
              result[11] += 0.013236814;
            } else {
              result[11] += -0.04639099;
            }
          } else {
            result[11] += 0.058674857;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
            result[11] += -0.101982825;
          } else {
            result[11] += 0.018386543;
          }
        }
      } else {
        result[11] += 0.01143933;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      result[11] += -0.09815994;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          result[11] += 0.0003782489;
        } else {
          result[11] += 0.009198006;
        }
      } else {
        result[11] += -0.00041455627;
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.00031257264;
            } else {
              result[12] += 0.0002884012;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
              result[12] += 0.006019796;
            } else {
              result[12] += -0.0057205902;
            }
          }
        } else {
          result[12] += -0.028597094;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            result[12] += 0.04070681;
          } else {
            result[12] += 0.0045450735;
          }
        } else {
          result[12] += -0.0030709265;
        }
      }
    } else {
      result[12] += -0.022761915;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
        result[12] += -0.008698879;
      } else {
        result[12] += -0.05292811;
      }
    } else {
      result[12] += 0.012106801;
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.0003478444;
            } else {
              result[13] += -0.100298464;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[13] += 0.0032922563;
            } else {
              result[13] += 0.05496649;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[13] += -0.0036401171;
            } else {
              result[13] += -0.09908258;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[13] += 0.009105099;
            } else {
              result[13] += -0.05401772;
            }
          }
        }
      } else {
        result[13] += -0.076666184;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
        result[13] += 0.07087404;
      } else {
        result[13] += -0.0082026;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[13] += 0.0483496;
    } else {
      result[13] += -0.013467529;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[14] += -0.00041546026;
            } else {
              result[14] += 0.00064569595;
            }
          } else {
            result[14] += 0.0011275988;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[14] += -0.0023399447;
            } else {
              result[14] += 0.20397462;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.046036642;
            } else {
              result[14] += 0.006079086;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[14] += -0.011814798;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.07793813;
            } else {
              result[14] += -0.013854631;
            }
          }
        } else {
          result[14] += 0.011813395;
        }
      }
    } else {
      result[14] += 0.05836358;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        result[14] += -0.105167456;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
          result[14] += 0.042523395;
        } else {
          result[14] += -0.01814669;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        result[14] += 0.004948384;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          result[14] += -0.08329327;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[14] += 0.03199241;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += -0.010410544;
            } else {
              result[14] += 0.041880656;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[0] += -0.00016054905;
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)689205)) {
              result[0] += 0.0008790616;
            } else {
              result[0] += -0.013604101;
            }
          } else {
            result[0] += 0.091071114;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[0] += 0.0014167076;
            } else {
              result[0] += -0.02062462;
            }
          } else {
            result[0] += 0.0005343591;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1440)) {
        result[0] += -0.027105568;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
          result[0] += -0.011444993;
        } else {
          result[0] += 0.016297705;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            result[0] += -0.05970665;
          } else {
            result[0] += -0.010835272;
          }
        } else {
          result[0] += 0.024548933;
        }
      } else {
        result[0] += 0.008115142;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[0] += 0.10757256;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          result[0] += -0.030320803;
        } else {
          result[0] += 0.017507568;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.00018316256;
            } else {
              result[1] += -0.008638154;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.11221998;
            } else {
              result[1] += 0.0010284769;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.18144111;
            } else {
              result[1] += 0.0332974;
            }
          } else {
            result[1] += 0.061163213;
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[1] += -0.12627105;
          } else {
            result[1] += -0.054551724;
          }
        } else {
          result[1] += 0.09333609;
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[1] += 0.011770615;
          } else {
            result[1] += -0.03467475;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += 0.13311204;
            } else {
              result[1] += 0.059116103;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.114456914;
            } else {
              result[1] += 0.015256073;
            }
          }
        }
      } else {
        result[1] += -0.08399238;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        result[1] += -0.008298911;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[1] += -0.14004765;
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[1] += -0.03380024;
          } else {
            result[1] += -0.0651667;
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[1] += 0.0104973335;
            } else {
              result[1] += -0.0662179;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[1] += 0.0107378755;
            } else {
              result[1] += 0.087151244;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += 0.0033263299;
            } else {
              result[1] += -0.004831368;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[1] += -0.07871639;
            } else {
              result[1] += 0.012106953;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += 0.016102966;
        } else {
          result[1] += -0.09603812;
        }
      }
    }
  }
}

