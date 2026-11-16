/* f_0x10161990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10161990(Guest* g)
{
    double d14;
    double d18;
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_edi);
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10162510u), in_eax, self, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int8_t)rd8(self + 0x31u) <= 0)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x31u);
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_esi);
        wr32(sp0 - 0x20u, 0xb4u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x10193850u), 0u, g->ecx, g->edx, 1, 1, 0xb4u);
        t5 = g->edx;
        t6 = cow_stdcall(g, COW_IMG(0x1014ff70u), 0);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edx = rd32(COW_IMG(0x10578474u));
        t7 = rd32(COW_IMG(0x10578474u));
        t8 = rd32(t6 * 4u + (t4 != 0u) * 0x24u + rd32(COW_IMG(0x10578474u)) + 0x5cu);
        t9 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
        t10 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        t11 = rd32(COW_IMG(0x106218b8u));
        t12 = rd32(COW_IMG(0x106218b4u));
        t13 = rd16(self + 0x32u);
        cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 0u);
        d14 = cow_take_float(g);
        t15 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 0xcu, t15);
        t16 = (uint32_t)(int16_t)(t11 - t12) - (uint32_t)(int16_t)t13 - 0xa0u;
        wr32(sp0 - 0xcu, t16);
        t17 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0xcu, t17);
        g->edx = t17;
        d18 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d14) * (double)(int32_t)t15) - (double)rdf32(COW_IMG(0x1032a698u))) - (double)(int32_t)t16) + (double)(int32_t)t17);
        fpush(g, d18);
        t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t13, g->ecx, g->edx, 1, 0);
        t20 = g->edx;
        wr16(sp0 - 8u, (uint16_t)t19);
        if (t8 == 0u)
        {
            eax = t19;
            edx = t20;
        }
        else
        {
            eax = t19;
            ebp = t8;
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0x80808080u);
            t21 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x24u, t21);
            wr32(sp0 - 0x28u, (uint32_t)(int16_t)eax);
            g->eax = eax;
            g->edx = (uint32_t)(int16_t)eax;
            g->esp = sp0 - 0x14u;
            t22 = cow_thiscall(g, COW_IMG(0x1011fb60u), ebp, 5, (uint32_t)(int16_t)eax, t21, 0x80808080u, 0u, 0u);
            t23 = g->edx;
            eax = t22;
            edx = t23;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
