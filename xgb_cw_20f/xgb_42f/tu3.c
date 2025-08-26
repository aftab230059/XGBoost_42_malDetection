
#include "header.h"

void predict_unit3(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0062863897;
            } else {
              result[6] += -0.14587316;
            }
          } else {
            result[6] += 0.17601582;
          }
        } else {
          result[6] += -0.15056223;
        }
      } else {
        result[6] += -0.15046635;
      }
    } else {
      result[6] += -0.15050185;
    }
  } else {
    result[6] += -0.15092471;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.032759562;
            } else {
              result[7] += -0.14473978;
            }
          } else {
            result[7] += 0.15964782;
          }
        } else {
          result[7] += -0.1505625;
        }
      } else {
        result[7] += -0.15061718;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.093519434;
            } else {
              result[7] += -0.150892;
            }
          } else {
            result[7] += 0.18144839;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.22383912;
            } else {
              result[7] += -0.14360122;
            }
          } else {
            result[7] += -0.15071775;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.15100032;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.5259025;
            } else {
              result[7] += -0.15097374;
            }
          }
        } else {
          result[7] += 0.03025317;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[7] += 0.14430127;
            } else {
              result[7] += -0.15407589;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.20997347;
            } else {
              result[7] += -0.16047107;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += 0.15997437;
            } else {
              result[7] += -0.105525196;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.14130284;
            } else {
              result[7] += 0.15661359;
            }
          }
        }
      } else {
        result[7] += -0.15033725;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          result[7] += -0.16145504;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[7] += 0.16328041;
            } else {
              result[7] += -0.0936719;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[7] += -0.058403913;
            } else {
              result[7] += -0.0064224275;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
              result[7] += 0.08289516;
            } else {
              result[7] += 0.11764497;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += -2.4794743e-05;
            } else {
              result[7] += 0.030226024;
            }
          }
        } else {
          result[7] += 0.16205554;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
              result[8] += -0.14438604;
            } else {
              result[8] += -0.111894086;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.01639931;
            } else {
              result[8] += -0.10594523;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[8] += 0.24509862;
            } else {
              result[8] += -0.1258492;
            }
          } else {
            result[8] += -0.12957671;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[8] += -0.15209016;
            } else {
              result[8] += -0.047203477;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[8] += -0.15074466;
            } else {
              result[8] += -0.1988569;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[8] += -0.15033296;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[8] += 0.16499336;
            } else {
              result[8] += -0.09928887;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[8] += 0.08624856;
            } else {
              result[8] += -0.072771594;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[8] += 0.17403036;
            } else {
              result[8] += -0.15317643;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[8] += 0.18387102;
            } else {
              result[8] += 0.24815868;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[8] += -0.25062948;
            } else {
              result[8] += 0.17719194;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[8] += -0.15466917;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14735349;
            } else {
              result[8] += 0.1652622;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += -0.23970845;
            } else {
              result[8] += -0.151396;
            }
          }
        }
      }
    }
  } else {
    result[8] += -0.15074112;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)4548885)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[9] += -0.00857753;
            } else {
              result[9] += -0.15073633;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1440657)) {
              result[9] += -0.15100028;
            } else {
              result[9] += -0.049316585;
            }
          }
        } else {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
            result[9] += 0.045459405;
          } else {
            result[9] += 0.034533083;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
          result[9] += 0.16064854;
        } else {
          result[9] += -0.15006573;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.13025017;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.13460857;
            } else {
              result[9] += 0.16155292;
            }
          }
        } else {
          result[9] += -0.14681329;
        }
      } else {
        result[9] += -0.15104322;
      }
    }
  } else {
    result[9] += -0.1507596;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.036692288;
            } else {
              result[10] += -0.15113246;
            }
          } else {
            result[10] += -0.15050784;
          }
        } else {
          result[10] += -0.1505368;
        }
      } else {
        result[10] += -0.15102872;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.021452865;
            } else {
              result[10] += 0.13587926;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.15598994;
            } else {
              result[10] += -0.12359106;
            }
          }
        } else {
          result[10] += -0.15059553;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[10] += -0.14901978;
            } else {
              result[10] += 0.16052681;
            }
          } else {
            result[10] += -0.15091723;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14881958;
            } else {
              result[10] += -0.05592518;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.16124511;
            } else {
              result[10] += -0.08641179;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15068784;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[11] += -0.14074889;
            } else {
              result[11] += -0.15050858;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[11] += -0.12728748;
            } else {
              result[11] += -0.102946214;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[11] += 0.031625148;
            } else {
              result[11] += 0.16033277;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += -0.20398891;
            } else {
              result[11] += -0.15089521;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.15091068;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += 0.014270401;
            } else {
              result[11] += 0.13593537;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
              result[11] += -0.021420952;
            } else {
              result[11] += -0.1766124;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.06320504;
            } else {
              result[11] += -0.017504599;
            }
          } else {
            result[11] += -0.15485151;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            result[11] += 0.16698003;
          } else {
            result[11] += -0.16119932;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.16555268;
            } else {
              result[11] += 0.045892365;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.15378723;
            } else {
              result[11] += -0.031935416;
            }
          }
        } else {
          result[11] += -0.15835124;
        }
      }
    }
  } else {
    result[11] += -0.15076563;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[12] += -0.11563284;
          } else {
            result[12] += -0.1344394;
          }
        } else {
          result[12] += -0.15051909;
        }
      } else {
        result[12] += -0.15055422;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
              result[12] += 0.029625447;
            } else {
              result[12] += -0.15108815;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[12] += 0.13318585;
            } else {
              result[12] += 0.16599828;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1488764;
            } else {
              result[12] += 0.15769072;
            }
          } else {
            result[12] += -0.15419003;
          }
        }
      } else {
        result[12] += -0.15068023;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15065949;
      } else {
        result[12] += 0.16292676;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.12687176;
            } else {
              result[12] += 0.16660741;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[12] += -0.048669253;
            } else {
              result[12] += -0.13230942;
            }
          }
        } else {
          result[12] += -0.14960408;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.12028944;
            } else {
              result[12] += 0.090120494;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.57541907;
            } else {
              result[12] += -0.15117353;
            }
          }
        } else {
          result[12] += -0.15064232;
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
              result[13] += -0.1416846;
            } else {
              result[13] += -0.15062162;
            }
          } else {
            result[13] += -0.101053156;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += 0.00018114029;
            } else {
              result[13] += 0.25594136;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
              result[13] += -0.12610655;
            } else {
              result[13] += 0.4701303;
            }
          }
        }
      } else {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += -0.15073156;
            } else {
              result[13] += -0.13023312;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
              result[13] += -0.11038952;
            } else {
              result[13] += 0.46537876;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.14669178;
            } else {
              result[13] += 0.12110602;
            }
          } else {
            result[13] += -0.15032081;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)57194)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.06750369;
            } else {
              result[13] += -0.15923685;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.11907563;
            } else {
              result[13] += 0.22260363;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[13] += -0.16081822;
            } else {
              result[13] += -0.21709938;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2371699456)) {
              result[13] += -0.15218848;
            } else {
              result[13] += -0.05556115;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3217214720)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)84290)) {
              result[13] += -0.12501411;
            } else {
              result[13] += -0.15097198;
            }
          } else {
            result[13] += -0.0006727245;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[13] += 0.16719586;
          } else {
            result[13] += -0.1121163;
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
              result[13] += 0.15719834;
            } else {
              result[13] += -0.1309681;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.19117178;
            } else {
              result[13] += -0.10364027;
            }
          }
        } else {
          result[13] += 0.16062045;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[13] += -0.11813578;
            } else {
              result[13] += 0.12936908;
            }
          } else {
            result[13] += 0.15111108;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[13] += 0.0023473233;
            } else {
              result[13] += -0.08165331;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.083632834;
            } else {
              result[13] += 0.17970742;
            }
          }
        }
      }
    } else {
      result[13] += -0.14501864;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += 0.0020219637;
            } else {
              result[14] += -0.1463258;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.0842813;
            } else {
              result[14] += -0.042287745;
            }
          }
        } else {
          result[14] += -0.15046608;
        }
      } else {
        result[14] += -0.15050185;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[14] += 0.017509397;
            } else {
              result[14] += -0.14735037;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.17225975;
            } else {
              result[14] += 0.06950174;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[14] += -0.14839993;
            } else {
              result[14] += 0.11181695;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += 0.22375439;
            } else {
              result[14] += -0.0846325;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
            result[14] += -0.14905836;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
              result[14] += -0.14020261;
            } else {
              result[14] += 0.022789668;
            }
          }
        } else {
          result[14] += -0.15058562;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15070508;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.04636763;
            } else {
              result[14] += -0.15076151;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[14] += 0.13588753;
            } else {
              result[14] += 0.031577844;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.07915859;
            } else {
              result[14] += -0.1497135;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.22975206;
            } else {
              result[14] += -0.084742114;
            }
          } else {
            result[14] += -0.14984004;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.24468686;
            } else {
              result[14] += -0.15009484;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14696212;
            } else {
              result[14] += -0.016883187;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.04829291;
            } else {
              result[14] += -0.15230472;
            }
          } else {
            result[14] += -0.15047011;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.1737793;
            } else {
              result[14] += -0.10717058;
            }
          } else {
            result[14] += -0.15788223;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.035710275;
            } else {
              result[14] += -0.15058544;
            }
          } else {
            result[14] += -0.15060377;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.04525026;
          } else {
            result[14] += 0.12498777;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[0] += 0.015930478;
            } else {
              result[0] += -0.12821475;
            }
          } else {
            result[0] += -0.13944942;
          }
        } else {
          result[0] += -0.15023759;
        }
      } else {
        result[0] += -0.1502819;
      }
    } else {
      result[0] += -0.15085785;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
            result[0] += -0.13852741;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
              result[0] += 0.059234492;
            } else {
              result[0] += 0.14606434;
            }
          }
        } else {
          result[0] += -0.14990656;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.16323258;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            result[0] += -0.15935451;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
              result[0] += 0.210823;
            } else {
              result[0] += 0.1584611;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[0] += -0.15055516;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.144062;
            } else {
              result[0] += 0.12941799;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[0] += -0.15043321;
            } else {
              result[0] += 0.020293621;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.057063185;
            } else {
              result[0] += 0.15063871;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.14756699;
            } else {
              result[0] += -0.0058560483;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.44565696;
            } else {
              result[0] += 0.024383472;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.15781721;
          } else {
            result[0] += -0.1032801;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.1497863;
      } else {
        result[1] += -0.11870119;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[1] += 0.03395493;
            } else {
              result[1] += 0.045049362;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.03720974;
            } else {
              result[1] += 0.07281612;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[1] += 0.16580006;
            } else {
              result[1] += -0.124791324;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[1] += -0.14045383;
            } else {
              result[1] += 0.081112765;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[1] += -0.09488523;
            } else {
              result[1] += 0.037640013;
            }
          } else {
            result[1] += -0.11680377;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[1] += 0.01707891;
            } else {
              result[1] += -0.12816165;
            }
          } else {
            result[1] += -0.14921002;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
          result[1] += -0.15053424;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += -0.10609599;
            } else {
              result[1] += 0.38323423;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[1] += -0.0131331775;
            } else {
              result[1] += -0.14601924;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[1] += -0.19536081;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[1] += 0.22311378;
            } else {
              result[1] += 0.16323651;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
              result[1] += 0.04707693;
            } else {
              result[1] += 0.123877324;
            }
          } else {
            result[1] += -0.14885464;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[1] += -0.15101078;
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.07233475;
            } else {
              result[1] += 0.23611711;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[1] += -0.1503402;
            } else {
              result[1] += -0.021446772;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[1] += 0.08786455;
            } else {
              result[1] += -0.14514668;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.46125418;
            } else {
              result[1] += 0.14080276;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.15072106;
      } else {
        result[2] += -0.13490501;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            result[2] += 0.11477201;
          } else {
            result[2] += -0.08544804;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[2] += 0.15286963;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
              result[2] += 0.04087566;
            } else {
              result[2] += 0.12673876;
            }
          }
        }
      } else {
        result[2] += -0.14805925;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[2] += 0.054409336;
          } else {
            result[2] += -0.058863174;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
            result[2] += 0.13104486;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)18664)) {
              result[2] += 0.0388179;
            } else {
              result[2] += 0.0550374;
            }
          }
        }
      } else {
        result[2] += -0.031678747;
      }
    } else {
      result[2] += 0.15749864;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15071908;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.15047692;
            } else {
              result[3] += 0.15915564;
            }
          } else {
            result[3] += 0.15742916;
          }
        } else {
          result[3] += -0.1468023;
        }
      } else {
        result[3] += -0.15057062;
      }
    } else {
      result[3] += -0.1507115;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15056956;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.15766878;
    } else {
      result[4] += -0.13892537;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.09789119;
            } else {
              result[5] += -0.1502568;
            }
          } else {
            result[5] += -0.15075149;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.15050249;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.034331616;
            } else {
              result[5] += -0.14903891;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.060473155;
        } else {
          result[5] += -0.021846607;
        }
      }
    } else {
      result[5] += 0.16849703;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)44766)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)44284)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)43510)) {
              result[5] += 0.053739246;
            } else {
              result[5] += -0.05575742;
            }
          } else {
            result[5] += 0.15276305;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)46100)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[5] += -0.080656365;
            } else {
              result[5] += -0.00089480705;
            }
          } else {
            result[5] += 0.035819806;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
          result[5] += 0.15544322;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)49160)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)48906)) {
              result[5] += 0.0008668685;
            } else {
              result[5] += -0.024279911;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)50669)) {
              result[5] += 0.123093404;
            } else {
              result[5] += 0.05543942;
            }
          }
        }
      }
    } else {
      result[5] += -0.15024316;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.005190186;
            } else {
              result[6] += -0.14434169;
            }
          } else {
            result[6] += 0.17109442;
          }
        } else {
          result[6] += -0.15005448;
        }
      } else {
        result[6] += -0.15023272;
      }
    } else {
      result[6] += -0.15027688;
    }
  } else {
    result[6] += -0.15074879;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.023655249;
            } else {
              result[7] += -0.14144076;
            }
          } else {
            result[7] += 0.15679215;
          }
        } else {
          result[7] += -0.15031238;
        }
      } else {
        result[7] += -0.15037337;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.08739503;
            } else {
              result[7] += -0.15025562;
            }
          } else {
            result[7] += 0.1751039;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.20501138;
            } else {
              result[7] += -0.13999915;
            }
          } else {
            result[7] += -0.15027538;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.15075675;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.32057977;
            } else {
              result[7] += -0.1506095;
            }
          }
        } else {
          result[7] += 0.040527124;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.15886608;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[7] += -0.1754126;
          } else {
            result[7] += -0.15945685;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.09553718;
            } else {
              result[7] += 0.004333902;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.16504261;
            } else {
              result[7] += 0.15923779;
            }
          }
        }
      }
    } else {
      if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
              result[7] += 0.1461404;
            } else {
              result[7] += -0.15350854;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.18343008;
            } else {
              result[7] += -0.15926203;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += 0.15730901;
            } else {
              result[7] += -0.097969435;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.13611847;
            } else {
              result[7] += 0.15248787;
            }
          }
        }
      } else {
        result[7] += -0.1499613;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[8] += -0.103889525;
            } else {
              result[8] += -0.15024519;
            }
          } else {
            result[8] += -0.15028936;
          }
        } else {
          result[8] += -0.10644855;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += 0.024079701;
            } else {
              result[8] += -0.12160918;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[8] += 0.14663547;
            } else {
              result[8] += 0.023818156;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[8] += 0.15968555;
            } else {
              result[8] += -0.15501875;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.14066294;
            } else {
              result[8] += -0.15043257;
            }
          }
        }
      }
    } else {
      result[8] += -0.15051025;
    }
  } else {
    result[8] += -0.15055504;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.06841217;
            } else {
              result[9] += -0.15028095;
            }
          } else {
            result[9] += -0.1504929;
          }
        } else {
          result[9] += -0.15057926;
        }
      } else {
        result[9] += -0.15091914;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.1275641;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.12468929;
            } else {
              result[9] += 0.15648937;
            }
          }
        } else {
          result[9] += -0.14541699;
        }
      } else {
        result[9] += -0.15057479;
      }
    }
  } else {
    result[9] += -0.15058376;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.03063149;
            } else {
              result[10] += -0.14969468;
            }
          } else {
            result[10] += -0.15026887;
          }
        } else {
          result[10] += -0.15030694;
        }
      } else {
        result[10] += -0.15085128;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[10] += 0.027302336;
            } else {
              result[10] += 0.109026685;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.15054026;
            } else {
              result[10] += -0.117362626;
            }
          }
        } else {
          result[10] += -0.15021153;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14788255;
            } else {
              result[10] += 0.15655325;
            }
          } else {
            result[10] += -0.15069114;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14703928;
            } else {
              result[10] += -0.04330825;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[10] += 0.15795296;
            } else {
              result[10] += -0.07824382;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.1504794;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.11122049;
            } else {
              result[11] += -0.1502556;
            }
          } else {
            result[11] += -0.1502827;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[11] += 0.018824322;
            } else {
              result[11] += 0.08543672;
            }
          } else {
            result[11] += -0.15220863;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.1507117;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[11] += -0.0033060045;
            } else {
              result[11] += 0.081504285;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
              result[11] += 0.17316836;
            } else {
              result[11] += -0.14085758;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.050578244;
            } else {
              result[11] += -0.017332619;
            }
          } else {
            result[11] += -0.15290385;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            result[11] += 0.163651;
          } else {
            result[11] += -0.15832812;
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[11] += 0.16189349;
            } else {
              result[11] += 0.13551463;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.15260386;
            } else {
              result[11] += 0.009503361;
            }
          }
        } else {
          result[11] += -0.15803427;
        }
      }
    }
  } else {
    result[11] += -0.1505851;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[12] += -0.1088451;
            } else {
              result[12] += -0.14099917;
            }
          } else {
            result[12] += -0.13144368;
          }
        } else {
          result[12] += -0.15027861;
        }
      } else {
        result[12] += -0.1503218;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.039727863;
            } else {
              result[12] += -0.15099995;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.18781103;
            } else {
              result[12] += 0.029527726;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.1480125;
            } else {
              result[12] += 0.1438192;
            }
          } else {
            result[12] += -0.1538945;
          }
        }
      } else {
        result[12] += -0.1504539;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15047692;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          result[12] += 0.05644661;
        } else {
          result[12] += 0.16236176;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[12] += 0.110192284;
            } else {
              result[12] += 0.16295967;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[12] += -0.034413375;
            } else {
              result[12] += -0.12761727;
            }
          }
        } else {
          result[12] += -0.14890844;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[12] += -0.15167141;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[12] += 0.24248633;
            } else {
              result[12] += -0.009747519;
            }
          }
        } else {
          result[12] += -0.15044023;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.08295029;
            } else {
              result[13] += -0.15025055;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.06304153;
            } else {
              result[13] += -0.10749186;
            }
          }
        } else {
          result[13] += -0.15028167;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.1503486;
          } else {
            result[13] += 0.10267808;
          }
        } else {
          result[13] += 0.13001028;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += -0.024589183;
            } else {
              result[13] += 0.083654016;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
              result[13] += -0.08616127;
            } else {
              result[13] += 0.09112968;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)111140)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[13] += 0.2078407;
            } else {
              result[13] += -0.16587119;
            }
          } else {
            result[13] += -0.14941865;
          }
        }
      } else {
        result[13] += -0.15043941;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.15084946;
            } else {
              result[13] += -0.1277907;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.1861456;
            } else {
              result[13] += -0.0942697;
            }
          }
        } else {
          result[13] += 0.15791182;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[13] += -0.15903267;
          } else {
            result[13] += 0.15102687;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[13] += 0.096899875;
            } else {
              result[13] += -0.024546646;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
              result[13] += -0.049964096;
            } else {
              result[13] += 0.17500384;
            }
          }
        }
      }
    } else {
      result[13] += -0.14355257;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[14] += 0.0018571254;
            } else {
              result[14] += -0.14482167;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[14] += -0.07727052;
            } else {
              result[14] += -0.036479436;
            }
          }
        } else {
          result[14] += -0.1502325;
        }
      } else {
        result[14] += -0.15027688;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[14] += -0.0084420815;
            } else {
              result[14] += 0.10276616;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[14] += 0.1769616;
            } else {
              result[14] += -0.14952189;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
            result[14] += -0.1531163;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[14] += 0.630303;
            } else {
              result[14] += -0.14137131;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[14] += -0.13850036;
            } else {
              result[14] += 0.142648;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.19056194;
            } else {
              result[14] += -0.12459108;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.26739496;
            } else {
              result[14] += -0.14830281;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
              result[14] += -0.06563035;
            } else {
              result[14] += -0.13731635;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15052453;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.027965175;
            } else {
              result[14] += -0.15051104;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11556)) {
              result[14] += -0.025586763;
            } else {
              result[14] += 0.040035117;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.07455418;
            } else {
              result[14] += -0.14923237;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
              result[14] += -0.008545285;
            } else {
              result[14] += 0.2731743;
            }
          } else {
            result[14] += -0.14931706;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.17110184;
            } else {
              result[14] += -0.1492963;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14555395;
            } else {
              result[14] += 0.027819332;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
              result[14] += 0.04389736;
            } else {
              result[14] += -0.14998741;
            }
          } else {
            result[14] += -0.1501276;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.16758196;
            } else {
              result[14] += -0.09450056;
            }
          } else {
            result[14] += -0.15391812;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.038311392;
            } else {
              result[14] += -0.15035683;
            }
          } else {
            result[14] += -0.15039437;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1594555904)) {
            result[14] += 0.038924456;
          } else {
            result[14] += 0.11161447;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[0] += 0.014626057;
            } else {
              result[0] += -0.12202994;
            }
          } else {
            result[0] += -0.13741311;
          }
        } else {
          result[0] += -0.15002404;
        }
      } else {
        result[0] += -0.1500795;
      }
    } else {
      result[0] += -0.15071428;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)2340)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[0] += -0.13352814;
            } else {
              result[0] += -0.007319111;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[0] += 0.14932701;
            } else {
              result[0] += 0.044205997;
            }
          }
        } else {
          result[0] += -0.14893635;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
            result[0] += 0.16090837;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[0] += 0.09683998;
            } else {
              result[0] += -0.15776557;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)22277)) {
            result[0] += 0.20372418;
          } else {
            result[0] += 0.1563042;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[0] += -0.15037969;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.14281054;
            } else {
              result[0] += 0.11017401;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[0] += -0.15023497;
            } else {
              result[0] += 0.004856342;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[0] += 0.063102566;
            } else {
              result[0] += -0.14865062;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.14652425;
            } else {
              result[0] += 0.002179816;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[0] += -0.04513173;
            } else {
              result[0] += 0.20213865;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.15573415;
          } else {
            result[0] += -0.096137874;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[1] += -0.1493444;
      } else {
        result[1] += -0.113668285;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[1] += 0.03716715;
            } else {
              result[1] += 0.027749164;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[1] += -0.031805363;
            } else {
              result[1] += 0.06315394;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
              result[1] += 0.16299282;
            } else {
              result[1] += -0.11769197;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[1] += -0.13586517;
            } else {
              result[1] += 0.06797509;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1038)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
            result[1] += -0.12334152;
          } else {
            result[1] += 0.02164319;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[1] += -0.11576874;
            } else {
              result[1] += -0.036572184;
            }
          } else {
            result[1] += -0.14854786;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        result[1] += -0.15070067;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[1] += 0.26736733;
            } else {
              result[1] += 2.1936548;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57338)) {
              result[1] += 0.058648776;
            } else {
              result[1] += -0.063695766;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[1] += 0.027079625;
            } else {
              result[1] += -0.150983;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += -0.13219221;
            } else {
              result[1] += -0.060928587;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
        result[1] += -0.15085393;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[1] += -0.057642397;
            } else {
              result[1] += 0.20856573;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[1] += 0.09696335;
            } else {
              result[1] += 0.3515128;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[1] += -0.15011111;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
              result[1] += 0.14531127;
            } else {
              result[1] += -0.14252266;
            }
          }
        }
      }
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.1505738;
      } else {
        result[2] += -0.1319726;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
              result[2] += 0.11305485;
            } else {
              result[2] += 0.054342914;
            }
          } else {
            result[2] += -0.09187106;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[2] += 0.14773595;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += 0.04041205;
            } else {
              result[2] += 0.13664012;
            }
          }
        }
      } else {
        result[2] += -0.14712651;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += 0.04702034;
            } else {
              result[2] += 0.03267764;
            }
          } else {
            result[2] += -0.040247697;
          }
        } else {
          result[2] += 0.11230262;
        }
      } else {
        result[2] += -0.029008957;
      }
    } else {
      result[2] += 0.15553144;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15057838;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.1501402;
            } else {
              result[3] += 0.15688053;
            }
          } else {
            result[3] += 0.155562;
          }
        } else {
          result[3] += -0.14567368;
        }
      } else {
        result[3] += -0.15026374;
      }
    } else {
      result[3] += -0.1505563;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.1503749;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.1556611;
    } else {
      result[4] += -0.13541071;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.09186404;
            } else {
              result[5] += -0.15005165;
            }
          } else {
            result[5] += -0.15061674;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.1503171;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[5] += -0.0252446;
            } else {
              result[5] += -0.14843805;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[5] += -0.053087253;
        } else {
          result[5] += -0.015905138;
        }
      }
    } else {
      result[5] += 0.15686384;
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)10532)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)9760)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[5] += 0.03406291;
            } else {
              result[5] += 0.1427557;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7939)) {
              result[5] += -0.06461844;
            } else {
              result[5] += 0.06533201;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
            result[5] += -0.15509756;
          } else {
            result[5] += 0.028301263;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11049)) {
            result[5] += 0.048604675;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
              result[5] += 0.21977825;
            } else {
              result[5] += 0.08317009;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)22837)) {
              result[5] += 0.034562256;
            } else {
              result[5] += -0.08821443;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)30791)) {
              result[5] += 0.07504944;
            } else {
              result[5] += 0.042284384;
            }
          }
        }
      }
    } else {
      result[5] += -0.1500319;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.004561224;
            } else {
              result[6] += -0.1427497;
            }
          } else {
            result[6] += 0.16685352;
          }
        } else {
          result[6] += -0.14953095;
        }
      } else {
        result[6] += -0.15001942;
      }
    } else {
      result[6] += -0.15007482;
    }
  } else {
    result[6] += -0.1506152;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.01839179;
            } else {
              result[7] += -0.13812841;
            }
          } else {
            result[7] += 0.15449476;
          }
        } else {
          result[7] += -0.1500896;
        }
      } else {
        result[7] += -0.15015881;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.08148482;
            } else {
              result[7] += -0.14971323;
            }
          } else {
            result[7] += 0.16914093;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.20089273;
            } else {
              result[7] += -0.13602057;
            }
          } else {
            result[7] += -0.14984445;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.15052846;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.22606708;
            } else {
              result[7] += -0.15022962;
            }
          }
        } else {
          result[7] += 0.050963633;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        result[7] += 0.1566077;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.16866969;
            } else {
              result[7] += -0.15787612;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
              result[7] += 0.14225344;
            } else {
              result[7] += -0.051445324;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
              result[7] += 0.08661093;
            } else {
              result[7] += -0.0017053176;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
              result[7] += -0.1575194;
            } else {
              result[7] += 0.15713681;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.14553736;
            } else {
              result[7] += -0.22360778;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[7] += -0.17488052;
            } else {
              result[7] += -0.15085933;
            }
          }
        } else {
          result[7] += -0.15925798;
        }
      } else {
        if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
              result[7] += 0.15537634;
            } else {
              result[7] += -0.09076863;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[7] += -0.13140248;
            } else {
              result[7] += 0.14887883;
            }
          }
        } else {
          result[7] += -0.14873558;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[8] += -0.09752926;
            } else {
              result[8] += -0.13827801;
            }
          } else {
            result[8] += -0.15003121;
          }
        } else {
          result[8] += -0.15008639;
        }
      } else {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[8] += -0.013762159;
            } else {
              result[8] += 0.086011015;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.059635624;
            } else {
              result[8] += -0.100547224;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.17729208;
            } else {
              result[8] += -0.12508279;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[8] += -0.1374559;
            } else {
              result[8] += -0.15023804;
            }
          }
        }
      }
    } else {
      result[8] += -0.1503394;
    }
  } else {
    result[8] += -0.15039515;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[9] += 0.055959415;
            } else {
              result[9] += -0.15004776;
            }
          } else {
            result[9] += -0.15026626;
          }
        } else {
          result[9] += -0.15033692;
        }
      } else {
        result[9] += -0.15076888;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            result[9] += -0.12377713;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[9] += 0.11397632;
            } else {
              result[9] += 0.15174817;
            }
          }
        } else {
          result[9] += -0.14367707;
        }
      } else {
        result[9] += -0.15022533;
      }
    }
  } else {
    result[9] += -0.1504482;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[10] += 0.026690744;
            } else {
              result[10] += -0.14832526;
            }
          } else {
            result[10] += -0.15005341;
          }
        } else {
          result[10] += -0.15010257;
        }
      } else {
        result[10] += -0.1507085;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)464)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
              result[10] += 0.05463551;
            } else {
              result[10] += -0.11204753;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.14542012;
            } else {
              result[10] += -0.109890714;
            }
          }
        } else {
          result[10] += -0.14978881;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)255327280)) {
              result[10] += -0.14722039;
            } else {
              result[10] += 0.15446615;
            }
          } else {
            result[10] += -0.15050237;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[10] += -0.14523934;
            } else {
              result[10] += -0.031288024;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)42393)) {
              result[10] += 0.042738885;
            } else {
              result[10] += 0.15573458;
            }
          }
        }
      }
    }
  } else {
    result[10] += -0.15030947;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            result[11] += -0.104461834;
          } else {
            result[11] += -0.13765079;
          }
        } else {
          result[11] += -0.15004098;
        }
      } else {
        result[11] += -0.15008022;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[11] += 0.013340519;
            } else {
              result[11] += -0.11599288;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[11] += 0.09906535;
            } else {
              result[11] += 0.038470354;
            }
          }
        } else {
          result[11] += -0.15056887;
        }
      } else {
        result[11] += -0.15023713;
      }
    }
  } else {
    result[11] += -0.15045026;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[12] += -0.10350136;
            } else {
              result[12] += -0.13911292;
            }
          } else {
            result[12] += -0.12797594;
          }
        } else {
          result[12] += -0.15006252;
        }
      } else {
        result[12] += -0.15011618;
      }
    } else {
      if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[12] += 0.035155397;
            } else {
              result[12] += -0.15082942;
            }
          } else {
            result[12] += -0.15200423;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[12] += -0.14701074;
            } else {
              result[12] += 0.13134885;
            }
          } else {
            result[12] += -0.15355788;
          }
        }
      } else {
        result[12] += -0.15025997;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
        result[12] += -0.15033671;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
          result[12] += 0.05169069;
        } else {
          result[12] += 0.15158267;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += -0.183127;
            } else {
              result[12] += 0.16994128;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[12] += 0.15989384;
            } else {
              result[12] += 0.105564825;
            }
          }
        } else {
          result[12] += -0.14819227;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
              result[12] += -0.11038139;
            } else {
              result[12] += 0.07735631;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
              result[12] += 0.42393956;
            } else {
              result[12] += -0.15013781;
            }
          }
        } else {
          result[12] += -0.150275;
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += -0.07216555;
            } else {
              result[13] += -0.14996266;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[13] += 0.06262113;
            } else {
              result[13] += -0.0981515;
            }
          }
        } else {
          result[13] += -0.15002623;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)2281)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            result[13] += -0.15016586;
          } else {
            result[13] += 0.09621366;
          }
        } else {
          result[13] += 0.120667815;
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.051802624;
            } else {
              result[13] += -0.16101485;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.14284338;
            } else {
              result[13] += 0.1998865;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[13] += -0.17283276;
            } else {
              result[13] += -0.2643828;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[13] += 0.34244215;
            } else {
              result[13] += -0.14374234;
            }
          }
        }
      } else {
        result[13] += -0.15027544;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[13] += 0.14491512;
            } else {
              result[13] += -0.124295525;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)229)) {
              result[13] += 0.18234375;
            } else {
              result[13] += -0.091306955;
            }
          }
        } else {
          result[13] += 0.1559625;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.13503155;
            } else {
              result[13] += -0.005408856;
            }
          } else {
            result[13] += 0.13948333;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.0148140155;
            } else {
              result[13] += 0.18142228;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += -0.008371866;
            } else {
              result[13] += 0.1402351;
            }
          }
        }
      }
    } else {
      result[13] += -0.14209573;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += 0.0044139773;
            } else {
              result[14] += 0.10011148;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
              result[14] += -0.15270868;
            } else {
              result[14] += -0.07147171;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[14] += -0.12877795;
            } else {
              result[14] += 0.1571914;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += -0.17231676;
            } else {
              result[14] += -0.10531853;
            }
          }
        }
      } else {
        result[14] += -0.15001921;
      }
    } else {
      result[14] += -0.15007482;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            result[14] += -0.15038583;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += 0.015522136;
            } else {
              result[14] += -0.1501231;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4620)) {
              result[14] += 0.11514101;
            } else {
              result[14] += 0.016836224;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.06942334;
            } else {
              result[14] += -0.14873098;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.19400357;
            } else {
              result[14] += -0.081934236;
            }
          } else {
            result[14] += -0.14873688;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.13158332;
            } else {
              result[14] += -0.14875695;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += -0.14390834;
            } else {
              result[14] += 0.02745763;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.038625617;
            } else {
              result[14] += -0.15162215;
            }
          } else {
            result[14] += -0.14979641;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[14] += 0.16428381;
            } else {
              result[14] += -0.08229181;
            }
          } else {
            result[14] += -0.15182625;
          }
        }
      } else {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[14] += -0.13064942;
            } else {
              result[14] += -0.15022373;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
              result[14] += 0.1633462;
            } else {
              result[14] += -0.14871185;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42509)) {
              result[14] += 0.0107765645;
            } else {
              result[14] += 0.07167727;
            }
          } else {
            result[14] += 0.11427193;
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[0] += 0.013337024;
            } else {
              result[0] += -0.11503866;
            }
          } else {
            result[0] += -0.13515471;
          }
        } else {
          result[0] += -0.14981237;
        }
      } else {
        result[0] += -0.14988361;
      }
    } else {
      result[0] += -0.15060511;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1452252288)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
              result[0] += 0.028620956;
            } else {
              result[0] += 0.06431485;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[0] += -0.109381184;
            } else {
              result[0] += 0.02607653;
            }
          }
        } else {
          result[0] += -0.14764528;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1457498112)) {
          result[0] += 0.15924595;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
            result[0] += -0.15611869;
          } else {
            result[0] += 0.1571572;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
            result[0] += -0.15021598;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.1417974;
            } else {
              result[0] += 0.08954601;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[0] += -0.15005365;
            } else {
              result[0] += -0.0077331406;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.039595813;
            } else {
              result[0] += 0.13724084;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)32672)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[0] += -0.14527288;
            } else {
              result[0] += 0.009377225;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.33652228;
            } else {
              result[0] += 0.0033528337;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[0] += 0.15412217;
          } else {
            result[0] += -0.088781476;
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
    if ( (data[0].missing != -1) && (data[0].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[1] += -0.14884365;
        } else {
          result[1] += -0.10831038;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
              result[1] += 0.016618626;
            } else {
              result[1] += -0.038947213;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.009935611;
            } else {
              result[1] += 0.13139778;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.15134427;
            } else {
              result[1] += -0.2029779;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
              result[1] += 0.14091757;
            } else {
              result[1] += -0.06275756;
            }
          }
        }
      }
    } else {
      result[1] += -0.15018785;
    }
  } else {
    result[1] += -0.14976975;
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        result[2] += -0.15045384;
      } else {
        result[2] += -0.12875387;
      }
    } else {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
              result[2] += 0.123352945;
            } else {
              result[2] += 0.059169915;
            }
          } else {
            result[2] += -0.09683582;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[2] += 0.14286861;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += 0.022187026;
            } else {
              result[2] += 0.12990494;
            }
          }
        }
      } else {
        result[2] += -0.1459634;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)786)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          result[2] += 0.045805614;
        } else {
          result[2] += -0.056053754;
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)1280)) {
          result[2] += 0.10818755;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)1556)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.047782294;
            } else {
              result[2] += 0.027507234;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)1805)) {
              result[2] += 0.096257426;
            } else {
              result[2] += 0.035314176;
            }
          }
        }
      }
    } else {
      result[2] += 0.15408841;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.15046637;
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[3] += -0.14980936;
            } else {
              result[3] += 0.15521261;
            }
          } else {
            result[3] += 0.15424918;
          }
        } else {
          result[3] += -0.14462288;
        }
      } else {
        result[3] += -0.14996225;
      }
    } else {
      result[3] += -0.15042779;
    }
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    result[4] += -0.15019463;
  } else {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)15)) {
      result[4] += 0.15418874;
    } else {
      result[4] += -0.1311099;
    }
  }
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)65535)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[5] += -0.0857307;
            } else {
              result[5] += -0.14985082;
            }
          } else {
            result[5] += -0.15051323;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
            result[5] += -0.1501513;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[5] += 0.02486792;
            } else {
              result[5] += -0.092793316;
            }
          }
        }
      } else {
        result[5] += 0.14792357;
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[5] += -0.04614912;
      } else {
        result[5] += -0.01088589;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)10532)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)9760)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)6698)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)5952)) {
              result[5] += 0.02924785;
            } else {
              result[5] += 0.122336455;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)7454)) {
              result[5] += -0.08830267;
            } else {
              result[5] += 0.042001143;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)10262)) {
            result[5] += -0.14506401;
          } else {
            result[5] += 0.025814593;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)13573)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)11049)) {
            result[5] += 0.04260881;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)11816)) {
              result[5] += 0.18790536;
            } else {
              result[5] += 0.07105984;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)24122)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)23105)) {
              result[5] += 0.02885561;
            } else {
              result[5] += -0.0873758;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)29495)) {
              result[5] += 0.0664888;
            } else {
              result[5] += 0.03715667;
            }
          }
        }
      }
    } else {
      result[5] += -0.1498232;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[6] += 0.0039369026;
            } else {
              result[6] += -0.1410082;
            }
          } else {
            result[6] += 0.16322465;
          }
        } else {
          result[6] += -0.1490065;
        }
      } else {
        result[6] += -0.14980762;
      }
    } else {
      result[6] += -0.14987889;
    }
  } else {
    result[6] += -0.1505129;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
          if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[7] += 0.0140671795;
            } else {
              result[7] += -0.13460079;
            }
          } else {
            result[7] += 0.15264443;
          }
        } else {
          result[7] += -0.14987455;
        }
      } else {
        result[7] += -0.14995551;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[19].missing != -1) && (data[19].fvalue < (float)5)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[7] += -0.075519785;
            } else {
              result[7] += -0.14907634;
            }
          } else {
            result[7] += 0.16468984;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)56)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[7] += 0.18213886;
            } else {
              result[7] += -0.13120507;
            }
          } else {
            result[7] += -0.14934887;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[7] += -0.15029773;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2677417984)) {
              result[7] += 0.17967865;
            } else {
              result[7] += -0.1498132;
            }
          }
        } else {
          result[7] += 0.057092365;
        }
      }
    }
  } else {
    if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)56)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += 0.13054553;
            } else {
              result[7] += -0.2021734;
            }
          } else {
            result[7] += -0.1519514;
          }
        } else {
          result[7] += -0.15795672;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            result[7] += 0.15398735;
          } else {
            result[7] += -0.08367288;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[7] += -0.14644043;
            } else {
              result[7] += 0.21753474;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)54602)) {
              result[7] += 0.018079147;
            } else {
              result[7] += 0.1536376;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        result[7] += -0.15667981;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
              result[7] += 0.028921967;
            } else {
              result[7] += 0.08040652;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[7] += -0.023517996;
            } else {
              result[7] += 0.0104192905;
            }
          }
        } else {
          result[7] += 0.15534544;
        }
      }
    }
  }
}

