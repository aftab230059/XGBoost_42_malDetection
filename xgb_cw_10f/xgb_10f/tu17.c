
#include "header.h"

void predict_unit17(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.03064647;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)44042)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)41722)) {
              result[4] += -0.0008153966;
            } else {
              result[4] += 0.018429898;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)46306)) {
              result[4] += -0.015006191;
            } else {
              result[4] += 7.198872e-05;
            }
          }
        }
      } else {
        result[4] += 0.08278073;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
              result[4] += 0.029612591;
            } else {
              result[4] += 0.08328459;
            }
          } else {
            result[4] += 0.014028033;
          }
        } else {
          result[4] += -0.07628241;
        }
      } else {
        result[4] += 0.09959396;
      }
    }
  } else {
    result[4] += -0.1220114;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 0.00027874258;
        } else {
          result[5] += -0.022018252;
        }
      } else {
        result[5] += -0.111789;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53366)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[5] += 0.01255902;
            } else {
              result[5] += -0.0005856231;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[5] += -0.08945357;
            } else {
              result[5] += -0.02053407;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51446)) {
            result[5] += 0.113110885;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52036)) {
              result[5] += -0.10152504;
            } else {
              result[5] += 0.05260205;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
          result[5] += -0.10503444;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
            result[5] += 0.13132998;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56683)) {
              result[5] += -0.10198663;
            } else {
              result[5] += 0.019107392;
            }
          }
        }
      }
    }
  } else {
    result[5] += -0.08712733;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00026668893;
  } else {
    result[6] += -0.121871375;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)17)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[7] += -4.2541207e-05;
            } else {
              result[7] += 0.074608155;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[7] += -0.017037861;
            } else {
              result[7] += -0.114712775;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)14)) {
            result[7] += 0.084739454;
          } else {
            result[7] += 0.034918323;
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)27)) {
          result[7] += -0.11406293;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)28)) {
            result[7] += 0.070286155;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)32)) {
              result[7] += -0.11205177;
            } else {
              result[7] += 0.005226052;
            }
          }
        }
      }
    } else {
      result[7] += -0.10076926;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
      result[7] += -0.008370364;
    } else {
      result[7] += 0.10300764;
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
              result[8] += 8.4735184e-05;
            } else {
              result[8] += 0.12079401;
            }
          } else {
            result[8] += -0.14539245;
          }
        } else {
          result[8] += -0.12356611;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.07702443;
            } else {
              result[8] += -0.047802653;
            }
          } else {
            result[8] += -0.18335155;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.14413507;
          } else {
            result[8] += -0.022117473;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.14000072;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[8] += -0.1856157;
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)440)) {
            result[8] += 0.11109231;
          } else {
            result[8] += -0.0936189;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1395589;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          result[8] += -0.07606058;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            result[8] += 0.12341703;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[8] += 0.089216106;
            } else {
              result[8] += -0.014440542;
            }
          }
        }
      } else {
        result[8] += -0.09263244;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.00023848341;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.03598392;
        } else {
          result[9] += -0.0995914;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.010333519;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[9] += 0.0053007114;
        } else {
          result[9] += 0.0036273345;
        }
      }
    }
  } else {
    result[9] += -0.10472959;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[10] += -3.9278e-05;
      } else {
        result[10] += -0.12491675;
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1191146)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.0045277406;
            } else {
              result[10] += 0.00025716572;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)522179)) {
              result[10] += 0.010048926;
            } else {
              result[10] += 0.08665245;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[10] += -0.10806863;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
              result[10] += 0.0574434;
            } else {
              result[10] += -0.10336568;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)343625)) {
            result[10] += -0.12355992;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[10] += 0.07160246;
            } else {
              result[10] += -0.069900714;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
              result[10] += 0.06326718;
            } else {
              result[10] += -0.028400732;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)761739)) {
              result[10] += -0.044979792;
            } else {
              result[10] += 0.0043663983;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
      result[10] += -0.09107007;
    } else {
      result[10] += -0.022756949;
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += -0.014195332;
            } else {
              result[11] += -0.101082556;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.0008938638;
            } else {
              result[11] += -0.006583369;
            }
          }
        } else {
          result[11] += -0.14394046;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.14743075;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += -0.0008099189;
            } else {
              result[11] += -0.0085387025;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[11] += 0.1122794;
            } else {
              result[11] += -0.015344252;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[11] += -0.13537896;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[11] += 0.8477575;
            } else {
              result[11] += 0.0017356852;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[11] += 0.041218277;
            } else {
              result[11] += 0.020358969;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.003586349;
            } else {
              result[11] += -0.074245706;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[11] += 0.0073839542;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[11] += -0.09395918;
            } else {
              result[11] += -0.014682399;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[11] += 0.043236256;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[11] += 0.12052436;
            } else {
              result[11] += 0.029271647;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.10499804;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[12] += 0.0007945959;
            } else {
              result[12] += -0.10373276;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
              result[12] += -0.12938952;
            } else {
              result[12] += -0.0013788766;
            }
          }
        } else {
          result[12] += 0.09250575;
        }
      } else {
        result[12] += -0.09877558;
      }
    } else {
      result[12] += -0.12432953;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.11435642;
            } else {
              result[12] += 0.023332313;
            }
          } else {
            result[12] += 0.104030974;
          }
        } else {
          result[12] += -0.039616805;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.1037192;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.014053431;
            } else {
              result[12] += 0.043194808;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.01331024;
            } else {
              result[12] += 0.016994877;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        result[12] += -0.09976261;
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)26237)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[12] += 0.0035826147;
            } else {
              result[12] += -0.07939538;
            }
          } else {
            result[12] += 0.053558882;
          }
        } else {
          result[12] += 0.013365611;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)54729)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += -0.0006946059;
            } else {
              result[13] += 0.008072001;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[13] += -0.044118725;
            } else {
              result[13] += -0.12852618;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[13] += 0.009735554;
            } else {
              result[13] += 0.09484933;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[13] += -0.10923884;
            } else {
              result[13] += 0.071834;
            }
          }
        }
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[13] += 0.010793062;
            } else {
              result[13] += -0.0647928;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[13] += -0.072074;
            } else {
              result[13] += 0.08502435;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[13] += 0.04473242;
            } else {
              result[13] += -0.14423573;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[13] += 0.071815975;
            } else {
              result[13] += -0.07123654;
            }
          }
        }
      }
    } else {
      result[13] += -0.095370844;
    }
  } else {
    result[13] += -0.08274962;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0001345116;
            } else {
              result[14] += 0.017824126;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += 0.1365195;
            } else {
              result[14] += 0.059210643;
            }
          }
        } else {
          result[14] += -0.12815095;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += 0.18083264;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
              result[14] += -0.05827995;
            } else {
              result[14] += 0.099777296;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[14] += 0.050947748;
            } else {
              result[14] += -0.11547425;
            }
          }
        }
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[14] += 0.014646296;
            } else {
              result[14] += -0.10168717;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[14] += -0.13537383;
            } else {
              result[14] += -0.016606556;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[14] += 0.036497977;
            } else {
              result[14] += 0.16490087;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52756)) {
              result[14] += -0.091283426;
            } else {
              result[14] += 0.021219129;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[14] += -0.027501402;
            } else {
              result[14] += -0.10359829;
            }
          } else {
            result[14] += 0.024321966;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.07412133;
          } else {
            result[14] += -0.023694018;
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[14] += -0.11978785;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[14] += 0.03264522;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.0978738;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.022175916;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[14] += -0.11647209;
            } else {
              result[14] += 0.016808134;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[0] += -1.920563e-05;
    } else {
      result[0] += -0.13092734;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[0] += 0.0058505754;
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[0] += 0.03921377;
            } else {
              result[0] += 0.012315209;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[0] += -0.13008761;
            } else {
              result[0] += 0.0440787;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[0] += -0.09567027;
            } else {
              result[0] += 0.036186654;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[0] += 0.06269673;
          } else {
            result[0] += 0.19535409;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[0] += -0.06605829;
          } else {
            result[0] += 0.042248424;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
            result[0] += -0.06010009;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.17581269;
            } else {
              result[0] += -0.0438252;
            }
          }
        } else {
          result[0] += 0.002340765;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)464371)) {
            result[0] += 0.12356209;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)585505)) {
              result[0] += -0.119828835;
            } else {
              result[0] += 0.07687624;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)229193)) {
              result[0] += -0.22526494;
            } else {
              result[0] += 0.011673551;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
              result[0] += 0.07796962;
            } else {
              result[0] += -0.000103446844;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.0004876007;
            } else {
              result[1] += 0.021108668;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += -0.034042608;
            } else {
              result[1] += -0.018456096;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[1] += -0.006020352;
            } else {
              result[1] += -0.14184903;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[1] += 0.003574662;
            } else {
              result[1] += -0.012004453;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
            result[1] += -0.13899657;
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.21824622;
            } else {
              result[1] += -0.08788441;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[1] += 0.11032713;
            } else {
              result[1] += 0.03420457;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[1] += -0.004806948;
            } else {
              result[1] += 0.022417922;
            }
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
              result[1] += 0.34747884;
            } else {
              result[1] += 0.12270388;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[1] += 0.012254047;
            } else {
              result[1] += -0.11711046;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[1] += -0.14825135;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
              result[1] += 0.015953543;
            } else {
              result[1] += -0.068526596;
            }
          }
        }
      } else {
        result[1] += -0.17942145;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
      result[1] += -0.15294427;
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
            result[1] += 0.016520346;
          } else {
            result[1] += 0.14166595;
          }
        } else {
          result[1] += -0.07195123;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += 0.010666253;
            } else {
              result[1] += -0.015538225;
            }
          } else {
            result[1] += 0.09363726;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59516)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[1] += -0.017038919;
            } else {
              result[1] += -0.06027234;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[1] += 0.05822835;
            } else {
              result[1] += -0.008832501;
            }
          }
        }
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += 0.00031774415;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.09513177;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            result[2] += 0.00295724;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.10573106;
            } else {
              result[2] += 0.020350605;
            }
          }
        }
      }
    } else {
      result[2] += -0.093965344;
    }
  } else {
    result[2] += -0.1189276;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.022714721;
    } else {
      result[3] += -0.11761422;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[3] += -0.030398535;
    } else {
      result[3] += 0.055467803;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)61488)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          result[4] += -0.027932854;
        } else {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)5210)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)603)) {
              result[4] += -0.0008539302;
            } else {
              result[4] += 0.10433953;
            }
          } else {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)6920)) {
              result[4] += -0.0055113398;
            } else {
              result[4] += -0.0003241681;
            }
          }
        }
      } else {
        result[4] += 0.078854114;
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.076116726;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.062415253;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.06272174;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58561)) {
              result[4] += -0.016699541;
            } else {
              result[4] += 0.09369114;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.11907541;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[5] += 0.00024701483;
          } else {
            result[5] += -0.116355605;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[5] += 0.011613953;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[5] += -0.09948348;
            } else {
              result[5] += 0.008815884;
            }
          }
        }
      } else {
        result[5] += -0.08031059;
      }
    } else {
      result[5] += 0.080055356;
    }
  } else {
    result[5] += -0.08364594;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00023665758;
  } else {
    result[6] += -0.11892788;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
              result[7] += 0.0006605634;
            } else {
              result[7] += -0.053475168;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[7] += 0.0070598805;
            } else {
              result[7] += -0.0010916509;
            }
          }
        } else {
          result[7] += -0.09685558;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
              result[7] += -0.007142477;
            } else {
              result[7] += -0.110022634;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
              result[7] += 0.14056751;
            } else {
              result[7] += -0.034178972;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)6)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -0.15332055;
            } else {
              result[7] += -0.028018821;
            }
          } else {
            result[7] += 0.107264966;
          }
        }
      }
    } else {
      result[7] += -0.17388374;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[7] += 0.051140144;
          } else {
            result[7] += 0.14709827;
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)24)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[7] += -0.084765956;
            } else {
              result[7] += -0.0039808853;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[7] += 0.1743999;
            } else {
              result[7] += 0.015421036;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          result[7] += -0.19314207;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55042)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
              result[7] += 0.00853499;
            } else {
              result[7] += -0.011924136;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55334)) {
              result[7] += 0.01796206;
            } else {
              result[7] += -0.0025922204;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.13911204;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.09234747;
        } else {
          result[7] += 0.074075036;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[8] += -0.014000867;
          } else {
            result[8] += -0.09804764;
          }
        } else {
          result[8] += -0.11227545;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
              result[8] += 0.00047192237;
            } else {
              result[8] += -0.03660838;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += 0.044164695;
            } else {
              result[8] += 0.1653155;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += -0.023649508;
            } else {
              result[8] += 0.03220415;
            }
          } else {
            result[8] += -0.09096152;
          }
        }
      }
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
              result[8] += -0.122633874;
            } else {
              result[8] += 0.016015721;
            }
          } else {
            result[8] += -0.17203483;
          }
        } else {
          result[8] += 0.11902255;
        }
      } else {
        result[8] += -0.13283665;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.13804217;
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
        result[8] += -0.18175754;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
            result[8] += 0.12620376;
          } else {
            result[8] += -0.025183355;
          }
        } else {
          result[8] += -0.09785518;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.00020894122;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.033364426;
        } else {
          result[9] += -0.09610341;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        result[9] += 0.00999312;
      } else {
        result[9] += 0.004088046;
      }
    }
  } else {
    result[9] += -0.101257265;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[10] += -2.080766e-05;
        } else {
          result[10] += -0.11932983;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
              result[10] += 0.0028620826;
            } else {
              result[10] += 0.05334512;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)417)) {
              result[10] += -0.031274557;
            } else {
              result[10] += 0.0031839393;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
            result[10] += -0.0024000206;
          } else {
            result[10] += 0.016378876;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[10] += -0.07598086;
          } else {
            result[10] += 0.047762983;
          }
        } else {
          result[10] += -0.086023554;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
            result[10] += -0.020946719;
          } else {
            result[10] += 0.011281814;
          }
        } else {
          result[10] += 0.04542624;
        }
      }
    }
  } else {
    result[10] += -0.08783527;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[11] += 8.903451e-05;
            } else {
              result[11] += -0.09691717;
            }
          } else {
            result[11] += -0.09771186;
          }
        } else {
          result[11] += -0.09850282;
        }
      } else {
        result[11] += -0.099985085;
      }
    } else {
      result[11] += -0.10058363;
    }
  } else {
    result[11] += -0.10331828;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)152)) {
              result[12] += -0.00024000455;
            } else {
              result[12] += -0.11370147;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
              result[12] += -0.11949779;
            } else {
              result[12] += -0.032734342;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55195)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
              result[12] += 0.03175939;
            } else {
              result[12] += 0.109046794;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
              result[12] += -0.06153339;
            } else {
              result[12] += 0.07149207;
            }
          }
        }
      } else {
        result[12] += -0.095271654;
      }
    } else {
      result[12] += -0.12138382;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += 0.021243406;
          } else {
            result[12] += 0.09339226;
          }
        } else {
          result[12] += 0.11786622;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.097584404;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[12] += 0.01365637;
            } else {
              result[12] += 0.033542205;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += -0.029205287;
            } else {
              result[12] += 0.021125596;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.048778333;
          } else {
            result[12] += -0.10943991;
          }
        } else {
          result[12] += 0.09848953;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.120839074;
        } else {
          result[12] += 0.02057209;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)54588)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[13] += -0.0036974596;
            } else {
              result[13] += -0.09189363;
            }
          } else {
            result[13] += -0.102102615;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5447)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[13] += 0.0038356145;
            } else {
              result[13] += -0.002153077;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[13] += 0.115566514;
            } else {
              result[13] += -0.004140629;
            }
          }
        }
      } else {
        result[13] += -0.12168975;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)56134)) {
        result[13] += 0.21708263;
      } else {
        result[13] += -0.05387077;
      }
    }
  } else {
    result[13] += -0.09443285;
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
              result[14] += 0.00030183577;
            } else {
              result[14] += -0.08800861;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[14] += 0.21714796;
            } else {
              result[14] += -0.07880892;
            }
          }
        } else {
          result[14] += -0.13152252;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[14] += 0.024515934;
          } else {
            result[14] += 0.12825008;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            result[14] += 0.13295038;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[14] += 0.014638339;
            } else {
              result[14] += -0.06355581;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)53042)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[14] += -0.014202216;
            } else {
              result[14] += 0.07071087;
            }
          } else {
            result[14] += -0.12864205;
          }
        } else {
          result[14] += 0.18835415;
        }
      } else {
        result[14] += -0.111743845;
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
      result[14] += -0.11658716;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        result[14] += 0.026107512;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          result[14] += -0.091529876;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            result[14] += 0.024585212;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)56842)) {
              result[14] += -0.07410989;
            } else {
              result[14] += 0.08136613;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[0] += 3.943141e-05;
        } else {
          result[0] += -0.12859286;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[0] += 0.005699324;
            } else {
              result[0] += -0.061548244;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[0] += 0.10573958;
            } else {
              result[0] += 0.023647783;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)626220)) {
              result[0] += -0.11173436;
            } else {
              result[0] += 0.0022052955;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)237)) {
              result[0] += 0.0463847;
            } else {
              result[0] += -0.00023711659;
            }
          }
        }
      }
    } else {
      result[0] += -0.08970961;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.12678389;
      } else {
        result[0] += -0.0038074094;
      }
    } else {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
        result[0] += -0.08661387;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.05530546;
        } else {
          result[0] += -0.00992335;
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)12288)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.0007922141;
            } else {
              result[1] += 0.010130508;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
              result[1] += -0.028526094;
            } else {
              result[1] += -0.0063594403;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[1] += 0.00952454;
            } else {
              result[1] += -0.11301871;
            }
          } else {
            result[1] += -0.1469038;
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
          result[1] += -0.15234458;
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.11282431;
            } else {
              result[1] += -0.0629548;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += 0.0037639947;
            } else {
              result[1] += -0.017820243;
            }
          }
        }
      }
    } else {
      result[1] += 0.089410044;
    }
  } else {
    result[1] += -0.0996589;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
      result[2] += 0.00015626123;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
          result[2] += 0.016195234;
        } else {
          result[2] += 0.09915502;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)40611)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)24760)) {
              result[2] += -0.020583607;
            } else {
              result[2] += 0.066049926;
            }
          } else {
            result[2] += -0.07448338;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
            result[2] += 0.09617942;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)58825)) {
              result[2] += -0.019494759;
            } else {
              result[2] += 0.07502806;
            }
          }
        }
      }
    }
  } else {
    result[2] += -0.11576345;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.020512823;
    } else {
      result[3] += -0.114406355;
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
      result[3] += -0.028731411;
    } else {
      result[3] += 0.051525354;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.0001757378;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
        result[4] += 0.07199892;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
          result[4] += -0.059930243;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)46249)) {
            result[4] += 0.0574857;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)53108)) {
              result[4] += -0.06409858;
            } else {
              result[4] += 0.04102168;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.115918085;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
        if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
            result[5] += 0.00025697306;
          } else {
            result[5] += -0.11681121;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
            result[5] += 0.011371579;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
              result[5] += -0.09604826;
            } else {
              result[5] += 0.00946007;
            }
          }
        }
      } else {
        result[5] += -0.07652585;
      }
    } else {
      result[5] += 0.079441324;
    }
  } else {
    result[5] += -0.08007571;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    result[6] += 0.00025484932;
  } else {
    result[6] += -0.11576372;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)59)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)221)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[7] += 9.939251e-07;
            } else {
              result[7] += -0.09289791;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += 0.004069932;
            } else {
              result[7] += -0.14813915;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            result[7] += 0.11769297;
          } else {
            result[7] += -0.005074488;
          }
        }
      } else {
        result[7] += -0.117534965;
      }
    } else {
      result[7] += -0.1689375;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)54438)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            result[7] += 0.14345075;
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
              result[7] += -0.08128822;
            } else {
              result[7] += 0.14364861;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
              result[7] += -0.010237299;
            } else {
              result[7] += 0.12714379;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[7] += -0.1340397;
            } else {
              result[7] += 0.0033146811;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)15)) {
          result[7] += -0.17712191;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55659)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[7] += 0.0022938962;
            } else {
              result[7] += -0.024507966;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55821)) {
              result[7] += 0.034549385;
            } else {
              result[7] += -0.007604824;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
        result[7] += 0.1372405;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[7] += -0.08877906;
        } else {
          result[7] += 0.06734078;
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[8] += 0.0012464793;
            } else {
              result[8] += -0.0021117744;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[8] += 0.09680748;
            } else {
              result[8] += -0.029032683;
            }
          }
        } else {
          result[8] += -0.1194415;
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[8] += 0.06678273;
            } else {
              result[8] += -0.04255473;
            }
          } else {
            result[8] += -0.18382344;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)56300)) {
            result[8] += 0.14314727;
          } else {
            result[8] += -0.012103385;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
        result[8] += -0.13490161;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[8] += -0.18066764;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)316)) {
              result[8] += 0.12844044;
            } else {
              result[8] += -0.023750668;
            }
          } else {
            result[8] += -0.09157316;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.1377984;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
          result[8] += 0.0828546;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
            result[8] += 0.07227878;
          } else {
            result[8] += -0.01963656;
          }
        }
      } else {
        result[8] += -0.08774868;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        result[9] += 0.00023342312;
      } else {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
          result[9] += -0.031206837;
        } else {
          result[9] += -0.09261805;
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        result[9] += 0.00025947453;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          result[9] += 0.02495187;
        } else {
          result[9] += 0.00496685;
        }
      }
    }
  } else {
    result[9] += -0.097583376;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)52471)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)1760)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)286292)) {
              result[10] += 0.00043784245;
            } else {
              result[10] += 0.002743322;
            }
          } else {
            result[10] += -0.101507194;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)107492)) {
              result[10] += 0.0006589483;
            } else {
              result[10] += 0.104197346;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
              result[10] += -0.09856619;
            } else {
              result[10] += 0.010577413;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[10] += -0.010268002;
          } else {
            result[10] += -0.08521235;
          }
        } else {
          result[10] += -0.0038198663;
        }
      }
    } else {
      result[10] += 0.042790182;
    }
  } else {
    result[10] += -0.084097795;
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.0014181278;
            } else {
              result[11] += -0.14217114;
            }
          } else {
            result[11] += 0.025866216;
          }
        } else {
          result[11] += -0.070116885;
        }
      } else {
        result[11] += -0.13527314;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
              result[11] += 0.0016350539;
            } else {
              result[11] += -0.14126907;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[11] += 0.15079401;
            } else {
              result[11] += -0.110794716;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[11] += -0.015414361;
            } else {
              result[11] += 0.0049154153;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[11] += 0.058030922;
            } else {
              result[11] += -0.0031409482;
            }
          }
        }
      } else {
        result[11] += -0.0962409;
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)283)) {
      result[11] += -0.14237598;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)484)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)392)) {
              result[11] += -0.002477096;
            } else {
              result[11] += 0.06363662;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)544)) {
              result[11] += -0.15133971;
            } else {
              result[11] += 0.019417536;
            }
          }
        } else {
          result[11] += 0.09316398;
        }
      } else {
        result[11] += -0.100487165;
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)6)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            result[12] += -0.011309265;
          } else {
            result[12] += -0.08247318;
          }
        } else {
          result[12] += -0.091815054;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)112)) {
              result[12] += 0.0010779501;
            } else {
              result[12] += -0.12561563;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
              result[12] += -0.13289888;
            } else {
              result[12] += -0.0042500356;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            result[12] += -0.14430253;
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
              result[12] += -0.001981923;
            } else {
              result[12] += 0.080691196;
            }
          }
        }
      }
    } else {
      result[12] += -0.11739049;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            result[12] += 0.019207552;
          } else {
            result[12] += 0.09139479;
          }
        } else {
          result[12] += 0.11270411;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
          result[12] += -0.093643956;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[12] += 0.013282777;
            } else {
              result[12] += 0.038572058;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[12] += -0.012452964;
            } else {
              result[12] += 0.015391079;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[12] += 0.045708902;
          } else {
            result[12] += -0.1052672;
          }
        } else {
          result[12] += 0.09361379;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
          result[12] += -0.117514156;
        } else {
          result[12] += 0.020059142;
        }
      }
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)898)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)361)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)278)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
              result[13] += -0.0002130862;
            } else {
              result[13] += 0.07910052;
            }
          } else {
            if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
              result[13] += -0.1013077;
            } else {
              result[13] += 0.09236834;
            }
          }
        } else {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)298)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[13] += 0.11626148;
            } else {
              result[13] += -0.0047791875;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[13] += 0.02031137;
            } else {
              result[13] += -0.0069678416;
            }
          }
        }
      } else {
        result[13] += -0.09139988;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1760)) {
        result[13] += 0.13167268;
      } else {
        result[13] += -0.00022299972;
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
        result[13] += -0.089864664;
      } else {
        result[13] += 0.1991033;
      }
    } else {
      result[13] += -0.11604621;
    }
  }
  if ( (data[7].missing != -1) && (data[7].fvalue < (float)120)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[14] += 0.0027790535;
            } else {
              result[14] += -0.08281696;
            }
          } else {
            result[14] += -0.08468053;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58873)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[14] += -0.0029793798;
            } else {
              result[14] += -0.13359931;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[14] += 0.003500932;
            } else {
              result[14] += -0.004026488;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)103)) {
              result[14] += 0.0024037221;
            } else {
              result[14] += 0.013074492;
            }
          } else {
            result[14] += -0.09454857;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)52901)) {
              result[14] += -0.116670094;
            } else {
              result[14] += 0.06809757;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.027885236;
            } else {
              result[14] += -0.04068066;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
        result[14] += -0.11289376;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
          result[14] += 0.022884425;
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[14] += -0.0840603;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
              result[14] += 0.020957256;
            } else {
              result[14] += -0.039733652;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)148)) {
        result[14] += -0.018117778;
      } else {
        result[14] += -0.113750175;
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)494)) {
          if ( (data[2].missing != -1) && (data[2].fvalue < (float)277)) {
            result[14] += -0.11178926;
          } else {
            result[14] += 0.04384861;
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)617)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)523)) {
              result[14] += 0.05865505;
            } else {
              result[14] += 0.012309755;
            }
          } else {
            result[14] += -0.0635816;
          }
        }
      } else {
        result[14] += 0.05258524;
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1092)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)740)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)477)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
              result[0] += 0.000980621;
            } else {
              result[0] += -0.02081791;
            }
          } else {
            result[0] += 0.109457396;
          }
        } else {
          result[0] += -0.07586653;
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)1377)) {
          result[0] += 0.09681136;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)168185)) {
              result[0] += -0.045148686;
            } else {
              result[0] += 0.014828399;
            }
          } else {
            result[0] += 0.09621816;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
          result[0] += -0.09700195;
        } else {
          result[0] += -0.032443754;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)56364)) {
          result[0] += 0.117633134;
        } else {
          result[0] += -0.08201009;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += 0.11072216;
      } else {
        result[0] += -0.00208267;
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[0] += -0.08472788;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          result[0] += 0.037681095;
        } else {
          result[0] += -0.000282071;
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)80)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      result[1] += -0.029363507;
    } else {
      result[1] += -0.08660019;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)25)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)330)) {
        if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)3467)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[1] += -0.00014945355;
            } else {
              result[1] += 0.016189171;
            }
          } else {
            result[1] += -0.10579601;
          }
        } else {
          result[1] += -0.11069905;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)342)) {
            result[1] += -0.012262717;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += -0.1327564;
            } else {
              result[1] += 0.017287612;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
              result[1] += 0.18290819;
            } else {
              result[1] += -0.004208334;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[1] += -0.09864009;
            } else {
              result[1] += 0.006579357;
            }
          }
        }
      }
    } else {
      result[1] += 0.086203955;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
        result[2] += 0.0002793996;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[2] += 0.09468123;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
            result[2] += -0.011542621;
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[2] += 0.07110455;
            } else {
              result[2] += 0.015931388;
            }
          }
        }
      }
    } else {
      result[2] += -0.090050995;
    }
  } else {
    result[2] += -0.112477824;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      result[3] += -0.01852536;
    } else {
      result[3] += -0.11112358;
    }
  } else {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
        result[3] += 0.04234588;
      } else {
        result[3] += -0.07985676;
      }
    } else {
      result[3] += 0.047679454;
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.0001697014;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
          result[4] += 0.017956747;
        } else {
          result[4] += 0.07500589;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          result[4] += -0.07794957;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
              result[4] += 0.009266053;
            } else {
              result[4] += 0.0938502;
            }
          } else {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
              result[4] += -0.0794751;
            } else {
              result[4] += 0.044734653;
            }
          }
        }
      }
    }
  } else {
    result[4] += -0.11263818;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
          result[5] += 0.00023877634;
        } else {
          result[5] += -0.115817234;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50468)) {
          result[5] += 0.010189395;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)51304)) {
            result[5] += -0.092739925;
          } else {
            result[5] += 0.0038028874;
          }
        }
      }
    } else {
      result[5] += 0.07508291;
    }
  } else {
    result[5] += -0.0764502;
  }
}

