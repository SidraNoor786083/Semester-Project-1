#include<iostream>
#include<string>
using namespace std;
string restaurant;               //// Stores the chosen restaurant's name
string fast();                      // Function prototype for the fast food menu
string desi();                     
string name, location, PhoneNo;        // Customer details
int paymentMethod, confirmationChoice;      // Payment and confirmation choices
string food;                                // The chosen food item
int q;                                      // Quantity of the chosen item
int t = 1;                                 // Temporary variable for storing total cost
string y;                                  // Used to store customer’s response for more items
int j, i;                                 // Loop counters


 
int main()
{

   
    string faster[14] = { "cheezious","optp","howdy","wildwings",
        "roasters","lit","newyorkers","burgerlab","nandos"
        ,"dailydehli","ranchers","kabajeesfriedchicken","alkaif","mandi" };

    string desis[14] = { "tandoori","buttkarahi","mianJee","charsitikka",
         "hotnspicy" , "sudentbiriyani","chayeKhana","bismillah","usmania",
        "jeffBBq","banuBeef","ginyaki","shinwari","balatikkahouse" };

    cout << "\t\t\t\t\t\aWELCOME TO FOOD O TOPIA!" << endl;               //prints the welcome msg
    cout << "\t\t\t\t\tWE'D LOVE TO SERVE YOU!" << endl;

    cout << endl;
    cout << "Which restaurant would you like to order from?" << endl;      //choosing restaurants
    cin >> restaurant;
    cout << "The restaurant you ordered is  "<< restaurant <<endl;


    cout << endl;

    for ( i = 0;i <= 14;i++)              //Checking the Selected Restaurant
    {

        if (restaurant == faster[i])      //if it belongs to faster list it will call fast
        {

            cout << fast();

        }

    }


    for ( i = 0;i <= 14;i++)
    {
         if (restaurant == desis[i])         //if it belong to desis list it will call desi
        {

            cout << desi();

        }
    }


    for ( i = 0;i <= 14;i++)
    {
         if (restaurant != faster[i] || restaurant != desis[i])      //or operator: not in any list
         {
             cout << "ERROR OCCURED! \nThe error that occured could be of three reasons: \n1.Recheck your spellings.\n2.The restuarant you chose is in the boycott list.\n3.Invalid data Input\n\nRefresh and Try Again" << endl;
             break;
         }


    }

}


string desi()
{
    cout << endl;
    cout << "\t\t\t\aDESI MENU" << endl;
    cout << "\t\t\t---------" << endl;

    

    string desiMenu[50][3] =
    {
        {"MAIN_COURSES(RS.1500)", "\t\t\t", ""},
        {"------------------------", "\t\t\t", ""},
        {"Chicken_Karahi", "\t\t\t", "A classic chicken dish cooked in rich spices and tomatoes."},
        {"Mutton_Karahi", "\t\t\t", "Tender mutton pieces cooked in a flavorful karahi masala."},
        {"Beef_Karahi", "\t\t\t", "Juicy beef pieces in a traditional karahi style."},
        {"Boneless_Handi", "\t\t\t", "Creamy boneless chicken handi, full of spices."},
        {"----------------", "\t\t\t", ""},
        {"BBQ (RS.1200)", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Chicken_Tikka", "\t\t\t", "Charcoal-grilled chicken leg, marinated in spicy yogurt."},
        {"Malai_Boti", "\t\t\t", "Creamy and juicy chicken skewers."},
        {"Seekh_Kebabs", "\t\t\t", "Ground chicken or beef kebabs with spicy herbs."},
        {"Reshmi_Kebabs", "\t\t\t", "Soft and juicy chicken kebabs with mild spices."},
        {"----------------", "\t\t\t", ""},
        {"RICE_DELIGHTS (RS.1000)", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Chicken_Biryani", "\t\t\t", "Fragrant rice with spiced chicken."},
        {"Mutton_Pulao", "\t\t\t", "Mildly spiced rice cooked with tender mutton."},
        {"Beef_Yakhni_Pulao","\t\t", "Rice cooked in aromatic beef stock."},
        {"Zarda", "\t\t\t\t", "Traditional sweet yellow rice with nuts and raisins."},
        {"----------------", "\t\t\t", ""},
        {"DESI_WRAPS (RS.800)", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Seekh_Kebab_Rolls", "\t\t", "Kebabs wrapped in naan with chutney."},
        {"Malai_Boti_Wrap", "\t\t\t", "Creamy chicken boti wrapped in fresh naan."},
        {"----------------", "\t\t\t", ""},
        {"BEVERAGES (RS.200)", "\t\t\t", ""},
         {"----------------", "\t\t\t", ""},
        {"Lassi", "\t\t\t\t", "Sweet or salted yogurt drink."},
        {"Mint_Lemonade", "\t\t\t", "Refreshing mint-flavored lemonade."},
        {"Soft_Drinks", "\t\t\t", "Chilled fizzy drinks."},
        {"Kashmiri-Chai", "\t\t\t", "Rich and creamy pink tea."}
    };

 
  

    for (i = 0;i < 34;i++)
    {
        for (j = 0;j < 3;j++)
        {
            cout << desiMenu[i][j];

        }

        cout << endl;
        cout << endl;
       

    }

    cout << "PLease Write what you would like to have? " << endl;
    cin >> food;


    for (i = 0;i < 34;i++)
    {
        for (j = 0;j < 3;j++)
        {
            if (food == desiMenu[i][j])
            {


                if (i >= 2 && i <= 6)
                {
                    cout << "enter quantity" << endl;    
                    cin >> q;                                                //input the quantity u want to order
                    q = q * 1500;                                          //quantity times food for bill
                    cout << "your  current bill is " << q << endl;  
                    cout << "would you like something else ?(yes/no) " << endl;   //ask if the user want sth else?
                    cin >> y;                                                    
                }

                else if (i >= 8 && i <= 13)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 1200;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 15 && i <= 20)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 1000;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 22 && i <= 25)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 800;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;


                }

                else if (i >= 27 && i <= 31)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 200;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

               
            }
          

        }
      
    }



 

   /* cout << "would you lxxike something else ?(yes/no) " << endl;
    cin >> y;*/
  /*  cout << "please Write what you would like to have? " << endl*/;

    if (y == "yes" || y == "no")
    {


       /* cout << "please Write what you would like to have? " << endl;*/
   


        do
        {
            t = q;
            if (y == "yes")
            {
                cout << "please Write what you would like to have? " << endl;  //what uer wants to eat?

                cin >> food;                                                 //user telling his/her choice
                for (i = 0;i < 40;i++)                                     //in menu array, there are 40 rows so checking one by one
                {
                    for (j = 0;j < 3;j++)                                  //there are 3 columns
                    {
                        if (food == desiMenu[i][j])                       //if food is present in desi menu
                        {

                            if (i >= 2 && i <= 6)                         //in the range of 2 to 6 burgers price would be... eg 1500
                            {


                                //q = t;
                                cout << "enter quantity" << endl;         //how many food items to be added?
                                cin >> q;
                                q = (q * 1500) + t;                        //multipyilng quantity of food with price of food
                                cout << "your  current bill is " << q << endl;  //calculating bill
                                cout << "would you like something else ?(yes/no) " << endl;   
                                cin >> y;

                            }


                            else if (i >= 8 && i <= 13)
                            {
                                q = t;
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 1200) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 15 && i <= 20)
                            {
                                //q = t;
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 1000) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 22 && i <= 25)
                            {
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 800) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }
                            else if (i >= 27 && i <= 31)
                            {
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 200) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;
                            }

                        }

                    }

                    
                }
               
            }
        


        } while (y == "yes");                             

       
    }
    
    if (y == "yes"|| y == "no")                          //enter users details
    {


        // Collect user details
        cout << "Please give your following details!" << endl;      

        cout << "Enter your Full Name: ";                        //FILE HANDLING: save these details for next time if the same person orders
        cin.ignore();
        getline(cin, name);

        cout << "Enter your Location: ";
        getline(cin, location);

        cout << "Enter Your Phone No: ";
        getline(cin, PhoneNo);

        // Collect payment method
        cout << "Payment Method: \n1. Credit Card \n2. Cash on Delivery" << endl;
        cin >> paymentMethod;                                           // User chooses payment method (1 or 2)
        cin.ignore();

        switch (paymentMethod) {                                      
        case 1:  // If Credit Card selected                   
            cout << "Please Pay Online!" << endl;            //for onilne
            break;                                          // Exiting the switch statement after handling credit card payment
        case 2:  // If Cash on Delivery selected
            cout << "Your Order is Placed!" << endl;
            break;
        default:
            cout << "Invalid Payment Method!" << endl;
        }

        // Ask for order confirmation method
        cout << "Please Confirm Your Order: \n1. Call \n2. Message" << endl;
        cin >> confirmationChoice;
        cin.ignore();

        switch (confirmationChoice) {
        case 1:
            cout << "We will call you to confirm your order!" << endl;
            break;
        case 2:
            cout << "You will receive a message to confirm your order!" << endl;
            break;
        default:
            cout << "Invalid choice for order confirmation!" << endl;
        }

        cout << "Thanks for Choosing us!" << endl;  // Thank the user
    }
    else
    {
         
          
        cout << "Invalid Input";
    }
       return 0;
 }
    


 string fast()
     {

    cout << "\t\t\tMENU" << endl;
    cout << "\t\t\t----" << endl;

    string n;

    string mennu[100][3] =                   // 2D array holding the menu items and their descriptions and prices
    {
        {"MAIN: " , "\t\t\t\t\t\t","      "},
        {"----------","\t\t\t\t\t","----------"},
        {"BURGERS (RS.1199)" ,"\t\t\t\t" "OUR SPECIALS" },
        {"----------","\t\t\t\t\t","----------"},
        {"Doom_Damyiaki","\t\t\t\t\t", "A bold fusion of crispy chicken,\n\t\t\t\t\t\ttangy teriyaki glaze, \n\t\t\t\t\t\ttand creamy avocado slaw."},
        {"Midnight_Crave","\t\t\t\t\t","A late-night indulgence with a double beef patty,\n\t\t\t\t\t\tcaramelized onions,and smoked cheddar."},
        {"Alchemy_Starve","\t\t\t\t\t","A magical mix of a lamb patty,\n\t\t\t\t\t\tgoat cheese, \n\t\t\t\t\t\tand roasted red pepper relish. " },
        {"Fiery_Fireworks","\t\t\t\t\t","A spicy explosion of grilled beef patty,\n\t\t\t\t\t\tfiery jalapen~os,\n\t\t\t\t\t\tand smoked paprika cheese. " },
        {"Galactic_Melt","\t\t\t\t\t","An out-of-this-world combination of beef patty,\n\t\t\t\t\t\trocket leaves,and tangy plum chutney." },
        {"Garden_Jewel(Vegetarian)","\t\t\t","A vibrant veggie patty made with fresh ingredients,\n\t\t\t\t\t\tgrilled zucchini,and and basil pesto drizzle"},
        {"----------","\t\t\t\t\t\t","----------"},
        {"DEALS: " , "\t\t\t\t\t\t","      "},
        {"----------","\t\t\t\t\t\t","----------"},
        {"DEAL.1(Rs.2999):","\t\t\t\t","Fiery fireworks *2\n\t\t\t\t\t\tAlchemy Starve * 2\n\t\t\t\t\t\tFries, 1.5l drinks."},
        {"DEAL.2(Rs.2999):","\t\t\t\t","Garden Jewel *2\n\t\t\t\t\t\tDoom Damyiaki * 2\n\t\t\t\t\t\tNuggets, Onion Rings."},
        {"----------","\t\t\t\t\t","----------"},
        {"PIZZA (RS.2199)" ,"\t\t\t\t\t" "OUR SPECIALS" },
        {"----------","\t\t\t\t\t","----------"},
        {"Margherita_Classic","\t\t\t\t","A timeless favorite with mozzarella,\n\t\t\t\t\t\tfresh basil and tomato sauce."},
        {"Pepperoni_Feast","\t\t\t\t\t","Loaded with crispy pepperoni slices,\n\t\t\t\t\t\tand gooey mozzarella."},
        {"Chicken_Tikka_Treat","\t\t\t\t","Topped with spiced chicken tikka, onions, \n\t\t\t\t\t\tand green chilies for a desi twist."},
        {"Veggie_Delight","\t\t\t\t\t","A mix of fresh bell peppers, mushrooms, olives, \n\t\t\t\t\t\tand sweet corn on a cheesy base."},
        {"----------","\t\t\t\t\t","----------"},
        {"EXTRAS(Rs.800):" , "\t\t\t\t\t\t","      "},
        {"Garlic_Bread"},
        {"Sweet_Bun"},
        {"Cheese_Sticks"},
        {"Russian_salad"},
        {"Pizza_Fries"},
        {"Nuggets_with_sauces."},
        {"Macroni"},
        {"----------","\t\t\t\t\t","          "},
        {"BEVERAGES:" , "\t\t\t\t\t\t","      "},
        {"Mint_Margarita"}
        ,{"Pin~a_Colada"},
        {"Coffee"},
        {"Tea"},
    };


    int q;                                           //enter quantity

    for (i = 0;i < 40;i++)                          //loop for checking the menu items
    {
        for (j = 0;j < 3;j++)                      //loop for checking the columns in the arrays
        {
            cout << mennu[i][j];                   //displaying 2D arrays

        }
 
        cout << endl;                             //moving to the next line after each item
        cout << endl;


    }


    cout << "PLease Write what you would like to have? " << endl;
    cin >> n;

    for (i = 0;i < 40;i++)
    {
        for (j = 0;j < 3;j++)
        {
            if (n == mennu[i][j])
            {
                if (i >= 4 && i <= 10)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 1199;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;

                }

                else if (i >= 13 && i <= 14)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 2999;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 18 && i <= 21)                        // If the item is a pizza (prices: 2199)
                {
                    cout << "enter quantity" << endl;               
                    cin >> q;
                    q = q * 2199;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 24 && i <= 31)                       // If the item is an extra (prices: 800)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 800;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 33 && i <= 36)
                {
                    cout << "enter quantity" << endl;
                    cin >> q;
                    q = q * 300;
                    cout << "your  current bill is " << q << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

            }

        }



    }


    /*cout << "would you like something else ?(yes/no) " << endl;
    cin >> y;*/

    if (y == "yes" || y == "no")
    {

        //cout << " pLease Write what you would like to have? " << endl;/


        do
        {
            t = q;                                     //Store the bill in the variable 't'
            if (y == "yes")                            //check if the user wants to order sth else?
            {
                cout << " pLease Write what you would like to have? " << endl;

                cin >> n;
                for (i = 0;i < 40;i++)            // Loop for menu items to chk if the selected item matches the user input? 
                {
                    for (j = 0;j < 3;j++)
                    {
                        if (n == mennu[i][j])
                        {
                            if (i >= 5 && i <= 10)
                            {


                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 1199) + t;                     //calculating the total cost price also the previous value(stored in t) is also added in the next bill
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;



                            }


                            else if (i >= 13 && i <= 14)
                            {

                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 2999) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 18 && i <= 21)
                            {

                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 2199) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 24 && i <= 31)
                            {
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 800) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 33 && i <= 36)
                            {
                                cout << "enter quantity" << endl;
                                cin >> q;
                                q = (q * 350) + t;
                                cout << "your  current bill is " << q << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;
                            }
                        }

                    }


                }
            }
           

        } while (y == "yes");                        //if yes then ask 
                                                

        if (y == "yes" || y == "no")                //if user wants sth else OR not take its info
        {
            // Collect user details
            cout << "Please give your following details!" << endl;

            cout << "Enter your Full Name: " << endl;
            cin.ignore();
            getline(cin, name);

            cout << "Enter your Address: ";
            getline(cin, location);

            // Collect payment method
            cout << "Payment Method: \n1. Credit Card \n2. Cash on Delivery" << endl;
            cin.ignore();
            cin >> paymentMethod;  // User chooses payment method (1 or 2)
            

            switch (paymentMethod) {
            case 1:  // If Credit Card selected
                cout << "Please Pay Online!" << endl;
                break;
            case 2:  // If Cash on Delivery selected
                cout << "Your Order is Placed!" << endl;
                break;
            default:
                cout << "Invalid Payment Method!" << endl;
            }

            // Ask for order confirmation method
            cout << "Please Confirm Your Order: \n1. Call \n2. Message" << endl;
            cin.ignore();
            cin >> confirmationChoice;
          

            switch (confirmationChoice) {
            case 1:
                cout << "We will call you to confirm your order!" << endl;
                break;
            case 2:
                cout << "You will receive a message to confirm your order!" << endl;
                break;
            default:
                cout << "Invalid choice for order confirmation!" << endl;
            }
       


            cout << "Thanks for Choosing us!" << endl;  // Thank the user !Code ends here
            return 0;
        }
        else
        {


            cout << "Invalid Input";                 //the info added might be wrong
        }
        return 0;
      
    }
}
