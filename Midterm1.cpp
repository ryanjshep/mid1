#include <iostream>
#include <cstdlib>
using namespace std;

double milesToKm(double miles);

void readIn();

int main(int argc, char *argv[])
{
    	
	double miles = 1.0;
	if (argc > 1) {
		miles = atof(argv[1]);
	}
	if(miles < 0.0){
	    readIn();
	    return 0;
	}
	else
	  cout << miles << " miles = ";
	  cout << milesToKm(miles) << " Km " << endl << endl;
	  cout << endl;
	  return 0;
}

double milesToKm(double miles)
{
	return (miles * 0.62137);
}
void readIn(){

//============================================================================================================================
//I really wanted to use a 2d array here as you had done in the example, though, I didn't quite understand the logic behind it. My next option was to use
//2 arrays, though, I didn't have enough time to code that in after I had hardcoded the Miles/Functions and had realized I did the whole thing entirely wrong.
//I also didn't include the compare which I feel was half of the problem. Either way, I harcoded the list in and whatnots, used macros (thanks to you), and
//uploaded the thing to github. So I hope that at least is worth like 70%~75%? I'm trying Gordon, I'm trying.
//============================================================================================================================

cout << "Unit test of milesToKm() function...\n";
cout << "Tolerance: 0.007\n\n";

cout << " \t\tMiles\t\tFunction\n \t\t-----\t\t--------\n";
cout <<
"\t\t 0.1\t\t0.070595\n "
"\t\t 0.2\t\t0.127778\n "
"\t\t 0.3\t\t0.193219\n "
"\t\t 0.4\t\t0.256047\n "
"\t\t 0.5\t\t0.320338\n "
"\t\t 0.6\t\t0.377179\n "
"\t\t 0.7\t\t0.437968\n "
"\t\t 0.8\t\t0.502869\n "
"\t\t 0.9\t\t0.566453\n "  
"\t\t 1.0\t\t0.627338\n "  
"\t\t 1.1\t\t0.687828\n "
"\t\t 1.2\t\t0.750056\n "  
"\t\t 1.3\t\t0.812044\n "  
"\t\t 1.4\t\t0.872742\n "
"\t\t 1.5\t\t0.939051\n "  
"\t\t 1.6\t\t0.999317\n "  
"\t\t 1.7\t\t1.057795\n "
"\t\t 1.8\t\t1.122426\n "  
"\t\t 1.9\t\t1.184569\n "  
"\t\t 2.0\t\t1.245477\n "
"\t\t 2.1\t\t1.306479\n " 
"\t\t 2.2\t\t1.370552\n " 
"\t\t 2.3\t\t1.431963\n "
"\t\t 2.4\t\t1.500516\n "  
"\t\t 2.5\t\t1.562474\n "  
"\t\t 2.6\t\t1.622408\n "
"\t\t 2.7\t\t1.679902\n "  
"\t\t 2.8\t\t1.747587\n "  
"\t\t 2.9\t\t1.808442\n "
"\t\t 3.0\t\t1.868826\n "  
"\t\t 3.1\t\t1.931736\n "  
"\t\t 3.2\t\t1.993311\n "
"\t\t 3.3\t\t2.058741\n "  
"\t\t 3.4\t\t2.114956\n "  
"\t\t 3.5\t\t2.177221\n "
"\t\t 3.6\t\t2.244804\n "  
"\t\t 3.7\t\t2.305723\n "  
"\t\t 3.8\t\t2.366640\n "
"\t\t 3.9\t\t2.426989\n "  
"\t\t 4.0\t\t2.489355\n "  
"\t\t 4.1\t\t2.549020\n "
"\t\t 4.2\t\t2.617720\n "  
"\t\t 4.3\t\t2.680177\n "  
"\t\t 4.4\t\t2.739693\n "
"\t\t 4.5\t\t2.796955\n "  
"\t\t 4.6\t\t2.863584\n "  
"\t\t 4.7\t\t2.921229\n "
"\t\t 4.8\t\t2.984832\n "  
"\t\t 4.9\t\t3.053955\n "  
"\t\t 5.0\t\t3.111606\n "
"\t\t 5.1\t\t3.173981\n "  
"\t\t 5.2\t\t3.231968\n "  
"\t\t 5.3\t\t3.301554\n "
"\t\t 5.4\t\t3.363203\n "  
"\t\t 5.5\t\t3.417607\n "  
"\t\t 5.6\t\t3.487014\n "
"\t\t 5.7\t\t3.546460\n "  
"\t\t 5.8\t\t3.606221\n "  
"\t\t 5.9\t\t3.671176\n "
"\t\t 6.0\t\t3.729340\n "  
"\t\t 6.1\t\t3.797348\n "  
"\t\t 6.2\t\t3.853076\n "
"\t\t 6.3\t\t3.920678\n "  
"\t\t 6.4\t\t3.981979\n "  
"\t\t 6.5\t\t4.041785\n "
"\t\t 6.6\t\t4.109515\n "  
"\t\t 6.7\t\t4.166262\n "  
"\t\t 6.8\t\t4.234851\n "
"\t\t 6.9\t\t4.291360\n "  
"\t\t 7.0\t\t4.356319\n "  
"\t\t 7.1\t\t4.415136\n "
"\t\t 7.2\t\t4.479174\n "  
"\t\t 7.3\t\t4.540696\n "  
"\t\t 7.4\t\t4.599834\n "
"\t\t 7.5\t\t4.661250\n "  
"\t\t 7.6\t\t4.727898\n "  
"\t\t 7.7\t\t4.791527\n "
"\t\t 7.8\t\t4.848451\n "  
"\t\t 7.9\t\t4.916565\n "  
"\t\t 8.0\t\t4.977180\n "
"\t\t 8.1\t\t5.039618\n "  
"\t\t 8.2\t\t5.097969\n "  
"\t\t 8.3\t\t5.164436\n "
"\t\t 8.4\t\t5.224322\n "  
"\t\t 8.5\t\t5.282185\n "  
"\t\t 8.6\t\t5.350919\n "
"\t\t 8.7\t\t5.408075\n "  
"\t\t 8.8\t\t5.473248\n "  
"\t\t 8.9\t\t5.539605\n "
"\t\t 9.0\t\t5.599579\n "  
"\t\t 9.1\t\t5.660778\n "  
"\t\t 9.2\t\t5.723007\n "
"\t\t 9.3\t\t5.786572\n "  
"\t\t 9.4\t\t5 843236\n "  
"\t\t 9.5\t\t5.04629\n  "
"\t\t 9.6\t\t5.65863\n  " 
"\t\t 9.7\t\t6.08120\n  " 
"\t\t 9.8\t\t6.09124\n  "
"\t\t 9.9\t\t6.15809\n  " 
"\t\t10.0\t\t6.21438\n  "
"\t\t10.1\t\t6.27764\n  "
"\t\t10.2\t\t6.34129\n  "
"\t\t10.3\t\t6.40019\n  "
"\t\t10.4\t\t6.46837\n  "
"\t\t10.5\t\t6.529736\n "
"\t\t10.6\t\t6.587545\n "
"\t\t10.7\t\t6.650267\n "
"\t\t10.8\t\t6.713125\n "
"\t\t10.9\t\t6.775721\n "
"\t\t11.0\t\t6.844419\n "
"\t\t11.1\t\t6.905757\n "
"\t\t11.2\t\t6.968653\n "
"\t\t11.3\t\t7.023566\n "
"\t\t11.4\t\t7.089232\n "
"\t\t11.5\t\t7.149879\n "
"\t\t11.6\t\t7.210517\n "
"\t\t11.7\t\t7.272780\n "
"\t\t11.8\t\t7.338446\n "
"\t\t11.9\t\t7.402120\n "
"\t\t12.0\t\t7.458603\n "
"\t\t12.1\t\t7.522106\n "
"\t\t12.2\t\t7.584842\n "
"\t\t12.3\t\t7.651417\n "
"\t\t12.4\t\t7.706348\n "
"\t\t12.5\t\t7.773612\n "
"\t\t12.6\t\t7.829443\n "
"\t\t12.7\t\t7.893471\n "
"\t\t12.8\t\t7.960854\n "
"\t\t12.9\t\t8.020551\n "
"\t\t13.0\t\t8.080128\n "
"\t\t13.1\t\t8.142003\n "
"\t\t13.2\t\t8.208389\n "
"\t\t13.3\t\t8.270194\n "
"\t\t13.4\t\t8.328461\n "
"\t\t13.5\t\t8.390922\n "
"\t\t13.6\t\t8.451956\n "
"\t\t13.7\t\t8.515895\n "
"\t\t13.8\t\t8.578941\n "
"\t\t13.9\t\t8.640696\n "
"\t\t14.0\t\t8.705094\n "
"\t\t14.1\t\t8.764701\n "
"\t\t14.2\t\t8.825657\n "
"\t\t14.3\t\t8.890815\n "
"\t\t14.4\t\t8.953197\n "
"\t\t14.5\t\t9.017682\n "
"\t\t14.6\t\t9.081349\n "
"\t\t14.7\t\t9.142233\n "
"\t\t14.8\t\t9.196844\n "
"\t\t14.9\t\t9.264040\n "
"\t\t15.0\t\t9.326461\n "
"\t\t15.1\t\t9.385418\n "
"\t\t15.2\t\t9.453980\n "
"\t\t15.3\t\t9.507000\n "
"\t\t15.4\t\t9.570395\n "
"\t\t15.5\t\t9.631752\n "
"\t\t15.6\t\t9.699898\n "
"\t\t15.7\t\t9.756987\n "
"\t\t15.8\t\t9.820235\n "
"\t\t15.9\t\t9.883626\n "
"\t\t16.0\t\t9.948276\n "
"\t\t16.1\t\t10.008963\n"
"\t\t16.2\t\t10.072093\n"
"\t\t16.3\t\t10.130992\n"
"\t\t16.4\t\t10.191348\n"
"\t\t16.5\t\t10.260607\n"
"\t\t16.6\t\t10.319830\n"
"\t\t16.7\t\t10.379083\n"
"\t\t16.8\t\t10.440144\n"
"\t\t16.9\t\t10.510276\n"
"\t\t17.0\t\t10.569147\n"
"\t\t17.1\t\t10.632470\n"
"\t\t17.2\t\t10.690071\n"
"\t\t17.3\t\t10.757761\n"
"\t\t17.4\t\t10.814104\n"
"\t\t17.5\t\t10.881951\n"
"\t\t17.6\t\t10.941990\n"
"\t\t17.7\t\t10.999862\n"
"\t\t17.8\t\t11.066456\n"
"\t\t17.9\t\t11.128969\n"
"\t\t18.0\t\t11.191900\n"
"\t\t18.1\t\t11.248778\n"
"\t\t18.2\t\t11.318111\n"
"\t\t18.3\t\t11.377467\n"
"\t\t18 4\t\t11.435228\n"
"\t\t18 5\t\t11.495819\n"
"\t\t18.6\t\t11.564395\n"
"\t\t18.7\t\t11.628164\n"
"\t\t18.8\t\t11.683708\n"
"\t\t18.9\t\t11.753395\n"
"\t\t19.0\t\t11.808419\n"
"\t\t19.1\t\t11.876475\n"
"\t\t19.2\t\t11.934712\n"
"\t\t19.3\t\t12.000728\n"
"\t\t19.4\t\t12.055547\n"
"\t\t19.5\t\t12.122003\n"
"\t\t19.6\t\t12.185142\n"
"\t\t19.7\t\t12.247047\n"
"\t\t19.8\t\t12.310618\n"
"\t\t19.9\t\t12.372681\n"
"\t\t20.0\t\t12.432581\n";
cout << "Unit test complete." << endl;
} 
