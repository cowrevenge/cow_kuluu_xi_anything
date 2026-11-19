/* f_0x102da910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes two local objects, zeroes three optional output pointers, queries a handle/module, and returns the first negative status from the two query calls, or 0 if both succeed.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_102da910(Guest* g, uint32_t sp0,
                         uint32_t arg0, uint32_t arg1, uint32_t arg2,
                         uint32_t arg3, uint32_t arg4, uint32_t arg5)
{
    /*
       Original frame:
         ebp = sp0 - 4
         [ebp + 0x08] = arg0
         [ebp + 0x0c] = arg1
         [ebp + 0x10] = arg2
         [ebp + 0x14] = arg3
         [ebp + 0x18] = arg4
         [ebp + 0x1c] = arg5
         [ebp - 0x0c] = small local object
         [ebp - 0x3f4] = large local object
         [ebp - 0x08] = small local object + 4
         [ebp - 0x04] = small local object + 8
    */

    const uint32_t small = sp0 - 4u - 0xcu;
    const uint32_t large = sp0 - 4u - 0x3f4u;

    /* Allocate enough guest memory for the frame below sp0. */
    (void)cow_frame(g, sp0, 0x400u);

    /* 102da91c: lea ecx, [ebp - 0xc]; call 0x102e72fd */
    cow_thiscall_cdecl(g, COW_IMG(0x102e72fdu), small, 0u);

    /* 102da924: lea ecx, [ebp - 0x3f4]; call 0x102ea7f9 */
    cow_thiscall_cdecl(g, COW_IMG(0x102ea7f9u), large, 0u);

    /* 102da92f: mov eax, [ebp + 0x14]; if (eax != 0) *eax = 0; */
    if (arg3 != 0u)
    {
        wr32(arg3, 0u);
    }

    /* 102da93a: mov ebx, [ebp + 0x18]; if (ebx != 0) *ebx = 0; */
    if (arg4 != 0u)
    {
        wr32(arg4, 0u);
    }

    /* 102da943: mov edi, [ebp + 0x1c]; if (edi != 0) *edi = 0; */
    if (arg5 != 0u)
    {
        wr32(arg5, 0u);
    }

    /*
       102da94c:
         push esi                 ; 0
         push esi                 ; 0
         push dword [ebp + 0xc]   ; arg1
         lea ecx, [ebp - 0xc]
         push dword [ebp + 8]     ; arg0
         call 0x102e7337

       Callee pops 4 stack arguments.  Source order is last-pushed first:
         arg0, arg1, 0, 0
    */
    uint32_t r1 = cow_thiscall(g, COW_IMG(0x102e7337u), small, 4u,
                               arg0, arg1, 0u, 0u);

    uint32_t result;

    /* 102da95c: cmp eax, esi; jl 0x102da980 */
    if ((int32_t)r1 < 0)
    {
        result = r1;
    }
    else
    {
        /*
           102da960:
             push edi                 ; arg5
             push ebx                 ; arg4
             push dword [ebp + 0x14]  ; arg3
             lea ecx, [ebp - 0x3f4]
             push dword [ebp + 0x10]  ; arg2
             push 1
             push esi                 ; 0
             push dword [ebp - 4]
             push dword [ebp - 8]
             call 0x102ecc67

           Callee pops 8 stack arguments.  Source order is last-pushed first:
             [ebp - 8], [ebp - 4], 0, 1, arg2, arg3, arg4, arg5
        */
        const uint32_t local_m8 = rd32(sp0 - 4u - 0x8u);
        const uint32_t local_m4 = rd32(sp0 - 4u - 0x4u);

        uint32_t r2 = cow_thiscall(g, COW_IMG(0x102ecc67u), large, 8u,
                                   local_m8, local_m4, 0u, 1u,
                                   arg2, arg3, arg4, arg5);

        /* 102da97c: cmp eax, esi; jge 0x102da982; mov esi, eax */
        result = ((int32_t)r2 < 0) ? r2 : 0u;
    }

    /* 102da982: lea ecx, [ebp - 0x3f4]; call 0x102ea8a2 */
    cow_thiscall_cdecl(g, COW_IMG(0x102ea8a2u), large, 0u);

    /* 102da98d: lea ecx, [ebp - 0xc]; call 0x102e730a */
    cow_thiscall_cdecl(g, COW_IMG(0x102e730au), small, 0u);

    /*
       102da996: mov eax, esi
       edx is not written by this function after the final call, so leave
       whatever the final call left in g->edx.
    */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da910(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u + 4u * 0u);
    const uint32_t arg1 = rd32(sp0 + 4u + 4u * 1u);
    const uint32_t arg2 = rd32(sp0 + 4u + 4u * 2u);
    const uint32_t arg3 = rd32(sp0 + 4u + 4u * 3u);
    const uint32_t arg4 = rd32(sp0 + 4u + 4u * 4u);
    const uint32_t arg5 = rd32(sp0 + 4u + 4u * 5u);

    const uint32_t result = cow_fn_102da910(g, sp0,
                                            arg0, arg1, arg2,
                                            arg3, arg4, arg5);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
