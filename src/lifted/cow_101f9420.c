/* f_0x101f9420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f9420(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x6b4u) != 0u)
    {
        if (rd32(self + 0x6bcu) != 0u)
        {
            eax = rd32(self + 0x6bcu);
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            t1 = cow_call_regs(g, COW_IMG(0x10099210u), eax, g->ecx, g->edx, 1, 0);
            t2 = g->edx;
            if (t1 != 0u)
            {
                edx = t2;
                t3 = rd32(self + 0x6b8u);
                ecx = 0u;
                esi = 0u;
                cf = 0u;
                pf = PARITY(0u);
                zf = 1u;
                sf = 0u;
                of = 0u;
                loc_4 = t3;
                loc_c = 0u;
                loc_8 = 0u;
L_101f9468: ;
                if ((1u << (ecx & 0x1fu) & rd32(self + 0x6b8u)) != 0u) goto L_101f94c0;
                ebp = 1u << (ecx & 0x1fu);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, ecx + 0xf600u);
                t5 = g->edx;
                if (t4 == 0u) goto L_101f9501;
                eax = t4;
                edx = t5;
                if (rd32(eax + 0x1580u) == 0u) goto L_101f9501;
                eax = rd32(eax + 0x1580u);
                esi = eax;
                edi = esi + rd32(self + 0x6bcu);
                ecx = 0xa0u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t6 = rd32(self + 0x6b8u) | ebp;
                wr32(self + 0x6b8u, t6);
                ecx = loc_c;
                esi = loc_8;
L_101f94c0: ;
                if ((int32_t)(esi + 0x280u) < 12800)
                {
                    cf = esi + 0x280u < 0x3200u;
                    pf = PARITY((uint8_t)(esi - 0x2f80u));
                    zf = esi == 0x2f80u;
                    sf = (int32_t)(esi - 0x2f80u) < 0;
                    of = ((esi + 0x280u ^ 0x3200u) & (esi + 0x280u ^ esi - 0x2f80u)) >> 0x1fu;
                    loc_c = ecx + 1u;
                    ecx = ecx + 1u;
                    loc_8 = esi + 0x280u;
                    esi = esi + 0x280u;
                    goto L_101f9468;
                }
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t7 = cow_thiscall(g, COW_IMG(0x101f9290u), self, 0);
                t8 = g->edx;
                if ((uint8_t)t7 != 0u)
                {
                    edx = t8;
                    if (loc_4 != rd32(self + 0x6b8u))
                    {
                        eax = rd32(self + 0x6b8u);
                        g->esp = sp0 - 0x1cu;
                        cow_call_regs(g, COW_IMG(0x101f9760u), eax, self, g->edx, 0, 2, 0xffffu, 0xffffu);
                    }
                }
            }
        }
    }
L_101f9501: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f9420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f9420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
