/* f_0x102da99e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   zeroes the three output pointers, runs the small/large object lifecycle, and returns 0 on success or the first negative status.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_102da99e(Guest* g, uint32_t sp0,
                         uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6)
{
    const uint32_t saved_eax = g->eax;
    const uint32_t saved_edx = g->edx;
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t small = cow_frame(g, sp0, 0x10u);   /* [ebp - 0xc]  */
    const uint32_t large = cow_frame(g, sp0, 0x3f8u);  /* [ebp - 0x3f4] */

    const uint32_t ebp = sp0 - 4u;

    /* Enter the original stack frame state. */
    g->eax = saved_eax;
    g->edx = saved_edx;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = ebp;

    cow_thiscall_cdecl(g, COW_IMG(0x102e72fdu), small, 0u);
    cow_thiscall_cdecl(g, COW_IMG(0x102ea7f9u), large, 0u);

    /*
     * Original:
     *   mov eax, [ebp + 0x14]     ; a4
     *   xor esi, esi
     *   cmp eax, esi
     *   ...
     *   mov ebx, [ebp + 0x18]     ; a5
     *   mov edi, [ebp + 0x1c]     ; a6
     */
    g->eax = a4;
    g->esi = 0u;
    g->ebx = a5;
    g->edi = a6;

    if (a4 != 0u)
        wr32(a4, 0u);
    if (a5 != 0u)
        wr32(a5, 0u);
    if (a6 != 0u)
        wr32(a6, 0u);

    /*
     * Original call at 102da9e6:
     *   push 1
     *   push esi
     *   push dword ptr [ebp + 0xc]   ; a2
     *   lea ecx, [ebp - 0xc]
     *   push dword ptr [ebp + 8]     ; a1
     *   call 0x102e7337
     *
     * Thiscall with 4 stack arguments.  ecx is the this pointer.
     */
    g->ecx = small;
    g->eax = a4;
    g->esi = 0u;
    g->ebx = a5;
    g->edi = a6;

    uint32_t result = cow_thiscall(g, COW_IMG(0x102e7337u), small, 4u,
                                   a1, a2, 0u, 1u);

    /*
     * Original:
     *   cmp eax, esi
     *   jl  0x102daa0f
     *   ... call 0x102ecc67 ...
     *   cmp eax, esi
     *   jge 0x102daa11
     *   mov esi, eax
     *   ...
     *   mov eax, esi
     */
    if ((int32_t)result >= 0)
    {
        /*
         * Original call at 102daa06:
         *   push edi                       ; current edi, originally a6
         *   push ebx                       ; current ebx, originally a5
         *   push dword ptr [ebp + 0x14]    ; a4
         *   lea ecx, [ebp - 0x3f4]
         *   push dword ptr [ebp + 0x10]    ; a3
         *   push 1
         *   push esi                       ; current esi, originally 0
         *   push dword ptr [ebp - 4]
         *   push dword ptr [ebp - 8]
         *   call 0x102ecc67
         *
         * The callee pops 8 stack words and ecx is the this pointer.
         */
        g->ecx = large;
        g->esi = 0u;
        g->ebx = a5;
        g->edi = a6;

        result = cow_thiscall(g, COW_IMG(0x102ecc67u), large, 8u,
                              rd32(small + 4u),   /* [ebp - 8]  */
                              rd32(small + 8u),   /* [ebp - 4]  */
                              0u,
                              1u,
                              a3,
                              a4,
                              g->ebx,
                              g->edi);

        if ((int32_t)result >= 0)
            result = 0u;
    }

    /*
     * Destructor/finalizer calls.  The original still has esi holding the
     * eventual return value, but eax is overwritten by the final mov.
     */
    g->esi = result;
    g->eax = result;
    g->ebx = a5;
    g->edi = a6;
    g->ebp = ebp;

    g->ecx = large;
    cow_thiscall_cdecl(g, COW_IMG(0x102ea8a2u), large, 0u);

    g->ecx = small;
    cow_thiscall_cdecl(g, COW_IMG(0x102e730au), small, 0u);

    /*
     * Original epilogue restores callee-saved registers from the frame and
     * then does leave; therefore final ebx/esi/edi/ebp are the entry values.
     */
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102da99e(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t a1 = rd32(sp0 +  4u);
    const uint32_t a2 = rd32(sp0 +  8u);
    const uint32_t a3 = rd32(sp0 + 12u);
    const uint32_t a4 = rd32(sp0 + 16u);
    const uint32_t a5 = rd32(sp0 + 20u);
    const uint32_t a6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_102da99e(g, sp0, a1, a2, a3, a4, a5, a6);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
