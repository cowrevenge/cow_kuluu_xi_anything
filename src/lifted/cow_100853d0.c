/* f_0x100853d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100853d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 8u);
    t1 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t1;
        edi = 0u;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        edx = t1;
        if (rd32(eax) == 0u)
        {
            edi = 0u;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            ecx = rd32(eax);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, arg1);
            wr32(sp0 - 0x1cu, sp0 + 4u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t2 = cow_call_regs(g, COW_IMG(0x100724c0u), ecx, ecx, g->edx, 0, 3, sp0 + 4u, arg1, 0u);
            t3 = g->edx;
            if (rd32(t2) == 0u)
            {
                edx = t3;
                edi = 0u;
                loc_c = in_esi;
                loc_10 = in_edi;
            }
            else
            {
                eax = rd32(t2);
                edx = t3;
                if (rd32(eax) == 0u)
                {
                    edi = 0u;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                    goto L_10085440;
                }
                eax = rd32(eax);
                edi = 0u;
L_10085412: ;
                if (rd32(eax + 8u) == 0u)
                {
                    edi = edi + 1u;
                    eax = 0u;
                }
                else
                {
                    eax = rd32(eax + 8u);
                    edi = edi + 1u;
                    eax = rd32(eax);
                }
                wr32(sp0 - 0x14u, 0u);
                wr32(sp0 - 0x18u, arg1);
                wr32(sp0 - 0x1cu, eax);
                wr32(sp0 - 0x20u, sp0 - 4u);
                g->edx = rd32(sp0 - 8u);
                t4 = rd32(sp0 - 8u);
                g->esp = sp0 - 0x10u;
                t5 = cow_call_regs(g, COW_IMG(0x10072430u), sp0 - 4u, g->ecx, g->edx, 0, 4, sp0 - 4u, eax, arg1, 0u);
                t6 = g->edx;
                if (rd32(t5) == 0u)
                {
                    edx = t6;
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                    goto L_10085440;
                }
                eax = rd32(t5);
                edx = t6;
                if (rd32(eax) != 0u)
                {
                    eax = rd32(eax);
                    goto L_10085412;
                }
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
            }
        }
    }
L_10085440: ;
    g->esi = loc_c;
    g->edi = loc_10;
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100853d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100853d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
