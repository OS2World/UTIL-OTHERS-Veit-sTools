unit gross;
(* Veit Kannegieser * 08.11.1997 *)

interface

procedure gross_str(var s:string);

implementation

procedure gross_str(var s:string);
  var
    zaehler:word;
  begin
    for zaehler:=1 to length(s) do
      case s[zaehler] of
        '�':s[zaehler]:='�';
        '�':s[zaehler]:='�';
        '�':s[zaehler]:='�';
      else
        s[zaehler]:=upcase(s[zaehler]);
      end;
  end;

end.
