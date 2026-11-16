/* f_0x102054a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102054a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 < 0)
    {
        eax = in_eax;
        edx = in_edx;
        loc_c = 0u;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
        t2 = g->edx;
        t3 = rd32(arg2 * 4u + rd32(t1));
        eax = rd32(t1);
        edx = t2;
        loc_c = t3;
    }
    g->edi = arg1;
    g->edx = edx;
    t4 = rd32(self + 8u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1011ae50u), t4, 2, arg1, loc_c);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg3 < 0)
    {
        edx = t6;
        goto L_102054ef;
    }
    ecx = t5;
    edx = t6;
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, arg3);
    t8 = g->edx;
    g->edi = arg1;
    cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, arg1, t7);
    g->edi = in_edi;
    return;
L_102054ef: ;
    g->edi = arg1;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, arg1, 0u);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102054a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102054a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
