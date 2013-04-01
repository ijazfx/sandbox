with Ada.Text_IO, Ada.Integer_Text_IO;
use Ada.Text_IO, Ada.Integer_Text_IO;

procedure Exercise4 is
   type MY_SMALL_INT is range 0..10;
   package MY_SMALL_INT_IO is new Ada.Text_IO.Integer_IO(MY_SMALL_INT);
   package IO renames MY_SMALL_INT_IO;
begin
   Put("Size (in bits) = "); IO.Put(MY_SMALL_INT'SIZE); New_Line;
   Put("Start = "); IO.Put(MY_SMALL_INT'FIRST); New_Line;
   Put("End = "); IO.Put(MY_SMALL_INT'LAST); New_Line;
end Exercise4;
