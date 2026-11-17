/* f_0x1029b9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029b9f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (!(rd8(rd32(COW_IMG(0x1099d200u)) + 0xa30u) & 1u))
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t4;
        edx = t5;
        esi = 0u;
        edi = rd32(sp0 + 4u);
    }
    else
    {
        edi = rd32(sp0 + 4u);
        g->edx = rd32(edi);
        t6 = rd32(rd32(COW_IMG(0x1066941cu)));
        t7 = rd32(edi);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t6 + 0x14cu), t6, 4, rd32(COW_IMG(0x1066941cu)), 0u, t7, 0xcu);
        t8 = g->ecx;
        t9 = g->edx;
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t8;
        edx = t9;
        esi = 1u;
    }
    if ((rd8(eax + 0xa30u) & 2u) != 0u)
    {
        t10 = rd32(edi + 4u);
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t11 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t11 + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), esi, t10, 0xcu);
        t12 = g->edx;
        eax = rd32(COW_IMG(0x1099d200u));
        edx = t12;
        esi = esi + 1u;
    }
    t13 = rd32(eax + 0xb18u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)(t13 + 1u) <= 0)
    {
        ecx = t13 + 1u;
    }
    else
    {
        ebx = 0xa34u;
L_1029ba77: ;
        if ((rd8(eax + ebx) & 4u) != 0u)
        {
            t14 = rd32(ebx + edi - 0xa2cu);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), esi, t14, 8u);
            eax = rd32(COW_IMG(0x1099d200u));
            esi = esi + 1u;
        }
        t15 = rd32(sp0 + 4u) + 1u;
        t16 = rd32(eax + 0xb18u);
        wr32(sp0 + 4u, t15);
        if ((int32_t)t15 < (int32_t)(t16 + 1u))
        {
            ebx = ebx + 4u;
            goto L_1029ba77;
        }
        ecx = t15;
        edx = t16 + 1u;
    }
    if ((rd8(eax + 0xa30u) & 8u) != 0u)
    {
        t17 = rd32(edi + 0x10u);
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t18 = rd32(COW_IMG(0x1066941cu));
        t19 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t19 + 0x14cu), t18, 4, t18, esi, t17, 4u);
        t20 = g->ecx;
        t21 = g->edx;
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t20;
        edx = t21;
        esi = esi + 1u;
    }
    if ((rd8(eax + 0xa30u) & 0x10u) != 0u)
    {
        t22 = rd32(edi + 0x14u);
        g->edx = t22;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x14cu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), esi, t22, 0xcu);
        t23 = g->edx;
        edx = t23;
    }
    if (rd32(edi + 0x1cu) == 0u)
    {
        eax = rd32(edi + 0x1cu);
    }
    else
    {
        eax = rd32(edi + 0x1cu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x154u), rd32(COW_IMG(0x1066941cu)), 3, rd32(COW_IMG(0x1066941cu)), eax, 0u);
        t24 = rd32(edi + 0x20u);
        t25 = rd32(edi + 0x18u);
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = t25;
        t26 = rd32(COW_IMG(0x1066941cu));
        t27 = cow_thiscall(g, rd32(rd32(t26) + 0x11cu), rd32(t26), 6, t26, 5u, 0u, t25, 0u, t24);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    if (rd32(edi + 0x24u) == 0u)
    {
        ecx = rd32(edi + 0x24u);
    }
    else
    {
        ecx = rd32(edi + 0x24u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x154u), ecx, 3, rd32(COW_IMG(0x1066941cu)), ecx, 0u);
        t29 = rd32(edi + 0x28u);
        t30 = rd32(edi + 0x18u);
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = t30;
        t31 = rd32(COW_IMG(0x1066941cu));
        t32 = rd32(rd32(COW_IMG(0x1066941cu)));
        t33 = cow_thiscall(g, rd32(t32 + 0x11cu), t32, 6, t31, 4u, 0u, t30, 0u, t29);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029b9f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
