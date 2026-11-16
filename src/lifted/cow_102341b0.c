/* f_0x102341b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102341b0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        t1 = (in_eax & 0xffffff00u) | rd8(self + 0x64u);
        wr32(sp0 - 0x14u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x10233f70u), ecx, 1, t1);
        t3 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            edx = t3;
            wr32(sp0 - 0x14u, eax);
            g->esp = sp0 - 0x10u;
            t4 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, eax);
            if (t4 != 0u)
            {
                esi = t4;
                if (rd32(esi + 0x14c8u) != 0u)
                {
                    eax = rd32(esi + 0x14c8u);
                    wr32(sp0 - 0x14u, sp0 - 8u);
                    wr32(sp0 - 0x18u, sp0 - 4u);
                    g->esp = sp0 - 0x10u;
                    cow_thiscall(g, COW_IMG(0x10221be0u), self, 2, sp0 - 4u, sp0 - 8u);
                    wr32(sp0 - 0x14u, 0x80808080u);
                    wr32(sp0 - 0x18u, 0u);
                    t5 = rd32(esi + 0x14c8u);
                    wr32(sp0 - 0x1cu, t5);
                    t6 = rd32(sp0 - 8u) + 0xau;
                    wr32(sp0 - 0x20u, t6);
                    t7 = rd32(sp0 - 4u) + 0x3cu;
                    wr32(sp0 - 0x24u, t7);
                    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t7, t6, t5, 0u, 0x80808080u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102341b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102341b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
