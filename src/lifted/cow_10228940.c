/* f_0x10228940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10228940(Guest* g)
{
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6cu, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x106671c0u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        esi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x102217c0u), esi, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(esi, COW_IMG(0x1033c328u));
        wr32(COW_IMG(0x106671c0u), esi);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x106671c4u), 0u);
    }
    else
    {
        eax = t7;
        edx = t9;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c2e0u));
        wr32(COW_IMG(0x106671c4u), esi);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, in_edi, in_esi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        wr32(COW_IMG(0x106671c8u), 0u);
    }
    else
    {
        eax = t13;
        edx = t15;
        esi = t13;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c298u));
        wr32(COW_IMG(0x106671c8u), esi);
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 1u, in_edi, in_esi);
    t20 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        edx = t20;
        goto L_102289fe;
    }
    eax = t19;
    edx = t20;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, COW_IMG(0x10228b10u), eax, 0);
    t22 = g->edx;
    wr32(COW_IMG(0x106671ccu), t21);
    g->edx = t22;
    return t21;
L_102289fe: ;
    wr32(COW_IMG(0x106671ccu), 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
