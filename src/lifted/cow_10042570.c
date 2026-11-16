/* f_0x10042570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10042570(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100425de;
    }
    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100425de;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xbcu, 4u);
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
    t4 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t1 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100425d4;
    }
    eax = t3;
    edx = t4;
    esi = t1;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10055570u), eax, esi, edx, 1, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1003b540u), esi + 0x54u, 0);
    t7 = g->edx;
    wr32(esi + 0x54u, COW_IMG(0x1032ae94u));
    wr32(esi, COW_IMG(0x1032ae64u));
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10042530u), esi, 2, arg1, arg2);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_100425d4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x10042530u), 0u, 2, arg1, arg2);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_100425de: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10042570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10042570(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
