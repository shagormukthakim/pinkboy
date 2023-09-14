#include <iostream>
#include <string>
#include <sstream>
#include <chrono>
#include <thread>

// Function to simulate typing
void typeText(const std::string& text, int delay) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
    }
}

int main() {
    std::string user_input;

    // Define the message and typingDelay
    std::string message = "Hello! I'm Pinkbot. How can I assist you today?\n";
    int typingDelay = 50; // Typing delay in milliseconds

    // Print the initial message with typing effect
    typeText(message, typingDelay);


    while (true)
    {
        std::cout << "You: ";
        std::getline(std::cin, user_input);

        // Convert the user input to lowercase for case-insensitive matching
        for (char &c : user_input)
        {
            c = std::tolower(c);
        }

        // Trim leading and trailing spaces
        user_input.erase(0, user_input.find_first_not_of(" "));
        user_input.erase(user_input.find_last_not_of(" ") + 1);

        // Keyword-based responses
        if (user_input.find("hello") != std::string::npos)
        {
            std::cout << "Chatbot: Hi there!" << std::endl;
        }
        else if (user_input == "who make you?")
        {
            std::cout << "Chatbot: shagormukthakim" << std::endl;
        }
        else if (user_input.find("how are you") != std::string::npos)
        {
            std::cout << "Chatbot: I'm just a computer program, so I don't have feelings, but I'm here to help!" << std::endl;
        }
        else if (user_input.find("add") != std::string::npos)
        {
            // Check if the user wants to perform addition
            std::cout << "Chatbot: Sure, let's add two numbers. Please enter the numbers separated by a space: ";

            // Read the user's input line
            std::string numbers_input;
            std::getline(std::cin, numbers_input);

            // Use stringstream to parse the input
            std::istringstream iss(numbers_input);
            double num1, num2;

            // Extract the two numbers
            if (iss >> num1 >> num2)
            {
                double result = num1 + num2;
                std::cout << "Chatbot: The sum of " << num1 << " and " << num2 << " is " << result << std::endl;
            }
            else
            {
                std::cout << "Chatbot: I couldn't understand the numbers you provided." << std::endl;
            }
        }
        else if (user_input == "bye")
        {
            std::cout << "Chatbot: Goodbye! Have a great day!" << std::endl;
            break; // Exit the chat loop
        }
        else if (user_input.find("what is your name") != std::string::npos)
        {
            std::cout << "Chatbot: I'm Pinkbot." << std::endl;
        }
        else if (user_input.find("what can you do") != std::string::npos)
        {
            std::cout << "Chatbot: I can answer questions, perform calculations, and provide information on various topics." << std::endl;
        }
        else if (user_input.find("tell me a joke") != std::string::npos)
        {
            std::cout << "Chatbot: Why don't scientists trust atoms? Because they make up everything!" << std::endl;
       
        
        }
        else if (user_input.find("what's the weather like today") != std::string::npos)
        {
            std::cout << "Chatbot: it's depend on your mood sir :)" << std::endl;
        }
        else if (user_input.find("tell me a fun fact") != std::string::npos)
        {
            std::cout << "Chatbot: Honey never spoils. Archaeologists have found pots of honey in ancient Egyptian tombs that are over 3,000 years old and still perfectly edible." << std::endl;
        }
        else if (user_input.find("how does a computer work") != std::string::npos)
        {
            std::cout << "Chatbot: Computers work by processing binary data (0s and 1s) using a central processing unit (CPU) and storing information in memory. They execute instructions from programs to perform tasks." << std::endl;
        }
        else if (user_input.find("tell me about yourself") != std::string::npos)
        {
            std::cout << "Chatbot: I'm just a computer program created to assist and provide information. Feel free to ask me anything!" << std::endl;
        }
        else if (user_input.find("what's the meaning of life") != std::string::npos)
        {
            std::cout << "Chatbot: The meaning of life is a philosophical question with many interpretations. Some believe it's to seek happiness, others find meaning in relationships, and some explore it through spirituality or personal goals." << std::endl;
        }
        else if (user_input.find("how do I learn programming") != std::string::npos)
        {
            std::cout << "Chatbot: Learning programming involves studying programming languages, practicing coding, and working on projects. There are many online resources, tutorials, and courses available to help you get started." << std::endl;
        }
        else if (user_input.find("recommend a book") != std::string::npos)
        {
            std::cout << "Chatbot: What genre are you interested in? I can recommend a book based on your preferences." << std::endl;
        }
        else if (user_input.find("what's the capital of France") != std::string::npos)
        {
            std::cout << "Chatbot: The capital of France is Paris." << std::endl;
        }
        else if (user_input.find("how do I make a pizza") != std::string::npos)
        {
            std::cout << "Chatbot: To make a pizza, you'll need dough, tomato sauce, cheese, and your choice of toppings. Roll out the dough, spread the sauce, add cheese and toppings, then bake in the oven until it's cooked to your liking." << std::endl;
        }
        else if (user_input.find("what's the tallest mountain in the world") != std::string::npos)
        {
            std::cout << "Chatbot: Mount Everest is the tallest mountain in the world, standing at 29,032 feet (8,849 meters) above sea level." << std::endl;
        }
        else if (user_input.find("how does photosynthesis work") != std::string::npos)
        {
            std::cout << "Chatbot: Photosynthesis is the process by which plants convert sunlight, carbon dioxide, and water into glucose (a form of sugar) and oxygen. This process takes place in chloroplasts within plant cells." << std::endl;
        }
        else if (user_input.find("what's the largest planet in our solar system") != std::string::npos)
        {
            std::cout << "Chatbot: Jupiter is the largest planet in our solar system." << std::endl;
        }
        else if (user_input.find("how do I change a flat tire") != std::string::npos)
        {
            std::cout << "Chatbot: To change a flat tire, you'll need a jack, lug wrench, spare tire, and knowledge of the process. First, safely park your vehicle, use the jack to lift it, remove the flat tire, and replace it with the spare tire. Then, tighten the lug nuts and lower the car." << std::endl;
        }
        else if (user_input.find("tell me about the Eiffel Tower") != std::string::npos)
        {
            std::cout << "Chatbot: The Eiffel Tower is an iconic iron structure located in Paris, France. It was built for the 1889 World's Fair and stands at a height of 324 meters (1,063 feet). It's a popular tourist attraction and a symbol of France." << std::endl;
        }
        else if (user_input.find("how does a car engine work") != std::string::npos)
        {
            std::cout << "Chatbot: A car engine works by burning a mixture of fuel and air in the combustion chambers. This creates a controlled explosion that drives the pistons, which turn the crankshaft and ultimately powers the vehicle." << std::endl;
        }
        else if (user_input.find("what's the largest ocean in the world") != std::string::npos)
        {
            std::cout << "Chatbot: The largest ocean in the world is the Pacific Ocean." << std::endl;
        }
        else if (user_input.find("how do I bake chocolate chip cookies") != std::string::npos)
        {
            std::cout << "Chatbot: To bake chocolate chip cookies, you'll need ingredients like flour, sugar, butter, chocolate chips, and more. Mix the ingredients, form dough balls, place them on a baking sheet, and bake in the oven until golden brown." << std::endl;
        }
        else if (user_input.find("what's the formula for the area of a circle") != std::string::npos)
        {
            std::cout << "Chatbot: The formula for the area of a circle is A = πr^2, where A represents the area and r is the radius of the circle." << std::endl;
        }
        else if (user_input.find("how does a camera work") != std::string::npos)
        {
            std::cout << "Chatbot: A camera works by capturing light through a lens and focusing it onto a light-sensitive sensor or film. When the shutter is released, it allows light to strike the sensor or film, creating an image." << std::endl;
        }
        else if (user_input.find("tell me a famous quote") != std::string::npos)
        {
            std::cout << "Chatbot: Here's a famous quote by Albert Einstein: 'Imagination is more important than knowledge. For knowledge is limited, whereas imagination embraces the entire world, stimulating progress, giving birth to evolution.'" << std::endl;
        }
        else if (user_input.find("how do I grow tomatoes") != std::string::npos)
        {
            std::cout << "Chatbot: To grow tomatoes, you'll need tomato seeds or seedlings, good soil, sunlight, and regular watering. Plant the seeds or seedlings, provide support as they grow, and harvest ripe tomatoes when ready." << std::endl;
        }
        else if (user_input.find("what's the largest animal on Earth") != std::string::npos)
        {
            std::cout << "Chatbot: The largest animal on Earth is the blue whale." << std::endl;
        }
        else if (user_input.find("how do I make a paper airplane") != std::string::npos)
        {
            std::cout << "Chatbot: To make a paper airplane, take a piece of paper, fold it in half lengthwise, then fold the top edges down to the center fold to create wings. Finally, fold the wings down to align with the bottom edge, and you have a paper airplane!" << std::endl;
        }
        else if (user_input.find("tell me about the Great Wall of China") != std::string::npos)
        {
            std::cout << "Chatbot: The Great Wall of China is a series of fortifications made of stone, brick, tamped earth, wood, and other materials, built along the northern borders of China to protect against invasions. It's a UNESCO World Heritage Site and stretches over 13,000 miles." << std::endl;
        }
        else if (user_input.find("how do I cook pasta") != std::string::npos)
        {
            std::cout << "Chatbot: To cook pasta, bring a pot of water to a boil, add salt, and then add the pasta. Cook until it's al dente (firm to the bite). Drain the water and serve with your choice of sauce." << std::endl;
        }
        else if (user_input.find("what's the largest desert in the world") != std::string::npos)
        {
            std::cout << "Chatbot: The largest desert in the world is the Antarctic Desert, followed by the Arctic Desert. These deserts are characterized by extremely low temperatures and arid conditions." << std::endl;
        }
        else if (user_input.find("how do I create a strong password") != std::string::npos)
        {
            std::cout << "Chatbot: To create a strong password, use a combination of uppercase and lowercase letters, numbers, and special characters. Avoid easily guessable information like names or common words. Aim for a password that's at least 12 characters long." << std::endl;
        }
        else if (user_input.find("tell me about the Mona Lisa") != std::string::npos)
        {
            std::cout << "Chatbot: The Mona Lisa is a famous portrait painting created by Leonardo da Vinci in the 16th century. It's known for the subject's enigmatic smile and is displayed at the Louvre Museum in Paris, France." << std::endl;
        }
        else if (user_input.find("how do I start a small business") != std::string::npos)
        {
            std::cout << "Chatbot: Starting a small business involves planning, research, and execution. You'll need a business idea, a business plan, funding, legal registration, and marketing strategies. It's essential to seek professional advice and resources for guidance." << std::endl;
        }
        else if (user_input.find("what's the formula for the volume of a cylinder") != std::string::npos)
        {
            std::cout << "Chatbot: The formula for the volume of a cylinder is V = πr^2h, where V represents the volume, r is the radius of the base, and h is the height of the cylinder." << std::endl;
        }
        else if (user_input.find("how does a refrigerator work") != std::string::npos)
        {
            std::cout << "Chatbot: A refrigerator works by using a refrigeration cycle to remove heat from the inside, keeping it cool. It does this by circulating a refrigerant through coils and compressing it to release heat outside the fridge." << std::endl;
        }
        else if (user_input.find("tell me a riddle") != std::string::npos)
        {
            std::cout << "Chatbot: Here's a riddle for you: I'm tall when I'm young and short when I'm old. What am I?" << std::endl;
        }
        else if (user_input.find("what's the speed of light") != std::string::npos)
        {
            std::cout << "Chatbot: The speed of light in a vacuum is approximately 299,792,458 meters per second (or about 186,282 miles per second)." << std::endl;
        }
        else if (user_input.find("how do I make a smoothie") != std::string::npos)
        {
            std::cout << "Chatbot: To make a smoothie, blend together fruits (e.g., bananas, berries), yogurt or milk, and ice. You can also add sweeteners like honey or sugar if desired." << std::endl;
        }
        else if (user_input.find("tell me about the pyramids of Egypt") != std::string::npos)
        {
            std::cout << "Chatbot: The pyramids of Egypt are ancient structures built as tombs for pharaohs. The most famous pyramid is the Great Pyramid of Giza, built for Pharaoh Khufu. These massive structures are some of the most iconic landmarks in history." << std::endl;
        }
        else if (user_input.find("how does a television work") != std::string::npos)
        {
            std::cout << "Chatbot: A television (TV) works by displaying images and videos on a screen using a combination of electronic components, including a cathode ray tube (CRT) or an LCD/LED panel. It receives signals through antennas, cable, or digital connections." << std::endl;
        }
        else if (user_input.find("what's the smallest planet in our solar system") != std::string::npos)
        {
            std::cout << "Chatbot: The smallest planet in our solar system is Mercury." << std::endl;
        }
        else if (user_input.find("how do I bake a birthday cake") != std::string::npos)
        {
            std::cout << "Chatbot: To bake a birthday cake, you'll need ingredients like flour, sugar, eggs, and baking powder. Mix the batter, bake in a cake pan, and decorate with frosting and candles for a special touch." << std::endl;
        }
        else if (user_input.find("what's the formula for the area of a triangle") != std::string::npos)
        {
            std::cout << "Chatbot: The formula for the area of a triangle is A = (base * height) / 2, where A represents the area, and base and height are the respective measurements of the triangle." << std::endl;
        }
        else if (user_input.find("how does a microwave work") != std::string::npos)
        {
            std::cout << "Chatbot: A microwave oven works by emitting microwave radiation, which excites water molecules in food. This excitation generates heat and cooks the food quickly and efficiently." << std::endl;
        }
        else if (user_input.find("tell me a famous scientist") != std::string::npos)
        {
            std::cout << "Chatbot: One of the famous scientists in history is Isaac Newton. He made significant contributions to physics and mathematics, including his laws of motion and the law of universal gravitation." << std::endl;
        }
        else if (user_input.find("how do I plant a tree") != std::string::npos)
        {
            std::cout << "Chatbot: To plant a tree, dig a hole slightly larger than the tree's root ball, place the tree in the hole, backfill with soil, and water thoroughly. Proper care and watering are essential for the tree's growth." << std::endl;
        }
        else if (user_input.find("what's the deepest ocean trench") != std::string::npos)
        {
            std::cout << "Chatbot: The Mariana Trench is the deepest ocean trench in the world, reaching a maximum known depth of about 36,070 feet (10,994 meters) in a location called the Challenger Deep." << std::endl;
        }
        else if (user_input.find("how do I tie a necktie") != std::string::npos)
        {
            std::cout << "Chatbot: To tie a necktie, start with the wide end on your right and the narrow end on your left. Cross the wide end over the narrow end, then loop it behind and bring it back to the front. Continue looping and tucking until you've formed a knot, then tighten it and adjust as needed." << std::endl;
        }
        else if (user_input.find("tell me about the Amazon Rainforest") != std::string::npos)
        {
            std::cout << "Chatbot: The Amazon Rainforest is the largest tropical rainforest in the world, covering much of South America. It's known for its incredible biodiversity and is home to numerous species of plants and animals. It plays a vital role in the Earth's ecosystem." << std::endl;
        }
        else if (user_input.find("how do I make a grilled cheese sandwich") != std::string::npos)
        {
            std::cout << "Chatbot: To make a grilled cheese sandwich, butter one side of two slices of bread. Place cheese between the slices with the buttered sides facing out. Heat a pan over medium heat and cook the sandwich until both sides are golden brown and the cheese melts." << std::endl;
        }
        else if (user_input.find("what's the formula for the circumference of a circle") != std::string::npos)
        {
            std::cout << "Chatbot: The formula for the circumference of a circle is C = 2πr, where C represents the circumference, and r is the radius of the circle." << std::endl;
        }
        else if (user_input.find("how does a bicycle work") != std::string::npos)
        {
            std::cout << "Chatbot: A bicycle works by utilizing pedal power to turn a chain, which rotates the bike's wheels. The rider's motion generates momentum, and the bicycle's design provides stability and control." << std::endl;
        }
        else if (user_input.find("tell me a famous painting") != std::string::npos)
        {
            std::cout << "Chatbot: One of the famous paintings in history is 'Starry Night' by Vincent van Gogh. It's known for its swirling, dream-like depiction of a night sky with stars and a vibrant village." << std::endl;
        }
        else if (user_input.find("how do I make a cup of coffee") != std::string::npos)
        {
            std::cout << "Chatbot: To make a cup of coffee, brew ground coffee beans with hot water using a coffee maker, French press, or pour-over method. Add milk, sugar, or other flavorings to taste." << std::endl;
        }
        else if (user_input.find("tell me about the Statue of Liberty") != std::string::npos)
        {
            std::cout << "Chatbot: The Statue of Liberty is a symbol of freedom and democracy located on Liberty Island in New York Harbor. It was a gift from France to the United States and was dedicated in 1886. The statue represents Libertas, the Roman goddess of liberty." << std::endl;
        }
        else if (user_input.find("how do I make a paper boat") != std::string::npos)
        {
            std::cout << "Chatbot: To make a paper boat, start with a square piece of paper. Fold it in half diagonally to form a triangle, then fold the two corners of the triangle down to the base. Fold the bottom edge up, and you have a paper boat!" << std::endl;
        }
        else if (user_input.find("what's the largest country by land area") != std::string::npos)
        {
            std::cout << "Chatbot: The largest country by land area in the world is Russia." << std::endl;
        }
        else if (user_input.find("how do I take care of a pet dog") != std::string::npos)
        {
            std::cout << "Chatbot: To take care of a pet dog, provide food, clean water, regular exercise, grooming, and love and attention. Ensure they have a safe and comfortable living environment and access to veterinary care when needed." << std::endl;
        }
        else if (user_input.find("tell me a famous quote by Albert Einstein") != std::string::npos)
        {
            std::cout << "Chatbot: One of Albert Einstein's famous quotes is: 'Imagination is more important than knowledge. For knowledge is limited, whereas imagination embraces the entire world, stimulating progress, giving birth to evolution.'" << std::endl;
        }
        else
        {
            std::cout << "Chatbot: I'm sorry, I don't understand that." << std::endl;
        }
    }

    return 0;
}
