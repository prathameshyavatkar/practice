#include<stdio.h>

int main()
{
    int category, bookchoice, continueshopping, purches;
    int totalbill = 0;
    char address[255];
    char name[50];
    printf("Enter you name:");
    scanf("%s",&name);
    printf("Enter your address:");
    scanf("%s",&address);

    do {
        printf("Welcome to the Book Store\n");
        printf("Please select a category:\n");
        printf("1. Fiction\n");
        printf("2. Non-Fiction\n");
        printf("3. General Knowledge\n");
        printf("4. Horror\n");
        printf("5. Novels\n");
        printf("0. Exit\n");
        scanf("%d", &category);
        

        if (category == 0) {
            printf("if you have selected any book to purchase please enter 10 oterwise 0 for final exit\n");
            printf("please enter your choice:");
            scanf("%d", &purches);
            if (purches==10){
                printf("Total bill: ₹%d\n", totalbill);
            }
            else{
                printf("Thank you for visiting the Book Store!\n Keep Growing!\n");
                printf("For Contact-876752734");
                }
            return 0; 
        }

        switch (category) {
            case 1:
                printf("You selected Fiction.\n");
                printf("Here are 25 fiction books:\n");
                printf("1. The Great Gatsby - F. Scott Fitzgerald - ₹800\n"); 
                printf("2. To Kill a Mockingbird - Harper Lee - ₹600\n");
                printf("3. 1984 - George Orwell - ₹700\n");
                printf("4. Brave New World - Aldous Huxley - ₹750\n");
                printf("5. The Catcher in the Rye - J.D. Salinger - ₹650\n");
                printf("6. Moby Dick - Herman Melville - ₹900\n");
                printf("7. The Lord of the Rings - J.R.R. Tolkien - ₹1200\n");
                printf("8. The Hobbit - J.R.R. Tolkien - ₹800\n");
                printf("9. Pride and Prejudice - Jane Austen - ₹600\n");
                printf("10. The Picture of Dorian Gray - Oscar Wilde - ₹700\n");
                printf("11. Fahrenheit 451 - Ray Bradbury - ₹600\n");
                printf("12. The Chronicles of Narnia - C.S. Lewis - ₹800\n");
                printf("13. Animal Farm - George Orwell - ₹500\n");
                printf("14. Wuthering Heights - Emily Brontë - ₹700\n");
                printf("15. Jane Eyre - Charlotte Brontë - ₹800\n");
                printf("16. The Kite Runner - Khaled Hosseini - ₹900\n");
                printf("17. The Alchemist - Paulo Coelho - ₹600\n");
                printf("18. The Fault in Our Stars - John Green - ₹800\n");
                printf("19. The Book Thief - Markus Zusak - ₹1000\n");
                printf("20. The Hunger Games - Suzanne Collins - ₹800\n");
                printf("21. The Time Traveler's Wife - Audrey Niffenegger - ₹700\n");
                printf("22. Life of Pi - Yann Martel - ₹800\n");
                printf("23. The Glass Castle - Jeannette Walls - ₹700\n");
                printf("24. The Night Circus - Erin Morgenstern - ₹900\n");
                printf("25. The Lovely Bones - Alice Sebold - ₹800\n");
                break;

            case 2:
                printf("You selected Non-Fiction.\n");
                printf("Here are 25 non-fiction books:\n");
                printf("1. Sapiens: A Brief History of Humankind - Yuval Noah Harari - ₹1200\n");
                printf("2. Educated - Tara Westover - ₹1000\n");
                printf("3. The Immortal Life of Henrietta Lacks - Rebecca Skloot - ₹800\n");
                printf("4. The Wright Brothers - David McCullough - ₹900\n");
                printf("5. Becoming - Michelle Obama - ₹1000\n");
                printf("6. The Diary of a Young Girl - Anne Frank - ₹600\n");
                printf("7. Unbroken - Laura Hillenbrand - ₹800\n");
                printf("8. The Soul of America - Jon Meacham - ₹950\n");
                printf("9. The Power of Habit - Charles Duhigg - ₹800\n");
                printf("10. Freakonomics - Steven D. Levitt & Stephen J. Dubner - ₹900\n");
                printf("11. Blink - Malcolm Gladwell - ₹750\n");
                printf("12. A Brief History of Time - Stephen Hawking - ₹1000\n");
                printf("13. Quiet: The Power of Introverts - Susan Cain - ₹900\n");
                printf("14. Outliers - Malcolm Gladwell - ₹800\n");
                printf("15. The Body Keeps the Score - Bessel van der Kolk - ₹1000\n");
                printf("16. Born a Crime - Trevor Noah - ₹900\n");
                printf("17. The Subtle Art of Not Giving a F*ck - Mark Manson - ₹800\n");
                printf("18. Bad Blood - John Carreyrou - ₹900\n");
                printf("19. The Undoing Project - Michael Lewis - ₹950\n");
                printf("20. When Breath Becomes Air - Paul Kalanithi - ₹800\n");
                printf("21. Into Thin Air - Jon Krakauer - ₹800\n");
                printf("22. I Am Malala - Malala Yousafzai - ₹900\n");
                printf("23. The Devil in the White City - Erik Larson - ₹950\n");
                printf("24. The Immortal Life of Henrietta Lacks - Rebecca Skloot - ₹800\n");
                printf("25. The Glass Castle - Jeannette Walls - ₹700\n");
                break;

            case 3:
                printf("You selected General Knowledge.\n");
                printf("Here are 25 general knowledge books:\n");
                printf("1. A Short History of Nearly Everything - Bill Bryson - ₹1100\n");
                printf("2. The Elements of Style - William Strunk Jr. - ₹600\n");
                printf("3. The Art of War - Sun Tzu - ₹500\n");
                printf("4. The 48 Laws of Power - Robert Greene - ₹900\n");
                printf("5. Thinking, Fast and Slow - Daniel Kahneman - ₹1000\n");
                printf("6. Guns, Germs, and Steel - Jared Diamond - ₹900\n");
                printf("7. The Secret - Rhonda Byrne - ₹800\n");
                printf("8. A People's History of the United States - Howard Zinn - ₹1000\n");
                printf("9. The Innovators - Walter Isaacson - ₹900\n");
                printf("10. The Better Angels of Our Nature - Steven Pinker - ₹1100\n");
                printf("11. Freakonomics - Steven D. Levitt & Stephen J. Dubner - ₹900\n");
                printf("12. The Tipping Point - Malcolm Gladwell - ₹800\n");
                printf("13. The Ascent of Man - Jacob Bronowski - ₹900\n");
                printf("14. The Code Book - Simon Singh - ₹800\n");
                printf("15. The Structure of Scientific Revolutions - Thomas S. Kuhn - ₹900\n");
                printf("16. Outliers - Malcolm Gladwell - ₹800\n");
                printf("17. The Emperor of All Maladies - Siddhartha Mukherjee - ₹1000\n");
                printf("18. The Man Who Knew Infinity - Robert Kanigel - ₹800\n");
                printf("19. The Shock Doctrine - Naomi Klein - ₹900\n");
                printf("20. Superforecasting - Philip E. Tetlock - ₹950\n");
                printf("21. The Wisdom of Crowds - James Surowiecki - ₹800\n");
                printf("22. The Black Swan - Nassim Nicholas Taleb - ₹900\n");
                printf("23. The Art of Happiness - Dalai Lama - ₹700\n");
                printf("24. The History of the World in 100 Objects - Neil MacGregor - ₹950\n");
                printf("25. A Short History of Nearly Everything - Bill Bryson - ₹1100\n");
                break;

            case 4:
                printf("You selected Horror.\n");
                printf("Here are 25 horror books:\n");
                printf("1. The Shining - Stephen King - ₹800\n");
                printf("2. It - Stephen King - ₹900\n");
                printf("3. The Haunting of Hill House - Shirley Jackson - ₹700\n");
                printf("4. Pet Sematary - Stephen King - ₹800\n");
                printf("5. Dracula - Bram Stoker - ₹600\n");
                printf("6. Frankenstein - Mary Shelley - ₹600\n");
                printf("7. The Exorcist - William Peter Blatty - ₹700\n");
                printf("8. Bird Box - Josh Malerman - ₹700\n");
                printf("9. The Silence of the Lambs - Thomas Harris - ₹800\n");
                printf("10. House of Leaves - Mark Z. Danielewski - ₹900\n");
                printf("11. American Psycho - Bret Easton Ellis - ₹800\n");
                printf("12. Coraline - Neil Gaiman - ₹600\n");
                printf("13. The Cabin at the End of the World - Paul Tremblay - ₹700\n");
                printf("14. Rosemary's Baby - Ira Levin - ₹600\n");
                printf("15. Misery - Stephen King - ₹800\n");
                printf("16. The Girl Next Door - Jack Ketchum - ₹700\n");
                printf("17. The Institute - Stephen King - ₹800\n");
                printf("18. The Woman in Black - Susan Hill - ₹600\n");
                printf("19. The Turn of the Screw - Henry James - ₹500\n");
                printf("20. Ghost Story - Peter Straub - ₹800\n");
                printf("21. The Terror - Dan Simmons - ₹900\n");
                printf("22. The Ballad of Black Tom - Victor LaValle - ₹600\n");
                printf("23. The Cabin in the Woods - Tim Seeley - ₹700\n");
                printf("24. Thirteen Reasons Why - Jay Asher - ₹800\n");
                printf("25. The Last House on Needless Street - Catriona Ward - ₹800\n");
                break;

            case 5:
                printf("You selected Novels.\n");
                printf("Here are 25 novels:\n");
                printf("1. One Hundred Years of Solitude - Gabriel Garcia Marquez - ₹1000\n");
                printf("2. The Master and Margarita - Mikhail Bulgakov - ₹900\n");
                printf("3. Crime and Punishment - Fyodor Dostoevsky - ₹800\n");
                printf("4. The Brothers Karamazov - Fyodor Dostoevsky - ₹900\n");
                printf("5. Anna Karenina - Leo Tolstoy - ₹900\n");
                printf("6. The Picture of Dorian Gray - Oscar Wilde - ₹700\n");
                printf("7. The Catcher in the Rye - J.D. Salinger - ₹650\n");
                printf("8. The Great Gatsby - F. Scott Fitzgerald - ₹800\n");
                printf("9. The Grapes of Wrath - John Steinbeck - ₹800\n");
                printf("10. Brave New World - Aldous Huxley - ₹750\n");
                printf("11. 1984 - George Orwell - ₹700\n");
                printf("12. The Road - Cormac McCarthy - ₹800\n");
                printf("13. The Goldfinch - Donna Tartt - ₹1000\n");
                printf("14. The Kite Runner - Khaled Hosseini - ₹900\n");
                printf("15. A Tale of Two Cities - Charles Dickens - ₹600\n");
                printf("16. The Bell Jar - Sylvia Plath - ₹700\n");
                printf("17. The Handmaid's Tale - Margaret Atwood - ₹800\n");
                printf("18. Never Let Me Go - Kazuo Ishiguro - ₹900\n");
                printf("19. The Brief Wondrous Life of Oscar Wao - Junot Diaz - ₹800\n");
                printf("20. Their Eyes Were Watching God - Zora Neale Hurston - ₹800\n");
                printf("21. The Night Circus - Erin Morgenstern - ₹900\n");
                printf("22. The Goldfinch - Donna Tartt - ₹1000\n");
                printf("23. Life of Pi - Yann Martel - ₹800\n");
                printf("24. The Alchemist - Paulo Coelho - ₹600\n");
                printf("25. The Road - Cormac McCarthy - ₹800\n");
                break;
                
            case 6:
            printf("\nEnter your Address\n");
            scanf("%s",address);

            default:
                printf("Invalid category. Please select a valid category.\n");
                continue; 
        }

        printf("Please select a book by number (1-25): ");
        scanf("%d", &bookchoice);

        if (bookchoice < 1 || bookchoice > 25) {
            printf("Invalid choice. Please select a valid book number.\n");
            continue; 
        }

        
        printf("You selected:\n");
        switch (category) {
            case 1:
                switch (bookchoice) {
                    case 1: printf("Book: The Great Gatsby\nAuthor: F. Scott Fitzgerald\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 2: printf("Book: To Kill a Mockingbird\nAuthor: Harper Lee\nPrice: ₹600\n");  totalbill += 600; break;
                    case 3: printf("Book: 1984\nAuthor: George Orwell\nPrice: ₹700\n");  totalbill += 700; break;
                    case 4: printf("Book: Brave New World\nAuthor: Aldous Huxley\nPrice: ₹750\n");  totalbill += 750; break;
                    case 5: printf("Book: The Catcher in the Rye\nAuthor: J.D. Salinger\nPrice: ₹650\n"); totalbill += 650;  break;
                    case 6: printf("Book: Moby Dick\nAuthor: Herman Melville\nPrice: ₹900\n");  totalbill += 900; break;
                    case 7: printf("Book: The Lord of the Rings\nAuthor: J.R.R. Tolkien\nPrice: ₹1200\n"); totalbill += 1200;  break;
                    case 8: printf("Book: The Hobbit\nAuthor: J.R.R. Tolkien\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 9: printf("Book: Pride and Prejudice\nAuthor: Jane Austen\nPrice: ₹600\n"); totalbill += 600;  break;
                    case 10: printf("Book: The Picture of Dorian Gray\nAuthor: Oscar Wilde\nPrice: ₹700\n"); totalbill += 700;  break;
                    case 11: printf("Book: Fahrenheit 451\nAuthor: Ray Bradbury\nPrice: ₹600\n");  totalbill += 600; break;
                    case 12: printf("Book: The Chronicles of Narnia\nAuthor: C.S. Lewis\nPrice: ₹800\n");  totalbill += 800; break;
                    case 13: printf("Book: Animal Farm\nAuthor: George Orwell\nPrice: ₹500\n");  totalbill += 500; break;
                    case 14: printf("Book: Wuthering Heights\nAuthor: Emily Brontë\nPrice: ₹700\n");  totalbill += 700; break;
                    case 15: printf("Book: Jane Eyre\nAuthor: Charlotte Brontë\nPrice: ₹800\n");  totalbill += 800; break;
                    case 16: printf("Book: The Kite Runner\nAuthor: Khaled Hosseini\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 17: printf("Book: The Alchemist\nAuthor: Paulo Coelho\nPrice: ₹600\n");  totalbill += 600; break;
                    case 18: printf("Book: The Fault in Our Stars\nAuthor: John Green\nPrice: ₹800\n");  totalbill += 800; break;
                    case 19: printf("Book: The Book Thief\nAuthor: Markus Zusak\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 20: printf("Book: The Hunger Games\nAuthor: Suzanne Collins\nPrice: ₹800\n");  totalbill += 800; break;
                    case 21: printf("Book: The Time Traveler's Wife\nAuthor: Audrey Niffenegger\nPrice: ₹700\n");  totalbill += 700; break;
                    case 22: printf("Book: Life of Pi\nAuthor: Yann Martel\nPrice: ₹800\n");  totalbill += 800; break;
                    case 23: printf("Book: The Glass Castle\nAuthor: Jeannette Walls\nPrice: ₹700\n");  totalbill += 700; break;
                    case 24: printf("Book: The Night Circus\nAuthor: Erin Morgenstern\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 25: printf("Book: The Lovely Bones\nAuthor: Alice Sebold\nPrice: ₹800\n");  totalbill += 800; break;
                }
                break;
            case 2:
                switch (bookchoice) {
                    case 1: printf("Book: Sapiens: A Brief History of Humankind\nAuthor: Yuval Noah Harari\nPrice: ₹1200\n");  totalbill += 1200; break;
                    case 2: printf("Book: Educated\nAuthor: Tara Westover\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 3: printf("Book: The Immortal Life of Henrietta Lacks\nAuthor: Rebecca Skloot\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 4: printf("Book: The Wright Brothers\nAuthor: David McCullough\nPrice: ₹900\n");  totalbill += 900; break;
                    case 5: printf("Book: Becoming\nAuthor: Michelle Obama\nPrice: ₹1000\n");  totalbill += 800; break;
                    case 6: printf("Book: The Diary of a Young Girl\nAuthor: Anne Frank\nPrice: ₹600\n");  totalbill += 600; break;
                    case 7: printf("Book: Unbroken\nAuthor: Laura Hillenbrand\nPrice: ₹800\n");  totalbill += 800; break;
                    case 8: printf("Book: The Soul of America\nAuthor: Jon Meacham\nPrice: ₹950\n");  totalbill += 950; break;
                    case 9: printf("Book: The Power of Habit\nAuthor: Charles Duhigg\nPrice: ₹800\n");  totalbill += 800; break;
                    case 10: printf("Book: Freakonomics\nAuthor: Steven D. Levitt & Stephen J. Dubner\nPrice: ₹900\n");  totalbill += 900; break;
                    case 11: printf("Book: Blink\nAuthor: Malcolm Gladwell\nPrice: ₹750\n");  totalbill += 750; break;
                    case 12: printf("Book: A Brief History of Time\nAuthor: Stephen Hawking\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 13: printf("Book: Quiet: The Power of Introverts\nAuthor: Susan Cain\nPrice: ₹900\n");  totalbill += 900; break;
                    case 14: printf("Book: Outliers\nAuthor: Malcolm Gladwell\nPrice: ₹800\n");  totalbill += 800; break;
                    case 15: printf("Book: The Body Keeps the Score\nAuthor: Bessel van der Kolk\nPrice: ₹1000\n"); totalbill += 1000;  break;
                    case 16: printf("Book: Born a Crime\nAuthor: Trevor Noah\nPrice: ₹900\n");  totalbill += 900; break;
                    case 17: printf("Book: The Subtle Art of Not Giving a F*ck\nAuthor: Mark Manson\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 18: printf("Book: Bad Blood\nAuthor: John Carreyrou\nPrice: ₹900\n");  totalbill += 900; break;
                    case 19: printf("Book: The Undoing Project\nAuthor: Michael Lewis\nPrice: ₹950\n");  totalbill += 950; break;
                    case 20: printf("Book: When Breath Becomes Air\nAuthor: Paul Kalanithi\nPrice: ₹800\n");  totalbill += 800; break;
                    case 21: printf("Book: Into Thin Air\nAuthor: Jon Krakauer\nPrice: ₹800\n");  totalbill += 800; break;
                    case 22: printf("Book: I Am Malala\nAuthor: Malala Yousafzai\nPrice: ₹900\n"); totalbill += 900; break;
                    case 23: printf("Book: The Devil in the White City\nAuthor: Erik Larson\nPrice: ₹950\n");  totalbill += 950; break;
                    case 24: printf("Book: The Immortal Life of Henrietta Lacks\nAuthor: Rebecca Skloot\nPrice: ₹800\n");  totalbill += 800; break;
                    case 25: printf("Book: The Glass Castle\nAuthor: Jeannette Walls\nPrice: ₹700\n"); totalbill += 700;  break;
                }
                break;
            case 3:
                switch (bookchoice) {
                    case 1: printf("Book: A Short History of Nearly Everything\nAuthor: Bill Bryson\nPrice: ₹1100\n");  totalbill += 1100; break;
                    case 2: printf("Book: The Elements of Style\nAuthor: William Strunk Jr.\nPrice: ₹600\n"); totalbill += 600;  break;
                    case 3: printf("Book: The Art of War\nAuthor: Sun Tzu\nPrice: ₹500\n");  totalbill += 500; break;
                    case 4: printf("Book: The 48 Laws of Power\nAuthor: Robert Greene\nPrice: ₹900\n");  totalbill += 900; break;
                    case 5: printf("Book: Thinking, Fast and Slow\nAuthor: Daniel Kahneman\nPrice: ₹1000\n"); totalbill += 1000;  break;
                    case 6: printf("Book: Guns, Germs, and Steel\nAuthor: Jared Diamond\nPrice: ₹900\n");  totalbill += 900; break;
                    case 7: printf("Book: The Secret\nAuthor: Rhonda Byrne\nPrice: ₹800\n");  totalbill += 800; break;
                    case 8: printf("Book: A People's History of the United States\nAuthor: Howard Zinn\nPrice: ₹1000\n"); totalbill += 1000;  break;
                    case 9: printf("Book: The Innovators\nAuthor: Walter Isaacson\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 10: printf("Book: The Better Angels of Our Nature\nAuthor: Steven Pinker\nPrice: ₹1100\n");  totalbill += 1100; break;
                    case 11: printf("Book: Freakonomics\nAuthor: Steven D. Levitt & Stephen J. Dubner\nPrice: ₹900\n");  totalbill += 900; break;
                    case 12: printf("Book: The Tipping Point\nAuthor: Malcolm Gladwell\nPrice: ₹800\n");  totalbill += 800; break;
                    case 13: printf("Book: The Ascent of Man\nAuthor: Jacob Bronowski\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 14: printf("Book: The Code Book\nAuthor: Simon Singh\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 15: printf("Book: The Structure of Scientific Revolutions\nAuthor: Thomas S. Kuhn\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 16: printf("Book: Outliers\nAuthor: Malcolm Gladwell\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 17: printf("Book: The Emperor of All Maladies\nAuthor: Siddhartha Mukherjee\nPrice: ₹1000\n"); totalbill += 1000;  break;
                    case 18: printf("Book: The Man Who Knew Infinity\nAuthor: Robert Kanigel\nPrice: ₹800\n");  totalbill += 800; break;
                    case 19: printf("Book: The Shock Doctrine\nAuthor: Naomi Klein\nPrice: ₹900\n");  totalbill += 900; break;
                    case 20: printf("Book: Superforecasting\nAuthor: Philip E. Tetlock\nPrice: ₹950\n"); totalbill += 950;  break;
                    case 21: printf("Book: The Wisdom of Crowds\nAuthor: James Surowiecki\nPrice: ₹800\n");  totalbill += 800; break;
                    case 22: printf("Book: The Black Swan\nAuthor: Nassim Nicholas Taleb\nPrice: ₹900\n");  totalbill += 900; break;
                    case 23: printf("Book: The Art of Happiness\nAuthor: Dalai Lama\nPrice: ₹700\n");  totalbill += 700; break;
                    case 24: printf("Book: The History of the World in 100 Objects\nAuthor: Neil MacGregor\nPrice: ₹950\n");  totalbill += 950; break;
                    case 25: printf("Book: A Short History of Nearly Everything\nAuthor: Bill Bryson\nPrice: ₹1100\n");  totalbill += 1100; break;
                }
                break;
            case 4:
                switch (bookchoice) {
                    case 1: printf("Book: The Shining\nAuthor: Stephen King\nPrice: ₹800\n");  totalbill += 800; break;
                    case 2: printf("Book: It\nAuthor: Stephen King\nPrice: ₹900\n");  totalbill += 900; break;
                    case 3: printf("Book: The Haunting of Hill House\nAuthor: Shirley Jackson\nPrice: ₹700\n"); totalbill += 700;  break;
                    case 4: printf("Book: Pet Sematary\nAuthor: Stephen King\nPrice: ₹800\n");  totalbill += 800; break;
                    case 5: printf("Book: Dracula\nAuthor: Bram Stoker\nPrice: ₹600\n");  totalbill += 600; break;
                    case 6: printf("Book: Frankenstein\nAuthor: Mary Shelley\nPrice: ₹600\n");  totalbill += 600; break;
                    case 7: printf("Book: The Exorcist\nAuthor: William Peter Blatty\nPrice: ₹700\n");  totalbill += 700; break;
                    case 8: printf("Book: Bird Box\nAuthor: Josh Malerman\nPrice: ₹700\n"); totalbill += 700;  break;
                    case 9: printf("Book: The Silence of the Lambs\nAuthor: Thomas Harris\nPrice: ₹800\n");  totalbill += 800; break;
                    case 10: printf("Book: House of Leaves\nAuthor: Mark Z. Danielewski\nPrice: ₹900\n");  totalbill += 900; break;
                    case 11: printf("Book: American Psycho\nAuthor: Bret Easton Ellis\nPrice: ₹800\n");  totalbill += 800; break;
                    case 12: printf("Book: Coraline\nAuthor: Neil Gaiman\nPrice: ₹600\n");  totalbill += 600; break;
                    case 13: printf("Book: The Cabin at the End of the World\nAuthor: Paul Tremblay\nPrice: ₹700\n"); totalbill += 700;  break;
                    case 14: printf("Book: Rosemary's Baby\nAuthor: Ira Levin\nPrice: ₹600\n"); totalbill += 600;  break;
                    case 15: printf("Book: Misery\nAuthor: Stephen King\nPrice: ₹800\n");  totalbill += 800; break;
                    case 16: printf("Book: The Girl Next Door\nAuthor: Jack Ketchum\nPrice: ₹700\n");  totalbill += 700; break;
                    case 17: printf("Book: The Institute\nAuthor: Stephen King\nPrice: ₹800\n"); totalbill += 800; break;
                    case 18: printf("Book: The Woman in Black\nAuthor: Susan Hill\nPrice: ₹600\n");  totalbill += 600; break;
                    case 19: printf("Book: The Turn of the Screw\nAuthor: Henry James\nPrice: ₹500\n");  totalbill += 500; break;
                    case 20: printf("Book: Ghost Story\nAuthor: Peter Straub\nPrice: ₹800\n");  totalbill += 800; break;
                    case 21: printf("Book: The Terror\nAuthor: Dan Simmons\nPrice: ₹900\n");  totalbill += 900; break;
                    case 22: printf("Book: The Ballad of Black Tom\nAuthor: Victor LaValle\nPrice: ₹600\n");  totalbill += 600; break;
                    case 23: printf("Book: The Cabin in the Woods\nAuthor: Tim Seeley\nPrice: ₹700\n");  totalbill += 700; break;
                    case 24: printf("Book: Thirteen Reasons Why\nAuthor: Jay Asher\nPrice: ₹800\n");  totalbill += 800; break;
                    case 25: printf("Book: The Last House on Needless Street\nAuthor: Catriona Ward\nPrice: ₹800\n");  totalbill += 800; break;
                }
                break;
            case 5:
                switch (bookchoice) {
                    case 1: printf("Book: One Hundred Years of Solitude\nAuthor: Gabriel Garcia Marquez\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 2: printf("Book: The Master and Margarita\nAuthor: Mikhail Bulgakov\nPrice: ₹900\n"); totalbill += 900; break;
                    case 3: printf("Book: Crime and Punishment\nAuthor: Fyodor Dostoevsky\nPrice: ₹800\n");  totalbill += 800; break;
                    case 4: printf("Book: The Brothers Karamazov\nAuthor: Fyodor Dostoevsky\nPrice: ₹900\n");  totalbill += 900; break;
                    case 5: printf("Book: Anna Karenina\nAuthor: Leo Tolstoy\nPrice: ₹900\n");  totalbill += 900; break;
                    case 6: printf("Book: The Picture of Dorian Gray\nAuthor: Oscar Wilde\nPrice: ₹700\n");  totalbill += 700; break;
                    case 7: printf("Book: The Catcher in the Rye\nAuthor: J.D. Salinger\nPrice: ₹650\n"); totalbill += 650;  break;
                    case 8: printf("Book: The Great Gatsby\nAuthor: F. Scott Fitzgerald\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 9: printf("Book: The Grapes of Wrath\nAuthor: John Steinbeck\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 10: printf("Book: Brave New World\nAuthor: Aldous Huxley\nPrice: ₹750\n");  totalbill += 750; break;
                    case 11: printf("Book: 1984\nAuthor: George Orwell\nPrice: ₹700\n");  totalbill += 700; break;
                    case 12: printf("Book: The Road\nAuthor: Cormac McCarthy\nPrice: ₹800\n");  totalbill += 800; break;
                    case 13: printf("Book: The Goldfinch\nAuthor: Donna Tartt\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 14: printf("Book: The Kite Runner\nAuthor: Khaled Hosseini\nPrice: ₹900\n"); totalbill += 900;  break;
                    case 15: printf("Book: A Tale of Two Cities\nAuthor: Charles Dickens\nPrice: ₹600\n");  totalbill += 600; break;
                    case 16: printf("Book: The Bell Jar\nAuthor: Sylvia Plath\nPrice: ₹700\n"); totalbill += 700;  break;
                    case 17: printf("Book: The Handmaid's Tale\nAuthor: Margaret Atwood\nPrice: ₹800\n");  totalbill += 800; break;
                    case 18: printf("Book: Never Let Me Go\nAuthor: Kazuo Ishiguro\nPrice: ₹900\n");  totalbill += 900; break;
                    case 19: printf("Book: The Brief Wondrous Life of Oscar Wao\nAuthor: Junot Diaz\nPrice: ₹800\n");  totalbill += 800; break;
                    case 20: printf("Book: Their Eyes Were Watching God\nAuthor: Zora Neale Hurston\nPrice: ₹800\n"); totalbill += 800;  break;
                    case 21: printf("Book: The Night Circus\nAuthor: Erin Morgenstern\nPrice: ₹900\n");  totalbill += 900; break;
                    case 22: printf("Book: The Goldfinch\nAuthor: Donna Tartt\nPrice: ₹1000\n");  totalbill += 1000; break;
                    case 23: printf("Book: Life of Pi\nAuthor: Yann Martel\nPrice: ₹800\n");  totalbill += 800; break;
                    case 24: printf("Book: The Alchemist\nAuthor: Paulo Coelho\nPrice: ₹600\n");  totalbill += 600; break;
                    case 25: printf("Book: The Road\nAuthor: Cormac McCarthy\nPrice: ₹800\n");  totalbill += 800; break;
                    default:
                              printf("Invalid input");

                }
                break;
                
        }

    printf("Do you want to continue shopping? (1 for Yes, 0 for No): ");
        scanf("%d", &continueshopping);
        
    } while (continueshopping == 1);
    
    printf("Total bill: ₹%d\n", totalbill);

    if (totalbill == 0) 
{
    printf("Thank you");
} 
else 
{
    printf("Your Book will be delivered soon\n");
    printf("Thank you for visiting the Book Store!\n Keep Growing!\n");
    printf("For Contact-876752734");
    return 0;
}


}