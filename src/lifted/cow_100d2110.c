/* f_0x100d2110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100d2110(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 8u, 0u);
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    if (t1 - 1u > 7u)
    {
        ebx = in_ebx;
        loc_8 = 0u;
        goto L_100d21f5;
    }
    eax = t1 - 1u;
    t2 = rd32(COW_IMG(0x100d2208u) + rd8(COW_IMG(0x100d2210u) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x100d213du: goto L_100d213d;
    case 0x100d21f5u: ebx = in_ebx; loc_8 = 0u; goto L_100d21f5;
    default: rt_fatal(g, COW_IMG(0x100d2136u), "switch");
    }
    return;
L_100d213d: ;
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, arg2);
    t4 = g->edx;
    wr32(sp0 - 8u, rd32(t3));
    if (rd32(t3) == 0u)
    {
        ebx = in_ebx;
        loc_8 = rd32(t3);
        goto L_100d21f5;
    }
    eax = rd32(t3);
    edx = t4;
    loc_8 = rd32(t3);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, arg2, 2u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 8u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_100d219f;
    }
    edx = t8;
    t9 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x14u, t9);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t10);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t10, t9);
    t11 = rd32(sp0 - 8u);
    t12 = rd32(sp0 - 0xcu);
    t13 = rd32(sp0 - 0x10u);
    wr32(arg1, t11);
    g->esi = t12;
    g->edi = t13;
    return;
L_100d219f: ;
    wr32(sp0 - 0x14u, 0x14u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        ebx = in_ebx;
        edi = 0u;
    }
    else
    {
        eax = t14;
        edx = t15;
        edi = t14;
        wr32(sp0 - 0x14u, in_ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_thiscall(g, COW_IMG(0x100814a0u), edi + 4u, 0);
        t17 = g->edx;
        if (self == 0u)
        {
            edx = t17;
            ebx = edi + 4u;
            t19 = rd32(COW_IMG(0x1048a34cu));
            wr32(edi, t19);
            eax = t19;
        }
        else
        {
            eax = t16;
            ebx = edi + 4u;
            t18 = rd32(self + 0x9ecu);
            wr32(edi, t18);
            edx = t18;
        }
        wr32(sp0 - 0x18u, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t20 = cow_thiscall(g, COW_IMG(0x100814f0u), ebx, 1, self);
        t21 = g->edx;
        wr32(edi + 0x10u, 1u);
        eax = t20;
        edx = t21;
        ebx = rd32(sp0 - 0x14u);
    }
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 8u, 4, COW_IMG(0x100d1400u), edi, self, 0u);
L_100d21f5: ;
    wr32(arg1, loc_8);
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d2110(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
