/* f_0x10273180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10273180(Guest* g)
{
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 > 0)
    {
        eax = arg1;
    }
    else
    {
        eax = 6u;
    }
    t1 = rd32(COW_IMG(0x1099b0f4u));
    wr32(COW_IMG(0x1099b12cu), t1);
    wr32(COW_IMG(0x1099b0f4u), t1 + 1u);
    if ((int32_t)(t1 + 1u) < (int32_t)eax)
    {
        ecx = t1;
        edx = t1 + 1u;
    }
    else
    {
        ecx = t1;
        wr32(COW_IMG(0x1099b0f4u), 0u);
        edx = 0u;
    }
    d2 = (double)rdf32(COW_IMG(0x1099b138u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(COW_IMG(0x1099b130u), edx);
    if (!(d2 <= d3)) goto L_10273203;
    t4 = rd32(COW_IMG(0x1099b1b4u) + edx * 4u);
    g->eax = t4;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x1028f4c0u), 2, COW_IMG(0x1099b13cu), t4);
    eax = t5;
    esi = 0u;
L_102731df: ;
    t6 = rd32(COW_IMG(0x1099b1b4u) + rd32(COW_IMG(0x1099b0f4u)) * 4u);
    g->eax = eax;
    g->edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1028ec50u), 3, COW_IMG(0x1099b13cu), esi, t6);
    t8 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t7;
        esi = esi + 1u;
        goto L_102731df;
    }
    eax = t7;
    edx = t8;
    g->edx = edx;
    return eax;
L_10273203: ;
    t9 = rd32(COW_IMG(0x1099b0d8u));
    wr32(COW_IMG(0x1099b134u), 0u);
    t10 = (t9 & 0xffff00ffu) | (uint8_t)(t9 >> 8u | 1u) << 8u;
    wr32(COW_IMG(0x1099b0d8u), t10);
    t11 = COW_IMG(0x1099b33cu) + ecx * 0x7cu;
    t12 = COW_IMG(0x1099b1d0u) + ecx * 0x34u;
    g->ecx = ecx * 0xdu;
    g->edx = t12;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102734b0u), 3, 6u, t12, t11);
    t13 = g->ecx;
    t14 = g->edx;
    g->eax = rd32(COW_IMG(0x1099b1ccu));
    g->edx = t14;
    t15 = rd32(COW_IMG(0x1099b1ccu));
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x1028f4c0u), 2, COW_IMG(0x1099b13cu), t15);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    esi = 0u;
L_10273253: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x1028ec50u), 3, COW_IMG(0x1099b13cu), esi, rd32(COW_IMG(0x1099b1ccu)));
    t19 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t18;
        edx = t19;
        esi = esi + 1u;
        goto L_10273253;
    }
    eax = t18;
    edx = t19;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10273180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
