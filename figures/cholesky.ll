entry:
  %__cilkrts_sf = alloca %__cilkrts_stack_frame, align 8
  call void @__cilkrts_enter_frame_1(%__cilkrts_stack_frame* nonnull %__cilkrts_sf)
  %r00.sroa.0 = alloca i64, align 8
  %r01.sroa.0 = alloca i64, align 8
  %r10.sroa.0 = alloca i64, align 8
  %cmp = icmp ne %struct.InternalNode* %a, null
  %cmp1 = icmp ne %struct.InternalNode* %b, null
  %or.cond = and i1 %cmp, %cmp1
  br i1 %or.cond, label %cond.end, label %cond.false