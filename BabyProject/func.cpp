#include <iostream>
#include <string>
#include <vector>
#include <cmath>
void faculties();
void bachelarIT();
void se();
void cmd();
void cncs();
int op;
void faculties()
{
    std::cout << "Bachelar Degree\n1. IT\n2. IR\n3. KL\nChoose: ";
    std::cin >> op;
    switch (op)
    {
    case 1:
        bachelarIT();
        break;
    // case 2:
    //     bachelarIR();
    //     break;
    // case 3:
    //     bachelarKL();
    //     break;
    }
}
void bachelarIT()
{
    switch (op)
    {
    case 1:
        switch (op)
        {
        case 1:
            std::cout << "1. SoftWare\n2. CMD\n3. CNCS\nChoose: ";
            std::cin >> op;
            switch (op)
            {
            case 1:
                se();
                break;
            case 2:
                cmd();
                break;
            case 3:
                cncs();
                break;
            }
            break;
        }
        break;

    default:
        break;
    }
}
void se()
{
    std::cout << "number1: " << op << '\n';
    std::cout << "+ Year(1 - 4): ";
    std::cin >> op;
    switch (op)
    {
    case 1:
        std::cout << "+ Year1\n1. Semester1\n2. Semester2\nChoose: ";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. C++\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. C++\n";
            break;
        }
        break;
    case 2:
        std::cout << "+ Year2\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. C#\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. C#\n";
            break;
        }
        break;
    case 3:
        std::cout << "+ Year3\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Java\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Java\n";
            break;
        }
        break;
    case 4:
        std::cout << "+ Year4\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Python\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Python\n";
            break;
        }
        break;
    }
}
void cmd()
{

    std::cout << "number2: " << op << '\n';
    std::cout << "+ Year(1 - 4): ";
    std::cin >> op;
    switch (op)
    {
    case 1:
        std::cout << "+ Year1\n1. Semester1\n2. Semester2\nChoose: ";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Photoshop\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Photoshop\n";
            break;
        }
        break;
    case 2:
        std::cout << "+ Year2\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Divinc\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Divinc\n";
            break;
        }
        break;
    case 3:
        std::cout << "+ Year3\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Adobe Premier\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Adobe Premier\n";
            break;
        }
        break;
    case 4:
        std::cout << "+ Year4\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Capcut\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Capcut\n";
            break;
        }
        break;
    }
}
void cncs()
{
    std::cout << "number3: " << op << '\n';
    std::cout << "+ Year(1 - 4): ";
    std::cin >> op;
    switch (op)
    {
    case 1:
        std::cout << "+ Year1\n1. Semester1\n2. Semester2\nChoose: ";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Choose Window\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Choose Window\n";
            break;
        }
        break;
    case 2:
        std::cout << "+ Year2\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Install App\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Install App\n";
            break;
        }
        break;
    case 3:
        std::cout << "+ Year3\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. Delete App\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. Delete App\n";
            break;
        }
        break;
    case 4:
        std::cout << "+ Year4\n2. Semester1\n2. Semester2\nChoose: \n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "1. EC\n2. CMD\n3. PC\n4. CRM\n5. App Anti Virus\n";
            break;
        case 2:
            std::cout << "1. AMSA\n2. MCP\n3. WBD\n4. WPD\n5. App Anti Virus\n";
            break;
        }
        break;
    }
}