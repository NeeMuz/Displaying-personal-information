using System;

class Program
{
    static void Main()
    {
        string name = "Alt";
        int age = 21;
        string country = "Cabbage";
        string city = "Moon";
        string hobby = "Card games and also computer games";

        Console.WriteLine();
        Console.WriteLine("================================");
        Console.WriteLine("         Information About Me");
        Console.WriteLine("================================");
        Console.WriteLine();

        Console.WriteLine("      Name:       {0}", name);
        Console.WriteLine("      Age:        {0}", age);
        Console.WriteLine("      Country:    {0}", country);
        Console.WriteLine("      City:       {0}", city);
        Console.WriteLine("      Hobby:      {0}", hobby);

        Console.WriteLine();
        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}
