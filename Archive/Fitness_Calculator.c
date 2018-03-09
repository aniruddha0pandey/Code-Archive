#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bmi(){
	
	float weight,height,ans;
	
		printf("\n\n******BMI Calculator******\n\n");
		
		printf("Refrence: ");
		printf("(1 meter = 3.28084 feet)\n\n");
		
		printf("Enter Your Weight (in Kg): ");
		scanf("%f",&weight);
		
		printf("Enter Your Height (in feet): ");
		scanf("%f",&height);
	
		ans=weight/(height*height*0.3048*0.3048);
		
		printf("Your Body Mass Index is: %f",ans);
		
		if(ans<18.5){
			
			printf("\nYou are Under Weight");
			
		}if(ans>=18.5&&ans<=24.9){
			
			printf("\nYou are Normal Weight");
			
		}if(ans>=25&&ans<=29.9){
			
			printf("\nYou are Over Weight");
			
		}if(ans>=30&&ans<=34.9){
			
			printf("\nYou are Class I Obese");
			
		}if(ans>=35&&ans<=39.9){
			
			printf("\nYou are Class II Obese");
			
		}if(ans>=40){
		
			printf("\nYou are Class III Obese");
		
		}		
	
}

vox_1(){
	
	int age,rest_heart;
	float ans=0,max_heart;
	char sex[10];
	
		printf("\n\n******V02MAX Calculator (Without Running Test)******\n\n");
		
	vox_1_start:
		
		printf("Enter sex (male or female): ");
		scanf("%s",sex);
		
		if(strcmp(sex,"male")==0){
			
			printf("\nEnter Your Age (in Years): ");
			scanf("%d",&age);
			
			max_heart=220-age;
			
			printf("\nEnter Your Resting Heart Rate (Beats per Minute): ");
			scanf("%d",&rest_heart);
			
			ans=15.3*(max_heart/rest_heart);
			
			printf("\nYour V02 MAX Value is: %f",ans);
			
			if(age>=20&&age<=29){
				
				if(ans<=41){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=42&&ans<=45){
					
					printf("\nYour Fitness is Fair");
					
				}if(ans>=46&&ans<=50){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>51&&ans<=55){
					
					printf("\nYour Fitness is Excellent");
					
				}if(ans>56){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}if(age>=30&&age<=399){
				
				if(ans<=40){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=41&&ans<=43){
					
					printf("\nYour Fitness is jFair");
					
				}if(ans>=44&&ans<=47){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>48&&ans<=53){
					
					printf("\nYour Fitness is Excellent");
					
				}if(ans>54){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}if(age>=40&&age<=49){
				
				if(ans<=37){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=38&&ans<=31){
					
					printf("\nYour Fitness is Fair");
					
				}if(ans>=42&&ans<=45){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>46&&ans<=52){
					
					printf("\nYour Fitness is Excllent");
					
				}if(ans>53){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}if(age>=50&&age<=59){
				
				if(ans<=34){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=35&&ans<=37){
					
					printf("\nYour Fitness is Fair");
					
				}if(ans>=38&&ans<=42){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>43&&ans<=49){
					
					printf("\nYour Fitness is Excllent");
					
				}if(ans>50){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}if(age>=60&&age<=69){
				
				if(ans<=30){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=31&&ans<=34){
					
					printf("\nYour Fitness is Fair");
					
				}if(ans>=35&&ans<=38){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>39&&ans<=45){
					
					printf("\nYour Fitness is Excellent");
					
				}if(ans>46){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}if(age>=70&&age<=79){
				
				if(ans<=27){
					
					printf("\nYour Fitness is Poor");
					
				}if(ans>=28&&ans<=30){
					
					printf("\nYour Fitness is Fair");
					
				}if(ans>=31&&ans<=35){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>36&&ans<=41){
					
					printf("\nYour Fitness is Excellent");
					
				}if(ans>42){
					
					printf("\nYour Fitness is Superior");
					
				}
				
			}
			
		}
		
		if(strcmp(sex,"female")==0){
			
			printf("\nEnter Your Age (in Years): ");
			scanf("%d",&age);
				
			printf("\nEnter Your Resting Heart Rate (Beats per Minute): ");
			scanf("%d",&rest_heart);
				
			max_heart=208-(0.7*age);
				
			printf("\nEnter Your Resting Heart Rate (Beats per Minute): ");
			scanf("%d",&rest_heart);
			
			ans=15.3*(max_heart/rest_heart);
				
			printf("\nYour V02 MAX Value is: %f",ans);
				
			if(age>=20&&age<=29){
					
				if(ans<=35){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=36&&ans<=39){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=40&&ans<=43){
						
					printf("\nYour Fitness is Good");
						
				}if(ans>44&&ans<=49){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>50){
						
					printf("\nYour Fitness is Superior");
						
				}
					
			}if(age>=30&&age<=39){
					
				if(ans<=33){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=34&&ans<=36){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=37&&ans<=40){
						
					printf("\nYour Fitness is Good");
						
				}if(ans>41&&ans<=45){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>46){
						
					printf("\nYour Fitness is Superior");
						
				}
				
			}if(age>=40&&age<=49){
					
				if(ans<=31){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=32&&ans<=34){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=35&&ans<=38){
						
					printf("\nYour Fitness is Good");
					
				}if(ans>39&&ans<=44){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>45){
						
					printf("\nYour Fitness is Superior");
						
				}
					
			}if(age>=50&&age<=59){
				
				if(ans<=24){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=25&&ans<=28){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=29&&ans<=30){
					
					printf("\nYour Fitness is Good");
					
				}if(ans>31&&ans<=34){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>35){
						
					printf("\nYour Fitness is Superior");
						
				}
					
			}if(age>=60&&age<=69){
					
				if(ans<=25){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=26&&ans<=28){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=29&&ans<=31){
						
					printf("\nYour Fitness is Good");
						
				}if(ans>32&&ans<=35){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>36){
						
					printf("\nYour Fitness is Superior");
						
				}
					
			}if(age>=70&&age<=79){
					
				if(ans<=23){
						
					printf("\nYour Fitness is Poor");
						
				}if(ans>=24&&ans<=26){
						
					printf("\nYour Fitness is Fair");
						
				}if(ans>=27&&ans<=29){
						
					printf("\nYour Fitness is Good");
						
				}if(ans>30&&ans<=35){
						
					printf("\nYour Fitness is Excellent");
						
				}if(ans>36){
						
					printf("\nYour Fitness is Superior");
						
				}
				
			}
			
		}if((sex!="male"||sex!="female")&&ans==0){
			
				printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);
				printf(" ERROR ");
				printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219);
				goto vox_1_start;
			
		}
	
}

vox_2(){
	
	int age,heart;
	float weight,time,ans=0;
	char sex[10];
	
		printf("\n\n******VO2MAX Calculator (With Running Test)******\n\n\n");
		
		printf("To Perform the Running Test you need to Follow these Steps:-\n\n");
		printf("Step 1.Put on your heart rate monitor.\n");
		printf("Step 2.Start your stopwatch and lightly jog 1 mile(1.6 Km).\n");
		printf("Step 3.After 1 mile stop the stopwatch.\n");
		printf("Step 4.Check your heart rate and note down the time.\n\n");
		
	vox_2_start:
		
		printf("Enter sex (male or female): ");
		scanf("%s",sex);
		
		if(strcmp(sex,"male")==0){
			
			printf("\nEnter Your Age (in Years): ");
			scanf("%d",&age);
			
			printf("\nEnter Your Weight (in Lb): ");
			scanf("%f",&weight);
			
			printf("\nEnter Your Running Time (in Minutes): ");
			scanf("%f",&time);
			
			printf("\nEnter Your Resting Heart Rate (Beats per Minute): ");
			scanf("%d",&heart);
			
			ans=132.853-(0.0769*weight)-(0.3877*age)-(6.315*1)-(3.2649*time)-(0.156*heart);
			
			printf("\nYour V02MAX Value is: %f",ans);
			
		}if(strcmp(sex,"female")==0){
			
			printf("\nEnter Your Age (in Years): ");
			scanf("%d",&age);
			
			printf("\nEnter Your Weight (in Lb): ");
			scanf("%f",&weight);
			
			printf("\nEnter Your Running Time (in Minutes): ");
			scanf("%f",&time);
			
			printf("\nEnter Your Resting Heart Rate (Beats per Minute): ");
			scanf("%d",&heart);
			
			ans=132.853-(0.0769*weight*2.20462)-(0.3877*age)-(6.315*0)-(3.2649*time)-(0.1565*heart);
			
			printf("\nYour V02MAX Value is: %f",ans);
			
		}if((sex!="male"||sex!="female")&&ans==0){
			
			printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);
			printf(" ERROR ");
			printf("%c%c%c%c%c%c%c%c%c%c%c%c\n\n",219,219,219,219,219,219,219,219,219,219,219,219);
			goto vox_2_start;
			
		}
	
}

bmi_info(){
	
	printf("\nQ. What is BMI?\n\n");
	printf("   Body Mass Index (BMI) is a person's weight in kilograms\n");
	printf("   divided by the square of height in meters.\n\n");
	printf("   A high BMI can be an indicator of high body fatness.\n\n");
	printf("   BMI can be used to screen for weight categories that may\n");
	printf("   lead to health problems but it is not diagnostic of the\n");
	printf("   body fatness or health of an individual.");
	
}

vox_info(){
	
	printf("\nQ. What is VO2MAX?\n\n");
	printf("   V02 max is a measure of the maximum amount of oxygen that\n");
	printf("   you use during intense physical activity.\n\n");
	printf("   This measurement determines your fitness level by calculating\n");
	printf("   how efficiently your cells use oxygen for energy.\n\n");
	printf("   It is measure in millilittres per kilogramme of\n");
	printf("   body weight per minute (ml/kg/min).\n\n");
	printf("   The name V02MAX is derived for V=Volume,\n");
	printf("   O2=Oxygen and MAX=Maximum.");
	
}

exit_(){
	
	printf("\n\n***************************************************");
	printf("\n\nThank You for using this Fitness Calculator ");
	printf("%c\n\n",1);
	printf("***************************************************\n");
	exit(0);
	
}

main(){
	
	
	int input;
	
		printf("\n\n");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178);
		printf(" Welcome to this Fitness Calculator ");
		printf("%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178);
		
	main_start_1:
				
		printf("\n\n***************************************************");
				
		printf("\n\n  CHOOSE A CATEGORY:\n");
		
		printf("1. Calculate Body Finess (Using BMI)\n");
		printf("2. Calculate VO2MAX (Without Running Test)\n");
		printf("3. Calculate VO2MAX (With Running Test)\n");
		printf("4. What is BMI?\n");
		printf("5. What is V02MAX?\n");
		printf("6. EXIT\n");
		
	main_start_2:
		
		printf("\nEnter Your Choice: ");
		scanf("%d",&input);
		
		if(input==1){
			
			bmi();
			
		}if(input==2){
			
			vox_1();
			
		}if(input==3){
			
			vox_2();
			
		}if(input==4){
			
			bmi_info();
			
		}if(input==5){
			
			vox_info();
			
		}if(input==6){
			
			exit_();
			
		}if(input!=1&&input!=2&&input!=3&&input!=4&&input!=5&&input!=6){
			
			printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);
			printf(" ERROR ");
			printf("%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219);
			goto main_start_2;
			
		}else{
			
			goto main_start_1;
			
		}
		
	return 0;
	
}
