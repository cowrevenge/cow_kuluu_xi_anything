/* f_0x1032104e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Processes a structured object with validation, iterating through entries and calling helper functions for matching items.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_1032104e(Guest* g, uint32_t sp0)
{
    /* Stack args: [ebp+8]=param_1(esi), [ebp+c]=param_2, [ebp+10]=param_3, [ebp+14]=param_4,
       [ebp+18]=param_5(ecx for first check), [ebp+1c]=param_6(byte flag), [ebp+20]=param_7, [ebp+24]=param_8 */
    /* ebp = sp0 + 4 (after push ebp) */
    const uint32_t ebp = sp0 + 4u;

    /* Local frame: sub esp, 0x18 means locals at [ebp-0x18]..[ebp-4] */
    /* We use cow_frame for the local buffer area. The original uses [ebp-0x18] through [ebp-4]. */
    /* cow_frame(g, sp0, bytes_below_sp0): [ebp - X] is sp0 - 4 - X */
    /* So [ebp - 0x18] = sp0 - 4 - 0x18 = sp0 - 0x1c */
    /* [ebp - 0x14] = sp0 - 4 - 0x14 = sp0 - 0x18 */
    /* [ebp - 0x10] = sp0 - 4 - 0x10 = sp0 - 0x14 */
    /* [ebp - 0xc]  = sp0 - 4 - 0xc  = sp0 - 0x10 */
    /* [ebp - 8]    = sp0 - 4 - 8    = sp0 - 0xc */
    /* [ebp - 4]    = sp0 - 4 - 4    = sp0 - 8 */

    const uint32_t local_18_addr = sp0 - 0x1cu;  /* [ebp-0x18] */
    const uint32_t local_14_addr = sp0 - 0x18u;  /* [ebp-0x14] byte flag */
    const uint32_t local_10_addr = sp0 - 0x14u;  /* [ebp-0x10] int */
    const uint32_t local_c_addr  = sp0 - 0x10u;  /* [ebp-0xc] int */
    const uint32_t local_8_addr  = sp0 - 0xcu;   /* [ebp-8] int */
    const uint32_t local_4_addr  = sp0 - 8u;     /* [ebp-4] int */

    /* Read stack arguments from the original frame (before our modifications) */
    /* In the original, after push ebp/mov ebp,esp/sub esp,0x18:
       [ebp+8] = param_1 at sp0+4+4*0 = sp0+4... wait let me recheck.
       
       Original: push ebp (esp=sp0-4), mov ebp,esp (ebp=sp0-4), sub esp,0x18 (esp=sp0-0x1c)
       Then [ebp+8] = [sp0-4+8] = [sp0+4] which is the return address... no.
       
       Actually in the original calling convention with 8 stack args:
       At entry, esp points to return address. push ebp makes esp=sp0-4, ebp=sp0-4.
       [ebp+8] = [sp0-4+8] = [sp0+4] = first stack arg (param_1)
       [ebp+c] = [sp0+8] = param_2
       [ebp+10] = [sp0+0xc] = param_3
       [ebp+14] = [sp0+0x10] = param_4
       [ebp+18] = [sp0+0x14] = param_5
       [ebp+1c] = [sp0+0x18] = param_6 (byte)
       [ebp+20] = [sp0+0x1c] = param_7
       [ebp+24] = [sp0+0x20] = param_8
    */

    const uint32_t param_1_addr = sp0 + 4u;   /* [ebp+8] */
    const uint32_t param_2_addr = sp0 + 8u;   /* [ebp+c] */
    const uint32_t param_3_addr = sp0 + 0xcu; /* [ebp+10] */
    const uint32_t param_4_addr = sp0 + 0x10u;/* [ebp+14] */
    const uint32_t param_5_addr = sp0 + 0x14u;/* [ebp+18] */
    const uint32_t param_6_addr = sp0 + 0x18u;/* [ebp+1c] byte */
    const uint32_t param_7_addr = sp0 + 0x1cu;/* [ebp+20] */
    const uint32_t param_8_addr = sp0 + 0x20u;/* [ebp+24] */

    /* Initialize local_14 byte to 0: and byte ptr [ebp-0x14], 0 */
    wr8(local_14_addr, 0);

    /* eax = dword ptr [ebp+c] -> param_2 */
    uint32_t param_2_val = rd32(param_2_addr);
    /* eax = dword ptr [eax+8] */
    uint32_t local_14_val = rd32(param_2_val + 8u);
    wr32(local_10_addr, local_14_val);

    /* cmp eax, -1; jl -> signed comparison */
    if ((int32_t)local_14_val < (int32_t)-1) {
        cow_cdecl(g, COW_IMG(0x10321895u), 0);
    } else {
        /* mov ecx, dword ptr [ebp+0x18] -> param_5 */
        uint32_t param_5_val = rd32(param_5_addr);
        /* cmp eax, dword ptr [ecx+4]; jl -> signed */
        if ((int32_t)local_14_val < (int32_t)rd32(param_5_val + 4u)) {
            /* fall through to next check at 0x10321073 */
        } else {
            cow_cdecl(g, COW_IMG(0x10321895u), 0);
        }
    }

    /* At 0x10321073: push ebx, push esi, mov esi,[ebp+8], mov ebx=0xe06d7363, push edi, mov edi=0x19930520 */
    uint32_t esi = rd32(param_1_addr);  /* param_1 */
    const uint32_t ebx_const = 0xe06d7363u;
    uint32_t edi = 0x19930520u;

    /* cmp dword ptr [esi], ebx; jne -> if *param_1 != 0xe06d7363, goto LAB_103211d6 */
    if (rd32(esi) != ebx_const) {
        goto lab_103211d6;
    }

    /* cmp dword ptr [esi+0x10], 3; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x10u) != 3u) {
        goto lab_103210f3;
    }

    /* cmp dword ptr [esi+0x14], edi; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x14u) != edi) {
        goto lab_103210f3;
    }

    /* cmp dword ptr [esi+0x1c], 0; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x1cu) != 0u) {
        goto lab_103210f3;
    }

    /* call 0x1031a04d -> returns pointer in eax */
    uint32_t ret_val = cow_cdecl(g, COW_IMG(0x1031a04du), 0);
    /* cmp dword ptr [eax+0x6c], 0; je -> goto 0x103211d1 (which is pop edi/esi/ebx/leave/ret) */
    if (rd32(ret_val + 0x6cu) == 0u) {
        return; /* equivalent to jumping to 0x103211d1 which just cleans up and returns */
    }

    /* call 0x1031a04d again */
    ret_val = cow_cdecl(g, COW_IMG(0x1031a04du), 0);
    /* esi = dword ptr [eax+0x6c] */
    esi = rd32(ret_val + 0x6cu);

    /* call 0x1031a04d again */
    ret_val = cow_cdecl(g, COW_IMG(0x1031a04du), 0);
    /* eax = dword ptr [eax+0x70] */
    uint32_t param_3_new = rd32(ret_val + 0x70u);

    /* push 1; push esi -> args for FUN_10324c86(esi, 1) */
    /* mov dword ptr [ebp+0x10], eax -> overwrite param_3 slot? No, this is writing to the stack arg area.
       Wait: [ebp+0x10] = [sp0-4+0x10] = [sp0+0xc] which is param_3_addr. So it overwrites param_3 on the stack. */
    wr32(param_3_addr, param_3_new);

    /* mov byte ptr [ebp-0x14], 1 */
    wr8(local_14_addr, 1);

    /* call FUN_10324c86(esi, 1) - cdecl, caller pops. Args pushed: push 1, push esi. So param_1=esi, param_2=1 */
    uint32_t check_result = cow_cdecl(g, COW_IMG(0x10324c86u), 2, esi, 1u);

    /* pop ecx; test eax,eax; pop ecx; jne -> if result != 0, goto 0x103210d5 */
    if (check_result == 0) {
        cow_cdecl(g, COW_IMG(0x10321895u), 0);
    }

    /* At 0x103210d5: cmp dword ptr [esi], ebx; jne -> goto LAB_103211d6 */
    if (rd32(esi) != ebx_const) {
        goto lab_103211d6;
    }

    /* cmp dword ptr [esi+0x10], 3; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x10u) != 3u) {
        goto lab_103210f3;
    }

    /* cmp dword ptr [esi+0x14], edi; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x14u) != edi) {
        goto lab_103210f3;
    }

    /* cmp dword ptr [esi+0x1c], 0; jne -> goto 0x103210f3 */
    if (rd32(esi + 0x1cu) != 0u) {
        goto lab_103210f3;
    }

    /* call FUN_10321895() */
    cow_cdecl(g, COW_IMG(0x10321895u), 0);

lab_103210f3:
    /* cmp dword ptr [esi], ebx; jne -> goto LAB_103211d6 */
    if (rd32(esi) != ebx_const) {
        goto lab_103211d6;
    }

    /* cmp dword ptr [esi+0x10], 3; jne -> goto LAB_103211d6 */
    if (rd32(esi + 0x10u) != 3u) {
        goto lab_103211d6;
    }

    /* cmp dword ptr [esi+0x14], edi; jne -> goto LAB_103211d6 */
    if (rd32(esi + 0x14u) != edi) {
        goto lab_103211d6;
    }

    /* mov edi, dword ptr [ebp-0x10] -> edi = local_14_val */
    edi = rd32(local_10_addr);

    /* Set up call to FUN_1031652b(param_5, param_7, local_14, &local_8, &local_1c) */
    /* Push order: push [ebp-0x18], push [ebp-4], push edi(local_14), push [ebp+0x20](param_7), push [ebp+0x18](param_5) */
    /* cdecl args in source order: param_1=param_5, param_2=param_7, param_3=local_14(edi), param_4=&local_8, param_5=&local_1c */
    uint32_t piVar2 = cow_cdecl(g, COW_IMG(0x1031652bu), 5,
        rd32(param_5_addr),
        rd32(param_7_addr),
        edi,
        local_8_addr,
        local_18_addr);

    /* mov ebx, eax -> ebx = piVar2 */
    uint32_t ebx_val = piVar2;

    /* Loop: at 0x1032112a */
loop_start:
    /* mov eax, dword ptr [ebp-4] -> local_8 (the counter) */
    uint32_t local_8_val = rd32(local_4_addr);
    /* cmp eax, dword ptr [ebp-0x18] -> compare with local_1c */
    uint32_t local_1c_val = rd32(local_18_addr);

    if (local_8_val >= local_1c_val) {
        goto loop_exit;
    }

    /* cmp dword ptr [ebx], edi; jg -> signed: if *piVar2 > edi, goto 0x103211b6 */
    if ((int32_t)rd32(ebx_val) > (int32_t)edi) {
        goto loop_continue;
    }

    /* cmp edi, dword ptr [ebx+4]; jg -> signed: if edi > piVar2[1], goto 0x103211b6 */
    if ((int32_t)edi > (int32_t)rd32(ebx_val + 4u)) {
        goto loop_continue;
    }

    /* mov eax, dword ptr [ebx+0x10] -> iVar1 = piVar2[4] */
    uint32_t iVar1 = rd32(ebx_val + 0x10u);
    /* mov dword ptr [ebp+8], eax -> overwrite param_1 slot with iVar1 */
    wr32(param_1_addr, iVar1);

    /* mov eax, dword ptr [ebx+0xc] -> local_c = piVar2[3] */
    uint32_t local_c_val = rd32(ebx_val + 0xcu);
    /* test eax,eax; mov dword ptr [ebp-0xc], eax */
    wr32(local_c_addr, local_c_val);

    if ((int32_t)local_c_val <= 0) {
        goto lab_103211b3;
    }

    /* Inner loop over piVar2[3] entries */
inner_outer_loop:
    /* mov eax, dword ptr [esi+0x1c] */
    uint32_t esi_plus_1c = rd32(esi + 0x1cu);
    /* mov eax, dword ptr [eax+0xc] -> piVar4 base */
    uint32_t piVar4_base = rd32(esi_plus_1c + 0xcu);
    /* lea edi, [eax+4] -> edi points to first element after count */
    uint32_t edi_inner = piVar4_base + 4u;
    /* mov eax, dword ptr [eax] -> local_8_inner = *piVar4 (count) */
    uint32_t local_8_inner = rd32(piVar4_base);
    /* test eax,eax; mov dword ptr [ebp-8], eax */
    wr32(local_8_addr, local_8_inner);

    if ((int32_t)local_8_inner <= 0) {
        goto inner_outer_next;
    }

inner_inner_loop:
    /* push dword ptr [esi+0x1c] -> param_3 for FUN_103212ab */
    /* push dword ptr [edi] -> param_2 */
    /* push dword ptr [ebp+8] -> param_1 (which is iVar1, stored at param_1_addr) */
    uint32_t arg1 = rd32(param_1_addr);  /* iVar1 */
    uint32_t arg2 = rd32(edi_inner);     /* *piVar4 */
    uint32_t arg3 = rd32(esi + 0x1cu);   /* esi+0x1c value */

    uint32_t match_result = cow_cdecl(g, COW_IMG(0x103212abu), 3, arg1, arg2, arg3);

    if (match_result != 0) {
        /* Call FUN_103213bc with many args */
        /* Push order (last pushed = first arg):
           push esi -> param_1
           push [ebp+c] -> param_2  
           push [ebp+10] -> param_3
           push [ebp+14] -> param_4
           push [ebp+18] -> param_5
           push [ebp+8] -> param_6 (iVar1)
           push [edi] -> param_7 (*piVar4)
           push ebx -> param_8 (piVar2)
           push [ebp+20] -> param_9 (param_7)
           push [ebp+24] -> param_10 (param_8)
           push [ebp-0x14] -> param_11 (local_18 byte flag as dword)
        */
        /* cdecl: args in source order = reverse of push order */
        cow_cdecl(g, COW_IMG(0x103213bcu), 11,
            esi,
            rd32(param_2_addr),
            rd32(param_3_addr),
            rd32(param_4_addr),
            rd32(param_5_addr),
            rd32(param_1_addr),   /* iVar1 */
            rd32(edi_inner),      /* *piVar4 */
            ebx_val,              /* piVar2 */
            rd32(param_7_addr),
            rd32(param_8_addr),
            (uint32_t)rd8(local_14_addr));  /* local_18 flag */

        goto lab_103211b3;
    }

    /* dec dword ptr [ebp-8] */
    local_8_inner = rd32(local_8_addr);
    local_8_inner--;
    wr32(local_8_addr, local_8_inner);

    /* add edi, 4 */
    edi_inner += 4u;

    /* cmp dword ptr [ebp-8], eax (eax=0 from test earlier... wait) */
    /* At this point eax is the result of the last test/cmp. Let me re-trace.
       After the call to FUN_103212ab, eax has its return value. But we checked jne and fell through.
       The cmp at 0x1032117b compares [ebp-8] with eax. What is eax here?
       
       Looking back: after the call at 0x10321169, add esp,0xc, test eax,eax, jne... 
       If we reach 0x10321175, eax is still the return value of FUN_103212ab which was 0 (since we didn't take jne).
       
       So cmp [ebp-8], 0; jg -> continue loop if counter > 0 */
    if ((int32_t)local_8_inner > 0) {
        goto inner_inner_loop;
    }

inner_outer_next:
    /* dec dword ptr [ebp-0xc] */
    local_c_val = rd32(local_c_addr);
    local_c_val--;
    wr32(local_c_addr, local_c_val);

    /* add dword ptr [ebp+8], 0x10 -> iVar1 += 0x10 */
    uint32_t cur_iVar1 = rd32(param_1_addr);
    cur_iVar1 += 0x10u;
    wr32(param_1_addr, cur_iVar1);

    /* cmp dword ptr [ebp-0xc], 0; jg -> continue outer inner loop */
    if ((int32_t)local_c_val > 0) {
        goto inner_outer_loop;
    }

lab_103211b3:
    /* mov edi, dword ptr [ebp-0x10] -> restore edi = local_14_val */
    edi = rd32(local_10_addr);

loop_continue:
    /* inc dword ptr [ebp-4] */
    uint32_t cnt = rd32(local_4_addr);
    cnt++;
    wr32(local_4_addr, cnt);

    /* add ebx, 0x14 */
    ebx_val += 0x14u;

    goto loop_start;

loop_exit:
    /* cmp byte ptr [ebp+0x1c], 0; je -> goto 0x103211d1 (return) */
    if (rd8(param_6_addr) == 0) {
        return;
    }

    /* push 1; push esi; call FUN_10321740(esi, 1) */
    cow_cdecl(g, COW_IMG(0x10321740u), 2, esi, 1u);
    return;

lab_103211d6:
    /* cmp byte ptr [ebp+0x1c], 0; jne -> goto 0x103211fc */
    if (rd8(param_6_addr) != 0) {
        /* Tail call to FUN_1032181c() */
        cow_cdecl(g, COW_IMG(0x1032181cu), 0);
        return;
    }

    /* Call FUN_10321201 with 8 args */
    /* Push order: push [ebp+24], push [ebp+20], push [ebp-0x10], push [ebp+18], push [ebp+14], push [ebp+10], push [ebp+c], push esi */
    /* cdecl source order = reverse of pushes: param_1=esi, param_2=[ebp+c], param_3=[ebp+10], param_4=[ebp+14], 
       param_5=[ebp+18], param_6=[ebp-0x10](local_14), param_7=[ebp+20], param_8=[ebp+24] */
    cow_cdecl(g, COW_IMG(0x10321201u), 8,
        esi,
        rd32(param_2_addr),
        rd32(param_3_addr),
        rd32(param_4_addr),
        rd32(param_5_addr),
        rd32(local_10_addr),
        rd32(param_7_addr),
        rd32(param_8_addr));

    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032104e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032104e(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
