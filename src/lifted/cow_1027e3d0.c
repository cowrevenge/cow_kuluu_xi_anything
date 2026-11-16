/* f_0x1027e3d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027e3d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    if ((rd8(rd32(sp0 + 4u)) & 2u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        t1 = rd32(esi + 0x1cu);
        t2 = rd32(esi + 0x1cu);
        wr32(sp0 + 4u, t1);
        if (t2 == 0u)
        {
            eax = t1;
            edx = in_edx;
        }
        else
        {
            eax = t1;
            if (rd32(eax + 0x28u) == 0u)
            {
                ecx = rd32(eax + 0x28u);
                edx = in_edx;
            }
            else
            {
                ecx = rd32(eax + 0x28u);
                eax = eax + 0x28u;
                wr32(sp0 - 8u, eax);
                g->ecx = ecx;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                cow_cdecl(g, COW_IMG(0x10285760u), 1, eax);
                t3 = g->ecx;
                t4 = g->edx;
                ecx = t3;
                edx = t4;
            }
            wr32(sp0 - 8u, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 + 4u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
        wr32(sp0 - 8u, esi + 0x20u);
        g->eax = eax;
        g->ecx = esi + 0x20u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x1028d710u), 1, esi + 0x20u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, 2u);
        wr32(sp0 - 0x14u, esi);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1027e170u), 3, esi, 2u, 0u);
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027e3d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
