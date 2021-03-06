/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
///////                            Author: Vincent Le Nir                                         ///////
///////                                 Royal Military Academy                                    ///////
///////           Department Communications, Information Systems & Sensors (CISS)                 ///////
///////                             30, Avenue de la Renaissance                                  ///////
///////                                B-1000 Brussels BELGIUM                                    ///////
///////                                   Tel: +3227426624                                        ///////
///////                                 email:vincent.lenir@rma.ac.be                             ///////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SENSING_H
#define SENSING_H
#include <itpp/itcomm.h>
#include <itpp/itstat.h>
using namespace std;
using namespace itpp;


class Sensing
{
public:
    Sensing();
    vec spectrum_block(cvec rx_buff,int Nfft);
    int best_group_mask(vec spectrum_sensed,int num_subchannels);


};

#endif // SENSING_H

