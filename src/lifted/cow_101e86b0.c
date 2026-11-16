/* f_0x101e86b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e86b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101efb20u), self, 0);
    t4 = g->edx;
    if (t3 != 0u)
    {
        edx = t4;
        ebx = t1;
        edi = t3;
        goto L_101e8734;
    }
    eax = t3;
    edx = t4;
    ebx = t1;
    wr32(self + 0x16cu, 0xffffffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101e6f70u), self, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_101e86db: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ed0u));
    t18 = g->edx;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ebcu));
    t19 = g->edx;
    if (ebx == 0u) goto L_101e872f;
    edx = t19;
    if (rd32(rd32(COW_IMG(0x10663664u)) + 8u) != 0u) goto L_101e871c;
    loc_1c = COW_IMG(0x10381ee4u);
L_101e8712: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_1c, 1u, 0u);
    t20 = g->edx;
    edx = t20;
L_101e871c: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e6cu), 1u, 0u);
L_101e872f: ;
    return;
L_101e8734: ;
    if (rd32(self + 0x16cu) == (uint32_t)(int16_t)rd16(rd32(edi + 0x1cu) + 2u))
    {
        eax = (uint32_t)(int16_t)rd16(rd32(edi + 0x1cu) + 2u);
        ebp = rd32(edi + 0x1cu);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(rd32(edi + 0x1cu) + 2u);
        ebp = rd32(edi + 0x1cu);
        wr32(self + 0x16cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x101e6f10u), self, 1, eax);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (rd16(ebp + 2u) == 0xfffeu) goto L_101e86db;
    if (rd16(ebp + 4u) == 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(ebp + 4u);
        goto L_101e86db;
    }
    eax = (eax & 0xffff0000u) | rd16(ebp + 4u);
    if (rd8(edi + 3u) == 9u) goto L_101e86db;
    if ((uint32_t)(int16_t)eax > 0x2du)
    {
        eax = (uint32_t)(int16_t)eax;
        goto L_101e87ef;
    }
    eax = (uint32_t)(int16_t)eax;
    t9 = rd32(COW_IMG(0x101e883cu) + rd8(COW_IMG(0x101e8844u) + eax) * 4u);
    switch (t9 - RD)
    {
    case 0x101e8789u: goto L_101e8789;
    case 0x101e87efu: goto L_101e87ef;
    default: rt_fatal(g, COW_IMG(0x101e8782u), "switch");
    }
    return;
L_101e8789: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ee4u));
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ebcu));
    t12 = g->edx;
    if (ebx == 0u) goto L_101e872f;
    edx = t12;
    if (rd32(rd32(COW_IMG(0x10663668u)) + 8u) != 0u) goto L_101e871c;
    ecx = rd32(COW_IMG(0x10663668u));
    if ((int16_t)rd16(ebp + 4u) > 2)
    {
        eax = (uint32_t)(int16_t)rd16(ebp + 4u);
        wr32(ecx + 0x30u, eax - 0x26u);
        loc_1c = COW_IMG(0x10381ed0u);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(ebp + 4u);
        wr32(ecx + 0x30u, eax + 1u);
        loc_1c = COW_IMG(0x10381ed0u);
    }
    goto L_101e8712;
L_101e87ef: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ee4u));
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381ed0u));
    t15 = g->edx;
    if (ebx == 0u) goto L_101e872f;
    edx = t15;
    if (rd32(rd32(COW_IMG(0x1066366cu)) + 8u) != 0u) goto L_101e871c;
    eax = rd32(COW_IMG(0x1066366cu));
    t16 = rd8(ebp + 7u);
    wr32(eax + 0x30u, t16);
    edx = t16;
    loc_1c = COW_IMG(0x10381ebcu);
    goto L_101e8712;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e86b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e86b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
