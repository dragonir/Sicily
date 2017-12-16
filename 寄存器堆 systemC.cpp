 //�Ĵ����� 
SC_MODULE(Register_File) {  //Ҫ��ȡ�ļĴ������ 
	sc_in<sc_uint<5> > read_regID1,read_regID2;  //Ҫд��ļĴ������ 
  	sc_in<sc_uint<5> > write_regID;  //Ҫд��ļĴ�������  
  	sc_in<sc_uint<32> > write_reg_data;  //�Ƿ����д�룬д��ʹ�ܶ� 
  	sc_in<bool> write_enabled;  //����ļĴ�������  
   	sc_out<sc_uint<32> > result1,result2;  //����ʱ���źţ�������ʱ����д�� 
    sc_in_clk clk;  //�Ĵ�������  
	sc_uint<32> reg_data[32];  
	void read(){   
		unsigned int ID1,ID2;   
		ID1=read_regID1.read().to_uint();  
	  	ID2=read_regID2.read().to_uint();   
		result1.write(reg_data[ID1]);   
	 	result2.write(reg_data[ID2]);  
	}  
	void write(){  	 
		unsigned int ID;  
	  	if (write_enabled==true){
		    ID=write_regID.read().to_uint();   
	   	 	if (ID!=0) reg_data[ID]=write_reg_data.read();   
		} 
	}  
	SC_CTOR(Register_File){
	    int i;   
		for (i=0;i<32;++i) reg_data[i]=i;   //�½��ض�����   SC_METHOD(read); 
	  	sensitive_neg<<clk;    //��ʱ��д����  
	   	SC_METHOD(write);2  
	    sensitive<<read_regID1<<read_regID2<<write_regID<< write_reg_data<<write_enabled; 
	 } 
}; 
