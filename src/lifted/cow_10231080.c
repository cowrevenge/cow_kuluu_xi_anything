/* f_0x10231080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10231080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_call_regs(g, COW_IMG(0x10087130u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_1023109d;
    }
    wr32(self + 0x74u, 0u);
    return;
L_1023109d: ;
    if (rd32(self + 0x74u) == 0u)
    {
        eax = rd32(self + 0x74u);
        g->eax = eax;
        g->esp = sp0 - 0x48u;
        t3 = cow_thiscall(g, COW_IMG(0x102306a0u), self + 0x70u, 0);
        if (t3 != 0u)
        {
            eax = t3;
            if (rd32(eax + 0x1578u) != 0u)
            {
                edx = rd32(eax + 0x1578u);
                edi = sp0 - 0x3au;
                eax = 0u;
                ecx = 0xeu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
                wr32(sp0 - 0x4cu, sp0 - 0x3cu);
                wr32(sp0 - 0x50u, edx);
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                t4 = cow_call_regs(g, COW_IMG(0x10231000u), sp0 - 0x3cu, self, g->edx, 0, 2, edx, sp0 - 0x3cu);
                t5 = g->edx;
                wr32(sp0 - 0x4cu, 8u);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, (uint8_t)t4);
                wr32(sp0 - 0x58u, 0u);
                g->edx = t5;
                t6 = cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, (uint8_t)t4, 0u, 8u);
                t7 = g->edx;
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, (uint8_t)t4);
                cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, (uint8_t)t4, 0u);
                if ((int32_t)(uint8_t)t4 <= 0) goto L_1023112e;
                eax = 0u;
                edi = (uint8_t)t4;
L_1023110d: ;
                if ((int32_t)eax >= 0)
                {
                    if ((int32_t)eax < (int32_t)rd32(self + 0x44u))
                    {
                        if (eax * 8u + rd32(self + 0x20u) != 0u)
                        {
                            ecx = eax * 8u + rd32(self + 0x20u);
                            t8 = rd16(eax * 2u + sp0 - 0x3cu);
                            wr32(ecx, t8);
                        }
                    }
                }
                if ((int32_t)(eax + 1u) < (int32_t)edi)
                {
                    eax = eax + 1u;
                    goto L_1023110d;
                }
            }
        }
    }
L_1023112e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
