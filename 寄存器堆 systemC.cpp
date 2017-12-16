 //寄存器堆 
SC_MODULE(Register_File) {  //要读取的寄存器编号 
	sc_in<sc_uint<5> > read_regID1,read_regID2;  //要写入的寄存器编号 
  	sc_in<sc_uint<5> > write_regID;  //要写入的寄存器数据  
  	sc_in<sc_uint<32> > write_reg_data;  //是否可以写入，写入使能端 
  	sc_in<bool> write_enabled;  //输出的寄存器数据  
   	sc_out<sc_uint<32> > result1,result2;  //输入时钟信号，上升沿时可以写入 
    sc_in_clk clk;  //寄存器数据  
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
		for (i=0;i<32;++i) reg_data[i]=i;   //下降沿读数据   SC_METHOD(read); 
	  	sensitive_neg<<clk;    //随时可写数据  
	   	SC_METHOD(write);2  
	    sensitive<<read_regID1<<read_regID2<<write_regID<< write_reg_data<<write_enabled; 
	 } 
}; 
