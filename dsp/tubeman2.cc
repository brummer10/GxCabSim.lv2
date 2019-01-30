// generated from file './/tubeman2.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace tubeman2 {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fRec0[13];
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "tubeman2";
	name = N_("tubeman2");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<13; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.99620252224965e-58 * fConst0);
	fConst2 = (1.42878044579096e-15 + (fConst0 * ((fConst0 * (2.66862409574129e-19 + (fConst0 * ((fConst0 * (2.13070851389044e-24 + (fConst0 * ((fConst0 * (2.79249425809013e-31 + (fConst0 * ((fConst0 * (3.46689278680844e-39 + (fConst0 * ((fConst0 * (4.88418071873032e-48 + (fConst0 * (fConst1 - 5.06107240591995e-53)))) - 2.64201039162577e-43)))) - 3.69380628600995e-35)))) - 7.26667710688185e-28)))) - 1.08996693014451e-21)))) - 3.9460074161777e-17)));
	fConst3 = (3.59544302669958e-57 * fConst0);
	fConst4 = faustpower<2>(fConst0);
	fConst5 = (1.71453653494915e-14 + (fConst0 * ((fConst0 * (2.13489927659303e-18 + (fConst0 * ((fConst0 * (8.52283405556178e-24 + (fConst0 * ((fConst4 * (7.38761257201991e-35 + (fConst0 * ((fConst0 * (1.58520623497546e-42 + (fConst0 * ((fConst0 * (5.06107240591995e-52 - fConst3)) - 3.90734457498426e-47)))) - 1.38675711472337e-38)))) - 1.45333542137637e-27)))) - 6.53980158086707e-21)))) - 3.9460074161777e-16)));
	fConst6 = (1.97749366468477e-56 * fConst0);
	fConst7 = (9.42995094222034e-14 + (fConst0 * ((fConst0 * (6.93842264892736e-18 + (fConst0 * ((fConst0 * (4.26141702778089e-24 + (fConst0 * (2.90667084275274e-27 + (fConst0 * ((fConst0 * (1.47752251440398e-34 + (fConst0 * (6.93378557361687e-39 + (fConst0 * ((fConst0 * (1.26988698686988e-46 + (fConst0 * (fConst6 - 2.22687185860478e-51)))) - 3.17041246995092e-42)))))) - 1.67549655485408e-30)))))) - 1.30796031617341e-20)))) - 1.73624326311819e-15)));
	fConst8 = (6.59164554894923e-56 * fConst0);
	fConst9 = (3.14331698074011e-13 + (fConst0 * ((fConst0 * (1.06744963829652e-17 + (fConst0 * ((fConst0 * ((fConst0 * (7.26667710688185e-27 + (fConst4 * ((fConst0 * (4.16027134417012e-38 + (fConst0 * (5.28402078325154e-43 + (fConst0 * ((fConst0 * (5.56717964651195e-51 - fConst8)) - 1.95367228749213e-46)))))) - 3.69380628600995e-34)))) - 2.55685021666853e-23)) - 2.17993386028902e-21)))) - 4.34060815779547e-15)));
	fConst10 = (1.48312024851358e-55 * fConst0);
	fConst11 = (7.07246320666525e-13 + (fConst0 * ((fConst0 * (4.00293614361194e-18 + (fConst0 * (2.94291071139018e-20 + (fConst0 * ((fConst0 * ((fConst0 * (4.1887413871352e-30 + (fConst0 * ((fConst0 * ((fConst0 * (7.13342805738957e-42 + (fConst0 * (7.32627107809548e-47 + (fConst0 * (fConst10 - 8.35076946976792e-51)))))) - 5.89371773757434e-38)) - 1.84690314300498e-34)))) - 3.63333855344093e-27)) - 3.62220447361376e-23)))))) - 6.51091223669321e-15)));
	fConst12 = (2.37299239762172e-55 * fConst0);
	fConst13 = (1.13159411306644e-12 + (fConst0 * ((fConst0 * ((fConst0 * (3.92388094852024e-20 + (fConst0 * (1.70456681111236e-23 + (fConst0 * ((fConst4 * (7.38761257201991e-34 + (fConst0 * ((fConst0 * ((fConst0 * (2.34440674499055e-46 + (fConst0 * (6.68061557581434e-51 - fConst12)))) - 9.51123740985276e-42)) - 2.77351422944675e-38)))) - 1.45333542137637e-26)))))) - 1.28093956595582e-17)) - 5.20872978935457e-15)));
	fConst14 = (1.32019313191085e-12 + (fConst4 * ((fConst4 * (5.96598383889325e-23 + (fConst4 * ((fConst4 * (9.70729980306363e-38 + (fConst4 * ((2.76849113055868e-55 * fConst4) - 4.10271180373347e-46)))) - 5.58498851618027e-30)))) - 2.24164424042269e-17)));
	fConst15 = (1.13159411306644e-12 + (fConst0 * (5.20872978935457e-15 + (fConst0 * ((fConst0 * ((fConst0 * (1.70456681111236e-23 + (fConst0 * (1.45333542137637e-26 + (fConst4 * ((fConst0 * ((fConst0 * (9.51123740985276e-42 + (fConst0 * (2.34440674499055e-46 + (fConst0 * (0 - (6.68061557581434e-51 + fConst12))))))) - 2.77351422944675e-38)) - 7.38761257201991e-34)))))) - 3.92388094852024e-20)) - 1.28093956595582e-17)))));
	fConst16 = (7.07246320666525e-13 + (fConst0 * (6.51091223669321e-15 + (fConst0 * (4.00293614361194e-18 + (fConst0 * ((fConst0 * ((fConst0 * (3.63333855344093e-27 + (fConst0 * (4.1887413871352e-30 + (fConst0 * (1.84690314300498e-34 + (fConst0 * ((fConst0 * ((fConst0 * (7.32627107809548e-47 + (fConst0 * (8.35076946976792e-51 + fConst10)))) - 7.13342805738957e-42)) - 5.89371773757434e-38)))))))) - 3.62220447361376e-23)) - 2.94291071139018e-20)))))));
	fConst17 = (3.14331698074011e-13 + (fConst0 * (4.34060815779547e-15 + (fConst0 * (1.06744963829652e-17 + (fConst0 * (2.17993386028902e-21 + (fConst0 * ((fConst0 * ((fConst4 * (3.69380628600995e-34 + (fConst0 * (4.16027134417012e-38 + (fConst0 * ((fConst0 * ((fConst0 * (0 - (5.56717964651195e-51 + fConst8))) - 1.95367228749213e-46)) - 5.28402078325154e-43)))))) - 7.26667710688185e-27)) - 2.55685021666853e-23)))))))));
	fConst18 = (9.42995094222034e-14 + (fConst0 * (1.73624326311819e-15 + (fConst0 * (6.93842264892736e-18 + (fConst0 * (1.30796031617341e-20 + (fConst0 * (4.26141702778089e-24 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (6.93378557361687e-39 + (fConst0 * (3.17041246995092e-42 + (fConst0 * (1.26988698686988e-46 + (fConst0 * (2.22687185860478e-51 + fConst6)))))))) - 1.47752251440398e-34)) - 1.67549655485408e-30)) - 2.90667084275274e-27)))))))))));
	fConst19 = (1.71453653494915e-14 + (fConst0 * (3.9460074161777e-16 + (fConst0 * (2.13489927659303e-18 + (fConst0 * (6.53980158086707e-21 + (fConst0 * (8.52283405556178e-24 + (fConst0 * (1.45333542137637e-27 + (fConst4 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (0 - (5.06107240591995e-52 + fConst3))) - 3.90734457498426e-47)) - 1.58520623497546e-42)) - 1.38675711472337e-38)) - 7.38761257201991e-35)))))))))))));
	fConst20 = (1.42878044579096e-15 + (fConst0 * (3.9460074161777e-17 + (fConst0 * (2.66862409574129e-19 + (fConst0 * (1.08996693014451e-21 + (fConst0 * (2.13070851389044e-24 + (fConst0 * (7.26667710688185e-28 + (fConst0 * (2.79249425809013e-31 + (fConst0 * (3.69380628600995e-35 + (fConst0 * (3.46689278680844e-39 + (fConst0 * (2.64201039162577e-43 + (fConst0 * (4.88418071873032e-48 + (fConst0 * (5.06107240591995e-53 + fConst1)))))))))))))))))))))));
	fConst21 = (1.0 / fConst20);
	fConst22 = (3.73947692052817e-49 * fConst0);
	fConst23 = ((fConst0 * (2.43117463388906e-24 + (fConst0 * ((fConst0 * (1.39485617206786e-31 + (fConst0 * ((fConst0 * (1.40632240674699e-39 + (fConst0 * (fConst22 - 7.92706397060877e-45)))) - 1.47049694295642e-35)))) - 1.0526735994192e-27)))) - 5.28018885231463e-24);
	fConst24 = (2.99158153642253e-48 * fConst0);
	fConst25 = ((fConst0 * (9.72469853555623e-24 + (fConst0 * ((fConst4 * (2.94099388591283e-35 + (fConst0 * ((fConst0 * (4.75623838236526e-44 - fConst24)) - 5.62528962698796e-39)))) - 2.1053471988384e-27)))) - 3.16811331138878e-23);
	fConst26 = (9.72263999337323e-48 * fConst0);
	fConst27 = ((fConst0 * (4.86234926777812e-24 + (fConst0 * (4.2106943976768e-27 + (fConst0 * ((fConst0 * (5.88198777182567e-35 + (fConst0 * (2.81264481349398e-39 + (fConst0 * (fConst26 - 9.51247676473052e-44)))))) - 8.36913703240715e-31)))))) - 6.33622662277756e-23);
	fConst28 = (1.49579076821127e-47 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * (1.0526735994192e-26 + (fConst4 * ((fConst0 * (1.68758688809639e-38 + (fConst0 * (1.58541279412175e-44 - fConst28)))) - 1.47049694295642e-34)))) - 2.91740956066687e-23)) - 1.05603777046293e-23);
	fConst30 = (5.60921538079225e-48 * fConst0);
	fConst31 = (1.42565099012495e-22 + (fConst0 * ((fConst0 * ((fConst0 * (2.09228425810179e-30 + (fConst0 * ((fConst0 * ((fConst0 * (2.14030727206437e-43 + fConst30)) - 2.39074809146988e-38)) - 7.35248471478209e-35)))) - 5.263367997096e-27)) - 4.1329968776114e-23)));
	fConst32 = (1.79494892185352e-47 * fConst0);
	fConst33 = (1.90086798683327e-22 + (fConst0 * (1.94493970711125e-23 + (fConst0 * ((fConst4 * (2.94099388591283e-34 + (fConst0 * ((fConst0 * (fConst32 - 2.85374302941916e-43)) - 1.12505792539759e-38)))) - 2.1053471988384e-26)))));
	fConst34 = (fConst0 * (6.80728897488936e-23 + (fConst4 * ((fConst4 * (3.93770273889157e-38 - (3.14116061324366e-47 * fConst4))) - 2.78971234413572e-30))));
	fConst35 = ((fConst0 * (1.94493970711125e-23 + (fConst0 * (2.1053471988384e-26 + (fConst4 * ((fConst0 * ((fConst0 * (2.85374302941916e-43 + fConst32)) - 1.12505792539759e-38)) - 2.94099388591283e-34)))))) - 1.90086798683327e-22);
	fConst36 = ((fConst0 * ((fConst0 * (5.263367997096e-27 + (fConst0 * (2.09228425810179e-30 + (fConst0 * (7.35248471478209e-35 + (fConst0 * ((fConst0 * (fConst30 - 2.14030727206437e-43)) - 2.39074809146988e-38)))))))) - 4.1329968776114e-23)) - 1.42565099012495e-22);
	fConst37 = (1.05603777046293e-23 + (fConst0 * ((fConst0 * ((fConst4 * (1.47049694295642e-34 + (fConst0 * (1.68758688809639e-38 + (fConst0 * (0 - (1.58541279412175e-44 + fConst28))))))) - 1.0526735994192e-26)) - 2.91740956066687e-23)));
	fConst38 = (6.33622662277756e-23 + (fConst0 * (4.86234926777812e-24 + (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (2.81264481349398e-39 + (fConst0 * (9.51247676473052e-44 + fConst26)))) - 5.88198777182567e-35)) - 8.36913703240715e-31)) - 4.2106943976768e-27)))));
	fConst39 = (3.16811331138878e-23 + (fConst0 * (9.72469853555623e-24 + (fConst0 * (2.1053471988384e-27 + (fConst4 * ((fConst0 * ((fConst0 * (0 - (4.75623838236526e-44 + fConst24))) - 5.62528962698796e-39)) - 2.94099388591283e-35)))))));
	fConst40 = (5.28018885231463e-24 + (fConst0 * (2.43117463388906e-24 + (fConst0 * (1.0526735994192e-27 + (fConst0 * (1.39485617206786e-31 + (fConst0 * (1.47049694295642e-35 + (fConst0 * (1.40632240674699e-39 + (fConst0 * (7.92706397060877e-45 + fConst22)))))))))))));
	fConst41 = (faustpower<3>(fConst0) / fConst20);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fConst21 * ((((((((((((fConst19 * fRec0[1]) + (fConst18 * fRec0[2])) + (fConst17 * fRec0[3])) + (fConst16 * fRec0[4])) + (fConst15 * fRec0[5])) + (fConst14 * fRec0[6])) + (fConst13 * fRec0[7])) + (fConst11 * fRec0[8])) + (fConst9 * fRec0[9])) + (fConst7 * fRec0[10])) + (fConst5 * fRec0[11])) + (fConst2 * fRec0[12]))));
		output0[i] = (FAUSTFLOAT)(fConst41 * (((((((((((((fConst40 * fRec0[0]) + (fConst39 * fRec0[1])) + (fConst38 * fRec0[2])) + (fConst37 * fRec0[3])) + (fConst36 * fRec0[4])) + (fConst35 * fRec0[5])) + (fConst34 * fRec0[6])) + (fConst33 * fRec0[7])) + (fConst31 * fRec0[8])) + (fConst29 * fRec0[9])) + (fConst27 * fRec0[10])) + (fConst25 * fRec0[11])) + (fConst23 * fRec0[12])));
		// post processing
		for (int i=12; i>0; i--) fRec0[i] = fRec0[i-1];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
} PortIndex;
*/

} // end namespace tubeman2
