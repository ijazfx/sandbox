with Ada.Text_IO, Ada.Integer_Text_IO;
use Ada.Text_IO, Ada.Integer_Text_IO;

procedure Exercise3 is
   -- defining a custom type
   type MY_TYPE is range -100..100;
   -- add ability to output the new type
   package MY_TYPE_IO is new Ada.Text_IO.Integer_IO(MY_TYPE);
   use MY_TYPE_IO;
   -- defining a sub type
   subtype MY_SMALL_INTEGER is INTEGER range 1..20;
   x		: MY_TYPE := 100;
   y		: MY_SMALL_INTEGER := 20;
   z		: INTEGER := 25;
   c		: constant := 50;
begin
   Put(x); New_Line;
   Put(y); New_Line;
   Put(z); New_Line;
   -- following is not allowed
   -- x := y;
   -- so we need to convert
   x := MY_TYPE(y);
   Put(x); New_Line;
   x := x + c;
   -- following will raise Constraint_Error because sum is higher than the
   -- upper limit.
   -- y := y + c;
   -- y is sub type of INTEGER and c is universal integer and therefore does
   -- not require explicit conversion to INTEGER. x is custom integer type and
   -- hence requires explicit conversion.
   z := INTEGER(x) + y + c;
   Put(z);
end Exercise3;
