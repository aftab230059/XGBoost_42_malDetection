
#include "header.h"

void predict_unit28(union Entry* data, float* result) {
  unsigned int tmp;
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51717)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[11] += 5.690956e-05;
            } else {
              result[11] += -0.02028678;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[11] += -0.008655437;
            } else {
              result[11] += 0.015659168;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[11] += -0.0011221296;
            } else {
              result[11] += -0.027214857;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.05067088;
            } else {
              result[11] += -0.07463322;
            }
          }
        }
      } else {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          result[11] += -0.04045718;
        } else {
          result[11] += 0.018781425;
        }
      }
    } else {
      result[11] += -0.078039035;
    }
  } else {
    result[11] += -0.0784253;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2588646656)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
              result[12] += 0.0029885739;
            } else {
              result[12] += -0.002043314;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
              result[12] += -0.0805211;
            } else {
              result[12] += -0.0016108266;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
              result[12] += 0.0100175515;
            } else {
              result[12] += -0.13335972;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
              result[12] += 0.09885953;
            } else {
              result[12] += -0.013055313;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)683239424)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
              result[12] += -0.09839958;
            } else {
              result[12] += 0.23329422;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
              result[12] += -0.002348554;
            } else {
              result[12] += -0.10655441;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[12] += -0.03684642;
            } else {
              result[12] += -0.1357439;
            }
          } else {
            result[12] += 0.06475671;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
              result[12] += -0.038698412;
            } else {
              result[12] += -0.14875071;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.045172192;
            } else {
              result[12] += 0.14768551;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[12] += 0.06787041;
            } else {
              result[12] += 0.350992;
            }
          } else {
            result[12] += -0.081734575;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64261)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58671)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[12] += -0.06534413;
            } else {
              result[12] += 0.16599894;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
              result[12] += -0.16622075;
            } else {
              result[12] += -0.0035597926;
            }
          }
        } else {
          result[12] += 0.074453555;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3392075008)) {
        result[12] += -0.0012767392;
      } else {
        result[12] += -0.113344096;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)775)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            result[12] += 0.287581;
          } else {
            result[12] += -0.0008454867;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            result[12] += -0.11637589;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[12] += 0.17325002;
            } else {
              result[12] += -0.029213259;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22532)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20497)) {
              result[12] += -0.0019578582;
            } else {
              result[12] += 0.046323437;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[12] += -0.11274544;
            } else {
              result[12] += -0.026149154;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[12] += 0.13197032;
            } else {
              result[12] += 0.034428343;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[12] += 0.0033074676;
            } else {
              result[12] += -0.02450633;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += 0.0010631515;
            } else {
              result[13] += -0.02052302;
            }
          } else {
            result[13] += -0.11666679;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27608)) {
              result[13] += 0.1569854;
            } else {
              result[13] += 0.043801423;
            }
          } else {
            result[13] += -0.12485689;
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
              result[13] += -0.056715637;
            } else {
              result[13] += 0.07873555;
            }
          } else {
            result[13] += -0.14290415;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[13] += 0.0667366;
            } else {
              result[13] += -0.015965438;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1259780736)) {
              result[13] += -0.05515464;
            } else {
              result[13] += 0.08513725;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)663824320)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7966)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[13] += 0.075435646;
            } else {
              result[13] += -0.070739165;
            }
          } else {
            result[13] += 0.24350624;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[13] += -0.12765709;
            } else {
              result[13] += 0.030095415;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)11043)) {
              result[13] += 0.13942888;
            } else {
              result[13] += 0.014646597;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
          result[13] += -0.13357988;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[13] += -0.096203044;
            } else {
              result[13] += 0.13588136;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[13] += 0.09491631;
            } else {
              result[13] += 0.0022835268;
            }
          }
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)479)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63752)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
            result[13] += -0.13202357;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
              result[13] += 0.01856718;
            } else {
              result[13] += -0.12548006;
            }
          }
        } else {
          result[13] += 0.05370955;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
          result[13] += 0.35412294;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
              result[13] += -0.025786474;
            } else {
              result[13] += -0.13096136;
            }
          } else {
            result[13] += 0.046453122;
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
              result[13] += 0.039730955;
            } else {
              result[13] += -0.08398752;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)12579)) {
              result[13] += 0.18510765;
            } else {
              result[13] += 0.03267259;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            result[13] += -0.028443132;
          } else {
            result[13] += -0.13751604;
          }
        }
      } else {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)34029)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[13] += -0.022458792;
            } else {
              result[13] += 0.15413436;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
              result[13] += 0.269577;
            } else {
              result[13] += 0.006157614;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
              result[13] += -0.07789305;
            } else {
              result[13] += 0.11856291;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)509)) {
              result[13] += -0.1398435;
            } else {
              result[13] += 0.06509466;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3628570624)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
              result[14] += -0.00033139557;
            } else {
              result[14] += 0.08235314;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3260428288)) {
              result[14] += 0.0824532;
            } else {
              result[14] += 0.015122668;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3905469696)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
              result[14] += -0.0307898;
            } else {
              result[14] += -0.11258046;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)20757)) {
              result[14] += -0.005227033;
            } else {
              result[14] += 0.15816179;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)41)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[14] += -0.053659327;
            } else {
              result[14] += -0.144689;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[14] += 0.09974842;
            } else {
              result[14] += -0.100721024;
            }
          }
        } else {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
            result[14] += 0.21503146;
          } else {
            result[14] += -0.007960865;
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3412386816)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)27096)) {
              result[14] += -0.0021585661;
            } else {
              result[14] += 0.11474841;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
              result[14] += 0.22430612;
            } else {
              result[14] += 0.015464234;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3239138816)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[14] += -0.13118602;
            } else {
              result[14] += -0.055323835;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[14] += 0.121019505;
            } else {
              result[14] += -0.12569667;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            result[14] += -0.1392133;
          } else {
            result[14] += -0.047681566;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
              result[14] += 0.06989146;
            } else {
              result[14] += 0.22583531;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[14] += 0.106039725;
            } else {
              result[14] += -0.023814054;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
              result[14] += -0.044870347;
            } else {
              result[14] += 0.03165772;
            }
          } else {
            result[14] += -0.14167276;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1730353280)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
              result[14] += 0.06180369;
            } else {
              result[14] += -0.084225856;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[14] += 0.22533496;
            } else {
              result[14] += 0.009130421;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28379)) {
              result[14] += -0.123582296;
            } else {
              result[14] += 0.06558604;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2398340864)) {
              result[14] += 0.22943047;
            } else {
              result[14] += 0.06277679;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
              result[14] += -0.15196389;
            } else {
              result[14] += -0.020979768;
            }
          } else {
            result[14] += 0.15790725;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)30457)) {
        if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
              result[14] += -0.07324857;
            } else {
              result[14] += 0.011868957;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[14] += 0.14250998;
            } else {
              result[14] += 0.0006827115;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
              result[14] += 0.09092447;
            } else {
              result[14] += 0.45973787;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[14] += -0.09925801;
            } else {
              result[14] += -0.0134402355;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[14] += -0.03451365;
            } else {
              result[14] += -0.13598472;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
              result[14] += 0.15743974;
            } else {
              result[14] += -0.015563402;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)880668160)) {
              result[14] += -0.0092654945;
            } else {
              result[14] += 0.029045725;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
              result[14] += -0.03160714;
            } else {
              result[14] += -0.00024000254;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)22786)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)19734)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)16666)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)14862)) {
              result[0] += 6.345955e-05;
            } else {
              result[0] += -0.09826243;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15891)) {
              result[0] += 0.052771483;
            } else {
              result[0] += 0.026538655;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16917)) {
              result[0] += -0.018086089;
            } else {
              result[0] += -0.09001127;
            }
          } else {
            result[0] += 0.014976559;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18700)) {
            result[0] += 0.092587255;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[0] += -0.03189808;
            } else {
              result[0] += 0.12973839;
            }
          }
        } else {
          result[0] += 0.1445091;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)20245)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          result[0] += -0.037132133;
        } else {
          result[0] += -0.10439544;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)21274)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21008)) {
              result[0] += 0.028576475;
            } else {
              result[0] += -0.011111597;
            }
          } else {
            result[0] += -0.04097233;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
              result[0] += -0.131258;
            } else {
              result[0] += -0.049605962;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
              result[0] += 0.032736693;
            } else {
              result[0] += -0.03009965;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
        result[0] += 0.011916567;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)23807)) {
          result[0] += 0.113987215;
        } else {
          result[0] += 0.03811121;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)24813)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
          result[0] += -0.022723265;
        } else {
          result[0] += -0.16044113;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25066)) {
            result[0] += 0.00042623118;
          } else {
            result[0] += 0.07459388;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)26334)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
              result[0] += -0.020435784;
            } else {
              result[0] += -0.16768944;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
              result[0] += -0.0800934;
            } else {
              result[0] += 0.003749593;
            }
          }
        }
      }
    }
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
          if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
              result[1] += -0.0015431371;
            } else {
              result[1] += 0.0011209357;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[1] += -0.11697674;
            } else {
              result[1] += 0.059189584;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
              result[1] += -0.05582538;
            } else {
              result[1] += 0.1590198;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.13851382;
            } else {
              result[1] += 0.009547273;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.1297267;
            } else {
              result[1] += 0.024592731;
            }
          } else {
            result[1] += -0.13192676;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42257)) {
              result[1] += -0.10081555;
            } else {
              result[1] += 0.061909728;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2835)) {
              result[1] += 0.008992159;
            } else {
              result[1] += -0.12972493;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
        result[1] += -0.14000425;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[1] += 0.00671055;
            } else {
              result[1] += 0.23326418;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[1] += -0.089343235;
            } else {
              result[1] += 0.07183692;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            result[1] += 0.097042084;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[1] += -0.1208933;
            } else {
              result[1] += -0.02066256;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)34288)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1034955072)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[1] += 0.017309802;
            } else {
              result[1] += 0.25940484;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
              result[1] += -0.021019062;
            } else {
              result[1] += 0.025512002;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
            result[1] += 0.020369269;
          } else {
            result[1] += -0.18265511;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
          result[1] += 0.22608583;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35552)) {
              result[1] += 0.08232226;
            } else {
              result[1] += -0.039155945;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1846921344)) {
              result[1] += 0.003503383;
            } else {
              result[1] += 0.23311818;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38886)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37600)) {
              result[1] += -0.047368143;
            } else {
              result[1] += -0.112255655;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
              result[1] += -0.12373561;
            } else {
              result[1] += 0.10591003;
            }
          }
        } else {
          result[1] += -0.38177213;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)40194)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3022144256)) {
              result[1] += 0.119353436;
            } else {
              result[1] += 0.27221218;
            }
          } else {
            result[1] += -0.080405444;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)270621600)) {
              result[1] += -0.18950598;
            } else {
              result[1] += -0.008014238;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
              result[1] += 0.10269394;
            } else {
              result[1] += -0.0070843375;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)65281)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)64484)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)47877)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)46341)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
              result[2] += -0.0021577026;
            } else {
              result[2] += 0.0057203053;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)46870)) {
              result[2] += 0.07908544;
            } else {
              result[2] += 0.017692832;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)48906)) {
            result[2] += -0.055454347;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)49160)) {
              result[2] += 0.05788822;
            } else {
              result[2] += -0.0022784902;
            }
          }
        }
      } else {
        result[2] += 0.033464134;
      }
    } else {
      result[2] += -0.023309682;
    }
  } else {
    result[2] += 0.030781576;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
    result[3] += -0.016489984;
  } else {
    result[3] += 0.01793551;
  }
  if ( (data[1].missing != -1) && (data[1].fvalue < (float)53)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)5761)) {
      result[4] += -0.026661327;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)21577)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14320)) {
            if ( (data[4].missing != -1) && (data[4].fvalue < (float)8473)) {
              result[4] += 0.036788195;
            } else {
              result[4] += 0.004016284;
            }
          } else {
            result[4] += -0.0237344;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)21818)) {
            result[4] += 0.043799464;
          } else {
            result[4] += 0.0154355;
          }
        }
      } else {
        result[4] += -0.0086063575;
      }
    }
  } else {
    result[4] += 0.045005206;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)467500480)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)52332)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[5] += 0.0010034255;
            } else {
              result[5] += -0.06962768;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8223)) {
              result[5] += 0.19380067;
            } else {
              result[5] += 0.029670345;
            }
          }
        } else {
          result[5] += -0.091445535;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)28643)) {
          result[5] += -0.0974756;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
            result[5] += 0.23440295;
          } else {
            result[5] += 0.021729372;
          }
        }
      }
    } else {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        result[5] += -0.10671731;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)782707456)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[5] += -0.07781601;
            } else {
              result[5] += 0.0299731;
            }
          } else {
            result[5] += 0.05075624;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31487)) {
              result[5] += 0.14133026;
            } else {
              result[5] += -0.004869648;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
              result[5] += -0.11595349;
            } else {
              result[5] += 0.004796235;
            }
          }
        }
      }
    }
  } else {
    result[5] += 0.062419336;
  }
  result[6] += -0.0002610311;
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
    if ( (data[16].missing != -1) && (data[16].fvalue < (float)53)) {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)1448)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)203)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)10)) {
              result[7] += -8.124687e-05;
            } else {
              result[7] += 0.06972695;
            }
          } else {
            result[7] += -0.087329686;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)43798)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
              result[7] += -0.09693686;
            } else {
              result[7] += 0.056319345;
            }
          } else {
            result[7] += 0.20188583;
          }
        }
      } else {
        result[7] += -0.076711655;
      }
    } else {
      result[7] += 0.07658587;
    }
  } else {
    result[7] += -0.07888505;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
              result[8] += 0.0017014301;
            } else {
              result[8] += -0.0039776154;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
              result[8] += -0.020266509;
            } else {
              result[8] += 0.29653516;
            }
          }
        } else {
          if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
              result[8] += 0.022565356;
            } else {
              result[8] += 0.118652955;
            }
          } else {
            result[8] += 0.24142846;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49419)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3435244800)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[8] += -0.033199996;
            } else {
              result[8] += -0.17517157;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[8] += 0.1841309;
            } else {
              result[8] += -0.013947005;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += -0.0025959627;
            } else {
              result[8] += 0.031576227;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[8] += 0.035811458;
            } else {
              result[8] += -0.0018323055;
            }
          }
        }
      }
    } else {
      result[8] += -0.0861483;
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.12704983;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            result[8] += 0.08765663;
          } else {
            result[8] += -0.1786947;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[8] += -0.03437587;
          } else {
            result[8] += 0.10000443;
          }
        }
      } else {
        result[8] += -0.08039843;
      }
    }
  }
  if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
      if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            result[9] += -0.000230205;
          } else {
            result[9] += 0.0003597676;
          }
        } else {
          result[9] += -0.0005801534;
        }
      } else {
        result[9] += -0.025996791;
      }
    } else {
      result[9] += -0.10737237;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
        result[9] += 0.10519479;
      } else {
        result[9] += -0.06917615;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
          result[9] += 0.0008435378;
        } else {
          result[9] += -0.13442487;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17430)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)59329708)) {
            result[9] += -0.05211122;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[9] += 0.10968556;
            } else {
              result[9] += 0.031006569;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
            result[9] += -0.1478893;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19205)) {
              result[9] += 0.09998221;
            } else {
              result[9] += 0.005342777;
            }
          }
        }
      }
    }
  }
  if ( (data[11].missing != -1) && (data[11].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3971443456)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3949719040)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3885762304)) {
              result[10] += -0.0005560961;
            } else {
              result[10] += -0.0500697;
            }
          } else {
            result[10] += 0.10854611;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[10] += -0.025194583;
            } else {
              result[10] += 0.120133884;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4036655872)) {
              result[10] += -0.15475765;
            } else {
              result[10] += 0.0055409484;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)7704)) {
          result[10] += -0.034524105;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[10] += 0.03404077;
            } else {
              result[10] += 0.10233063;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.006089283;
            } else {
              result[10] += -0.032122593;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
        result[10] += 0.08375362;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
            result[10] += -0.018531144;
          } else {
            result[10] += -0.12949221;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)44802)) {
            result[10] += 0.091308385;
          } else {
            result[10] += -0.10038076;
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      result[10] += -0.079761155;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
              result[10] += 0.00409392;
            } else {
              result[10] += -0.10809567;
            }
          } else {
            result[10] += 0.12324237;
          }
        } else {
          result[10] += -0.15324484;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57099)) {
              result[10] += 0.03763666;
            } else {
              result[10] += -0.034555152;
            }
          } else {
            result[10] += 0.13416162;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)57887)) {
            result[10] += -0.06654515;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
              result[10] += 0.06672992;
            } else {
              result[10] += 0.0023778907;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
              result[11] += -0.0017704602;
            } else {
              result[11] += -0.028681727;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)3851)) {
              result[11] += 0.007469363;
            } else {
              result[11] += 0.00019628991;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
            result[11] += -0.11839493;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[11] += -0.005904269;
            } else {
              result[11] += 0.054123968;
            }
          }
        }
      } else {
        result[11] += -0.14315598;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        result[11] += -0.15617116;
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4144001280)) {
              result[11] += 0.0013720719;
            } else {
              result[11] += -0.082017705;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30200)) {
              result[11] += -0.0008391882;
            } else {
              result[11] += 0.0909215;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)1559)) {
            result[11] += -0.21557555;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26591)) {
              result[11] += 0.04756802;
            } else {
              result[11] += -0.077126294;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.07593706;
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)16)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37849)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
              result[12] += -0.002100528;
            } else {
              result[12] += -0.03462515;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)38113)) {
              result[12] += 0.116365254;
            } else {
              result[12] += 0.0011613795;
            }
          }
        } else {
          result[12] += -0.108405955;
        }
      } else {
        result[12] += 0.13598204;
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)15)) {
        result[12] += -0.1312322;
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          result[12] += 0.102477826;
        } else {
          result[12] += -0.06723886;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
          result[12] += -0.23175648;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)40946396)) {
            result[12] += 0.08073984;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
              result[12] += -0.0066132066;
            } else {
              result[12] += -0.16396734;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
              result[12] += 0.17317808;
            } else {
              result[12] += -0.07670021;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[12] += 0.2868488;
            } else {
              result[12] += 0.09136957;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)11810)) {
            result[12] += -0.16239628;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[12] += 0.033041123;
            } else {
              result[12] += -0.022333521;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)157615712)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)13844)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)8477)) {
              result[12] += -0.09047754;
            } else {
              result[12] += 0.14910835;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
              result[12] += -0.15948339;
            } else {
              result[12] += 0.009813674;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14612)) {
            result[12] += -0.0892461;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[12] += 0.16253118;
            } else {
              result[12] += -0.07167705;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1091894528)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[12] += 0.26148927;
            } else {
              result[12] += 0.0337317;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7194)) {
              result[12] += -0.07158147;
            } else {
              result[12] += 0.0035654614;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1205016832)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[12] += -0.04885665;
            } else {
              result[12] += 0.13585682;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
              result[12] += 0.16040991;
            } else {
              result[12] += 0.0002225859;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)53779)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50954)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
              result[13] += -0.0002926007;
            } else {
              result[13] += 0.024093868;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
              result[13] += -0.09221447;
            } else {
              result[13] += 0.010158775;
            }
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[13] += 0.013648874;
            } else {
              result[13] += -0.11726441;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
              result[13] += 0.110429116;
            } else {
              result[13] += -0.039117616;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3370453760)) {
              result[13] += -0.018431624;
            } else {
              result[13] += 0.2181652;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[13] += -0.063704945;
            } else {
              result[13] += -0.14261578;
            }
          }
        } else {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[13] += 0.3319709;
            } else {
              result[13] += 0.04007287;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
              result[13] += -0.07792018;
            } else {
              result[13] += 0.066820756;
            }
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)117923672)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[13] += 0.20303677;
            } else {
              result[13] += 0.010149598;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3844556032)) {
              result[13] += -0.016762335;
            } else {
              result[13] += -0.09328671;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56328)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2170663424)) {
              result[13] += 0.044537667;
            } else {
              result[13] += 0.39251924;
            }
          } else {
            result[13] += -0.10086562;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2013966080)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[13] += -0.011894793;
            } else {
              result[13] += 0.16704546;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
              result[13] += 0.45804802;
            } else {
              result[13] += 0.13693777;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3196177408)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2692863232)) {
              result[13] += 0.03462137;
            } else {
              result[13] += -0.152123;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
              result[13] += 0.16085362;
            } else {
              result[13] += 0.005253648;
            }
          }
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65023)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
              result[13] += -0.017652566;
            } else {
              result[13] += 0.005304374;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[13] += 0.051865824;
            } else {
              result[13] += -0.031514578;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2299286272)) {
              result[13] += 0.1036418;
            } else {
              result[13] += -0.009529009;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2588646656)) {
              result[13] += -0.08881915;
            } else {
              result[13] += 0.066022836;
            }
          }
        }
      } else {
        result[13] += -0.119155146;
      }
    } else {
      result[13] += -0.11869898;
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2786661888)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2742782464)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2610506496)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2317237248)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
              result[14] += -0.00040758235;
            } else {
              result[14] += 0.012693994;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
              result[14] += -0.091736265;
            } else {
              result[14] += -0.006032142;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54542)) {
              result[14] += 0.031107942;
            } else {
              result[14] += 0.23565966;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
              result[14] += -0.10322633;
            } else {
              result[14] += 0.12829992;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35552)) {
              result[14] += 0.030292312;
            } else {
              result[14] += -0.08085176;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
              result[14] += -0.0048619537;
            } else {
              result[14] += 0.07958625;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
            result[14] += -0.14788002;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60620)) {
              result[14] += 0.042691074;
            } else {
              result[14] += -0.12843117;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)37077)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)2582)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2853225984)) {
            result[14] += 0.19736962;
          } else {
            result[14] += 0.033919837;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[14] += -0.05249238;
            } else {
              result[14] += -0.13857423;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
              result[14] += 0.428722;
            } else {
              result[14] += -0.022383608;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)38365)) {
          result[14] += 0.33916453;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)60471)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)42257)) {
              result[14] += -0.03570656;
            } else {
              result[14] += 0.09488545;
            }
          } else {
            result[14] += -0.1262272;
          }
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)23043)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9742)) {
              result[14] += -0.06240951;
            } else {
              result[14] += 0.07271572;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[14] += 0.34873664;
            } else {
              result[14] += 0.06345188;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)15634)) {
              result[14] += -0.04536554;
            } else {
              result[14] += 0.18029094;
            }
          } else {
            result[14] += -0.1538645;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2917093120)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39668)) {
              result[14] += -0.06194822;
            } else {
              result[14] += -0.16155297;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[14] += 0.10874428;
            } else {
              result[14] += -0.07905321;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2938224384)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
              result[14] += -0.12167824;
            } else {
              result[14] += 0.23255098;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
              result[14] += -0.12666292;
            } else {
              result[14] += -0.011665243;
            }
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60317)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3522095104)) {
              result[14] += -0.0027026914;
            } else {
              result[14] += -0.08085932;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3736429312)) {
              result[14] += 0.029486958;
            } else {
              result[14] += 8.2780374e-05;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3043846912)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
              result[14] += 0.2101049;
            } else {
              result[14] += 0.002731786;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51204)) {
              result[14] += -0.01872332;
            } else {
              result[14] += -0.07437651;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29424)) {
            result[14] += 0.21975283;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
              result[14] += 0.114715226;
            } else {
              result[14] += -0.048328727;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)32004)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3927323392)) {
              result[14] += -0.11971456;
            } else {
              result[14] += 0.016571086;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
              result[14] += 0.31309742;
            } else {
              result[14] += -0.033301525;
            }
          }
        }
      }
    }
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
    if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
          result[0] += -0.0005497121;
        } else {
          result[0] += -0.00045093652;
        }
      } else {
        result[0] += -0.00016095287;
      }
    } else {
      result[0] += -0.10624837;
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47082)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)46078)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45831)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)43031)) {
              result[0] += 0.004061361;
            } else {
              result[0] += -0.0211829;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45315)) {
              result[0] += 0.10382944;
            } else {
              result[0] += -0.020713791;
            }
          }
        } else {
          result[0] += -0.09605327;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)46835)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            result[0] += 0.10648769;
          } else {
            result[0] += -0.007422524;
          }
        } else {
          result[0] += 0.12847906;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48385)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)47601)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
              result[0] += -0.010165954;
            } else {
              result[0] += -0.073757075;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[0] += 0.0077378917;
            } else {
              result[0] += -0.0055693933;
            }
          }
        } else {
          result[0] += -0.15035467;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
            result[0] += 0.01801833;
          } else {
            result[0] += 0.08987662;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[0] += 0.0015110418;
            } else {
              result[0] += 0.056515202;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)545895936)) {
              result[0] += -0.12399057;
            } else {
              result[0] += -0.0040552593;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)49158)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)48646)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33779)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)30979)) {
              result[1] += 0.00021654884;
            } else {
              result[1] += -0.01077985;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
              result[1] += 0.0028690498;
            } else {
              result[1] += -0.08410731;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
              result[1] += -0.012785195;
            } else {
              result[1] += 0.101712294;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)310)) {
              result[1] += -0.08874297;
            } else {
              result[1] += 0.024619132;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)42774)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2148727808)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[1] += -0.026321564;
            } else {
              result[1] += 0.14459881;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
              result[1] += -0.1057041;
            } else {
              result[1] += -0.0149020385;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45573)) {
              result[1] += 0.21207435;
            } else {
              result[1] += -0.081574984;
            }
          } else {
            result[1] += 0.25378823;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)679)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
              result[1] += 0.029410115;
            } else {
              result[1] += 0.074355006;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
              result[1] += -0.029763136;
            } else {
              result[1] += 0.072899245;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)262)) {
              result[1] += -0.037815582;
            } else {
              result[1] += 0.18204218;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)57172)) {
              result[1] += 0.26840958;
            } else {
              result[1] += -0.02637844;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3325106688)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2372253184)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[1] += -0.2186849;
            } else {
              result[1] += 0.0889532;
            }
          } else {
            result[1] += -0.35629222;
          }
        } else {
          result[1] += -0.04521214;
        }
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4079296768)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
          if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2540421888)) {
              result[1] += 0.00018808673;
            } else {
              result[1] += -0.08295643;
            }
          } else {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)302)) {
              result[1] += -0.13203807;
            } else {
              result[1] += 0.02967579;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += -0.0032289138;
            } else {
              result[1] += -0.05758616;
            }
          } else {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[1] += 0.0015732335;
            } else {
              result[1] += 0.059342973;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4122771968)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
              result[1] += 0.2601367;
            } else {
              result[1] += 0.030922702;
            }
          } else {
            result[1] += -0.08837527;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.04314535;
            } else {
              result[1] += 0.07425116;
            }
          } else {
            result[1] += 0.1358545;
          }
        }
      }
    } else {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)64012)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
              result[1] += -0.13472503;
            } else {
              result[1] += -0.042399395;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[1] += 0.16364636;
            } else {
              result[1] += -0.09163158;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4231075840)) {
            result[1] += 0.11015531;
          } else {
            result[1] += -0.096331075;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)63255)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
            result[1] += 0.1940787;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
              result[1] += 0.09864048;
            } else {
              result[1] += -0.02150555;
            }
          }
        } else {
          result[1] += -0.14153603;
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64235)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)63462)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)62485)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
              result[2] += 0.0008547018;
            } else {
              result[2] += -0.0999798;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
              result[2] += 0.055274043;
            } else {
              result[2] += 0.004897236;
            }
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)62739)) {
              result[2] += -0.07516247;
            } else {
              result[2] += 0.04532788;
            }
          } else {
            result[2] += -0.08077633;
          }
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
            result[2] += 0.11516287;
          } else {
            result[2] += -0.012418099;
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)63714)) {
            result[2] += -0.09435478;
          } else {
            result[2] += 0.103554375;
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        result[2] += -0.022903819;
      } else {
        result[2] += 0.00922229;
      }
    }
  } else {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
      result[2] += 0.040191643;
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)53368)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)45995)) {
          result[2] += 0.0052889297;
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)48433)) {
            result[2] += -0.0065426417;
          } else {
            result[2] += -0.026808368;
          }
        }
      } else {
        result[2] += 0.022216793;
      }
    }
  }
  if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
      result[3] += 0.0015415293;
    } else {
      result[3] += 0.018782778;
    }
  } else {
    result[3] += -0.020772077;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)19225)) {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)5986)) {
          result[4] += 0.015271499;
        } else {
          result[4] += -0.025727348;
        }
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)25002)) {
          result[4] += 0.02949526;
        } else {
          result[4] += 0.010259922;
        }
      }
    } else {
      result[4] += -0.017396623;
    }
  } else {
    result[4] += 0.0335713;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1374947328)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1269061760)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)55493)) {
              result[5] += 0.0002040428;
            } else {
              result[5] += 0.03938067;
            }
          } else {
            result[5] += -0.084229134;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
            result[5] += 0.010897611;
          } else {
            result[5] += 0.15177852;
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)48125)) {
          result[5] += -0.10903654;
        } else {
          result[5] += 0.046709657;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)38627)) {
        result[5] += 0.00084910606;
      } else {
        result[5] += 0.0994877;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)48908)) {
        result[5] += -0.10502021;
      } else {
        result[5] += -0.02485556;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)15370)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)51164)) {
          result[5] += -0.088132374;
        } else {
          result[5] += -0.017652523;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)17686)) {
          result[5] += 0.14357845;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
            result[5] += 0.10439574;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
              result[5] += -0.10286445;
            } else {
              result[5] += -0.0044296086;
            }
          }
        }
      }
    }
  }
  result[6] += -0.0002460647;
  if ( (data[12].missing != -1) && (data[12].fvalue < (float)50927)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)48661)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
            if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
              result[7] += -7.5873504e-05;
            } else {
              result[7] += -0.045582145;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60104)) {
              result[7] += 0.012363646;
            } else {
              result[7] += 0.096617304;
            }
          }
        } else {
          result[7] += 0.06487334;
        }
      } else {
        result[7] += -0.10049742;
      }
    } else {
      result[7] += 0.088586695;
    }
  } else {
    result[7] += -0.07779752;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)57518)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)39068)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[8] += 0.0005975426;
            } else {
              result[8] += -0.01104148;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4210768640)) {
              result[8] += 0.009444531;
            } else {
              result[8] += -0.07449175;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49678)) {
              result[8] += 0.10143127;
            } else {
              result[8] += -0.101773046;
            }
          } else {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[8] += -0.034514178;
            } else {
              result[8] += -0.004466951;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)50766)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)78921592)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)51972)) {
              result[8] += -0.13047092;
            } else {
              result[8] += 0.024264218;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[8] += 0.19255733;
            } else {
              result[8] += 0.012891545;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)50899)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
              result[8] += -0.0057414435;
            } else {
              result[8] += -0.11629025;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
              result[8] += -0.010786539;
            } else {
              result[8] += 0.0058849403;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1750554752)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[8] += 0.15806855;
            } else {
              result[8] += 0.006080242;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58368)) {
              result[8] += -0.04802559;
            } else {
              result[8] += -0.12068633;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)6428)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)98303416)) {
              result[8] += 0.079823405;
            } else {
              result[8] += -0.08229986;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10780)) {
              result[8] += 0.06721391;
            } else {
              result[8] += -0.004813752;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1807130496)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14103)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1769317248)) {
              result[8] += 0.04691739;
            } else {
              result[8] += 0.39127812;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)46333)) {
              result[8] += -0.035759892;
            } else {
              result[8] += 0.16808273;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
              result[8] += -0.008328291;
            } else {
              result[8] += 0.019861396;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
              result[8] += -0.12544917;
            } else {
              result[8] += -0.02786955;
            }
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
      result[8] += -0.124379694;
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)10521)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)10260)) {
            result[8] += 0.082501926;
          } else {
            result[8] += -0.15968111;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            result[8] += -0.031459514;
          } else {
            result[8] += 0.09537383;
          }
        }
      } else {
        result[8] += -0.07772382;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)26083)) {
              result[9] += 2.927392e-05;
            } else {
              result[9] += -0.013387181;
            }
          } else {
            result[9] += 0.07407007;
          }
        } else {
          result[9] += -0.0652255;
        }
      } else {
        result[9] += 0.06873029;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)24560)) {
        result[9] += -0.059107278;
      } else {
        result[9] += -0.019385546;
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1710604032)) {
        result[9] += 0.069809206;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)22023)) {
            result[9] += -0.022403302;
          } else {
            result[9] += 0.0777508;
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
            result[9] += -0.14254533;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
              result[9] += -0.027066667;
            } else {
              result[9] += 0.057065275;
            }
          }
        }
      }
    } else {
      result[9] += 0.0796556;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)35802)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)34792)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)33269)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)31234)) {
              result[10] += 0.00051383197;
            } else {
              result[10] += -0.049866956;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)290972000)) {
              result[10] += 0.05040254;
            } else {
              result[10] += -0.0431095;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16150)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)7452)) {
              result[10] += 0.041332994;
            } else {
              result[10] += 0.16888002;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25824)) {
              result[10] += -0.031016393;
            } else {
              result[10] += 0.1223375;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
              result[10] += 0.023344694;
            } else {
              result[10] += -0.068061866;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1574747392)) {
              result[10] += -0.06374082;
            } else {
              result[10] += -0.18930571;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)34029)) {
              result[10] += -0.02626889;
            } else {
              result[10] += 0.060973167;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
              result[10] += 0.12557422;
            } else {
              result[10] += 0.020607812;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3348316160)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35047)) {
            result[10] += -0.12521233;
          } else {
            result[10] += 0.0055556465;
          }
        } else {
          result[10] += -0.16674784;
        }
      } else {
        result[10] += 0.015294569;
      }
    }
  } else {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1516537088)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1476473472)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)36818)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)4)) {
              result[10] += 0.07538305;
            } else {
              result[10] += -0.038436342;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[10] += 0.0013087172;
            } else {
              result[10] += -0.03994131;
            }
          }
        } else {
          result[10] += -0.14040132;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)54286)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
              result[10] += -0.14819948;
            } else {
              result[10] += 0.11937047;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
              result[10] += 0.04087013;
            } else {
              result[10] += -0.09026026;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2339238656)) {
              result[10] += -0.0029381248;
            } else {
              result[10] += 0.19039099;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62732)) {
              result[10] += -0.13843948;
            } else {
              result[10] += 0.016773323;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2896713728)) {
          result[10] += -0.04809505;
        } else {
          result[10] += -0.14927372;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)40452)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)39407)) {
              result[10] += -0.007874625;
            } else {
              result[10] += 0.12408638;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3587199488)) {
              result[10] += -0.09609746;
            } else {
              result[10] += -0.0028170003;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4165944320)) {
              result[10] += 0.12143722;
            } else {
              result[10] += -0.102753565;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
              result[10] += -0.11520638;
            } else {
              result[10] += 0.018939039;
            }
          }
        }
      }
    }
  }
  if ( (data[2].missing != -1) && (data[2].fvalue < (float)1)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)428962464)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
              result[11] += 5.185622e-05;
            } else {
              result[11] += -0.0502278;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
              result[11] += 0.07356943;
            } else {
              result[11] += -0.025575863;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53268)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)17940)) {
              result[11] += 0.008976116;
            } else {
              result[11] += -0.037332483;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
              result[11] += 0.0017593048;
            } else {
              result[11] += 0.09574638;
            }
          }
        }
      } else {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)21524)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)19463)) {
              result[11] += -0.030330818;
            } else {
              result[11] += 0.18277533;
            }
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
              result[11] += -0.07522785;
            } else {
              result[11] += 0.26207852;
            }
          }
        } else {
          result[11] += -0.17321992;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)644183360)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
              result[11] += 0.00664501;
            } else {
              result[11] += 0.08887408;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.14705952;
            } else {
              result[11] += 0.006031143;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24055)) {
              result[11] += 0.33012205;
            } else {
              result[11] += 0.095508166;
            }
          } else {
            result[11] += -0.11048152;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)702701760)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)304)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[11] += -0.005258866;
            } else {
              result[11] += -0.052443862;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[11] += -0.0059936126;
            } else {
              result[11] += 0.15182821;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)920192512)) {
            if ( (data[7].missing != -1) && (data[7].fvalue < (float)320)) {
              result[11] += 0.012006482;
            } else {
              result[11] += -0.08074781;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
              result[11] += -0.036413044;
            } else {
              result[11] += 0.0004591;
            }
          }
        }
      }
    }
  } else {
    result[11] += -0.075918704;
  }
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
              result[12] += 0.0004752614;
            } else {
              result[12] += -0.13659933;
            }
          } else {
            result[12] += 0.14076145;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)108)) {
            result[12] += -0.15364493;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)33070)) {
              result[12] += -0.04225587;
            } else {
              result[12] += 0.09747059;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)17173)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9490)) {
              result[12] += 0.018232519;
            } else {
              result[12] += -0.0450531;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18193)) {
              result[12] += 0.19354442;
            } else {
              result[12] += 0.018137349;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2433490688)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[12] += 0.017255817;
            } else {
              result[12] += -0.12971623;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3671485440)) {
              result[12] += 0.03668922;
            } else {
              result[12] += -0.050636213;
            }
          }
        }
      }
    } else {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)109)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)4872)) {
          result[12] += -0.03210995;
        } else {
          result[12] += -0.121073194;
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
            result[12] += 0.02923157;
          } else {
            result[12] += -0.09758719;
          }
        } else {
          result[12] += 0.06103639;
        }
      }
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
      if ( (data[13].missing != -1) && (data[13].fvalue < (float)1)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)19991)) {
          result[12] += -0.10306395;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            result[12] += -0.004134806;
          } else {
            result[12] += 0.039446257;
          }
        }
      } else {
        result[12] += -0.1323185;
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)47924)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)12063)) {
          result[12] += 0.14927445;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3001000192)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
              result[12] += -0.11186123;
            } else {
              result[12] += 0.030575676;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28902)) {
              result[12] += -0.063480765;
            } else {
              result[12] += 0.17249975;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1670813696)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56583)) {
              result[12] += -0.009101613;
            } else {
              result[12] += 0.018579539;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[12] += -0.14731072;
            } else {
              result[12] += 0.058932666;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2213215232)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[12] += -0.0058300938;
            } else {
              result[12] += 0.03352237;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)18948)) {
              result[12] += 0.008721415;
            } else {
              result[12] += -0.010437259;
            }
          }
        }
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)58402)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[13] += -0.00040033075;
            } else {
              result[13] += 0.024241922;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)176928576)) {
              result[13] += -0.11468195;
            } else {
              result[13] += -0.0055745495;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)49187)) {
              result[13] += 0.0050879857;
            } else {
              result[13] += -0.05370751;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[13] += 0.07436047;
            } else {
              result[13] += 0.0030576342;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3649703168)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49638)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)900580480)) {
              result[13] += -0.044117678;
            } else {
              result[13] += -0.10139506;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50318)) {
              result[13] += 0.13323335;
            } else {
              result[13] += -0.07410204;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3823925504)) {
            result[13] += 0.16984056;
          } else {
            result[13] += -0.102252886;
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)59171)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)138283152)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)1)) {
            result[13] += 0.10870009;
          } else {
            result[13] += 0.320841;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
            result[13] += -0.12740213;
          } else {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[13] += 0.14405458;
            } else {
              result[13] += -0.088138446;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)520)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[13] += -0.006408561;
            } else {
              result[13] += -0.09624247;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
              result[13] += 0.15558103;
            } else {
              result[13] += -0.0014650339;
            }
          }
        } else {
          result[13] += -0.099732235;
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)60690)) {
      if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49334)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2476456192)) {
              result[13] += 0.009148557;
            } else {
              result[13] += 0.21100076;
            }
          } else {
            result[13] += -0.11179686;
          }
        } else {
          result[13] += -0.11971002;
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
          result[13] += -0.15286836;
        } else {
          result[13] += 0.040652238;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61703)) {
              result[13] += -0.03896205;
            } else {
              result[13] += -0.0014227836;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60945)) {
              result[13] += -0.11467642;
            } else {
              result[13] += 0.03533891;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2979963136)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)718)) {
              result[13] += -0.09466999;
            } else {
              result[13] += -0.0037633232;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)62466)) {
              result[13] += -0.07202319;
            } else {
              result[13] += 0.122820124;
            }
          }
        }
      } else {
        result[13] += -0.11288755;
      }
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)53522)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)52230)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)50704)) {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)50193)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)27352)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)22283)) {
              result[14] += -0.0002730621;
            } else {
              result[14] += 0.009421846;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
              result[14] += -0.02022152;
            } else {
              result[14] += -0.00083279423;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.07231907;
            } else {
              result[14] += 0.14932437;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[14] += 0.3351624;
            } else {
              result[14] += 0.0099148825;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59048)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3865091840)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3282277376)) {
              result[14] += -0.0025060745;
            } else {
              result[14] += -0.15201737;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
              result[14] += 0.15765476;
            } else {
              result[14] += 0.003942016;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)742410688)) {
              result[14] += 0.020684838;
            } else {
              result[14] += 0.24000122;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)59357)) {
              result[14] += 0.13484327;
            } else {
              result[14] += -0.06853787;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)59204)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)584790528)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)53009)) {
              result[14] += -0.029900804;
            } else {
              result[14] += 0.051268574;
            }
          } else {
            result[14] += -0.13578133;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)59685)) {
            result[14] += 0.3696733;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)52745)) {
              result[14] += -0.08948709;
            } else {
              result[14] += 0.12374859;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1296776704)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
            result[14] += -0.034487043;
          } else {
            result[14] += -0.15234415;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3131613440)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2830898688)) {
              result[14] += -0.04402987;
            } else {
              result[14] += 0.22559641;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)60765)) {
              result[14] += -0.08765847;
            } else {
              result[14] += 0.12392398;
            }
          }
        }
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)54032)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)59894)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)350722368)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)310338752)) {
              result[14] += -0.003596125;
            } else {
              result[14] += 0.18611479;
            }
          } else {
            result[14] += -0.1037657;
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1826971264)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[14] += 0.3050797;
            } else {
              result[14] += 0.10987838;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[14] += -0.12770844;
            } else {
              result[14] += 0.114447854;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)60916)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
            result[14] += -0.13811827;
          } else {
            result[14] += 0.007427469;
          }
        } else {
          result[14] += 0.20425932;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)821483008)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)723390400)) {
              result[14] += 0.0031987636;
            } else {
              result[14] += 0.101743616;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)56085)) {
              result[14] += 0.047980394;
            } else {
              result[14] += -0.07218731;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55824)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)18)) {
              result[14] += -0.112037145;
            } else {
              result[14] += 0.03085477;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[14] += 0.22947234;
            } else {
              result[14] += 0.049358673;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2032936960)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1983854080)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
              result[14] += -0.042249415;
            } else {
              result[14] += 0.0013225803;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)18306)) {
              result[14] += -0.18741836;
            } else {
              result[14] += -0.032071248;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
              result[14] += 0.10280105;
            } else {
              result[14] += -0.02854265;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2519857152)) {
              result[14] += -0.081677616;
            } else {
              result[14] += 0.0021898316;
            }
          }
        }
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)3800402176)) {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)60210)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)2130028928)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1159214080)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
              result[0] += 0.0003717379;
            } else {
              result[0] += -0.06522321;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)58534)) {
              result[0] += 0.014709025;
            } else {
              result[0] += 0.096265145;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)46583)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)25317)) {
              result[0] += 0.011868363;
            } else {
              result[0] += -0.09708701;
            }
          } else {
            result[0] += 0.02954772;
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2588646656)) {
          result[0] += 0.066375054;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)3607840256)) {
            result[0] += -0.046546407;
          } else {
            result[0] += 0.033902515;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)60944)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)565282880)) {
          result[0] += -0.017883817;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1342937856)) {
            result[0] += 0.15503526;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)40706)) {
              result[0] += 0.04147389;
            } else {
              result[0] += -0.044621147;
            }
          }
        }
      } else {
        result[0] += -0.040938724;
      }
    }
  } else {
    result[0] += -0.04612416;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)441)) {
    if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
      if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)262)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)253)) {
              result[1] += -0.015125888;
            } else {
              result[1] += -0.00014644008;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2958984960)) {
              result[1] += -0.08626295;
            } else {
              result[1] += 0.04199467;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
              result[1] += 0.15273918;
            } else {
              result[1] += -0.053568557;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
              result[1] += -0.1335013;
            } else {
              result[1] += 0.010274841;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)1)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
              result[1] += 0.10702777;
            } else {
              result[1] += 0.019531742;
            }
          } else {
            result[1] += -0.12953393;
          }
        } else {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)354)) {
            if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
              result[1] += -0.031673804;
            } else {
              result[1] += -0.117877975;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
              result[1] += -0.03136338;
            } else {
              result[1] += 0.0998253;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)3565603328)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3303400704)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)58147)) {
              result[1] += -0.0032838134;
            } else {
              result[1] += 0.14477077;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36048)) {
              result[1] += -0.098232225;
            } else {
              result[1] += -0.0042328243;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
            result[1] += -0.013307798;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[1] += 0.047196276;
            } else {
              result[1] += 0.19108503;
            }
          }
        }
      } else {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)103)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)35300)) {
            result[1] += -0.0028863703;
          } else {
            result[1] += -0.05183116;
          }
        } else {
          result[1] += -0.14726539;
        }
      }
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)478)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)5640)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          result[1] += -0.0017938528;
        } else {
          result[1] += -0.122258954;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)11810)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1015717376)) {
            result[1] += 0.059086706;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3500444928)) {
              result[1] += 0.19307403;
            } else {
              result[1] += 0.036203064;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2233529856)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
              result[1] += 0.017331367;
            } else {
              result[1] += 0.16289304;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)28120)) {
              result[1] += -0.13689993;
            } else {
              result[1] += 0.039683405;
            }
          }
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)958688384)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)939108288)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)55312)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)47861)) {
              result[1] += 0.011842641;
            } else {
              result[1] += -0.062045317;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57357)) {
              result[1] += 0.11182112;
            } else {
              result[1] += 0.022968654;
            }
          }
        } else {
          result[1] += 0.2537014;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1232591872)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)441)) {
            result[1] += 0.076382205;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)44297)) {
              result[1] += -0.056551557;
            } else {
              result[1] += -0.19530402;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)17)) {
              result[1] += -0.103007056;
            } else {
              result[1] += 0.012573932;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
              result[1] += -0.13018803;
            } else {
              result[1] += 0.005845954;
            }
          }
        }
      }
    }
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54432)) {
    if ( (data[12].missing != -1) && (data[12].fvalue < (float)64747)) {
      if ( (data[12].missing != -1) && (data[12].fvalue < (float)54320)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)53560)) {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)52770)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)51984)) {
              result[2] += 0.001160954;
            } else {
              result[2] += -0.05437668;
            }
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)53285)) {
              result[2] += 0.06406488;
            } else {
              result[2] += -0.0031637277;
            }
          }
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)54081)) {
            result[2] += -0.10686736;
          } else {
            result[2] += -0.008582404;
          }
        }
      } else {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)55338)) {
          result[2] += 0.0581425;
        } else {
          if ( (data[12].missing != -1) && (data[12].fvalue < (float)55885)) {
            result[2] += -0.095030196;
          } else {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)56134)) {
              result[2] += 0.04970314;
            } else {
              result[2] += 0.0026259767;
            }
          }
        }
      }
    } else {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)256)) {
        if ( (data[12].missing != -1) && (data[12].fvalue < (float)65015)) {
          result[2] += -0.052307114;
        } else {
          result[2] += 0.005697134;
        }
      } else {
        result[2] += 0.008358613;
      }
    }
  } else {
    result[2] += 0.027408227;
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)20269316)) {
      result[3] += -0.0013806674;
    } else {
      result[3] += 0.027602488;
    }
  } else {
    result[3] += -0.02229559;
  }
  if ( (data[4].missing != -1) && (data[4].fvalue < (float)54178)) {
    if ( (data[4].missing != -1) && (data[4].fvalue < (float)46494)) {
      if ( (data[4].missing != -1) && (data[4].fvalue < (float)460)) {
        result[4] += -0.004467007;
      } else {
        if ( (data[4].missing != -1) && (data[4].fvalue < (float)19437)) {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)14064)) {
            result[4] += 0.010815775;
          } else {
            result[4] += 0.038879324;
          }
        } else {
          if ( (data[4].missing != -1) && (data[4].fvalue < (float)45763)) {
            result[4] += -0.014806337;
          } else {
            result[4] += 0.023494544;
          }
        }
      }
    } else {
      result[4] += -0.016496295;
    }
  } else {
    result[4] += 0.03210715;
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)47341)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)41235)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)486985984)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)449359968)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)24306)) {
              result[5] += 0.001140721;
            } else {
              result[5] += -0.07884731;
            }
          } else {
            result[5] += 0.21305728;
          }
        } else {
          result[5] += -0.10059372;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)45055)) {
          result[5] += -0.108597696;
        } else {
          result[5] += -0.018096896;
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)55573)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)410017792)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)330195200)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)196699376)) {
              result[5] += 0.08861746;
            } else {
              result[5] += -0.10438126;
            }
          } else {
            result[5] += 0.2661754;
          }
        } else {
          result[5] += -0.0836245;
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)235509136)) {
          result[5] += -0.10615086;
        } else {
          result[5] += 0.0611455;
        }
      }
    }
  } else {
    if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
      result[5] += -0.103241146;
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)1296)) {
        result[5] += -0.1024217;
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)1824)) {
          result[5] += 0.11306626;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)3597)) {
            result[5] += -0.097933196;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
              result[5] += 0.10361334;
            } else {
              result[5] += -0.005211335;
            }
          }
        }
      }
    }
  }
  result[6] += -0.00021645064;
  if ( (data[9].missing != -1) && (data[9].fvalue < (float)61086)) {
    if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)3333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)2)) {
              result[7] += -0.00015895852;
            } else {
              result[7] += -0.011051275;
            }
          } else {
            result[7] += 0.14622553;
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
              result[7] += -0.11320775;
            } else {
              result[7] += -0.15731375;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1496744960)) {
              result[7] += 0.14416465;
            } else {
              result[7] += -0.09581112;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)87)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)49786)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)10006)) {
              result[7] += -0.029963745;
            } else {
              result[7] += 0.016410798;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)50146)) {
              result[7] += -0.01550049;
            } else {
              result[7] += 0.00055643084;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)55974)) {
            result[7] += -0.11844057;
          } else {
            result[7] += -0.045931242;
          }
        }
      }
    } else {
      if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
        result[7] += 0.0022974252;
      } else {
        result[7] += 0.0007211192;
      }
    }
  } else {
    result[7] += 0.0610922;
  }
  if ( (data[8].missing != -1) && (data[8].fvalue < (float)306)) {
    if ( (data[2].missing != -1) && (data[2].fvalue < (float)39)) {
      if ( (data[2].missing != -1) && (data[2].fvalue < (float)37)) {
        if ( (data[7].missing != -1) && (data[7].fvalue < (float)102)) {
          if ( (data[7].missing != -1) && (data[7].fvalue < (float)66)) {
            if ( (data[6].missing != -1) && (data[6].fvalue < (float)20)) {
              result[8] += 5.8320536e-05;
            } else {
              result[8] += -0.09964528;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)29932)) {
              result[8] += 0.042405;
            } else {
              result[8] += 0.107130006;
            }
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)45386)) {
            if ( (data[17].missing != -1) && (data[17].fvalue < (float)1)) {
              result[8] += -0.09853912;
            } else {
              result[8] += 0.05798188;
            }
          } else {
            if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
              result[8] += -0.020204933;
            } else {
              result[8] += 0.08384146;
            }
          }
        }
      } else {
        result[8] += 0.101518854;
      }
    } else {
      result[8] += -0.10280592;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)1204)) {
      result[8] += -0.12370302;
    } else {
      if ( (data[7].missing != -1) && (data[7].fvalue < (float)2)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)506611104)) {
          result[8] += 0.0036874765;
        } else {
          result[8] += 0.07359237;
        }
      } else {
        result[8] += -0.019007413;
      }
    }
  }
  if ( (data[14].missing != -1) && (data[14].fvalue < (float)1651364224)) {
    if ( (data[14].missing != -1) && (data[14].fvalue < (float)1555808384)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1413344512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1392936448)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1307060480)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)57619)) {
              result[9] += -5.2330877e-05;
            } else {
              result[9] += -0.029508008;
            }
          } else {
            result[9] += 0.06929845;
          }
        } else {
          result[9] += -0.050051298;
        }
      } else {
        result[9] += 0.061241888;
      }
    } else {
      result[9] += -0.04381098;
    }
  } else {
    if ( (data[9].missing != -1) && (data[9].fvalue < (float)7307)) {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)21775)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[9] += -0.012283477;
        } else {
          result[9] += 0.08846587;
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)37333)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
            result[9] += 0.012925126;
          } else {
            result[9] += -0.12291202;
          }
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
            result[9] += 0.059875034;
          } else {
            result[9] += -0.019457929;
          }
        }
      }
    } else {
      result[9] += 0.07377111;
    }
  }
  if ( (data[18].missing != -1) && (data[18].fvalue < (float)59426)) {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)58915)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)4188923648)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)4057698304)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3478112512)) {
              result[10] += 0.0003517379;
            } else {
              result[10] += -0.012498738;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)49930)) {
              result[10] += 0.04781187;
            } else {
              result[10] += -0.05596498;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)16408)) {
            result[10] += 0.031340316;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)36564)) {
              result[10] += -0.09125684;
            } else {
              result[10] += 0.0028418584;
            }
          }
        }
      } else {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)922)) {
          result[10] += -0.10052091;
        } else {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)37518)) {
            result[10] += 0.055772122;
          } else {
            result[10] += -0.02363403;
          }
        }
      }
    } else {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)5900)) {
          result[10] += -0.04499173;
        } else {
          result[10] += -0.16137259;
        }
      } else {
        result[10] += 0.034073494;
      }
    }
  } else {
    if ( (data[18].missing != -1) && (data[18].fvalue < (float)59926)) {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)1214180096)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)59674)) {
            result[10] += -0.00041201932;
          } else {
            result[10] += 0.09948089;
          }
        } else {
          result[10] += 0.18555808;
        }
      } else {
        result[10] += -0.042012163;
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)60184)) {
        result[10] += -0.07978163;
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)48558)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2875370496)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2412203520)) {
              result[10] += 0.0153387785;
            } else {
              result[10] += -0.103819765;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)61956)) {
              result[10] += -0.08308829;
            } else {
              result[10] += 0.11276861;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1535688832)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)625067968)) {
              result[10] += -0.044916913;
            } else {
              result[10] += -0.15995443;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2071591168)) {
              result[10] += 0.14561029;
            } else {
              result[10] += -0.044422958;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)398)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)333)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)312)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)5)) {
          if ( (data[8].missing != -1) && (data[8].fvalue < (float)5)) {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += 0.00052493694;
            } else {
              result[11] += -0.14094652;
            }
          } else {
            if ( (data[5].missing != -1) && (data[5].fvalue < (float)1)) {
              result[11] += -0.13131213;
            } else {
              result[11] += 0.0032275335;
            }
          }
        } else {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)262)) {
            result[11] += -0.14418449;
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
              result[11] += -0.0031735876;
            } else {
              result[11] += -0.06557534;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)2578889216)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)50449)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)41745)) {
              result[11] += 0.015065059;
            } else {
              result[11] += -0.08309237;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2275607552)) {
              result[11] += 0.08783405;
            } else {
              result[11] += -0.026301399;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2654587904)) {
            result[11] += 0.1936937;
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3087300608)) {
              result[11] += -0.01831677;
            } else {
              result[11] += 0.04700034;
            }
          }
        }
      }
    } else {
      if ( (data[18].missing != -1) && (data[18].fvalue < (float)64512)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)3109958656)) {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2631808512)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2561441280)) {
              result[11] += -0.01097489;
            } else {
              result[11] += 0.11083266;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)2764642816)) {
              result[11] += -0.15687805;
            } else {
              result[11] += -0.029679485;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)14362)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.15947652;
            } else {
              result[11] += 0.009265757;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)3174300928)) {
              result[11] += 0.12740992;
            } else {
              result[11] += 0.03230969;
            }
          }
        }
      } else {
        if ( (data[18].missing != -1) && (data[18].fvalue < (float)65280)) {
          result[11] += -0.2534125;
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)2809073152)) {
            result[11] += 0.15613359;
          } else {
            result[11] += -0.06272431;
          }
        }
      }
    }
  } else {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)479)) {
      if ( (data[3].missing != -1) && (data[3].fvalue < (float)478)) {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)34781)) {
          result[11] += -0.13953726;
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)517)) {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1250727680)) {
              result[11] += -0.028706368;
            } else {
              result[11] += -0.1937839;
            }
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)2084)) {
              result[11] += 0.0968304;
            } else {
              result[11] += 0.007202314;
            }
          }
        }
      } else {
        if ( (data[9].missing != -1) && (data[9].fvalue < (float)1883)) {
          result[11] += 0.14512153;
        } else {
          result[11] += -0.13221484;
        }
      }
    } else {
      if ( (data[14].missing != -1) && (data[14].fvalue < (float)861303040)) {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)762532352)) {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)64773)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)63502)) {
              result[11] += 0.0037299714;
            } else {
              result[11] += -0.12469473;
            }
          } else {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)42142)) {
              result[11] += 0.17116104;
            } else {
              result[11] += -0.020314252;
            }
          }
        } else {
          if ( (data[18].missing != -1) && (data[18].fvalue < (float)4105)) {
            result[11] += -0.14194947;
          } else {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)5129)) {
              result[11] += 0.3442399;
            } else {
              result[11] += 0.06287004;
            }
          }
        }
      } else {
        if ( (data[14].missing != -1) && (data[14].fvalue < (float)1001994624)) {
          if ( (data[9].missing != -1) && (data[9].fvalue < (float)43820)) {
            if ( (data[9].missing != -1) && (data[9].fvalue < (float)40646)) {
              result[11] += -0.059896603;
            } else {
              result[11] += 0.119603395;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)996595520)) {
              result[11] += -0.17310779;
            } else {
              result[11] += 0.005769968;
            }
          }
        } else {
          if ( (data[14].missing != -1) && (data[14].fvalue < (float)1054373056)) {
            if ( (data[18].missing != -1) && (data[18].fvalue < (float)9237)) {
              result[11] += -0.15045805;
            } else {
              result[11] += 0.110340185;
            }
          } else {
            if ( (data[14].missing != -1) && (data[14].fvalue < (float)1112714368)) {
              result[11] += -0.06913172;
            } else {
              result[11] += 2.5994295e-05;
            }
          }
        }
      }
    }
  }
  if ( (data[3].missing != -1) && (data[3].fvalue < (float)151)) {
    if ( (data[3].missing != -1) && (data[3].fvalue < (float)150)) {
      if ( (data[15].missing != -1) && (data[15].fvalue < (float)1)) {
        if ( (data[3].missing != -1) && (data[3].fvalue < (float)121)) {
          if ( (data[10].missing != -1) && (data[10].fvalue < (float)1)) {
            if ( (data[12].missing != -1) && (data[12].fvalue < (float)279)) {
              result[12] += 0.00011174838;
            } else {
              result[12] += -0.077523425;
            }
          } else {
            if ( (data[10].missing != -1) && (data[10].fvalue < (float)2)) {
              result[12] += -0.03613679;
            } else {
              result[12] += -0.008972617;
            }
          }
        } else {
          result[12] += -0.08413347;
        }
      } else {
        result[12] += -0.073434316;
      }
    } else {
      result[12] += 0.09806111;
    }
  } else {
    if ( (data[8].missing != -1) && (data[8].fvalue < (float)38117)) {
      if ( (data[9].missing != -1) && (data[9].fvalue < (float)4321)) {
        if ( (data[8].missing != -1) && (data[8].fvalue < (float)151)) {
          if ( (data[3].missing != -1) && (data[3].fvalue < (float)223)) {
            result[12] += 0.08406733;
          } else {
            result[12] += -0.047979187;
          }
        } else {
          result[12] += -0.050418425;
        }
      } else {
        result[12] += -0.111011386;
      }
    } else {
      result[12] += 0.047166567;
    }
  }
}

