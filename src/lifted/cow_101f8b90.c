/* f_0x101f8b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f8b90(Guest* g)
{
    double d14;
    double d18;
    double d33;
    double d38;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd8(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 4u);
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
        t1 = g->edx;
        edx = t1;
    }
    t2 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t2 + 0x87u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f8b00u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        ecx = t3;
        edx = t4;
        if (rd32(COW_IMG(0x1066388cu)) != 0u)
        {
            ebp = rd32(COW_IMG(0x1066388cu));
            t5 = (uint32_t)(int16_t)rd16(rd32(self + 0x118u) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x118u) + 0x20u);
            t6 = rd32(self + 0x118u);
            t7 = rd16(rd32(self + 0x118u) + 0x20u);
            d8 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
            wr32(sp0 + 4u, t5);
            g->ecx = t5;
            g->edx = (uint32_t)(int16_t)t7;
            d9 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u))) * d8) + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d9);
            g->esp = sp0 - 0x10u;
            t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
            t11 = g->ecx;
            t12 = g->edx;
            t13 = (uint32_t)(int16_t)rd16(self + 0x1eu);
            wr32(sp0 + 4u, t13);
            g->edx = t12;
            d14 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * d8) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d14);
            t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
            t16 = g->edx;
            t17 = (uint32_t)(int16_t)rd16(self + 0x1cu);
            wr32(sp0 + 4u, t17);
            d18 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * d8) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u)));
            fpush(g, d18);
            g->esp = sp0 - 0x14u;
            t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10 + t15, g->ecx, g->edx, 1, 0);
            t20 = rd32(ebp + 0x14u);
            g->ebx = ebx;
            g->edi = t10;
            g->ebp = ebp;
            g->eax = t10 + t19;
            g->edx = t20;
            g->esp = sp0 - 0x10u;
            t21 = cow_thiscall(g, COW_IMG(0x101f8cf0u), self, 4, 0u, t20, t10 + t19, t10 + t15);
            t22 = g->edx;
            g->edx = t22;
            t23 = rd32(COW_IMG(0x1066388cu));
            cow_thiscall(g, COW_IMG(0x101fbd90u), t23, 0);
            t24 = g->ecx;
            t25 = g->edx;
            ecx = t24;
            edx = t25;
        }
    }
    wr16(self + 0x16u, 0u);
    if (rd32(COW_IMG(0x1066388cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066388cu));
        t26 = rd32(eax + 8u);
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t26, 0u);
        t27 = g->edx;
        if (rd32(rd32(COW_IMG(0x10664520u)) + 8u) == 0u)
        {
            ecx = rd32(COW_IMG(0x10664520u));
            edx = t27;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10664520u)) + 8u);
            edx = t27;
            g->esp = sp0 - 0x10u;
            cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, eax, 0u);
            t28 = g->ecx;
            t29 = g->edx;
            ecx = t28;
            edx = t29;
        }
    }
    t30 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    t31 = rd16(COW_IMG(0x106218bau));
    t32 = rd16(COW_IMG(0x106218b6u));
    wr32(sp0 + 4u, t30);
    d33 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d33);
    g->esp = sp0 - 0x10u;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
    t35 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t36 = rd32(COW_IMG(0x106218b8u));
    t37 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 4u, t35);
    d38 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
    fpush(g, d38);
    t39 = cow_call_regs(g, COW_IMG(0x10311c6cu), t34, g->ecx, g->edx, 1, 0);
    wr16(self + 0x1eu, (uint16_t)t34);
    wr16(self + 0x1cu, (uint16_t)t39);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
