/*------------------------[ Include Files ]---------------------------*/

#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include <math.h>

/*--------------------------[ Code Section ]---------------------------*/ 

int main()
{
	    // char* strCfgName; 
        double Data[6]; //fm 
	    char deltaArray[16];
        FILE      *inputFile; 
	    char *epd[6];

        inputFile = fopen("test.cfg", "r");
        if(!inputFile)
        {
			cout << "Unable to open config file"<< endl;
        }
        else
        {
           for(int i =0; i<6; i++)
           {
	
              fscanf(inputFile, "%s %lf", deltaArray, &Data[i] );
			  epd[i] = copystr(deltaArray);
			 // name[i] = deltaArray;
           }
            fclose(inputFile);
         }  
		
		 for(int i =0; i<6; i++)
         {
			 // cout << dname[i] << endl;
              cout << Data[i] << endl;
			 //cout<<"\noutput is: %s %lf",deltaArray, &Data[i] ;
		//	 printf("%s %24.16e\n" , name[i], Data[i] );
		 }
    
    return 0;


	char *copystr(const char *s)
	{
        char *d = malloc(strlen(s) + 1);
       if(d) strcpy(d, s);
       return d;
	}
}



  
/*  
int main()
{
        // char* strCfgName; 
        double Data[6]; //fm 
        char* tempstrCfgName;
        char tempArray[128];
        ifstream cfg; 

        cfg.open("new_test.cfg");
        if(cfg.fail())

        {
			cout << "Unable to open config file"<< endl;
        }
        else
        {
           for(int i =0; i<6; i++)
           {   
             cout << "trying to read data" << endl;     
             //cfg.getline(tempArray,128); this works part 1/2
             //Data[i] = atof(tempArray); this works part 2/2
             cfg >> Data[i]; // this also works
             cout << "read some data" << endl; 
           }
           cfg.close();
         }  
		
		 for(int i =0; i<6; i++)
         {
              cout << Data[i] << endl;
		 }
    
    return 0;
} // end of test1
*/

//while(fgets(buffer,256,fp)){
//epd[x]= copystr(buffer);
//x++;}

//Where copystr is:
























 