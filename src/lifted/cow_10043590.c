/* f_0x10043590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10043590(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x104u);
        if (eax == 0u)
        {
            esi = 0u;
            loc_8 = 0u;
        }
        else
        {
            esi = rd32(eax);
            loc_8 = rd32(eax);
        }
        if (rd32(self + 0x1bcu) != 0u)
        {
            eax = rd32(self + 0x1bcu);
            edx = in_edx;
        }
        else
        {
            g->esp = sp0 - 0x10u;
            t1 = cow_call_regs(g, COW_IMG(0x1003f8a0u), self + 0x1a8u, esi, in_edx, 0, 2, self + 0x194u, self + 0x1a8u);
            t2 = g->edx;
            wr32(self + 0x1bcu, t1);
            eax = t1;
            edx = t2;
        }
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
        t4 = (uint32_t)(int16_t)rd16(esi + 0x34u);
        t5 = rd32(self + 0x1bcu);
        g->edx = self + 0xa0u;
        t6 = cow_stdcall(g, COW_IMG(0x10042d00u), 4, t5, t4, self + 0xa0u, 0u);
        t7 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            edx = t7;
            t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t9 = rd32(COW_IMG(0x1047cf7cu));
            t10 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(t9 + 0xa90u, t8);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x100746a0u), t10, 0);
            t11 = g->edx;
            d12 = (double)rdf32(self + 0x1c0u);
            wrf32(t10 + 0x34u, (float)d12);
            wrf32(t10 + 0x30u, (float)d12);
            t13 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
            t14 = rd32(COW_IMG(0x1047cf7cu));
            t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
            wr32(t14 + 0xa90u, t13);
            g->eax = t14;
            t16 = cow_thiscall(g, COW_IMG(0x1006a4a0u), rd32(COW_IMG(0x1047bfa8u)), 1, t15);
            g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t17 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t18 = cow_thiscall(g, rd32(t17 + 0x24u), rd32(COW_IMG(0x1047cf7cu)), 3, t10, t10, t15);
            t19 = g->edx;
            g->edx = t19;
            cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t10);
            t20 = g->edx;
            t21 = rd32(self + 0x1bcu);
            cow_call_regs(g, COW_IMG(0x1003f440u), t21, loc_8, t20, 0, 6, self, COW_IMG(0x1047bc0cu), self + 0x194u, self + 0x1a8u, t21, 1u);
            wr32(self + 0x1bcu, 0u);
            esi = self + 0x194u;
            edi = self + 0x1a8u;
            ecx = 5u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t22 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t23 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t23 + 0xa90u, t22);
            wr32(t22 * 4u + t23 + 0xa10u, t15);
            t24 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
            t25 = rd32(COW_IMG(0x1047cf7cu));
            wr32(t25 + 0xa90u, t24);
            wr32(t24 * 4u + t25 + 0xa10u, t10);
            eax = t25;
            edx = t15;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
