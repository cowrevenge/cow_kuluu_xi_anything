/* f_0x10167ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10167ad0(Guest* g)
{
    double d1;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x10u) > 0)
    {
        eax = rd32(arg1 + 0xcu);
        loc_8 = 0u;
        loc_4 = eax + 0xd4u;
        eax = eax + 0xd4u;
L_10167afc: ;
        if (rd32(eax + 4u) != 0u)
        {
            esi = rd32(eax + 4u);
            if ((int32_t)rd32(eax) <= 0) goto L_10167bb0;
            ecx = arg1;
            edx = rd32(eax);
            loc_c = 0u;
L_10167b19: ;
            g->ecx = ecx;
            g->edx = edx;
            d1 = fr(g, fr(g, (double)rdf32(esi + 0x10u) + (double)rdf32(self + 0x40u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
            fpush(g, d1);
            g->esp = sp0 - 0x1cu;
            t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t3 = g->ecx;
            t4 = g->edx;
            d5 = fr(g, fr(g, (double)rdf32(esi + 0x14u) + (double)rdf32(self + 0x44u)) * (double)rdf32(COW_IMG(0x10329ce4u)));
            fpush(g, d5);
            t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
            t7 = ((t2 & 0x1ffu) << 0xeu ^ (rd32(esi) & 0x17ffu) ^ t6 << 0x17u) | 0x800u;
            wr32(esi, t7);
            if (rd32(t2 * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * t6 * 4u) == 0u)
            {
                ecx = t2 * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * t6 * 4u;
                goto L_10167b8d;
            }
            eax = rd32(t2 * 4u + rd32(self + 0x60u) + rd32(self + 0x48u) * t6 * 4u);
L_10167b7b: ;
            if (rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u) != 0u)
            {
                eax = rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u);
                goto L_10167b7b;
            }
            ecx = eax + (rd32(eax) & 0x7ffu) * 8u + 4u;
L_10167b8d: ;
            wr32(ecx, esi);
            if ((int32_t)(loc_c + 1u) < (int32_t)rd32(loc_4))
            {
                eax = loc_4;
                ecx = loc_c + 1u;
                edx = rd32(loc_4);
                esi = esi + 0x1f0u;
                loc_c = loc_c + 1u;
                goto L_10167b19;
            }
            eax = loc_4;
        }
L_10167bb0: ;
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(arg1 + 0x10u))
        {
            loc_8 = loc_8 + 1u;
            loc_4 = eax + 0xf4u;
            eax = eax + 0xf4u;
            goto L_10167afc;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10167ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10167ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
