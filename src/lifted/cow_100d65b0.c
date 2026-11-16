/* f_0x100d65b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100d65b0(Guest* g)
{
    double d11;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 8u, 0xffffffffu);
    g->edx = in_edx;
    t1 = rd32(sp0 - 0xcu);
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t3 = g->edx;
    wr32(sp0 - 0x20u, t2);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t2);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        edx = t5;
        loc_8 = 0xffffffffu;
    }
    else
    {
        edx = t5;
        wr32(sp0 - 8u, 0xffffff00u);
        loc_8 = 0xffffff00u;
    }
    edi = 0u;
L_100d65e7: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t7 = g->edx;
    if (rd32(t6) == 0u)
    {
        eax = rd32(t6);
        edx = t7;
    }
    else
    {
        eax = rd32(t6);
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, COW_IMG(0x1001b1a0u), eax + edi + 0x24u, 0);
        t9 = g->edx;
        if (t8 == 0u)
        {
            eax = t8;
            edx = t9;
        }
        else
        {
            edx = t9;
            esi = t8;
            wr32(sp0 - 0x20u, sp0 - 4u);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(esi) + 0x24u), esi, 1, sp0 - 4u);
            t10 = g->edx;
            if (rd32(sp0 - 4u) == 0u)
            {
                eax = rd32(sp0 - 4u);
                edx = t10;
            }
            else
            {
                if (((rd32(rd32(rd32(esi + 0x34u)) + 0x20u) ^ rd32(self + 0x7c8u)) & rd32(sp0 - 8u) & 0xffffffu) != 0u)
                {
                    eax = rd32(self + 0x7c8u);
                    edx = rd32(sp0 - 8u);
                }
                else
                {
                    eax = rd32(self + 0x7c8u);
                    edx = rd32(sp0 - 8u);
                    if ((uint8_t)arg1 == 0u)
                    {
                        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
                        goto L_100d664d;
                    }
                    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
                    d11 = (double)rdf32(esi + 0x10u);
                    if (d11 <= (double)rdf32(COW_IMG(0x1032c9a4u)))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032c9a4u)), 0u);
                        goto L_100d6652;
                    }
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032c9a4u)), 0u);
L_100d664d: ;
                    loc_c = (rd32(sp0 - 0xcu) & 0xffffffu) | 0x1000000u;
                }
            }
        }
    }
L_100d6652: ;
    if ((int32_t)(edi + 0x14u) < 100)
    {
        edi = edi + 0x14u;
        goto L_100d65e7;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | loc_c >> 0x18u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d65b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d65b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
