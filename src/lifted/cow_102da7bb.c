/* f_0x102da7bb - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   initializes two local objects, zeroes three output pointers, attempts a lookup/operation, and returns a negative status or zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102da7bb(Guest* g, uint32_t sp0,
                         uint32_t arg0, uint32_t arg1,
                         uint32_t arg2, uint32_t arg3,
                         uint32_t arg4)
{
    /* [ebp - 0x10] is sp0 - 4 - 0x10 = sp0 - 0x14 */
    const uint32_t obj1 = sp0 - 0x14u;

    /* [ebp - 0x3f8] is sp0 - 4 - 0x3f8 = sp0 - 0x3fc */
    const uint32_t obj2 = sp0 - 0x3fcu;

    /* [ebp - 8] and [ebp - 4] are fields/locals inside obj1's area. */
    const uint32_t local_m8 = sp0 - 0xcu;
    const uint32_t local_m4 = sp0 - 0x8u;

    /* Reserve the original's local frame area below sp0. */
    (void)cow_frame(g, sp0, 0x1000u);

    /* 102da7c7: lea ecx, [ebp - 0x10]; call 0x102e70c5 */
    cow_thiscall_cdecl(g, COW_IMG(0x102e70c5u), obj1, 0u);

    /* 102da7cf: lea ecx, [ebp - 0x3f8]; call 0x102ea7f9 */
    cow_thiscall_cdecl(g, COW_IMG(0x102ea7f9u), obj2, 0u);

    /* 102da7da: if (arg2 != 0) *arg2 = 0; */
    if (arg2 != 0u) {
        wr32(arg2, 0u);
    }

    /* 102da7e5: if (arg3 != 0) *arg3 = 0; */
    if (arg3 != 0u) {
        wr32(arg3, 0u);
    }

    /* 102da7ee: if (arg4 != 0) *arg4 = 0; */
    if (arg4 != 0u) {
        wr32(arg4, 0u);
    }

    /* 102da7f7: push edi; push [ebp+8]; lea ecx,[ebp-0x10]; call 0x102e70d7
       Last pushed is first argument: (arg0, 0). */
    int32_t r = (int32_t)cow_thiscall(g, COW_IMG(0x102e70d7u), obj1, 2u,
                                      arg0, 0u);

    uint32_t edi = 0u;

    /* 102da803: cmp eax, edi; jl 0x102da829 */
    if (r >= 0) {
        /* 102da807: call 0x102ecc67 with ecx=[ebp-0x3f8] and eight stack args.
           Push order:
             push esi                 -> arg4
             push ebx                 -> arg3
             push [ebp+0x10]          -> arg2
             push [ebp+0xc]           -> arg1
             push 1
             push [ebp+8]             -> arg0
             push [ebp-4]             -> value at local_m4
             push [ebp-8]             -> value at local_m8
           First argument is the last pushed: local_m8, local_m4, arg0, 1, arg1, arg2, arg3, arg4. */
        r = (int32_t)cow_thiscall(g, COW_IMG(0x102ecc67u), obj2, 8u,
                                  rd32(local_m8),
                                  rd32(local_m4),
                                  arg0,
                                  1u,
                                  arg1,
                                  arg2,
                                  arg3,
                                  arg4);

        /* 102da825: cmp eax, edi; jge 0x102da82b */
        if (r < 0) {
            edi = (uint32_t)r;
        }
    } else {
        /* 102da829: mov edi, eax */
        edi = (uint32_t)r;
    }

    /* 102da82b: lea ecx, [ebp - 0x3f8]; call 0x102ea8a2 */
    cow_thiscall_cdecl(g, COW_IMG(0x102ea8a2u), obj2, 0u);

    /* 102da836: lea ecx, [ebp - 0x10]; call 0x102e72f2 */
    cow_thiscall_cdecl(g, COW_IMG(0x102e72f2u), obj1, 0u);

    /* 102da83e: mov eax, edi */
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da7bb(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);
    const uint32_t arg4 = rd32(sp0 + 20u);

    const uint32_t result = cow_fn_102da7bb(g, sp0, arg0, arg1, arg2, arg3, arg4);

    g->esp = sp0;
    rt_return(g, result, 20u);        /* ret 0x14 */
}
/* COW_ADAPTER END */
