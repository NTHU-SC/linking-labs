subroutine my_sum(ret, x, y)
  double precision, intent(in)  :: x, y
  double precision, intent(out) :: ret
  print *, "Called Fortran sum funtion with ", "x ", x, "and y ", y, "."
  ret = x + y
end subroutine
