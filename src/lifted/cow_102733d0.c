/* f_0x102733d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102733d0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(COW_IMG(0x1099b0f4u));
    d2 = (double)rdf32(COW_IMG(0x1099b138u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(COW_IMG(0x1099b12cu), t1);
    wr32(COW_IMG(0x1099b0f4u), arg1);
    wr32(COW_IMG(0x1099b130u), arg1);
    if (!(d2 <= d3))
    {
        ecx = t1;
        goto L_1027343b;
    }
    ecx = t1;
    t4 = rd32(COW_IMG(0x1099b1b4u) + arg1 * 4u);
    g->eax = t4;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x1028f4c0u), 2, COW_IMG(0x1099b13cu), t4);
    eax = t5;
    esi = 0u;
L_10273417: ;
    t6 = rd32(COW_IMG(0x1099b1b4u) + rd32(COW_IMG(0x1099b0f4u)) * 4u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x1028ec50u), 3, COW_IMG(0x1099b13cu), esi, t6);
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t7;
        esi = esi + 1u;
        goto L_10273417;
    }
    return;
L_1027343b: ;
    t8 = rd32(COW_IMG(0x1099b0d8u));
    wr32(COW_IMG(0x1099b134u), 0u);
    t9 = (t8 & 0xffff00ffu) | (uint8_t)(t8 >> 8u | 1u) << 8u;
    wr32(COW_IMG(0x1099b0d8u), t9);
    t10 = COW_IMG(0x1099b33cu) + ecx * 0x7cu;
    t11 = COW_IMG(0x1099b1d0u) + ecx * 0x34u;
    g->ecx = ecx * 0xdu;
    g->edx = t11;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102734b0u), 3, 6u, t11, t10);
    t12 = g->ecx;
    t13 = g->edx;
    g->eax = rd32(COW_IMG(0x1099b1ccu));
    g->edx = t13;
    t14 = rd32(COW_IMG(0x1099b1ccu));
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x1028f4c0u), 2, COW_IMG(0x1099b13cu), t14);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    esi = 0u;
L_1027348b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x1028ec50u), 3, COW_IMG(0x1099b13cu), esi, rd32(COW_IMG(0x1099b1ccu)));
    t18 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t17;
        edx = t18;
        esi = esi + 1u;
        goto L_1027348b;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102733d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102733d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
