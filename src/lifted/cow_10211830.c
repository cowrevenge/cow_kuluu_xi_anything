/* f_0x10211830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10211830(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t loc_e0;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 256u);

    wr32(sp0 - 0xe4u, in_ebx);
    if (rd8(self + 0x14u) == 0u)
    {
        wr32(sp0 - 0xe0u, 0u);
        wr32(sp0 - 0xdcu, 0u);
        wr32(sp0 - 0xe8u, in_ebp);
        wr32(sp0 - 0xecu, in_esi);
        wr32(sp0 - 0xf0u, in_edi);
        if ((int32_t)(rd32(self + 0x10u) - 1u) < 0)
        {
            eax = rd32(self + 0x10u) - 1u;
            loc_e0 = 0u;
            loc_dc = 0u;
        }
        else
        {
            eax = rd32(self + 0x10u) - 1u;
            wr32(sp0 - 0xd8u, eax + 1u);
            edx = in_edx;
            ebp = 0u;
            loc_e0 = 0u;
            loc_dc = 0u;
            loc_d8 = eax + 1u;
L_10211860: ;
            wr32(sp0 - 0xf4u, 0xeu);
            wr32(sp0 - 0xf8u, ebp);
            wr32(sp0 - 0xfcu, sp0 - 0xd0u);
            g->eax = sp0 - 0xd0u;
            g->edx = edx;
            g->esp = sp0 - 0xf0u;
            t1 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0xd0u, ebp, 0xeu);
            t2 = g->edx;
            wr32(sp0 - 0xf4u, 0x10u);
            wr32(sp0 - 0xf8u, ebp + t1);
            wr32(sp0 - 0xfcu, sp0 - 0xc0u);
            t3 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0xc0u, ebp + t1, 0x10u);
            t4 = (uint32_t)(int16_t)rd16(sp0 - 0xb4u);
            wr32(sp0 - 0xf4u, t4);
            t5 = ebp + t1 + t3;
            wr32(sp0 - 0xf8u, t5);
            wr32(sp0 - 0xfcu, sp0 - 0x80u);
            wr32(sp0 - 0xd4u, t4);
            g->eax = t4;
            t6 = cow_thiscall(g, COW_IMG(0x10211490u), self, 3, sp0 - 0x80u, t5, t4);
            t7 = rd32(sp0 - 0xbcu);
            t8 = rd32(sp0 - 0xc0u);
            esi = COW_IMG(0x10385c04u);
            edi = sp0 - 0xb0u;
            ecx = 0xcu;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x9cu, t7);
            wr32(sp0 - 0xa0u, t8);
            t9 = rd32(sp0 - 0xb8u);
            wr32(sp0 - 0x98u, t9);
            wr32(sp0 - 0xf4u, 0x26u);
            wr32(sp0 - 0xf8u, sp0 - 0xb0u);
            t10 = rd32(sp0 - 0xe0u);
            wr32(sp0 - 0x84u, t10);
            t11 = rd32(sp0 - 0x94u);
            t12 = rd16(sp0 - 0xb4u);
            t13 = rd16(sp0 - 0xc4u);
            t14 = rd16(sp0 - 0xc6u);
            cow_thiscall(g, COW_IMG(0x10211440u), self, 2, sp0 - 0xb0u, 0x26u);
            t15 = g->ecx;
            wr32(sp0 - 0xf4u, 8u);
            wr32(sp0 - 0xf8u, sp0 - 0x88u);
            g->edx = sp0 - 0x88u;
            cow_thiscall(g, COW_IMG(0x10211440u), t15, 2, sp0 - 0x88u, 8u);
            t16 = g->ecx;
            t17 = g->edx;
            t18 = rd32(sp0 - 0xd4u);
            wr32(sp0 - 0xf4u, t18);
            wr32(sp0 - 0xf8u, sp0 - 0x80u);
            cow_thiscall(g, COW_IMG(0x10211440u), t16, 2, sp0 - 0x80u, t18);
            t19 = t18 + rd32(sp0 - 0xdcu) + 0x2eu;
            wr32(sp0 - 0xdcu, t19);
            t20 = t10 + t18 + rd32(sp0 - 0xbcu) + 0x1eu;
            wr32(sp0 - 0xe0u, t20);
            t21 = rd32(sp0 - 0xd8u) - 1u;
            wr32(sp0 - 0xd8u, t21);
            if (rd32(sp0 - 0xd8u) != 1u)
            {
                edx = t19;
                ebp = t5 + t6 + t7;
                loc_e0 = t20;
                loc_dc = t19;
                loc_d8 = t21;
                goto L_10211860;
            }
            eax = t21;
            loc_e0 = t20;
            loc_dc = t19;
        }
        wr32(sp0 - 0xf4u, 0x16u);
        t22 = rd16(self + 0x10u);
        esi = COW_IMG(0x10385c34u);
        edi = sp0 - 0xd0u;
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xf8u, sp0 - 0xd0u);
        wr32(sp0 - 0xc4u, loc_dc);
        wr32(sp0 - 0xc0u, loc_e0);
        g->esp = sp0 - 0xf0u;
        cow_thiscall(g, COW_IMG(0x10211440u), self, 2, sp0 - 0xd0u, 0x16u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10211830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
