https://www.codewars.com/kata/52bb6539a4cf1b12d90005b7/cpp

#include <vector>
#include <numeric>

bool validate_battlefield(std::vector< std::vector<int> > field) {
    int width=10; int height=10;
    std::vector<int> ships {4,3,3,2,2,2,1,1,1,1};
    int h, v, frag=0;

            for(int y= 0; y<10; y++){
            for(int x= 0; x<10; x++){

                if( field[y][x]) {
                    field[y][x]= 0;   
                    frag++; h=1; v=1;
                    while(((x+h)<=(width-1))&&field[y][x+h]) 
                    { 
                        field[y][x+h]=0; frag++;                                  
                        if(y!=(height-1)){ if(field[y+1][x+h])   { return false;}}  
                        h++;
                    }  
                        if(((x+h)<=(width-1))&&field[y+1][x+h])  { return false;}       
                        if(((x-1)>=0)&&field[y+1][x-1])          { return false;}

                    while(((y+v)<=(height-1))&&field[y+v][x]) 
                    {  
                        if(h>1)                                  { return false; }
                        field[y+v][x]=0; frag++;                          
                        if(x!=(width-1)){ if(field[y+v][x+1])    { return false; }}  
                        v++;
                    }
                        if(((y+v)<=(height-1))&&field[y+v][x+1]) { return false;}       
                        if(((y-1)>=0)&&field[y-1][x+1])          { return false;}

                    for(size_t i=0;i<ships.size();i++)                                       
                    {
                        if(ships[i]==frag) { ships[i]=0; frag=0; }
                    }
                        if(frag)                                 { return false; }   

                }}}
    if(std::accumulate(ships.begin(), ships.end(),0))            { return false; }                         
    return true;
}
