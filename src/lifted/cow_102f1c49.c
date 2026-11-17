/* f_0x102f1c49 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f1c49(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0xdcu) != 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = arg1;
    }
    else
    {
        g->esi = arg1;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, self, in_edx, 1, 2, arg1, COW_IMG(0x10348124u));
        t1 = g->edx;
        t2 = g->esi;
        ecx = COW_IMG(0x10348124u);
        edx = t1;
        esi = t2;
    }
    if ((rd8(esi + 0x61u) & 0x10u) != 0u)
    {
        if (rd8(esi + 0xf8u) != 3u)
        {
            if (rd16(esi + 0x10au) == 0u)
            {
                loc_8 = 0u;
            }
            else
            {
                loc_8 = esi + 0x160u;
            }
            t9 = rd32(esi + 0xdcu) + 1u;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall_cdecl(g, COW_IMG(0x102f13cdu), ecx, 3, esi + 0xf0u, t9, loc_8);
            t10 = g->ecx;
            t11 = g->edx;
            ecx = t10;
            edx = t11;
        }
        else
        {
            t3 = rd16(esi + 0x10au);
            t4 = rd32(esi + 0x15cu);
            t5 = rd32(esi + 0x104u);
            t6 = rd32(esi + 0xdcu) + 1u;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall_cdecl(g, COW_IMG(0x102f11c5u), ecx, 5, esi + 0xf0u, t6, t5, t4, t3);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
        }
    }
    if ((rd8(esi + 0x61u) & 0x20u) != 0u)
    {
        if (rd8(esi + 0x116u) != 3u)
        {
            t12 = rd32(esi + 0x12cu);
            t13 = rd32(esi + 0x144u);
            t14 = rd32(esi + 0x138u);
            t15 = rd32(esi + 0xdcu) + 1u;
            g->edx = edx;
            g->esp = sp0;
            cow_thiscall_cdecl(g, COW_IMG(0x102f0e77u), ecx, 6, esi + 0xf0u, t15, t14, t13, t12, in_esi);
            t16 = g->ecx;
            t17 = g->edx;
            ecx = t16;
            edx = t17;
        }
    }
    if ((rd8(esi + 0x61u) & 4u) != 0u)
    {
        t18 = rd32(esi + 0xdcu) + 1u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102f0b9bu), 2, esi + 0xf0u, t18);
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    if ((rd8(esi + 0x60u) & 0x40u) != 0u)
    {
        t20 = rd32(esi + 0x178u);
        t21 = rd32(esi + 0x174u);
        t22 = rd32(esi + 0xdcu) + 1u;
        g->eax = esi + 0xf0u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t23 = cow_thiscall_cdecl(g, COW_IMG(0x102f171fu), ecx, 4, esi + 0xf0u, t22, t21, t20);
        t24 = g->ecx;
        t25 = g->edx;
        if (rd32(esi + 0xf4u) != 0u)
        {
            ecx = t24;
            edx = t25;
        }
        else
        {
            eax = t23;
            ecx = t24;
            edx = t25;
            g->esi = esi;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, ecx, edx, 1, 2, esi, COW_IMG(0x10348100u));
            t26 = g->edx;
            t27 = g->esi;
            ecx = COW_IMG(0x10348100u);
            edx = t26;
            esi = t27;
        }
    }
    if ((rd8(esi + 0x60u) & 8u) != 0u)
    {
        t28 = rd32(esi + 0xdcu) + 1u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102f0a24u), esi + 0xf0u, g->ecx, g->edx, 1, 3, esi + 0xf0u, t28, esi + 0x155u);
        t29 = g->ecx;
        t30 = g->edx;
        ecx = t29;
        edx = t30;
    }
    if ((rd8(esi + 0x60u) & 4u) != 0u)
    {
        t31 = rd32(esi + 0xdcu) + 1u;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x102f0914u), g->eax, ecx, edx, 1, 3, esi + 0xf0u, t31, in_esi);
        t32 = g->edx;
        ecx = t31;
        edx = t32;
    }
    if (rd8(esi + 0x60u) & 1u)
    {
        t33 = rd32(esi + 0xdcu) + 1u;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x102f0035u), g->eax, g->ecx, edx, 1, 3, esi + 0xf0u, t33, in_esi);
        t34 = g->edx;
        ecx = t33;
        edx = t34;
    }
    if ((rd8(esi + 0x61u) & 0x80u) != 0u)
    {
        t35 = rd32(esi + 0x5cu);
        t36 = rd16(esi + 0x11eu);
        t37 = rd32(esi + 0xdcu) + 1u;
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x102f0bdfu), ecx, 5, esi + 0xf0u, t37, t36, t35, in_esi);
        t38 = g->ecx;
        t39 = g->edx;
        ecx = t38;
        edx = t39;
    }
    if ((rd8(esi + 0x60u) & 0x10u) != 0u)
    {
        t40 = rd32(esi + 0xdcu) + 1u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x102f0008u), 2, esi + 0xf0u, t40);
        t41 = g->edx;
        edx = t41;
    }
    g->esi = in_esi;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f1c49(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f1c49(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
