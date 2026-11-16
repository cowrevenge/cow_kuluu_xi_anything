/* f_0x10077a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10077a20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_22c;
    uint32_t loc_234;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 0x224u, in_esi);
    wr32(sp0 - 0x228u, in_edi);
    if (arg2 == 0u) goto L_10077aa5;
    if (rd8(COW_IMG(0x1047d495u)) == 0u)
    {
        t1 = rd32(arg1 + 4u);
        wr32(sp0 - 0x22cu, t1);
        wr32(sp0 - 0x230u, COW_IMG(0x103551e8u));
        wr32(sp0 - 0x234u, COW_IMG(0x10357fc4u));
        wr32(sp0 - 0x238u, sp0 - 0x220u);
        ecx = t1;
        edx = sp0 - 0x220u;
        loc_22c = t1;
        loc_234 = COW_IMG(0x10357fc4u);
    }
    else
    {
        wr32(sp0 - 0x22cu, arg2);
        wr32(sp0 - 0x230u, COW_IMG(0x103551e8u));
        wr32(sp0 - 0x234u, COW_IMG(0x10357fe0u));
        wr32(sp0 - 0x238u, sp0 - 0x220u);
        ecx = self;
        edx = in_edx;
        loc_22c = arg2;
        loc_234 = COW_IMG(0x10357fe0u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x224u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x220u, loc_234, COW_IMG(0x103551e8u), loc_22c, in_edi);
    t3 = g->edx;
    t4 = (t2 & 0xffffff00u) | rd8(COW_IMG(0x1047d494u));
    wr32(sp0 - 0x22cu, t4);
    wr32(sp0 - 0x230u, sp0 - 0x220u);
    g->edx = t3;
    g->esp = sp0 - 0x228u;
    t5 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x220u, t4);
    t6 = g->edx;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_10077ab9;
    }
    eax = t5;
    ecx = rd32(COW_IMG(0x1057876cu));
    edx = t6;
    wr32(sp0 - 0x22cu, arg1);
    wr32(sp0 - 0x230u, arg2);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x228u;
    t7 = cow_thiscall(g, COW_IMG(0x10159830u), ecx, 2, arg2, arg1);
    t8 = g->edx;
    g->esi = rd32(sp0 - 0x224u);
    g->edi = rd32(sp0 - 0x228u);
    g->edx = t8;
    return t7;
L_10077aa5: ;
    if (rd8(COW_IMG(0x1047d496u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d496u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d496u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x228u;
        t9 = cow_thiscall(g, COW_IMG(0x101a1cb0u), rd32(COW_IMG(0x10662794u)), 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_10077ab9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
