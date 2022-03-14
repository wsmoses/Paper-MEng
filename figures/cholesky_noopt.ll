entry:
  %__cilkrts_sf = alloca %__cilkrts_stack_frame, align 8
  call void @__cilkrts_enter_frame_1(%__cilkrts_stack_frame* nonnull %__cilkrts_sf)
  %depth.addr = alloca i32, align 4
  %lower.addr = alloca i32, align 4
  %a.addr = alloca %struct.InternalNode*, align 8
  %b.addr = alloca %struct.InternalNode*, align 8
  %r00 = alloca %struct.InternalNode*, align 8
  %r01 = alloca %struct.InternalNode*, align 8
  %r10 = alloca %struct.InternalNode*, align 8
  %r11 = alloca %struct.InternalNode*, align 8
  store i32 %depth, i32* %depth.addr, align 4
  store i32 %lower, i32* %lower.addr, align 4
  store %struct.InternalNode* %a, %struct.InternalNode** %a.addr, align 8
  store %struct.InternalNode* %b, %struct.InternalNode** %b.addr, align 8
  %cmp = icmp ne %struct.InternalNode* %a, null
  %cmp1 = icmp ne %struct.InternalNode* %b, null
  %or.cond = and i1 %cmp, %cmp1
  br i1 %or.cond, label %cond.end, label %cond.false